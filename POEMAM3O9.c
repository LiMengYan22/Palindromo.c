    #include <stdio.h>
    #include <string.h>
    #define TAMANIO 22
     
    void Introducir_frase (char frase[]) {
     printf ("Introducir una Palabra: ");
     gets (frase); fflush (stdin);
     }
     
    int Comprobar_frase (char frase[]){
     int i, l;
     for (i = 0, l=strlen(frase); i<=l/2 && frase[i]==frase[l-1-i]; i++);
     return i>l/2;
    }
     
    int main (){
      char palindroma[22];
      Introducir_frase (palindroma);
      printf ("Esta Palabra %s es Palindroma.", Comprobar_frase(palindroma)?"":"no");
      getchar();
      return 0;
    }
