#include <stdio.h>
// değerleri klavyeden girilen 10 elemanlı dizinin kaç elemanı çift,tek

int main()  

{
    
 int dizi[10];
 int i;
 int TekSayaci = 0,CiftSayaci = 0;
 
 for(i = 0 ; i < 10 ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 0 ; i < 10 ; i++)
 {
  if(dizi[i] % 2 == 0)
  {
  CiftSayaci++;
  }

  else
  {
   TekSayaci++;
  }
 }
 
 printf("dizinin %d tane elemani cift\n",CiftSayaci);
 printf("dizinin %d tane elemani tek\n",TekSayaci);

 return 0;
  
}