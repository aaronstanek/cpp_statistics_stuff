#include "stat_tools.h"

stat_tools::stat_values stat_tools::stat_tools(vector <double> & v) {
  stat_values ou;
  // ou.sd is reused as the average of the squares of the values
  // ou.se is reused as the size of the input array, but casted as a double
  unsigned long long siz = v.size();
  ou.se = (double)(siz);
  if (siz<2) {
    ou.m = 0.0;
    ou.sd = 0.0;
    ou.se = 0.0;
    return ou;
  }
  ou.m = 0.0; // sum of the values
  ou.sd = 0.0; // sum of the squares of the values
  for (unsigned long long i=0;i<siz;i++) {
    ou.m += v[i];
    ou.sd += pow(v[i],2);
  }
  ou.m = ou.m / ou.se; // ou.m is set here
  ou.sd = ou.sd / ou.se; // average of the squares of the values
  ou.sd = pow(ou.sd-pow(ou.m,2),0.5); // ou.sd is set here
  ou.se = ou.sd / pow(ou.se,0.5); // ou.se is set here
  return ou;
}
