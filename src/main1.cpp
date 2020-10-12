#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include "task1.h"
#include "test_lab1.h"

using namespace std;

int main(){
    mt19937 generator;
    vector<double> v = GenerateNumbers(generator, 10'000'000,100000);
    int accuracy = 4;
    vector<double> treep = GenerateAnswersLab(v,accuracy);
    vector<double> treep2 = GenerateAnswersCpp(v);

    vector<int> result;
    TEST1(treep, treep2, accuracy);
    
    return 0;
}
