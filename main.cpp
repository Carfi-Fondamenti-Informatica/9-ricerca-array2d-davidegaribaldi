#include <iostream>
#include "lib.h"
using namespace std;
int main() {
   char nome[10][20],nomericerca[20];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            nome[i][j]=0;
        }
    }
   for(int i=0;i<10;i++)
   {
   cin>>nome[i];
   }
   for(int i=0;i<20;i++)
   {
       nomericerca[i]=0;
   }
   cin>>nomericerca;
   if(funz(nome,nomericerca)==-1)
   {
   cout<<"non presente";
   }
   else
   {
    cout<<funz(nome,nomericerca)   ;
   }


    return 0;
}
