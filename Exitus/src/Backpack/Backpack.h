#ifndef BACKPACK_H
#define BACKPACK_H

#include <vector>
#include "src/Items/Items.h"

class Backpack {
 public:
  Backpack();
  void add(const Items &item);
  bool find(const Items &item);
  void take_out(const Items &item);

 private:
  std::vector<Items> backpack;
};

#endif  // BACKPACK_H