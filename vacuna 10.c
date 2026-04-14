
#include<stdio.h>

int main () {
	int edadmeses;
	printf("ingresa la edad de la criatura en meses:");
	scanf("%d", &edadmeses);
	if (edadmeses == 0){
	printf("aplicar vacuna al nacer\n");
}else{
	printf("no le corresponde la vacuna\n");
}
return 0;
	
}

