#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[7];
	        
	    printf("Digite 7 valores inteiros:\n");
            for (int i = 0; i < 7; i++) {
	         scanf("%d", &vetor[i]);
	     }
		        
	  for (int i = 0; i < 7; i++) {
	      for (int j = i + 1; j < 7; j++) {
		 if (vetor[i] > vetor[j]) {
		     int temp = vetor[i];
		     vetor[i] = vetor[j];
                    vetor[j] = temp;
		      }
		 }
	 }
			    
	 printf("Valores organizados em ordem crescente: ");
	 for (int i = 0; i < 7; i++) {
	 printf("%d ", vetor[i]);
	  }
				    
	 return 0; }
