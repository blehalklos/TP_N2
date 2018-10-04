#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "ArrayEmployees.c"

typedef struct
{
    int Id;
    char name[20];
    char lastName[20];
    float salary;
    int sector;
    int isEmpty;
} Employee;


typedef struct{
    int id;
    char description[20];
}Sector;


void initEmployees( Employee*, int tam);

int findAvailable( Employee*, int tam);

int findEmployeeById(Employee*, int tam, int Id);

void printEmployee(Employee emp, Sector* sectors, int tamSector);

void sortEmployeeByName(Employee* nomina, int tam, Sector* sectors, int tamSector);

void addEmployees(Employee* empleados, int tam, Sector* sectors, int tamSector, int idFlag);

void removeEmployee(Employee* empleados, int tam, Sector* sectors, int tamSector);

void modifyEmployee(Employee* empleados, int tam, Sector* sectors, int tamSector);;

int chooseSector(Sector* sectors, int tam);

void getDescription(Sector* sectors, int tamSector, int sector, char array[]);

int validarCHAR (char aux []);

float validarNumeroFlotante(char aux[]);

int validarLargoCadena(char aux[],int  LargoMaximo);

void ordenar(Employee* vec, int CANT);

int menu();

#endif
