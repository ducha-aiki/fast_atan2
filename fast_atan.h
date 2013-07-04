#ifndef __FAST_ATAN_H__
#define __FAST_ATAN_H__

/* Approximated fucntions are taken from
 Rajan, S.; Wang, S.; Inkol, R. & Joyal, A. 
 Efficient approximations for the arctangent function 
 Signal Processing Magazine, IEEE, 2006, 23, 108-111*/

double atan2PI_4(double y,double x);
/*atan(x) ~ x*(pi/4) */

double atan2approx(double y,double x);
/*atan(x) ~ x*(pi/4+0.273-0.273*x) */


double atan2LUT(double y,double x);
double atan2LUTif(double y,double x);
/* switch/if versions, compiler dependent which is faster*/ 


#endif //__FAST_ATAN_H__
