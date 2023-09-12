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

int multiply(vector<int> second)
{ 
    int total = second.at(0);
    for (int i = 1; i < second.size(); ++i)
    { 
        total *= second.at(i);
    }
    return total;
}

int main() // max of 5 values for each vector
{ 
    int MAX = 10;
    int temp = 0;
    vector<int> first;
    vector<int> second;
    for (int i = 0; i < MAX; ++i)
    { 
        cin >> temp;
        first.at(temp);
    }
     for (int i = 0; i < MAX; ++i)
    { 
        cin >> temp;
        second.at(temp);
    }
    
    add(first);
    multiply(second);
    return 0;
}