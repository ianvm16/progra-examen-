#include <iostream>
#include <string.h>

using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
    float nota1;
    float nota2;
    float nota3;
    float promedio;
}estu[100];

int main() {
    
    int numestu = 0;
    int numdesa = 0;

    
    cout << "ingrese los datos de los estudiantes " << endl;
    cout << "si desea finalizar ingrese un codigo negativo." << endl;

    while (true) {
        int codigo;
        string nombre;
        float nota1, nota2, nota3;

        cout << "codigo: ";
        cin >> codigo;

        if (codigo < 0) {
            break;
        }

        cout << "su nombre: ";
        cin >> nombre;
        cout << "la nota 1: ";
        cin >> nota1;
        cout << "la nota 2: ";
        cin >> nota2;
        cout << "la nota 3: ";
        cin >> nota3;

        estu[numestu].codigo = codigo;
        estu[numestu].nombre = nombre;
        estu[numestu].nota1 = nota1;
        estu[numestu].nota2 = nota2;
        estu[numestu].nota3 = nota3;

        
        estu[numestu].promedio = (nota1 + nota2 + nota3) / 3.0;
        if (estu[numestu].promedio < 10.0) {
            numdesa++;
        }

        numestu++;
    }

  
for (int i = 0; i < numestu - 1; i++) {
for (int j = 0; j < numestu - i - 1; j++) {
if (estu[j].promedio > estu[j + 1].promedio) {
Estudiante temp = estu[j];
estu[j] = estu[j + 1];
 estu[j + 1] = temp;
}
}
  }

   
cout << "el promedio de cada estudiante:" << endl;
for (int i = 0; i < numestu; i++) {
cout << "su codigo: " << estu[i].codigo<<endl << "su nombre: " << estu[i].nombre<<endl << "su promedio: " << estu[i].promedio << endl;
    }
    cout << "la cantidad de estudiantes desaprobados son : " << numdesa << endl;

  
    cout << "los estudiantes ordenados por promedio:" << endl;
    for (int i = 0; i < numestu; i++) {
        cout << "codigo: " << estu[i].codigo
             << "nombre: " << estu[i].nombre
             << "su promedio: " << estu[i].promedio << endl;
    }

 
}
