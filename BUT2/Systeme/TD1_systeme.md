pour fair un input en c il faut envoyer ladresse memoir et non la valeur de la variable pour ca



int main (void)

{

&#x09;int a = 0;

&#x09;char c = 'a';

&#x09;printf("la valeur a : %d",a);

&#x09;printf("la valeur c : %c",c);

&#x09;printf("entre une valeur : ")

&#x09;scanf("%d", \*\*\&\*\*a);







&#x09;return 0;

}

&#x09;

code ascii a retenir :

a = 97

A = 65

0 = 48



TP:



ex1



1\_chiffre : non car commence par un chiffre

un-chiffre : non pas \_ mais -

un\_chiffre : oui

\_chiffre : oui

z33 : oui

z\_3\_3 : oui

a’ : non

Ma\_VaRiAbLe : oui

\_ENV\_ : oui



ex2

parmis : char, unsigned char, int, unsigned int et float







a ∈ \[0.5, 15.5] : float

b ∈ \[35, 100]   : unsigned char , unsigned int

c ∈ \[−35, +35]  : int , char

d ∈ \[−130, 130] : int

e ∈ \[−6456648.23, 98654432.8904] : float

f ∈ \[−987654, 349879] : int



ex3



Soit les d´eclarations suivantes :



int i = 15;

char c = 10;

unsigned char UC = ’A’;

float F = 10.0;



Pr´eciser le type et la valeur finale des expressions suivantes :





• 2 ∗ UC + (i + 10)/c  ---> 2\*65 + 15+10  = 132 int



• 2 ∗ UC + (i + 10.0)/c --->  132.5 float



• UC = 5 ∗ UC ---> 325 int





ex4



int main (void)

{

&#x09;printf("hello World \\n");



&#x09;return 0 ;

}



ex5



int main (void)

{

&#x09;int a = 77;

&#x09;int b = 78;

&#x09;

&#x09;printf("a : %d \\n b : %d \\n"a,b );

&#x09;

&#x09;int c;

&#x09;c = a;

&#x09;a = b;

&#x09;b = c;

&#x09;

&#x09;printf("a = %d \\n b = %d \\n"a,b );







&#x09;return 0 ;

}





ex6





int main(void)

{

&#x20;   int a = 2;

&#x20;   int b = 3;

&#x20;   int c = 4;



&#x20;   float moyenne;



&#x20;   moyenne = (a + b + c) / 3.0;



&#x20;   printf("moyenne : %.2f\\n", moyenne);



&#x20;   return 0;

}

&#x20;le .2f pour afficher les decimal



ex 7 



\#include <stdio.h>  / import des bibloteque standar pour printf et scanf

int main (void){

&#x09;float c,f;

&#x09;printf("veuiller saisir la vaeur de c en celsus : ");

&#x09;scanf("%f",\&c);

&#x09;f = 9/5\*c+32

&#x09;printf("%.2f => %.2f\\n",c,f);

&#x09;return 0 



}



ex 8



int main (void){

&#x09;char c ;

&#x09;printf("veuiller saisir le caracter c : ");

&#x09;scanf("%c",\&c);

&#x09;

&#x09;printf("sous form de lettre : %c , sous form de code ascii : %d, sous forme de code hexadecimal : %x \\n"c,c,c);

&#x09;printf("%c => %c\\n",c,c+('a'-'A'));            /c+(a=>A) (c+32 decalage des val) 



&#x09;return 0 



}





ex9

int main(void)

{

&#x20;   int nombre;

&#x20;   float prixHT;

&#x20;   float prixTTC;



&#x20;   printf("Nombre d'articles : ");

&#x20;   scanf("%d", \&nombre);



&#x20;   printf("Prix HT d'un article : ");

&#x20;   scanf("%f", \&prixHT);



&#x20;   prixTTC = nombre \* prixHT \* 1.196;



&#x20;   printf("\\nNombre d'articles : %d\\n", nombre);

&#x20;   printf("Prix HT :           %12.2f euros\\n", prixHT);

&#x20;   printf("Prix TTC :          %12.2f euros\\n", prixTTC);



&#x20;   return 0;

}



ex10



int main(void)

{

&#x20;   unsigned char u\_char = 128;

&#x20;   int \_int = 256;



&#x20;   printf("u\_char en int : %d\\n", (int)u\_char);

&#x20;   printf("u\_char en char : %d\\n", (char)u\_char);



&#x20;   printf("\_int en char : %d\\n", (char)\_int);

&#x20;   printf("\_int en unsigned char : %d\\n", (unsigned char)\_int);



&#x20;   \_int = 384;



&#x20;   printf("384 en char : %d\\n", (char)\_int);

&#x20;   printf("384 en unsigned char : %d\\n", (unsigned char)\_int);



&#x20;   return 0;

}



u\_char en int : 128

u\_char en char : -128

\_int en char : 0

\_int en unsigned char : 0

384 en char : -128

384 en unsigned char : 128















































































































































































