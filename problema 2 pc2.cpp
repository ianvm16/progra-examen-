#include <iostream>
#include <string.h>
using namespace std;

struct Consulta {
    int codigo;
    char nombre[40];
    char genero;
    int edad;
}alumnos[50];

struct DatosAcademicos {
    float curso1;
    float curso2;
    float curso3;
    float promedio;
} datos[50];

int main() {
     
    int numAlumnos = 0;
    int opcion;
    int sw=0;

while(sw==0){
cout << "Menu de Opciones:" << endl;
cout << "1 Registrar datos de un alumno" << endl;
cout << "2 Ver la lista de alumnos" << endl;
cout << "3 Ver las notas por asignatura" << endl;
cout << "4 Calcular el promedio de notas" << endl;
 cout <<"5 Mostrar primer y ultimo promedio" << endl;
cout << "6 Salir" << endl;
cout << "ingrese el nuemro de la opcion que desea : ";
cin >> opcion;

if (opcion == 1) {
  if (numAlumnos >= 50) {
    cout << "No se pueden registrar mas alumnos." << endl;
      continue;}
Consulta alumno;

cout << "ingrese el nombre del alumno: ";
fflush(stdin); 
cin.getline(alumno.nombre,40,'\n');
cout << "ingrese el codigo del alumno: ";
cin >> alumno.codigo;
cout << "ingrese el genero del alumno (M o F): ";
cin >> alumno.genero;
cout << "ingrese la edad del alumno: ";
 cin >> alumno.edad;
cout << "ingrese la nota del curso 1: ";
cin >> datos[numAlumnos].curso1;
cout << "ingrese la nota del curso 2: ";
cin >> datos[numAlumnos].curso2;
cout << "ingrese la nota del curso 3: ";
cin >> datos[numAlumnos].curso3;

datos[numAlumnos].promedio = (datos[numAlumnos].curso1 + datos[numAlumnos].curso2 + datos[numAlumnos].curso3) / 3;

 alumnos[numAlumnos] = alumno;
numAlumnos++;
 cout << "el promedio es : " << datos[numAlumnos - 1].promedio << endl;
        }
else
if (opcion == 2) {
if (numAlumnos == 0) {
 cout << "aun no hay alumnos registrados" << endl;
  continue;}

cout << "lista de alumnos " << endl;
for (int i = 0; i < numAlumnos; ++i) {
cout <<"su nombre es : " << alumnos[i].nombre<<endl<< "su codigo es : " << alumnos[i].codigo<<endl<< "su genero es : "<< alumnos[i].genero<<endl
<< "su edad es : " << alumnos[i].edad<<endl
<< " tiene un promedio de : " << datos[i].promedio << endl; }
        }
else
if (opcion == 3) {
cout << "las notas por asignatura son : " << endl;
for (int i = 0; i < numAlumnos; ++i) {
 cout << "su codigo: " << alumnos[i].codigo
   << "su nombre: " << alumnos[i].nombre
     << " la nota del curso 1 es : " << datos[i].curso1
     << " la nota del curso 2 es : " << datos[i].curso2
     << "la nota del curso  3 es : " << datos[i].curso3 << endl;
            }
        }
        else if (opcion == 4) {
            for (int i = 0; i < numAlumnos; ++i) {
                datos[i].promedio = (datos[i].curso1 + datos[i].curso2 + datos[i].curso3) / 3.0;
                cout << "el promedio del alumno  " << i+1 << " es : " << datos[i].promedio << endl;
            }
        }
        else
		 if (opcion == 5) {
            if (numAlumnos == 0) {
                cout << "aun no hay alumnos registrados." << endl;
                continue;
            }

            cout << "el primer Promedio Registrado: " << datos[0].promedio << endl;
            cout << "el ultimo  Promedio Registrado: " << datos[numAlumnos - 1].promedio << endl;
        }
        else
		 if (opcion == 6) {
            sw=1;
        }
     
    } 
 
}
