#include <iostream>
#include "Students.h"
#include "Teachers.h"
#include "Assignatures.h"

double PromedioGeneral(vector<Students> estudiantes){
    double total = 0.0;
    for (int i = 0; i < estudiantes.size(); i++){
        total += estudiantes[i];
    }
    total /= estudiantes.size();
    return total
}

double PromedioSexo(vector<Students> estudiantes){
    double total = 0.0;
    double totalH = 0.0;
    double totalM = 0.0;
    for (int i = 0; i < estudiantes.size(); i++){
        total += estudiantes[i];
    }
    total /= estudiantes.size();
    if
}

int ContarEstudiantes(vector<Students> estudiantes){
    int total = 0;
    for (int i = 0; i < estudiantes.size(); i++){
        total++;
    }
    return total + 1;
}

void ImprimirCalificaciones(vector<Students> estudiantes, vector<Assignatures> asignaturas){
    for (int i = 0; i < estudiantes.size(); i++){
        cout << estudiante[i].nombre << "/t" << asignaturas[i].calificacion << endl;
    }
}

int main(){

}