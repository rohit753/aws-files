use Test::More 1;

my @classes = qw(Test::File);

foreach my $class ( @classes ) {
	use_ok( $class ) or BAILOUT( "$class did not load" );
	}

done_testing();
