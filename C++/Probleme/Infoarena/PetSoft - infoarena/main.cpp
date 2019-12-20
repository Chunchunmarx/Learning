#include <iostream>
#include <fstream>
using namespace std;

int numar_angajati;

int array_relatie_subordonat_angajat[100];
void IaSubordonatii(int sefu, int size_array_subordonati , int array_subordonati[100] )
{
    //Scopul functiei este de a lua subordonatii angajatului cu id-ul...
    size_array_subordonati = 0 ;
    for(int i = 1; i <= numar_angajati; ++i)
    {

        if(array_relatie_subordonat_angajat[i]== sefu)
        {

          array_subordonati[size_array_subordonati]=
        }
    }

}
int main()
{
    ifstream f("a.in");
    f>>numar_angajati;

    for(int i = 2; i <= numar_angajati; ++i)
    {
        f>>array_relatie_subordonat_angajat[i];
    }

    for(int i = 1; i <= numar_angajati; ++i)
    {
        cout<<i<<" "<<array_relatie_subordonat_angajat[i]<<endl;
    }
    cout<<endl;
    int sef = 1;
    cout<<"Subordonatii lui "<<sef<<" sunt:"<<endl;
    int a[100];
    IaSubordonatii(4,0,a);
    for(int i = 1; i <= numar_angajati; ++i)
    {
        if(array_relatie_subordonat_angajat[i] == sef)
        {
            cout<<i<<endl;
        }
    }
}
