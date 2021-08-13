/* O programa recebe uma matriz original, seu tamanho N, um valor x que multiplica a matriz original, e também recebe uma matriz posições. Em seguida a matriz posições 
troca as posições da matriz oiginal e transforma ela na matriz corrigida, que é a saída do programa. 
*/ 
#include <stdio.h>
#include <math.h>

int main() {
	float media, desvioPadrao, soma;
	int N, x, i, j, l;
	
	scanf("%d", &N);
	scanf("%d", &x);

	int posicoes[N][N], matrizOriginal[N][N], matrizCorrigida[N][N];

	for(i=0;i<N;i++){
		for(j=0;j<N;j++) {

			scanf("%d", &matrizOriginal[i][j]);
			matrizOriginal[i][j] = matrizOriginal[i][j] * x;
		}
	}

	for(i = 0; i < N; i++) {
		for(j=0; j < N; j++) {

			scanf("%d", &posicoes[i][j]);
		}
	}
		
	for(i=0; i < N; i++) {
		for(j=0; j < N; j++) {

			matrizCorrigida[i][j] =  matrizOriginal[j][posicoes[i][j]];
		}
	}
		
	printf("Matriz corrigida\n");
	for(i=0; i < N; i++) {
		for(j=0; j<N; j++) {

			printf("%d\t", matrizCorrigida[j][i]);
		}
		printf("\n");
	}
		
	printf("Somas::");
	for(i=0;i<N;i++){
	 	soma=0;
	  for(j=0;j<N;j++) {
	  
		soma= soma+matrizCorrigida[i][j];
		
  		}

  		printf("%.2f\t", soma);
	  }

     	 printf("\n");
      
     
      
      printf("Medias::");
      for(i=0;i<N;i++){
	  soma=0;
	  for(j=0;j<N;j++) {

		soma=soma+matrizCorrigida[i][j];
		media = soma/N;
  		}
  		printf("%.2f\t", media);
	  }
      printf("\n");
      
      
      printf("Desvios::");
      for(i=0; i <N; i++) {
		soma =0;	

		for(j=0; j < N; j++) soma += matrizCorrigida[i][j];
		
		media = soma/N;
		desvioPadrao=0;

		for(l=0; l <N; l++) {
			desvioPadrao += pow(matrizCorrigida[i][l] - media,2);
		}

		printf("%.2f\t", sqrt(desvioPadrao/N));
	}
	printf("\n");

	return 0;
}

      	
