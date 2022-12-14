#include<stdio.h>

main(){
	
	int n;
	
	printf("Enter Size :- ");
	scanf("%i",&n);
	
	int a[n];
	int *p[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		printf("Enter Value[%i] :- ",i);
		scanf("%i",&a[i]);
		
	}
	
	for(i=0; i<n; i++){
		
		p[i] = &a[i];
		
		printf("%u => %i\n",p[i],*p[i]);
	}
	
	
}
