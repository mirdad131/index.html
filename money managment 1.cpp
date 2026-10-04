#include<stdio.h>

int main(){
	char store[50];
	char a;
	char b='y';
	int c;
	char e;
	int f;
	char g;
	int h;
	char i[50];
	char j[50];
	long int k;
	char l[50];
	char m[50];
	long int n;
	int o;
	int p;
	
	
	printf("welcome to the money managment system\n");
	printf("\n\tif you need to store money or not:(y/n)");
	scanf(" %c",&a);
	if(a==b){
		printf("enter a bank account name:");
	    scanf("%49s",&store);
	    printf("\nenter how many amount:");
	    scanf("%d",&f);
	    if(f<=1000){
	    	printf("SORRY need a minimum amount to add on the account\n");
	    	printf("\ndo you need to know the minimum amount(y/n):\n");
	    	scanf(" %c",&e);
	        if(e=='y'){
	    		printf("\nTHE MINIMUM AMOUNT IS 3000\n");
			}
			else{
				printf(" ok fine ");
				return 0;
			}
			
		printf("enter how many amount to add:\n");
		scanf("%d",&f);
	    printf("the amount of rupees %d has credited:\n",f);
		printf("now your current bank balance is %d\n",f);
		}
		
		printf("\n\t if you need to transfeer money or some other thing(y/n);");
		scanf(" %c",&g);
		if(g=='y'){
			printf("\tenter 1 for account creation:\n");
			printf("\tenter 2 for bank balance:\n");
			printf("\tenter 3 for money transaction:\n");
			printf("\tenter 4 for adding money:\n");
			scanf("%d",&h);
			if(h==1){
				printf("ok welcome for the account creation\n");
				printf("enter your bank name:\n");
				scanf("%49s",&i);
				printf("enter your name:\n");
				scanf("%49s",&j);
				printf("enter how many money need to put;\n");
				scanf("%ld",&k);
				printf("enter your phone number:\n");
				scanf("%ld",&n);
				printf("the record stored sucessfully!!\n");
				printf("BANK NAME\tYOUR NAME\tAMMOUNT\tPHONE NUMBER\n");
				printf("%s\t%s\t%ld\t%ld",i,j,k,n);}
			else if(h==2){
				printf("your current bank balance is %d",f);
			}
			else if(h==3){
				printf("enter how many need to transfer:");
				scanf("%d",&o);
				if(o>f){
					printf("you dont have enough money to transfer!!\n");
				}
				else{
					printf("now your current amount is %d",f-o);
				}
				
			}
			if(h==4){
				printf("enter how many need to add:\n");
				scanf("%d",&p);
				printf("now your current amount is %d",p+f);
				
			}
			
				
				
			}
			printf("\nTHANKS FOR BEEING A MENBER IN %s\n",i);
		}
		
		
		
		

	printf("\nOK HAVE A GOOD DAY");

	return 0;
}
