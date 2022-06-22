#!/ usr / bin / perl
use strict;
use warnings;
use Time::HiRes qw(clock);

my $start;
my $end; 
my $running = 1;
my $counter = 0;

while ($running) {
  $start = clock();
  #input
  #update
  print "$counter\n";
  $counter++; 
  #render
  do {
    $end = clock();
  } while ($end - $start < 1.0 / 1)
}
