/* Math Library
   The purpose of this file is to provide macros for common
   vector calculations that will be used throughout the project.
*/

//Code wrapping. Prevents errors when included multiple times.
#ifndef MATH_H
#define MATH_H

//Doing this here brings all the standard C library's functions along with mine.
//WARNING: UNDER NO CIRCUMSTANCES SHOULD C's MATH.H FILE BE INCLUDED A SECOND TIME.
#include <math.h>

// Vector typedefs. Taken straight from the assignment page.
typedef float vec_t;
typedef vec_t vec2_t[2];
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec5_t[5];

//Consider ditching these if they cause problems. X, Y, and Z are common names for vectors.
#define XDIR 0
#define YDIR 1
#define ZDIR 2

//Begin Macros!

//Vector Addition
#define vectorAdd(v1, v2, v3){\
  v3[0]=v1[0]+v2[0];\
  v3[1]=v1[1]+v2[1];\
  v3[2]=v1[2]+v2[2];\
}

//Vector Subtraction
#define vectorSub(v1, v2, v3){\
  v3[0]=v1[0]-v2[0];\
  v3[1]=v1[1]-v2[1];\
  v3[2]=v1[2]-v2[2];\
}

//Vector Scaling
#define vectorScale(v1, a, v2){\
  v2[0]=v1[0]*a;\
  v2[1]=v1[1]*a;\
  v2[2]=v1[2]*a;\
}

//Vector Copy
#define vectorCopy(v1,v2){\
  v2[0] = v1[0];\
  v2[1] = v1[1];\
  v2[2] = v1[2];\
}

//Vector Clear
#define vectorClear(v1){\
  v1[0] = 0;\
  v1[1] = 0;\
  v1[2] = 0;\
}

//Vector Inverse
#define vectorInverse(v1){\
  v1[0] = -v1[0];\
  v1[1] = -v1[1];\
  v1[2] = -v1[2];\
}

//Vector Magnitude
#define vectorMag(v1, x){\
  x = sqrt(v1[0]*v1[0] + v1[1]*v1[1] + v1[2]*v1[2]);\
}

//Vector Normalization
#define vectorNorm(v1, u){\
  float x;\
  vectorMag(v1,x);\
  vectorScale(v1, (1/x), u);\
}

//Dot Product
#define dotProduct(v1, v2, x){\
  x = v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2];\
}

//Cross Product
#define crossProduct(v1, v2, v3){\
  v3[0] = v1[1]*v2[2] - v1[2]*v2[1];\
  v3[1] = v1[2]*v2[0] - v1[0]*v2[2];\
  v3[2] = v1[0]*v2[1] - v1[1]*v2[0];\
}

#endif
