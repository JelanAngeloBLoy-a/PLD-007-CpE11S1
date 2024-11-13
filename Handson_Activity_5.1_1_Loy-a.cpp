#include <stdio.h>

	void Bits( unsigned int num) {		
 int i,conversion;
 
        printf("Before reverse:\n ");
        for(i=8;i>=0;i--){
			conversion= num%2;
        	   printf("%d",conversion);
        	    int bit = (num>> i) & 1;
        	     printf("%d", bit);
		}
        
    }

void reverseBits( unsigned int num) {		
 int i,conversion;
 
       printf("\nAfter reverse:\n ");
        for(i=8;i>=0 ;i--){
			conversion= num%2;
        	   printf("%d",conversion);
        	    int bit = (num >> i-8) & 1;
        	     printf("%d", bit);
		} 
    }
	
int main() {
   int num;
    
    printf("Enter a number: ");
    scanf("%u", &num);
    
   Bits( num);
   reverseBits(num);

    return 0;
}
