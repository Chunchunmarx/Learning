#include <iostream>

using namespace std;
class Resursa
{ public:
   Resursa()
   {
       cout<<"O resursa a fost creata"<<endl;

   }
   ~Resursa()
   {

     cout<<"O resursa a fost stearsa"<<endl;
   }

};
class Parinte
{    public:
     Parinte() = delete;




    Parinte(Resursa * ptr)
    {
        p = ptr;
    }
    ~Parinte()
    {

        delete p;
    }
    private:
     Resursa * p;
};


int main()
{
    Resursa * pointer = new Resursa();
   Parinte obj(pointer);

}
