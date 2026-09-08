#include "math_functions.h"
#include <cmath>

double compute_square_root(double x)
{
    if (x < 0) {
        return -1; // Return -1 for negative input to indicate an error
    }
    return std::sqrt(x);
};