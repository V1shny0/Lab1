#include <conio.h>                                  //N - кількість рядків
#include <stdio.h>                                  //var - номер варіанту
#include <stdlib.h>                                 //N1, N2, N3 -  значення ширини стовпців для 1 варіанту
#include <math.h>                                   //n - номер рядка в таблиці
                                                    //x - змінна для умови циклу
int main()                                          //x1 - початкове значення функції
{                                                   //x2 - кінцеве значення функції
    int N, N1, N2, N3, var, n, lines, page;         //delta - номер рядка
    double x1, x2, delta, x, fx;                    //fx - значення функції

    n = 1;
    lines = 0;
    page = 12;
    N1 = 12;
    N2 = 26;
    N3 = 27;


    printf("Enter your variant:");
    scanf("%d", &var);

    while(var != 1 && var != 2)
    {
        printf("\nYou enter incorrect variant, try again:");
        scanf("%d", &var);
    }

    if (var == 1)
    {
        printf("\nEnter first x:");
        scanf("%lf", &x1);
        printf("\nEnter final x:");
        scanf("%lf", &x2);
        printf("\nEnter column number:");
        scanf("%d", &N);
        delta = (x2 - x1) / (N - 1.0);
        x = x1;

        system("cls");

        printf("X1 = %.2lf   X2 = %.2lf   Delta = %.2lf", x1, x2, delta);
        printf("\n+------------+--------------------------+---------------------------+");
        printf("\n|%*d|%*.2lf|%*.2lf|\n", N1, 1, N2, x1, N3, ((pow(x1, 3) / 30) - (4 * pow(x1, 2)) + 50));
        printf("+------------+--------------------------+---------------------------+");

        while (x < x2)
        {
            lines ++;
            x = x + delta;
            n ++;

            printf("\n|%*d|%*.2lf|%*.2lf|\n", N1, n, N2, x, N3, ((pow(x, 3) / 30) - (4 * pow(x, 2)) + 50));
            printf("+------------+--------------------------+---------------------------+");
            if (lines >= page)
            {
                printf("\nPress any button to continue...");
                getch();
                system("cls");
                lines = 0;
            }
        }
    }

    if (var == 2)
    {
        printf("\nEnter first x:");
        scanf("%lf", &x1);
        printf("\nEnter final x:");
        scanf("%lf", &x2);
        printf("\nEnter delta:");
        scanf("%lf", &delta);
        N = (((x2 - x1) / delta) + 1);
        x = x1;

        system("cls");

        printf("X1 = %.2lf   X2 = %.2lf   Delta = %.2lf", x1, x2, delta);
        printf("\n+------------+--------------------------+---------------------------+");
        printf("\n|%*d|%*.2lf|%*.2lf|\n", N1, 1, N2, x1, N3, ((pow(x1, 3) / 30) - (4 * pow(x1, 2)) + 50));
        printf("+------------+--------------------------+---------------------------+");

        while (x < x2)
        {
            lines ++;
            x = x + delta;
            n ++;

            printf("\n|%*d|%*.2lf|%*.2lf|\n", N1, n, N2, x, N3, ((pow(x, 3) / 30) - (4 * pow(x, 2)) + 50));
            printf("+------------+--------------------------+---------------------------+");
            if (lines >= page)
            {
                printf("\nPress any button to continue...");
                getch();
                system("cls");
                lines = 0;
            }
        }
    }

    return 0;
}
