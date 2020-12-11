#include "veclib.h"
#include <math.h>
#include <stdio.h>
float squareDistance(vector vec_a) {
    float distance = 0.0;
    for (int i=0;i<DIM;i++) {
        distance += (vec_a[i])*(vec_a[i]);
    }
    return distance;
}
float angle(vector vec_a, vector vec_b) {
   float distancea, distanceb;
   distancea =  squareDistance(vec_a);
   distanceb = squareDistance(vec_b);
   float dotproduct = dotprod(vec_a, vec_b);
   float ans = acos(dotproduct/sqrt(distancea*distanceb));
   return ans*180/3.14159;
}