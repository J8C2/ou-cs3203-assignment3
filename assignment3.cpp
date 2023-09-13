#include <vector>
#include <iostream>
using namespace std;

//This is for software engineering 

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

vector<int> reverse(vector<int> third)
{ 
    vector<int> reversal;
    for (int i = third.size()-1; i >= 0; --i)
    { 
        reversal.at(third.at(i));
    }
    return reversal;
}

int main() // max of 5 values for each vector
{ 
    int MAX = 10;
    int temp = 0;
    vector<int> first;
    vector<int> second;
    vector<int> third;

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
    for (int i = 0; i < MAX; ++i)
    { 
        cin >> temp;
        third.at(temp);
    }
    vector<int> reversal = reverse(third);


    cout << add(first);
    cout << endl;
    cout << multiply(second);
    cout << endl;
    for (int i = 0; i < reversal.size(); ++i)
    { 
       cout << reversal.at(i);
    }
    cout << endl;
    return 0;
}