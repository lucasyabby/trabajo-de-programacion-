#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int x1=0;
    int x2=0;
    int raiz=0;

    printf("ingresar valor de a");
    scanf("%d",&a);
    printf("ingresar valor de b");
    scanf("%d",&b);
    printf("ingresar valor de c");
    scanf("%d",&c);
    if(a>0)
    {
        raiz=(b*b)-4*a*c;
        if(raiz>0)
        {
            x1=(-b+sqrt(raiz))/2*a;
            x2=(-b-sqrt(raiz))/2*a;
            printf("el resultado es x1: %d x2: %d ",x1,x2);
        }
        else
        {
            printf("raiz negativa,error");
        }
    }
    else
    {
        printf("A es negativo, Error");
    }

    return 0;

}
