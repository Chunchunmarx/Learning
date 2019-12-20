#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a>=b;
}

int main()
{
    int a =10;
    vector<int> v = {1,3,7,4,9};
    sort(v.begin(),v.end(),compare); //[](int a,int b){return a>=b;}
    []()->void{cout<<"AM FOST APELAT!!!"<<endl;}();
    for_each(v.begin(), v.end(), [&](int i)->void{std::cout << i << " "; a= 0;}  );
    cout<<"a "<<a<<endl;
    cout<<endl;
    cout<< *v.begin()<<endl;
    cout<< *v.end()<<endl;
    std::vector<int>::iterator it = v.begin();

    while(it!=v.end()){
    cout<<*it<<endl;
    it++;
    }

    return 0;
}
