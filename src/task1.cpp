#include "task1.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double delta = 0.00000001;

double average(double x,double y){
    return (x+y)/2.0;
}

bool good(double guess,double x){
    return abs(guess * guess-x)<delta;
}
double improve(double guess,double x){
    return average(guess, x/guess);
}
double iter(double guess,double x){
    if(good(guess,x))
        return guess;
    else
        return iter(improve(guess,x),x);
}
double calc(int point,double arg){
    delta = (double)(1/pow(10,point+3));
    return iter(1.0,arg);
}
