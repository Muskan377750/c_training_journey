#include<iostream>
using namespace std;
class node{
    public:
    int num;
    node *next;
     
     node(int num){
        this->num = num;
        next = NULL;
     }
     node(){
        this->num = 0;
        next = NULL;
     }
};
class linkedlist{
    public:
    node *start = NULL;

    void insert();
	void del();
    void display(){
        node *temp = start;
        if(start == NULL){
            printf("empty linkedlist !!\n");
            return;
        }
        while(temp != NULL){
            printf("%d ->",temp->num);
                temp =temp->next;
        }
    }
    void atbeg(){
     int val;
    printf("enter data of node: ");
    scanf("%d",&val);
    node *ptr = new node(val);
    if(start == NULL){
        start = ptr;
    }
    else{
        ptr->next = start;
        start = ptr;
    }
}
void atend() {
    int val;
    printf("Enter data of node: ");
    scanf("%d",&val);

    node *newNode = new node(val);

    if(start == NULL){
        start = newNode;
    }
    else{
        node *ptr = start;

        while(ptr->next != NULL){
            ptr = ptr->next;
        }

        ptr->next = newNode;
    }
}
void count(){
     node *ptr = start;
    int count =0;
        while(ptr != NULL){
            
            ptr = ptr->next;
            count++;
        }
        printf("no. of node: %d",count);
    }
    void  edit(){
	int nodevalue,newvalue;
	 node *ptr = start;
	printf("enter the value of node: ");
	scanf("%d",&nodevalue);
	printf("enter the newvalue: ");
	scanf("%d",&newvalue);
	while(ptr != NULL){
		if(ptr->num == nodevalue){
			ptr->num = newvalue;
			break;
		}
		ptr = ptr->next;
		
	}
	
} ;
void delbeg()
{
    if(start == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    node *temp = start;
    start = start->next;
    delete temp;
};
void delend(){
	if(start == NULL){
		printf("Empty list\n");
		return;
	}
	if(start->next==NULL){
		delete start;
		start = NULL;
		return;
	}
	node *ptr = start;
	while(ptr->next->next!=NULL){
		ptr = ptr->next;
	} 				
	delete ptr->next;
	ptr->next = NULL;
};
void delbefore(){
	
	 
};

void before(){
    int val,key;
	printf("Enter value: ");
	scanf("%d",&val);
	printf("Insert before which key: ");
	scanf("%d",&key);

	node * newnode = new node(val);
	if(start == NULL){
		printf("Linked list is empty");
		return;
	}
	if(start->num==key){
		newnode->next = start;
		start = newnode;
		return;
	}
	node *ptr = start;
	while(ptr->next!=NULL&&ptr->next->num!=key){
		ptr = ptr->next;
		if(ptr->next==NULL){
			printf("Node not found!");
			delete newnode;
			return;
		}
	}	
	newnode->next = ptr->next;
		ptr->next = newnode;			
}

void after(){
	int val , key;
	printf("Enter the value you want to add: ");
	scanf("%d",&val);
	printf("Insert in after which key: ");
	scanf("%d",&key);

	node *ptr = start;

	while(ptr!=NULL&&ptr->num!=key){
		ptr= ptr->next;
		if(ptr==NULL){
			printf("Node not found");
			return;
		}
	}
		node * newnode = new node(val);
	    newnode->next = ptr->next;
		ptr->next = newnode;
};

};
// linkedlist l1;   //ptr ->atbeg();
//  *ptr = new linkedlist(); //ptr ->atbeg();
int main ( )
{
    linkedlist l1;
	int ch1;
	char choice1='y';
	// start = nullptr;
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
			   l1.insert ( );
				break;
			case 2:
			  l1.display ( );
				break;
//
			case 3:
				l1.del ( );
				break;
			case 4:
				l1.edit ( );
				break;
			case 5:
				l1.count ( );
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
	} while (choice1== 'y');
	return 0;
}	// end of main //

void linkedlist::insert( ){
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
				atbeg ( );
				break;
			case 2:
				 atend ( );
				break;
			case 3:
				before ();
				break;
			case 4:
				after ( );
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

void linkedlist::del()
{
	int ch2;
	char choice2='y';
	do
	{
		printf ("\n 1. ATBEG ") ;
		printf ("\n 2. ATEND")  ;
		printf ("\n 3. BEFORE") ;
		printf ("\n 4. AFTER ")	 ;
		printf ("\n 5. ATPOSITION")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch2);
		switch(ch2)
		{
			case 1:
				delbeg ();
				break;
			case 2:
				delend ();
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