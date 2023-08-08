#include <math.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

//N(0,1) density
double f(double x)
{
    double pi = 4 * atan(1.0);
    return exp(-x * x * 0.5) / sqrt(2 * pi);
}

//Boole's Rule
double Boole(double Start, double End, int n)
{
    vector<double> X (n+1, 0.0);
    vector<double> Y (n+1, 0.0);
}