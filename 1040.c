#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4, nr, media = 0;
    
    scanf("%f", &n1);
    media = 2 * n1;
    
    scanf("%f", &n2);
    media += 3 * n2;
    
    scanf("%f", &n3);
    media += 4 * n3;
    
    scanf("%f", &n4);
    media += 1 * n4;
    
    media = media / 10;
    
    printf("Media: %.1f\n", media);
    
    if (media >= 7){
        printf("Aluno aprovado.\n");
    }
    
    if (media >= 5 && media < 7){
        printf("Aluno em exame.\n");
        
        scanf("%f", &nr);
        printf("Nota do exame: %.1f\n", nr);
        
        media = (media + nr) / 2;
        
        if (media >= 5){
            printf("Aluno aprovado.\n");
        }
        
        else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", media);
        
    }
    
    if (media < 5){
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}