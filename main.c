/*
    spicoli piersilvio
    esercizio 1
*/

#include <stdio.h>
#define n 100

//prototipi
void _init(int[], int, int);
int _add(int[], int, int);
void _insert(int[], int, int);

int main()
{
    setbuf(stdout, 0);

    //var. locali
    int a[n];
    int el = 0, i = 0; //inserito in input
    int sum = 0;

    puts("numero di elementi da sommare_> ");
    scanf("%d", &el);

    _init(a, i, el);
    _insert(a, i, el);

    sum = _add(a, i, el);

    printf("\n \t somma_> %d \n", sum);

    return 0;
}

void _init(int a[], int i, int dim)
{
    for(i = 0; i < dim; i++)
    { a[i] = 0; }
}

void _insert(int a[], int i, int dim)
{
    for(i = 0; i < dim; i++)
    {
        printf("elemento %d_> ", i);
        scanf("%d", &a[i]);
    }
}

int _add(int a[], int i, int dim)
{
    int s;

    for(i = 0; i < dim; i++)
    {
        s = s + *(a + i);
    }

    return s;
}
