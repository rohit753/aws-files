BEGIN {
    $ENV{PV_TEST_PERL} = 1;
}

use strict;
use warnings;

use File::Spec;
use lib File::Spec->catdir( 't', 'lib' );

use PVTests::With;
PVTests::With::run_tests();

