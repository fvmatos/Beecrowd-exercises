#include <stdio.h>
 
int main() {
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
        break;
    }
    
    if (a * a == b * b + c * c){
        printf("TRIANGULO RETANGULO\n");
    }
    
    if (a * a > b * b + c * c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    
    else if (a * a < b * b + c * c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    
    else if (a == b && b != c || a == c && c != b || b == c && c != a){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}