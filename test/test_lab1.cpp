#include <iostream>
#include <vector>
#include "task1.h"
#include <cmath>
#include <random>

using namespace std;

vector<double> GenerateNumbers(mt19937& generator,int number_count,int max_value){
    vector<double> v(number_count);
    for(double & value : v){
        value = uniform_real_distribution<>(-max_value,max_value)(generator);
    }
    return v;
}

vector<double> GenerateAnswersLab(vector<double>& v,int point){
    vector<double> ans;
    ans.reserve(v.size());
    for(double var : v){
        if(var >= 0)
            ans.push_back(calc(point,var));
    }
    return ans;
}

vector<double> GenerateAnswersCpp(vector<double>& v){
    vector<double> ans;
    ans.reserve(ans.size());
    for(double& var : v){
        if(var >=0)
            ans.push_back(sqrt(var));
    }
    return ans;
}


void TEST1(const vector<double> &treep1,const vector<double> &treep2,int point){
    for (int i = 0; i < treep1.size(); ++i) {
        if(treep1[i] - treep2[i] > 1/(pow(10,point))){
            cout << treep1[i] << " " << treep2[i] << endl;
            cout << "WA | TEST #" << i+1 << endl;
            return;
        }
    }
    cout << "OK" << endl;
}


