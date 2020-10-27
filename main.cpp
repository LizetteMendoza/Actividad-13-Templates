#include<iostream>
#include"arreglo.h"

using namespace std;


int main(){

    ArregloDinamico<int> arreglo;

    arreglo.insertar_final(1);
    arreglo.insertar_final(4);
    arreglo.insertar_final(6);
    arreglo.insertar_final(7);
    arreglo.insertar_final(9);
    arreglo.insertar_final(10);
    arreglo.insertar_final(2);
    arreglo.insertar_final(5);
    arreglo.insertar_inicio(8);
    arreglo.insertar_inicio(3);


    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    
    return 0;
}