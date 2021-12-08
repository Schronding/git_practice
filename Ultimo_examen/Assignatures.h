//
// Created by Coron on 12/8/2021.
//
#include "iostream"
#include "vector"
#include "Students.h"
#include "Teachers.h"
using namespace std;

#ifndef ULTIMO_EXAMEN_ASSIGNATURES_H
#define ULTIMO_EXAMEN_ASSIGNATURES_H


class Assignatures {
    string nombre = "";
    int horas = 1; // Horas totales de la semana en la que se imparte la asignatura
    int creditos = 1;
    double calificacion = 1.0;
    string profesor = ""; // Puedo llamar al profesor desde la clase Teachers?
    vector<Students> estudiantes;
};


#endif //ULTIMO_EXAMEN_ASSIGNATURES_H
