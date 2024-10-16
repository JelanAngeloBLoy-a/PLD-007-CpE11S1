#include <stdio.h>
int main()
{
	float Constant=1, AccountNumber, BeginningBalance, TotalCharge, CreditLimit, Credit, Balance;
	

	while(Constant=1)
	{

	printf("Enter account number:");
	scanf("%f",&AccountNumber);
	
	    if (AccountNumber!=-1)
    	{
		
		printf("Enter beginning balance:");
		scanf("%f",&BeginningBalance);
		
	    printf("Enter total charges:");
		scanf("%f",&TotalCharge);
		
		float total;
		total=(TotalCharge+BeginningBalance);
		

		printf("Enter total credit:");
		scanf("%f",&Credit);
		
		printf("Enter total credit limit:");
		scanf("%f",&CreditLimit);
		
        if (AccountNumber=100)
        {
		
		if (CreditLimit<5501.00)
		{
		Balance=(total-Credit);
			
		printf("Balance:%f\n",Balance);
	    }
	    }
	    
	    else if (AccountNumber=200)
        {
		
		if (CreditLimit<1500.00)
		{
		Balance=(total-Credit);
			
		printf("Balance:%f\n",Balance);
	    }
	    }
	    
	    else if (AccountNumber=300)
        {
		
		if (CreditLimit<800.00)
		{
		Balance=(total-Credit);
			
		printf("Balance:%f\n",Balance);
	    }
	    }
		
	    else 
	    {
	    	printf("Credit Limit Exceeded\n");	
		}
		
	    } 
	    else if (AccountNumber==-1)
        {
        	printf("Stop\n");
			break;
		}
	}
	    
     
	return 0;
}
