#ifndef TDBK_MANDELBROT_H

#define TDBK_MANDELBROT_H

//#include "common.h"

#include <complex>

#include "glutdefine.h"
#include "common.h"

using namespace std;

int mandelSqTransf(Complex z0, GLint maxIter);
void calculateSet(int nx, int ny, int maxIter, bool isMandelBrot, Complex c = Complex());

#endif
