BEGIN {
    $ENV{PERL_DATETIME_PP} = 1;
}

use strict;
use warnings;

use Test::Fatal;
use Test::More;

use DateTime;

undef $ENV{PERL_DATETIME_DEFAULT_TZ};

my @last_day      = ( 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 );
my @leap_last_day = @last_day;
$leap_last_day[1]++;

{
    my $doy = 15;
    foreach my $month ( 1 .. 12 ) {
        $doy += $last_day[ $month - 2 ] if $month > 1;

        my $dt = DateTime->from_day_of_year(
            year        => 2001,
            day_of_year => $doy,
            time_zone   => 'UTC',
        );

        is( $dt->year,        2001,   'check year' );
        is( $dt->month,       $month, 'check month' );
        is( $dt->day,         15,     'check day' );
        is( $dt->day_of_year, $doy,   'check day of year' );
    }
}

{
    my $doy = 15;
    foreach my $month ( 1 .. 12 ) {
        $doy += $leap_last_day[ $month - 2 ] if $month > 1;

        my $dt = DateTime->from_day_of_year(
            year        => 2004,
            day_of_year => $doy,
            time_zone   => 'UTC',
        );

        is( $dt->year,        2004,   'check year' );
        is( $dt->month,       $month, 'check month' );
        is( $dt->day,         15,     'check day' );
        is( $dt->day_of_year, $doy,   'check day of year' );
    }
}

{
    like(
        exception {
            DateTime->from_day_of_year( year => 2001, day_of_year => 366 )
        },
        qr/2001 is not a leap year/,
        'Cannot give day of year 366 in non-leap years'
    );

    is(
        exception {
            DateTime->from_day_of_year( year => 2004, day_of_year => 366 )
        },
        undef,
        'Day of year 366 should work in leap years'
    );
}

done_testing();

