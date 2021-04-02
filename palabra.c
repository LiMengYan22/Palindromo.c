#include <stdio.h>
#include <string.h>
char primeraletra(char* palabra)
{
      return palabra[0];
}
char ultimaletra(char* palabra, int i)
{
    i=strlen(palabra);
    return palabra[i-1];
}
char palindromo (char* palabra, int i, int x, int r)
{
   x=strlen(palabra);
   x=x-1;
   for(i=0,r=x;i<=x/2;i++,r--)
   {
          if(palabra[i]==palabra[r])
         
             printf("Es palindroma\n");
          else
             printf("No es palindroma\n");
   return 0;
   }
}
int main()
{
 char palabra[10];   
 int i, x, r; 
    printf("\nIntroduce una palabra: ");
    scanf("%s",palabra);
    
    printf("\nSu primera letra es: %c\n", primeraletra(palabra));
    
    printf("Su última letra es: %c\n", ultimaletra(palabra, i));
    palindromo (palabra, i, x, r);    
}    
