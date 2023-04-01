#include <iostream>

using namespace std;
int main() {
    int arreglo_uno[10]={1,2,3,4,5,6,7,8,9,10,};
    int suma=0;
    for(int i=0;i<10;i++){
        suma=suma+arreglo_uno[i];
    }
    cout<<"La suma de los numeros es: "<<suma<<endl;


    int arreglo_dos[6]={84,2,8,4,5,166};
    int mayor=0;
    for(int i=0;i<arreglo_dos[i];i++) {
        if (arreglo_dos[i] > mayor) {
            mayor = arreglo_dos[i];
        }
    }
    cout<<"Numeros Mayor es: "<<mayor<<endl;

    int can,i,orden;
    int arreglo_tres[8];
    cout<<"Ingrese cantidad para Operar: ";
    cin>>can;
    for(int i=0;i<can;i++){
    cout<<"Ingrese un valor: ";
    cin>>arreglo_tres[i];
    }
    for(i=0;i<can/2;i++){
        orden = arreglo_tres [i];
        arreglo_tres[i]=arreglo_tres[can-1-i];
        arreglo_tres[can-1-i]=orden;
    }
    for(i=0;i<can;i++){
        cout<<i+1<<" : "<<arreglo_tres[i]<<endl;
    }
    int contador;
    string frutas;

    string fruta[]={"fresa","sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    contador=0;
    for (i=0;i <9;i++){
        cout<<i+1<<" frutas: " <<   fruta[i]<<endl;}

    cout<<"Escriba la fruta que quiere saber cuantas veces se repite: ";
    cin>>frutas;
    for (i=0;i <9;i++){
        if (frutas == fruta[i])
            contador++;
    }
    cout<<"la fruta: "<<frutas <<" se repite: "<<contador<<endl;



    return 0;
}
