
#include <iostream>

using namespace std;

struct Test
{
    int a = 11;
    int b = 20;
};


int main()
{
    Test obj_1 {10, 50};
    Test obj_2 {10};
    Test obj_3 {};


    cout<<obj_1.a<<" "<<obj_1.b<<endl;
    cout<<obj_2.a<<" "<<obj_2.b<<endl;
    cout<<obj_3.a<<" "<<obj_3.b<<endl;
    return 0;
}
