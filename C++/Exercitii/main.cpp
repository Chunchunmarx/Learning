#include<iostream>
#include <fstream>
using namespace std;

ifstream f("adunare.in");
ofstream g("adunare.out");

int main()
{
   int a, b;
    f >> a >> b;
    if (a+b <=2000000000){
         g << (a + b);
    }


}
