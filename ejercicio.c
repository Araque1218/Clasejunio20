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

    for (int i = 0; i < 4; i++) {
        printf("Ingrese los datos del alumno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alumnos[i].matricula);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Direccion: ");
        scanf("%s", alumnos[i].direccion);
        printf("Carrera: ");
        scanf("%s", alumnos[i].carrera);
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);

        fflush(stdin);
    }

    return 0;
}
