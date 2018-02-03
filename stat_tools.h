#ifndef __STAT_TOOLS_INCLUDED__
#define __STAT_TOOLS_INCLUDED__

#include <vector>
#include <math.h>

using namespace std;

namespace stat_tools {

  struct stat_values {
    double m;
    double sd;
    double se;
  };

  stat_values stat_tools(vector <double> & v);

}

#endif
