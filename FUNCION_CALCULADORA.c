#include <stdio.h>

int suma(int, int);
int resta(int, int);
int producto(int, int);
int cociente(int, int);

int suma (int a, int b)
{
    return a + b;
}

int resta (int a, int b)
{
    return a - b;
}

int producto (int a, int b)
{
    return a * b;
}

int cociente (int a, int b)
{
    return a / b;
}

int main()
{
    int a, b, op;

    do {
        printf("\n--- CALCULADORA ---\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Salir\n");
        printf("Opción: ");
        scanf("%d", &op);

        if (op >= 1 && op <= 4)
        {
            printf("Ingrese dos números: ");
            scanf("%d %d", &a, &b);
        }

        switch(op)
        {
            case 1:
                printf("%d + %d = %d\n", a, b, suma(a, b));
                break;

            case 2:
                printf("%d - %d = %d\n", a, b, resta(a, b));
                break;

            case 3:
                printf("%d * %d = %d\n", a, b, producto(a, b));
                break;

            case 4:
                if (b != 0)
                    printf("%d / %d = %d\n", a, b, cociente(a, b));
                else
                    printf("Error: división entre cero.\n");
                break;

            case 5:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opción inválida.\n");
        }

    } while (op != 5);

    return 0;
}
