#include "Backpack.h"
#include <vector>
#include "src/Items/Items.h"

Backpack::Backpack() {}

void Backpack::add(const Items &item) { backpack.push_back(item); }

bool Backpack::find(const Items &item) {
  for (int i = 0; i < backpack.size(); i++) {
    if (backpack[i] == item) {
      return true;
    }
  }
  return false;
}