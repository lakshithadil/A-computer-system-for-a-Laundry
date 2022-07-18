/*
PROJECT NAME - A COMPUTER SYSTEM FOR A LAUNDRY
GROUP NUMBER - 50
*/



#include <stdio.h>
void main()
{


//WELCOME SCREEN

for(int i=0;i<33;i++){
		printf("*");
		}
		
		printf("\n");

		for(int i=0;i<33;i++){
		printf("_");
		}


		printf("\n\nWELCOME TO A.L.M. LAUNDRY SERVICE\n\n");

                                          for(int i=0;i<33;i++){
		printf("_");
		}

                      printf("\n\n");

		for(int i=0;i<33;i++){
		printf("*");
		}
		
	
	printf("\n\n\nProject Title : A Computer System For A Laundry \nPurpose       : Manage the laundry\n");

	
while(1){


	int num;  
	printf("\n\nPlease enter component number you wish learn more :");

	scanf(" %d",&num);

	if(num == 1){
	printf("\nAdditional Details about the component 1\nComponent  : Registration\nDeverloper : FERNANDO H.A.S.\nTasks      :\n\t\t\t*Adding new customers to the system\n\t\t\t*Updating information of the existing customers\n\t\t\t*Removing existing customers");
	
break;	
	}

	
	else if(num == 2){
	printf("\nAdditional Details about the component 2\nComponent  : Categorization\nDeverloper : HERATH H.M.L.D.\nTasks      :\n\t\t\t*Cloth type categorization\n\t\t\t*Clean type categorization");
	
break;	
	}


	else if(num == 3){
	printf("\nAdditional Details about the component 3\nComponent  : Payment System\nDeverloper : JAYASINGHE M.G.\nTasks      :\n\t\t\t*Identifying the cloth type\n\t\t\t*Identifying the quantity/weight\n\t\t\t*Calculating the payment for wash and dry clean\n\t\t\t*Payment for iron\n\t\t\t*Final payment");
	
break;	
	}



	else{
	printf("\nSorry!!!\nWe have only three components\nPlease enter the valid component number! ");


	}

	}


	printf("\n\n");



//COMPONENT 1 -TASK
/*
COMPONENT  - REGISTRATION
TASK       - ADDING NEW CUSTOMER TO THE SYSTEM
*/


while(1){

	printf("Customer Registration\n\n");
	char dtl[4][10] = {"ID","Name","Address","Mobile"};
	char ans[4][200];
	char m[3];	

	for(int i=0;i<4;i++)
	{
		printf("Enter customer %s: ",dtl[i]);
		scanf(" %s",&ans[i]);
	}	
	
	printf("\n");
	for(int i=0;i<4;i++)	
	{
		printf("\tCustomer %s =  %s\n",dtl[i],ans[i]);
	}
	


	printf("\n\n");
	
	
	printf("If the above details are correct(y/n)?\n");
	scanf(" %c",&m[0]);

	if(m[0]=='y')
		{
			printf("Customer registerd successfully!!\n");
		break;}
	else if(m[0]=='n')
		{
			printf("Please enter the details again\n");
		}else
{printf("Invalid Input\n");}}


//COMPONENT 2 -TASK
/*
COMPONENT - CATEGORIZATION
TASK      - CLOTH TYPE CATEGORIZATION
*/


	char r[3][4] = {"SB","TSU","O"};
	char a[3];
	char cn[3][25] ={"sarees/blazers","trousers/shirts/uniforms","other"};


	for(int i=0;i<3;i++){
	printf("Are there any %s? (y/n) :",cn[i]);
	scanf(" %c",&a[i]); 
	}

	if(a[0] == 'y' && a[1] == 'y' && a[2] == 'y'){
	printf("\nyour cloth types: %s , %s , %s",r[0],r[1],r[2]);}

	else if(a[0] == 'y' && a[1] == 'y' && a[2] == 'n'){
	printf("\nyour cloth types: %s , %s",r[0],r[1]);}

	else if(a[0] == 'y' && a[1] == 'n' && a[2] == 'n'){
	printf("\nyour cloth types: %s ",r[0]);}

	else if(a[0] == 'n' && a[1] == 'y' && a[2] == 'n'){
	printf("\nyour cloth types: %s ",r[1]);}

	else if(a[0] == 'n' && a[1] == 'n' && a[2] == 'y'){
	printf("\nyour cloth types: %s",r[2]);}

	else if(a[0] == 'y' && a[1] == 'n' && a[2] == 'y'){
	printf("\nyour cloth types: %s , %s",r[0],r[2]);}

	else if(a[0] == 'n' && a[1] == 'y' && a[2] == 'y'){
	printf("\nyour cloth types: %s , %s",r[1],r[2]);}

	else{
	printf("\nNO ANY CLOTH TYPES");}

	

	printf("\n\n");


//COMPONENT 3 -TASK
/*
COMPONENT - PAYMENT SYSTEM
TASK      - IDENTIFYING THE CLOTH TYPE ,QUANTITY & WEIGHT
*/


	float w[4];
//1
	if(a[0] == 'y' && a[1] == 'y' && a[2] == 'y'){


	for(int i=0;i<3;i++){
	printf("How many clothes in '%s'?:",r[i]);
	scanf(" %d",&w[i]);}

	printf("What is the weight(Kg) of '%s'?:",r[2]);
	scanf(" %d",&w[3]);
	 }

//2
	else if(a[0] == 'y' && a[1] == 'y' && a[2] == 'n'){


	for(int i=0;i<2;i++){
	printf("How many clothes in '%s'?:",r[i]);
	scanf(" %d",&w[i]);}
	}

//3
	else if(a[0] == 'y' && a[1] == 'n' && a[2] == 'n'){


	printf("How many clothes in '%s'?:",r[0]);
	scanf(" %d",&w[0]);
	}

//4
	else if(a[0] == 'n' && a[1] == 'y' && a[2] == 'n'){


	printf("How many clothes in '%s'?:",r[1]);
	scanf(" %d",&w[1]);
	}

//5
	else if(a[0] == 'n' && a[1] == 'n' && a[2] == 'y'){


	printf("How many clothes in '%s'?:",r[2]);
	scanf(" %d",&w[2]);

	printf("What is the weight(Kg) of '%s'?:",r[2]);
	scanf(" %d",&w[3]);
	}

//6
	else if(a[0] == 'y' && a[1] == 'n' && a[2] == 'y'){


	for(int i=0;i<3;i=i+2){
	printf("How many clothes in '%s'?:",r[i]);
	scanf(" %d",&w[i]);}

	printf("What is the weight(Kg) of '%s'?:",r[2]);
	scanf(" %d",&w[3]);
	}
//7
	else if(a[0] == 'n' && a[1] == 'y' && a[2] == 'y'){


	for(int i=1;i<3;i++){
	printf("How many clothes in '%s'?:",r[i]);
	scanf(" %d",&w[i]);}
	
	
	printf("What is the weight(Kg) of '%s'?:",r[2]);
	scanf(" %d",&w[3]);	

	}

//8


	else{
	}









}
