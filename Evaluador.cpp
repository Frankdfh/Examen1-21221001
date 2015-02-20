#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    cout<<"Ejercicio sumarElementos:\t\t";

    stack<float> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    stack<float> s2;
    s2.push(10);
    s2.push(20);
    s2.push(30);

    queue<float> q1;
    q1.push(4);
    q1.push(5);
    q1.push(6);

    queue<float> q2;
    q2.push(40);
    q2.push(50);
    q2.push(60);

    if(sumarElementos(s1,q1)==21
        && sumarElementos(s1,q2)==156
        && sumarElementos(s2,q1)==75
        && sumarElementos(s2,q2)==210
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existenRepetidos:\t\t";

    vector<string> v1;
    v1.push_back("hola");
    v1.push_back("mundo");
    v1.push_back("prueba");
    v1.push_back("test");

    vector<string> v2;
    v2.push_back("hola");
    v2.push_back("mundo");
    v2.push_back("prueba");
    v2.push_back("test");
    v2.push_back("mundo");

    vector<string> v3;
    v3.push_back("hola");
    v3.push_back("hola");
    v3.push_back("mundo");
    v3.push_back("prueba");
    v3.push_back("test");

    vector<string> v4;
    v4.push_back("hola");
    v4.push_back("hello");
    v4.push_back("mundo");
    v4.push_back("prueba");
    v4.push_back("test");

    if(!existenRepetidos(v1)
        && existenRepetidos(v2)
        && existenRepetidos(v3)
        && !existenRepetidos(v4)
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio contarMayoresDeEdad:\t\t";

    list<int> l1;
    l1.push_back(10);
    l1.push_back(18);
    l1.push_back(21);
    l1.push_back(8);

    list<int> l2;
    l2.push_back(10);
    l2.push_back(18);
    l2.push_back(21);
    l2.push_back(7);
    l2.push_back(80);

    list<int> l3;
    l3.push_back(10);
    l3.push_back(12);
    l3.push_back(21);

    if(contarMayoresDeEdad(l1) == 2
        && contarMayoresDeEdad(l2) == 3
        && contarMayoresDeEdad(l3) == 1
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio obtenerAgenda:\t\t";
    if(obtenerAgenda()["Lolo"] == 98923212
        && obtenerAgenda()["Lola"] == 92123243
        && obtenerAgenda()["Rufo"] == 93212322
        && obtenerAgenda()["Punpun"] == 99321273
        && obtenerAgenda()["Ponpon"] == 92133243
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio obtenerMenor:\t\t\t";
    set<double> set1;
    set1.insert(10);
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);

    set<double> set2;
    set2.insert(4);
    set2.insert(5);
    set2.insert(6);

    set<double> set3;
    set3.insert(4);
    set3.insert(5);
    set3.insert(45);

    if(obtenerMenor(set1) == 40
        && obtenerMenor(set2) == 6
        && obtenerMenor(set3) == 45
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
