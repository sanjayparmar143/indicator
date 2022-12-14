#include<stdio.h>


void swap(int *a, int *b){
	
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
	
	printf("After Swapped A :- %i\n",*a);
	printf("After Swapped B :- %i\n",*b);
	
}


main(){
	
	int y,z;
	
	printf("Enter Value A :- ");
	scanf("%i",&y);

	printf("Enter Value B :- ");
	scanf("%i",&z);

	swap(&y,&z);

}
