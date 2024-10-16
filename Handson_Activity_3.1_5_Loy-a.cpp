#include <stdio.h>

int main() {
    int num;
    float radius,pi=3.14159265358979323846, L=0, W, B, H, S ,give, ans;
    
    
    printf("(1) Find the Area of a circle\n");
    printf("(2) Find the Find the area of a rectangle\n");
    printf("(3) Find the area of a triangle\n");
    printf("(4) Find the area of a square\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    switch(num) {
        case 1: 
            printf("Area of a circle\n");
            printf("Give a radius:");
            scanf("%f", &radius);
            
            ans=pi*pow(radius, 2);
            
            printf("Find the area of a circle:%f",ans);
            break;
            
        case 2: 
            printf("Find the area of a rectangle\n");
            printf("Give lenght:");
            scanf("%f", &L);
            
            printf("Give Width:");
            scanf("%f", &W);
            
            ans=(L*W);
            
            printf("cm:%f\n",ans);
            break;
            
        case 3:
            printf("Find the area of a triangle\n");
            printf("Give base:");
            scanf("%f", &B);
            
            printf("Give height:");
            scanf("%f", &H);
            
            ans=(0.5*H*B);
            
            printf("The area of the Triangle:%f\n",ans);
            break;
            
        case 4:
            printf("Find the area of a square\n");
            printf("Give the side value of square:");
            scanf("%f", &S);
            
            ans= pow(S,2);
            
            printf("feet:%f",ans);
            break;
            
        default:
            printf("None of the choiches.\n");
    }
    
    return 0;
}
