#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

class PlayerStats
{
  public:
    PlayerStats(int str, int iq, int luck);
  private:
    int str;
    int iq;
    int luck;
    int total_points = 15;
};

#endif