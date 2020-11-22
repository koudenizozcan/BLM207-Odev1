#include <stdio.h>
#include <stdlib.h>

/*DENIZ OZCAN Bilgisayar Mühendisligi (i.o)*/
/*10 elemanli dizi tanimlayin bu 10 elemanli dizinin en büyük ve en kucuk sayilari veren program*/

int main(void)
{
    int i,gecici,tut;
    int sayi[10]={3,1,6,6,4,2,1,8,3,3};


    printf("Elimizdeki sayilar : 3,1,6,6,4,2,1,8,3,3");

    for(gecici=1;gecici<10;gecici++)
       {
           for (i=0;i<10 - 1;i++)
          {
           if (sayi[i]>sayi[i+1])
           {
               tut=sayi[i];
               sayi[i]=sayi[i+1];
               sayi[i+1]=tut;
           }
          }
       }

    printf("\nKucukten buyuge siralamasi:");

      for (i=0;i<10;i++)
      {
          printf("[%d]",sayi[i]);
      }


    printf("\n\nCikmak icin iki kez enter tusuna basiniz.");
    fflush(stdin);
    getchar();
    return 0;
}
