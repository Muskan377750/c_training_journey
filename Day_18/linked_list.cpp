//DSA
#include<stdio.h>
#include<stdlib.h>
struct node // self ref. structure
{
	int num;    // data       
	struct node *next;
};
struct node *start = NULL;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void exit();
void atbeg();
void atbeg1();
void atend();
void atend1();
void before();
void before1();
void after();
void after1();
void atpos();
void atpos1();

int main ( )
{
	int ch1;
	char choice1='y';
	start=NULL;
	system("cls");  // clrscr();
	do
	{
		printf("\n LINKED LIST PROJECT \n");
		printf ("\n 1. INSERT     ");
		printf ("\n 2. DISPLAY     ");
		printf ("\n 3. DELETE      ");
		printf ("\n 4. EDIT        ");
		printf ("\n 5. COUNT NODES ");
		printf ("\n 6. SORTING      ");
		printf ("\n 7. REVERSE     ");
		printf ("\n 8. EXIT        ");
		printf ("\n\n Enter Your Choice = ");
		scanf("%d",&ch1);
		switch (ch1)
		{
			case 1:
			    insert ( );
				break;
			case 2:
			display ( );
				break;
//
			case 3:
				del ( );
				break;
			case 4:
				edit ( );
				break;
			case 5:
				count ( );
				break;
			case 6:
//				sort();
				break;
			case 7:
//				reverse ( );
				break;
			case 8:
				choice1='n';
				break;
			default:
				printf ("invalid choice");
		}
	} while (choice1 == 'y');
	return 0;
}	// end of main //
void insert ()
{
	int ch2;
	char choice2='y';
	do
	{
		printf ("\n 1. ATBEG ") ;
		printf ("\n 2. ATEND")  ;
		printf ("\n 3. BEFORE") ;
		printf ("\n 4. AFTER ")	 ;
		printf ("\n 5. ATPOSI")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch2);
		switch(ch2)
		{
			case 1:
				atbeg ( );
				break;
			case 2:
				atend ( );
				break;
			case 3:
//				before ( );
				break;
			case 4:
//				after ( );
				break;
			case 5:
//				atpos ( );
				break;
			case 6:
				choice2='n';
				break;
			default:
				printf("INVALID CHOICE");
		}
	}while(choice2=='y');
}// Last Line
void del ( )
{
	int ch2;
	char choice2 = 'y';
	do
	{
		printf ("\n 1. ATBEG ") ;
		printf ("\n 2. ATEND")  ;
		printf ("\n 3. BEFORE") ;
		printf ("\n 4. AFTER ")	 ;
		printf ("\n 5. ATPOSI")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch2);
		switch(ch2)
		{
			case 1:
//				atbeg ( );
				break;
			case 2:
//				atend ( );
				break;
			case 3:
//				before ( );
				break;
			case 4:
//				after ( );
				break;
			case 5:
//				atpos ( );
				break;
			case 6:
				choice2='n';
				break;
			default:
				printf("INVALID CHOICE");
		}
	}while(choice2=='y');
}// Last Line
void atbeg(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter data of node");
    scanf("%d",&ptr->num);
    ptr->next  =  NULL;
    if(start == NULL){
        start = ptr;
    }
    else{
        ptr->next = start;
        start = ptr;
    }
}

void display(){
    struct node *temp = start;
    if(start == NULL){
        printf("empty linkedlist !!\n");
        return;
    }
    while(temp != NULL){
        printf("%d ->",temp->num);
            temp =temp->next;
    }
        printf("NULL\n");
}
void atend(){
    struct node *temp = start;
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter data of node");
    scanf("%d",&ptr->num);
    ptr->next  =  NULL;

    if(start == NULL){
        start = ptr;
    }
    else{ //step : 3
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =ptr; //step : 4
}
}
void count(){
    struct node *temp = start;
    int count =0;
        while(temp != NULL){
            
            temp = temp->next;
            count++;
        }
        printf("no. of node: %d",count);
    }
void  edit(){
	int nodevalue,newvalue;
	struct node *temp = start;
	printf("enter the value of node: ");
	scanf("%d",&nodevalue);
	printf("enter the newvalue: ");
	scanf("%d",&newvalue);
	while(temp != NULL){
		if(temp->num == nodevalue){
			temp->num = newvalue;
			break;
		}
		temp = temp->next;
		
	}
	  printf("Node not found.\n");
}