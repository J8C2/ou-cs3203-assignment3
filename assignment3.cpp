#include <vector>
#include <iostream>
using namespace std;


int add(vector<int> first)
{ 
    int total = 0;
    for (int i = 0; i < first.size(); ++i)
    { 
        total += first.at(i);
    }
    return total;
}