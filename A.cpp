#include<stdio.h>
#include<stdlib.h>





int soma(int ei[]){
	int i,ea[4];
	
		for(i=0;i<4;i++){
			printf("%d,",ei[i]);
		}
		printf("---ate A = 0 faca (A := A - 1; D := D + 1)");
		printf("\n");

	while(ei[0]!=0){
		ei[0] = ei[0]-1;
		ei[3] = ei[3]+1;
		for(i=0;i<4;i++){
				printf("%d,",ei[i]);
				
		}
		printf("---ate A = 0 faca (A := A - 1; D := D + 1)");
		printf("\n");
	}
	
	
	
	
	for(i=0;i<4;i++){
			ea[i]=ei[i];
			}	
	
	while(ea[3]!=0){
		ea[3] = ea[3]-1;
		ea[0] = ea[0]+1;
		ea[2] = ea[2]+1;
		
		for(i=0;i<4;i++){
				printf("%d,",ea[i]);
		}
		printf("---ate D = 0 faca (D := D - 1; A := A + 1; C := C + 1)");
		printf("\n");
	}
	
		
			
	for(i=0;i<4;i++){
			ea[i]=ea[i];
			}
			
	while(ea[1]!=0){
		ea[1] = ea[1]-1;
		ea[3] = ea[3]+1;
			for(i=0;i<4;i++){
				printf("%d,",ea[i]);
		}
		printf("---ate B = 0 faca (B := B - 1; D := D + 1)");
		printf("\n");
	}
	
	for(i=0;i<4;i++){
			ea[i]=ea[i];
			}
	
	while(ea[3]!=0){
		ea[3] = ea[3]-1;
		ea[1] = ea[1]+1;
		ea[2] = ea[2]+1;
			for(i=0;i<4;i++){
				printf("%d,",ea[i]);
		}
		printf("---ate D = 0 faca (D := D - 1; B := B + 1; C := C + 1)");
		printf("\n");
	}
	
		for(i=0;i<4;i++){
			printf("%d,",ea[i]);

		}
		printf("-Estado Final");
	
		
}


main(){	

	int reg[3];
	int i;
	
	reg[0]='A';
	reg[1]='B';
	reg[2]='C';
	reg[3]='D';

	
	for(i=0;i<2;i++){
		printf("\nDigite o valor de %c :",reg[i]);
		scanf("%d",&reg[i]);
		
	}
		reg[2]=0;
		reg[3]=0;
	
	soma(reg);
	
}
