#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

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


int main()
{

    char seguir = 's';
    int contadorId = 0;
    Employee list[1000];
    Sector sectors[] = {
        {1, "RRHH"},
        {2, "Ventas"},
        {3, "Compras"},
        {4, "Contable"},
        {5, "Sistemas"}
        };

    initEmployees(list, 1000);


    do
    {
        ordenar(list, 1000);

        switch(menu())
        {

        case 1:
            contadorId++;
            addEmployees(list, 1000, sectors, 5, contadorId);
            system("pause");
            break;

        case 2:
            if(contadorId == 0)
            {
                system("cls");
                printf("Primero debe de ingresar un empleado.\n\n");
                system("pause");
            }
            else
            {
                modifyEmployee(list, 1000, sectors, 5);
            }
            break;

        case 3:
            if(contadorId == 0)
            {
                system("cls");
                printf("Primero debe de ingresar un empleado.\n\n");
                system("pause");
            }
            else
            {
            removeEmployee(list, 1000, sectors, 5);
            }
            break;

        case 4:
            if(contadorId == 0)
            {
                system("cls");
                printf("Primero debe de ingresar un empleado.\n\n");
            }
            else
            {
            printf("\n");
            printf("Id\t Apellido\t Nombre\t\t Salario\t Sector\n\n");
            ordenar(list, 1000);
            sortEmployeeByName(list, 1000, sectors, 5);
            }
            system("pause");
            break;
        case 5:
            seguir = 'n';
            break;

        default:
            printf("\nIngrese una opcion valida por favor.\n\n");
            system("pause");
        }

    }
    while(seguir == 's');



    return 0;
}

