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

int main()
{ 

    return 0;
}