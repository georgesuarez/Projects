
#ifndef ITEMS_H
#define ITEMS_H

#include <string>

struct Item {
  std::string name;
} crowbar, key, code;

class Items {
 public:
  Items();

 private:
  Item crowbar;
  Item key;
  Item code;
};

bool operator==(const Items &lhs, const Items &rhs);

#endif  // ITEMS_H