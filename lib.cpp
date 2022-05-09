#include "lib.h"
int funz(char nome[10][20],char ricerca[20])
{
    int dim1=0,dim=0,c=0,posizione=-1,a=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            a=(int)nome[i][j];
            if(a>=65 && a<=90) {
                a = a + 32;
                nome[i][j] = (char) a;
            }
        }
    }
    for(int j=0;j<20;j++) {
        a = (int) ricerca[j];
        if (a >= 65 && a <= 90) {
            a = a + 32;
            ricerca[j] = (char) a;
        }
    }
    for (int j = 0; j < 20; j++) {
        if(ricerca[j] !=0)
        {
            dim++;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
         if(nome[i][j] !=0)
         {
             dim1++;
         }
        }
        if(dim1>=dim) {
            for (int j = 0; j < dim1; j++) {
                if (nome[i][j] == ricerca[j]) {
                    c++;
                }

            }
            if (c == dim1) {
                posizione = i + 1;
            }
            c = 0;
            dim1 = 0;
            dim=0;
        }
    }
    return posizione;
}
