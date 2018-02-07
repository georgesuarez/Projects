#include <cassert>
#include "PlayerStats.h"

PlayerStats::PlayerStats(int str, int iq, int luck)
    : str(str),
      iq(iq),
      luck(luck)
{
    assert(str < total_points);
    assert(iq < total_points);
    assert(luck < total_points);
}

