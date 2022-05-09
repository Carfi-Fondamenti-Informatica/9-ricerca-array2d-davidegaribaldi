#include "lib.h"
int funz(char nome[10][20],char ricerca[20])
{
    int dim1=0,c=0,posizione=-1;

    for(int j=0;j<20;j++)
    {
        if(ricerca[j]!=0)
        {
            dim1++;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < dim1; j++) {
            if (nome[i][j] == ricerca[j]) {
                c++;
            }

        }
        if (c == dim1) {
            posizione = i+1;
        }
        c=0;
    }
    return posizione;
}
