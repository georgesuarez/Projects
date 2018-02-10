#include "Backpack.h"
#include <vector>

Backpack::Backpack() {}

void Backpack::add(const Items &item) {
    backpack.push_back(item);
}