#include <iostream>

using namespace std;

int factorial(int x)
{
    {
        int v[10][10][10];
    }
    //int v_1[100][100][100];
    //int v_2[100][100][100];
    //int v_3[100][100][100];
    //int v_4[100][100][10];
    if(x == 1)
        return 1;
    return x+factorial(x-1);
}

//n! = 1*2*3*..*n
int main()
{
    int n = 800;
    cout<<factorial(n);

    return 0;
}





