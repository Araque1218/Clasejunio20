#include <stdio.h>
#include <string.h>

struct persona {
    int matricula;
    char nombre[20];
    char direccion[50];
    char carrera[25];
    float promedio;
};

int main(int argc, char const *argv[]) {
    struct persona alumnos[4];

