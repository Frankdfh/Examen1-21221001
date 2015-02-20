#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


void evaluar();

float sumarElementos(stack<float> mi_pila, queue<float> mi_cola);
bool existenRepetidos(vector<string> mi_vector);
int contarMayoresDeEdad(list<int>edades);
map<string,int> obtenerAgenda();
double obtenerMenor(set<double> mi_set);

#endif // EVALUADOR_H
