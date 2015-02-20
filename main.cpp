#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
    int sumapila=0;
    int sumacola=0;
    int tope=0;
    while(!mi_pila.empty())
    {
        tope=mi_pila.top();
        sumapila=sumapila+tope;
        mi_pila.pop();
    }
    while(!mi_cola.empty())
    {
        sumacola=sumacola+mi_cola.front();
        mi_cola.pop();
    }
    return sumapila+sumacola;
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
    string texto;
    int contador=0;
    int tamano=mi_vector.size();
    for(int i=0;i<tamano;i++)
    {
        texto=mi_vector[i];
        for(int j=0;j<tamano;j++)
        {
            if(i!=j)
            {
              if(texto==mi_vector[j])
                return true;
            }
        }
    }
    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
    int contador=0;
    //list<int>::iterator i=edades.begin();
    while(!edades.empty())
    {
        if(edades.front()>=18)
        {
            contador++;
        }
        edades.pop_front();
    }
    return contador;
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;
    agenda["Lolo"]=98923212;
    agenda["Lola"]=92123243;
    agenda["Rufo"]=93212322;
    agenda["Punpun"]=99321273;
    agenda["Ponpon"]=92133243;
    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
    double mayor=0;
    set<double>::iterator i=mi_set.begin();
    while(i!=mi_set.end())
    {
        if(mayor<*i)
        {
            mayor=*i;
        }
        i++;
    }
    return mayor;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
