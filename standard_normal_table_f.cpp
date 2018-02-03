#include "standard_normal_table.h"
using namespace std;

double standard_normal_table::lookup(double z) {
  bool is_neg;
  if (z<0.0) {
    is_neg = true;
    z = 0-z;
  }
  else {
    is_neg = false;
  }
  // we now know if the argument is negative
  // z will be positive after this
  if (z>=4.1) {
    if (is_neg) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  }
  // z in now in the serchable range (0.0 inclusive to 4.1 exclusive)
  short index = floor(z*100.0); // z could be up to 4.0999, this multiplies it 409.999, then cuts it 409
  // index is where the return value is
  if (is_neg) {
    return 1.0 - table[index];
  }
  else {
    return table[index];
  }
}

double standard_normal_table::reverse(double cp) {
  bool is_neg;
  if (cp<0.5) {
    is_neg = true;
    cp = 1.0-cp;
  }
  else {
    is_neg = false;
  }
  // we now know if the argument is negative
  // cp will be positive after this
  if (cp>=0.99998) {
    if (is_neg) {
      return -4.1;
    }
    else {
      return 4.1;
    }
  }
  short high_index = 409;
  short low_index = 0;
  short diff; // just the size of the interval being considered
  short middle; // a new point being considered
  while (true) {
    diff = high_index - low_index;
    if (diff<2) {
      if ((table[high_index]-cp) < (cp-table[low_index])) { // figure out which of the bounds is closer
        middle = high_index;
      }
      else {
        middle = low_index;
      }
      if (is_neg) {
        return 0.0 - ((double)(middle) / 100.0);
      }
      else {
        return (double)(middle) / 100.0;
      }
    }
    middle = low_index + (diff/2);
    if (table[middle]>cp) { // if this is true, then middle is the new upper bound
      high_index = middle;
    }
    else {
      low_index = middle;
    }
  }
}
