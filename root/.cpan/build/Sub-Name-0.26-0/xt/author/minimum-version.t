use strict;
use warnings;

use Test::More;
use Test::MinimumVersion;
all_minimum_version_ok( qq{5.006} , { skip => ["t/exotic_names.t", "t/lexical.t"] });
