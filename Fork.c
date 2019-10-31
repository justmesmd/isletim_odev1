#include <stdio.h>
#include <unistd.h>
 
int main()
{
    int sayi = 0;
    int pid,durum;
 
    printf("sayý giriniz ");
    scanf("%d", &sayi);
 
       if(sayi < 0)
    {
          printf("sayý giriniz");
      scanf("%d", &sayi);
    }
 
    pid = fork();
 
    if(pid < 0)
    {
      printf("hata olustu");
      exit(-1);
    }
 
    else if(pid == 0)
    {
             do
        {
        if(sayi%2 != 0)
        {
          sayi = (sayi*3)+1;
                }
         
        else if(sayi%2 == 0)
        {
          sayi = sayi/2;
        }
 
        printf("%d \n",sayi);
        }while(sayi != 1);
    }
 
    
    
    else {
        printf("pid %d \n",pid);
    printf("bitmesi bekleniyor");
      wait(&durum);
          } 
     
     
return 0;   
}
