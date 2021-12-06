#include <stdio.h>
#include <string.h>

#define N 3

struct empleado
{
    int clave;
    char nombre[20];
    float estatura;
    float sueldo;
};

typedef struct empleado Empleado;  

void capturaArregloEmpleados(struct empleado emps[N]);
void capturaEmpleado(struct empleado *emp1);

int main()
{
    struct empleado empleado1; 
    struct empleado empleados[N];

    Empleado empleado2;

    empleado1.clave = 10;
    empleado1.estatura= 1.70;
    empleado1.sueldo = 100000;
    strcpy(empleado1.nombre, "Juan");

    //capturaArregloEmpleados(empleados);
    capturaEmpleado(&empleado1);

    printf("Hola mundo");

    return 0;
}

void capturaEmpleado(struct empleado *emp1)
{
        printf("Informacion empleado \n");
        printf("   Clave: ");
        //scanf("%d", (*emp1).clave);
        scanf("%d", &emp1->clave);
        printf("  Nombre: ");
        scanf("%s",emp1->nombre);
        printf("  Estatura: ");
        scanf("%f",&emp1->estatura);
        printf("  Sueldo: ");
        scanf("%f", &emp1->sueldo);

}

//void capturaEmpleado(struct empleado emp1)
//{
// printf("Informacion empleado \n");
//        printf("   Clave: ");
//        scanf("%d", &emp1.clave);
//        printf("  Nombre: ");
//        scanf("%s",emp1.nombre);
//        printf("  Estatura: ");
//        scanf("%f",&emp1.estatura);
//        printf("  Sueldo: ");
//        scanf("%f",&emp1.sueldo); 
//}

void capturaArregloEmpleados(struct empleado emps[N])
{
    int i;

    for(i= 0; i< N; i++)
    {
        printf("Informacion empleado %d\n",i);
        printf("   Clave: ");
        scanf("%d", &emps[i].clave);
        printf("  Nombre: ");
        scanf("%s",emps[i].nombre);
        printf("  Estatura: ");
        scanf("%f",&emps[i].estatura);
        printf("  Sueldo: ");
        scanf("%f",&emps[i].sueldo);
    
    }
}