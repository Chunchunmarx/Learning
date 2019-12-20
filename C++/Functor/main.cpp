/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
a*X^2 + b*X + c = 0

bool ecuatie(int x, int a, int b, int c)
{
    return a*X^2 + b*X + c == 0;
}

class Functor
{
    int a;
    int b;
    int c;
    public:

     bool operator()(int x)
     {
         return a*(x^2) + b*x + c == 0;
     }
};


int main()
{
    vector<int> v = {41,37,235,2,42,14,7,8,134,45};
    Functor f;
    sort(v.begin(),v.end(),f);


    ecuatie(1,5,-2,3);
    ecuatie(3,5,-2,3);
    ecuatie(5,5,-2,3);
    ecuatie(6,5,-2,3);
    ecuatie(7,5,-2,3);


    ecuatie(1,6,-1,2);
    ecuatie(3,6,-1,2);
    ecuatie(5,6,-1,2);
    ecuatie(6,6,-1,2);
    ecuatie(7,6,-1,2);

    ecuatie(1);
    ecuatie(3);
    ecuatie(5);
    ecuatie(6);
    ecuatie(7);


    -------
    Functor f(5, -2,3);
    f(1);
    f(3);
    f(5);
    f(6);
    f(7);

    f.set(6,-1,2);

    Functor g(6,-1,2));

    g(1);
    g(3);
    g(5);
    g(6);
    g(7);

    f();
    operator()(f);

    for(auto element:v)
    {
        cout<<element<<" ";
    }


    return 0;
}
*/
// C++ program to demonstrate working of
// functors.
#include <bits/stdc++.h>
using namespace std;

// A Functor
class increment
{
private:
    int num;
public:
    increment(int n) : num(n) {  }

    // This operator overloading enables calling
    // operator function () on objects of increment
    int operator () (int arr_num) const {
        return num + arr_num;
    }
};

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int drr[] = {0, 0, 0, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int to_add = 5;


    increment f(to_add);
    transform(arr, arr+n, drr, increment(to_add));
    transform(arr, arr+n, drr, f);


    for (int i=0; i<n; i++)
        cout << drr[i] << " ";
        cout<<endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
