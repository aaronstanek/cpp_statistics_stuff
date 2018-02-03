#ifndef __STANDARD_NORMAL_TABLE_INCLUDED__
#define __STANDARD_NORMAL_TABLE_INCLUDED__

#include "math.h"

using namespace std;

class standard_normal_table {
  private:
    double * table;
  public:
    standard_normal_table();
    double lookup(double z);
    double reverse(double sd);
};

extern standard_normal_table SNT;

#endif
