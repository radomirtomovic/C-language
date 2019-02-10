#include <stdio.h>

int main(int argc, char *argv[])
{
    double x, y, z = 0;
    int operation = 0;
    char yes_no;
    char *name[] = {"add", "subtract", "multiply", "devide", "moduo", "power", "factorial"};
    int len = sizeof(name) / sizeof(char *);
    printf("\nChose operation \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d=%s \n", i + 1, name[i]);
    }
    scanf("%d", &operation);
    if (operation > len)
    {
        printf(" \n \nERROR:please pick the number between 1 and %d\n Restart? Y(yes)/N(no)\n", len);
        scanf(" %c", &yes_no);
        if (yes_no == 'y' || yes_no == 'Y')
        {
            return main(argc, argv);
        }
        else if (yes_no == 'n' || yes_no == 'N')
        {
            return 0;
        }
    }

    printf("\n Insert first number \n");
    scanf("%lf", &x);
    if (operation != 7)
    {
        printf("\n insert second number \n");
        scanf("%lf", &y);
    }

    switch (operation)
    {
    case 1:
        z = x + y;
        break;
    case 2:
        z = x - y;
        break;
    case 3:
        z = x * y;
        break;
    case 4:
        if (y == 0)
        {
            printf(" \n \nERROR:can not devide by zero!\n Restart? Y(yes)/N(no)\n");
            scanf(" %c", &yes_no);
            if (yes_no == 'y' || yes_no == 'Y')
            {
                return main(argc, argv);
            }
            else if (yes_no == 'n' || yes_no == 'N')
            {
                return 0;
            }
        }

        z = x / y;
        break;
    case 5:
        if (y == 0)
        {
            printf(" \n \nERROR:can not devide by zero!\n Restart? Y(yes)/N(no)\n");
            scanf(" %c", &yes_no);
            if (yes_no == 'y' || yes_no == 'Y')
            {
                return main(argc, argv);
            }
            else if (yes_no == 'n' || yes_no == 'N')
            {
                return 0;
            }
        }
        z = (int)x % (int)y;
        break;
    case 6:
        z = 1;
        if (y < 0)
        {
            for (int i = 0; i > y; i--)
            {
                z = z * x;
            }
            z = 1 / z;
        }
        else
        {
            for (int i = 0; i < y; i++)
            {
                z = z * x;
            }
        }

        break;
    case 7:
        if (x < 0)
        {
            printf(" \n \nERROR:can not factorial negative number!\n Restart? Y(yes)/N(no)\n");
            scanf(" %c", &yes_no);
            if (yes_no == 'y' || yes_no == 'Y')
            {
                return main(argc, argv);
            }
            else if (yes_no == 'n' || yes_no == 'N')
            {
                return 0;
            }
        }
        z = 1;
        while (x >= 1)
        {
            z = z * x;
            x--;
        }
        break;
    }
    printf("%.2lf \n Restart? Y(yes)/N(no)", z);
    scanf(" %c", &yes_no);
    if (yes_no == 'y' || yes_no == 'Y')
    {
        return main(argc, argv);
    }
    else if (yes_no == 'n' || yes_no == 'N')
    {
        return 0;
    }
}
/*int fact(int number) {
    return number > 0 ? number * fact(number - 1) : 1;
}*/
