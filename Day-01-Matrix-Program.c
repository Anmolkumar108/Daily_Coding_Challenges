#include<stdio.h>
int main(){
int firstMatrix[3][3], SecondMatrix[3][3], ThirdMatrix[3][3];
int i, j, k;
printf("Enter the elements of first matrix (3 x 3): \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("FirstMatrix[%d][%d]: ", i, j);
        scanf("%d", &firstMatrix[i][j]);
    }
}
printf("Enter the elements of second matrix (3 x 3): \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("SecondMatrix[%d][%d]: ", i, j);
        scanf("%d", &SecondMatrix[i][j]);
    }
}
// Matrix Print 
printf("\n--- First Matrix ---\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d \t", firstMatrix[i][j]);
    }
    printf("\n");
}
printf("\n--- Second Matrix ---\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d \t", SecondMatrix[i][j]);
    }
    printf("\n");
}
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            ThirdMatrix[i][j] = 0;
            for(k=0; k<3; k++){
                ThirdMatrix[i][j] += firstMatrix[i][k] * SecondMatrix[k][j];
            }
        }
    }
    printf("\n--- Third Matrix (Product) ---\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d \t", ThirdMatrix[i][j]);
        }
        printf("\n");
    }
}
