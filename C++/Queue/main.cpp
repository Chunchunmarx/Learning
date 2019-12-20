/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
using namespace std;

mutex mutex_filosofi;
bool betisoare[5];
queue<int> coada;

void comportament_filosof(int id_filosof);

void gestionare_coada()
{
    int id_filosof = -1;
    while(true)
    {
        if(coada.size() > 0)
        {
            id_filosof = coada.front();
            coada.pop();
            thread thread_object_1(comportament_filosof, id_filosof);
            thread_object_1.detach();
        }
    }
}

void comportament_filosof(int id_filosof)
{
    //setup
    bool betisor_stang = 0;
    bool betisor_drept= 0;
    int indice_stang;
    int indice_drept;

    if(id_filosof == 4)
    {
        indice_stang = 4;
        indice_drept = 0;
    }
    else
    {
        indice_stang = id_filosof;
        indice_drept = id_filosof+1;
    }

    //action
    bool a_mancat = false;
    while(a_mancat == false)
    {
        mutex_filosofi.lock();
        //cout<<indice_stang<<" "<<betisoare[indice_stang]<<" "<<indice_drept<<" "<<betisoare[indice_drept]<<endl;
        if(betisoare[indice_stang] == 1 || betisoare[indice_drept] == 1)
        {
            continue;
        }

        if(betisor_stang == 0)
        {
            if(betisoare[indice_stang] == 0)
            {
                betisor_stang = 1;
                betisoare[indice_stang] = 1;
            }
        }

        if(betisor_drept == 0)
        {
            if(betisoare[indice_drept] == 0)
            {
                betisor_drept = 1;
                betisoare[indice_drept] = 1;
            }
        }

        if(betisor_stang == 1 && betisor_drept ==1)
        {
            cout<<"Filosoful "<<id_filosof<<" a papat!"<<endl;
            betisor_stang = 0;
            betisor_drept= 0;
            betisoare[indice_stang] =0;
            betisoare[indice_drept]=0;
            a_mancat = true;

            coada.push(id_filosof);
        }

        mutex_filosofi.unlock();
    }
}


int main()
{
    coada.push(0);
    coada.push(1);
    coada.push(2);
    coada.push(3);
    coada.push(4);
    thread thread_object_1(gestionare_coada);

    thread_object_1.join();
    return 0;
}

