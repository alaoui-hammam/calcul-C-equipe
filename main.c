#include <stdio.h>

float moyenne(int a, int b) { return (a + b) / 2.0f; }

int produit(int a,int b) {return a*b ;}

int main(){
	int result;
	float moy;
	printf("Salut depuis main \n");
	result=produit(3,4);
	printf("produit est : %d\n",result);
	moy=moyenne(20,15);
	printf("moyenne est : %f\n",moy);

	return 0;
}
