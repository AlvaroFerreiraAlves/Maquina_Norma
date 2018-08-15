#include<stdio.h>
#include<stdlib.h>

int mult(int ei[]){
	int i,ea[5];
	
	for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate B = 0 faca (B := B - 1)");
				printf("\n");
	
	while(ei[1]!=0){
		ei[1] = ei[1]-1;
				for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate B = 0 faca (B := B - 1)");
				printf("\n");
	
	}
	
		while(ei[0]!=0){
		ei[1] = ei[1]+1;
		ei[4] = ei[4]+1;
		ei[0] = ei[0]-1;
				for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate A = 0 faca (D := D + 1; E := E + 1; A := A - 1 )");
				printf("\n");
	
	}
		while(ei[3]!=0){
		ei[1] = ei[1]+1;
		ei[3] = ei[3]-1;
				for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate D = 0 faca (B := B + 1; D := D - 1)");
				printf("\n");
	
	}
//----------------------------------------------------------------

	while(ei[4]!=0){
		while(ei[1]!=0){
			ei[2]=ei[2]+1;
			ei[3]=ei[3]+1;
			ei[1]=ei[1]-1;
				for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate E = 0( ate B = 0 faca (C := C + 1; D := D + 1; B := D - 1))");
				printf("\n");
			
		}
		
		while(ei[3]!=0){
			ei[1] = ei[1]+1;
			ei[3] = ei[3]-1;
				for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate E = 0( ate D = 0 faca (B := B + 1; D := D - 1))");
				printf("\n");
			
			
		}
		ei[0]=ei[0]+1;
		ei[4]=ei[4]-1;
			for(i=0;i<5;i++){
				printf("%d,",ei[i]);	
				}
				printf("---ate E = 0 faca (A := A + 1; E := E - 1)");
				printf("\n");
			
	}
	
	
	
		
	
}
	

main(){	

	int reg[4];
	int i;
	
	reg[0]='A';
	reg[1]='B';
	reg[2]='C';
	reg[3]='D';
	reg[4]='E';

	
	for(i=0;i<1;i++){
		printf("\nDigite o valor de %c :",reg[i]);
		scanf("%d",&reg[i]);
		
	}
		reg[1]=2;
		reg[2]=0;
		reg[3]=0;
		reg[4]=0;
	
	mult(reg);
	
}
