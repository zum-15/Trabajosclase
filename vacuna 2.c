
#include<stdio.h>

int main () {
	int edadmeses;
	printf("ingresa la edad de la criatura en meses:");
	scanf("%d", &edadmeses);
	if (edadmeses >= 2){
	printf("le corresponde la vacuna de 2 meses\n");
}else{
	printf("aun no le corresponde\n");
}
return 0;
}
