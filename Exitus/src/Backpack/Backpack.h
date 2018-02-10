#ifndef BACKPACK_H
#define BACKPACK_H

#include "src/Items/Items.h"
#include <vector>

class Backpack {
public:
  Backpack();
  void add(const Items &item);

private:
  std::vector<Items> backpack;
};

#endif // !BACKPACK_H