#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 3) {
        char *op = argv[1];
        char *x_str = argv[2];
        double résultat = 0;

		if (strcmp(op, "car") == 0) {
	// Convertir x_str en double, appeler _car et afficher le résultat
	        double x = atof(x_str);
	        résultat = _car(x);
		printf("%lf", résultat);
	        return 0;
	        }
        // Si ce n'est pas "car", on tombe sur l'erreur de paramètres
	        printf("Erreur de parametres\n");
	        return 1;
    	}
	
	if (argc == 4)
	{
	char* op = argv[1];
	char* a = argv[2];
	char* b = argv[3];
	double r = 0;
	if (strcmp(op, "add") == 0) {
		r = _add(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "sub") == 0) {
		r = _sub(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "mul") == 0) {
		r = _mul(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "div") == 0) {
		r = _div(atof(a), atof(b));
		printf("%lf",r);
	}
	else {printf("Erreur de parametres");}
	}
	else {printf("Erreur de parametres");}
	return 0;
}

		
