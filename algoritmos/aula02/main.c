#include <stdio.h>
#include <stdlib.h>


/* int main come�a o programa, � case sensitive*/
int main() {
	printf("Hello World\n");
	int idade = 0;
	char sexo;
	float altura;
	double numero_grande;
	
	sexo = 'm';
	altura = 1.8900;
	numero_grande= 1.78979793545;
	idade = 29;
	
	printf("vari�veis\n");
	/*fun��o printf*/
	printf("Idade informada:%d\n",idade); //%d ou %i pra inteiro
	printf("Sexo informada:%c\n",sexo); //%c pra char
	printf("Altura informada:%.2f\n",altura); //%f pra float
	printf("N�mero informado: %.8f \n",numero_grande);
	return 0;
}
