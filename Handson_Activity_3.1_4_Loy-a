#include <stdio.h>

int main() {
    int num;
    float cm=2.54, inch=0.393701, feet=3.28084, meter=0.3048, give, ans;
    
    printf("(1) cm - inches\n");
    printf("(2) inches - cm\n");
    printf("(3) feet - meter\n");
    printf("(4) meter - feet\n");
    
    printf("Select a number you want to convert: ");
    scanf("%d", &num);
    
    switch(num) {
        case 1: 
            printf("cm to inch:");
            scanf("%f", &give);
            
            ans=(give*inch);
            
            printf("inch:%f\n",ans);
            break;
            
        case 2: 
            printf("inch to cm:");
            scanf("%f", &give);
            
            ans=(give*cm);
            
            printf("cm:%f\n",ans);
            break;
            
        case 3:
            printf("feet to meter:");
            scanf("%f", &give);
            
            ans=(give*meter);
            
            printf("meter:%f\n",ans);
            break;
            
        case 4:
            printf("meter to feet:");
            scanf("%f", &give);
            
            ans=(give*feet);
            
            printf("feet:%f\n",ans);
            break;
            
        default:
            printf("None of the choiches.\n");
    }
    
    return 0;
}
