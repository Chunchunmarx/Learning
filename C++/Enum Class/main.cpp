#include <iostream>

using namespace std;
enum Animale {catelus, papagal, pisicuta};

enum class Culoare { albastru, galben, verde};

int main()
{
    char papagal = 'a';
   cout<<papagal;
   cout<<::papagal;

   Animale Doris= papagal;
   Culoare culoarea_mea_preferata = Culoare::galben;
   cout<<Doris;
}
