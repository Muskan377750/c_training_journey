#include <iostream>
using namespace std;

class node
{
public:
    int num;
    node *next;
    node *prev;

    node(int num)
    {
        this->num = num;
        next = nullptr;
        prev = nullptr;
    }

    node()
    {
        num = 0;
        next = nullptr;
        prev = nullptr;
    }
};

class linkedlist
{
public:
    node *start;

   linkedlist() : start(nullptr) {}
    void insert();
    void del();
    void display();
    void edit();
    void count();

    void atbeg();
    void atend();
    void before();
    void after();
    void atpos();

    void delbeg();
    void delend();
    void delbefore();
    void delafter();
    void delatpos();

    void sort();
    void reverse();
    ~linkedlist();
};

int main()
{
    linkedlist l1;

    int ch1;
    char choice1 = 'y';

    do
    {
        cout << "\nLINKED LIST PROJECT\n";
        cout << "1. INSERT\n";
        cout << "2. DISPLAY\n";
        cout << "3. DELETE\n";
        cout << "4. EDIT\n";
        cout << "5. COUNT\n";
        cout << "6. SORT\n";
        cout << "7. REVERSE\n";
        cout << "8. EXIT\n";

        cout << "Enter Choice : ";
        cin >> ch1;

        switch (ch1)
        {
        case 1:
            l1.insert();
            break;

        case 2:
            l1.display();
            break;

        case 3:
            l1.del();
            break;

        case 4:
            l1.edit();
            break;

        case 5:
            l1.count();
            break;

        case 6:
            l1.sort();
            break;

        case 7:
            l1.reverse();
            break;

        case 8:
            choice1 = 'n';
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice1 == 'y');

    return 0;
}   

linkedlist::~linkedlist()
{
    node *temp;

    while(start!=nullptr)
    {
        temp=start;
        start=start->next;
        delete temp;
    }
}

void linkedlist::insert()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        cout << "\n1. ATBEG";
        cout << "\n2. ATEND";
        cout << "\n3. BEFORE";
        cout << "\n4. AFTER";
        cout << "\n5. ATPOS";
        cout << "\n6. EXIT";

        cout << "\nEnter Choice : ";
        cin >> ch2;

        switch(ch2)
        {
            case 1:
                atbeg();
                break;

            case 2:
                atend();
                break;

            case 3:
                before();
                break;

            case 4:
                after();
                break;

            case 5:
                atpos();
                break;

            case 6:
                choice2='n';
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice2=='y');
}

void linkedlist::del()
{
    int ch2;
    char choice2 = 'y';

    do
    {
        cout << "\n1. DELETE ATBEG";
        cout << "\n2. DELETE ATEND";
        cout << "\n3. DELETE BEFORE";
        cout << "\n4. DELETE AFTER";
        cout << "\n5. DELETE ATPOS";
        cout << "\n6. EXIT";

        cout << "\nEnter Choice : ";
        cin >> ch2;

        switch(ch2)
        {
            case 1:
                delbeg();
                break;

            case 2:
                delend();
                break;

            case 3:
                delbefore();
                break;

            case 4:
                delafter();
                break;

            case 5:
                delatpos();
                break;

            case 6:
                choice2='n';
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice2=='y');
}

void linkedlist::atbeg()
{
    int val;

    cout<<"Enter Data : ";
    cin>>val;

    node *ptr=new node(val);

    ptr->prev=nullptr;
    ptr->next=start;

    if(start!=nullptr)
        start->prev=ptr;

    start=ptr;
}

void linkedlist::display()
{
    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    node *temp=start;
    node *last=nullptr;

    cout<<"\nForward:\n";

    while(temp!=nullptr)
    {
        cout<<temp->num<<" <-> ";
        last=temp;
        temp=temp->next;
    }

    cout<<"NULL";

    cout<<"\nBackward:\n";

    while(last!=nullptr)
    {
        cout<<last->num<<" <-> ";
        last=last->prev;
    }

    cout<<"NULL\n";
}

void linkedlist::atend()
{
    int val;

    cout<<"Enter Data : ";
    cin>>val;

    node *ptr=new node(val);

    if(start==nullptr)
    {
        start=ptr;
        return;
    }

    node *temp=start;

    while(temp->next!=nullptr)
        temp=temp->next;

    temp->next=ptr;
    ptr->prev=temp;
}

void linkedlist::count()
{
    if(start==nullptr)
{
    cout<<"List is Empty\n";
    return;
}
    int cnt=0;

    node *temp=start;

    while(temp!=nullptr)
    {
        cnt++;
        temp=temp->next;
    }

    cout<<"Total Nodes : "<<cnt<<endl;
}

void linkedlist::edit()
{
    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    int oldvalue,newvalue;

    cout<<"Enter Current Value : ";
    cin>>oldvalue;

    cout<<"Enter New Value : ";
    cin>>newvalue;

    node *temp=start;

    while(temp!=nullptr)
    {
        if(temp->num==oldvalue)
        {
            temp->num=newvalue;
            cout<<"Node Updated Successfully\n";
            return;
        }

        temp=temp->next;
    }

    cout<<"Value Not Found\n";
}

void linkedlist::before()
{
    int val,key;

    cout<<"Enter Value : ";
    cin>>val;

    cout<<"Insert Before : ";
    cin>>key;

    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    node *curr=start;

    while(curr!=nullptr && curr->num!=key)
        curr=curr->next;

    if(curr==nullptr)
    {
        cout<<"Value Not Found\n";
        return;
    }

    node *ptr=new node(val);

    ptr->next=curr;
    ptr->prev=curr->prev;

    if(curr->prev!=nullptr)
        curr->prev->next=ptr;
    else
        start=ptr;

    curr->prev=ptr;
}

void linkedlist::after()
{
    int val,key;

    cout<<"Enter Value : ";
    cin>>val;

    cout<<"Insert After : ";
    cin>>key;

    node *curr=start;

    while(curr!=nullptr && curr->num!=key)
        curr=curr->next;

    if(curr==nullptr)
    {
        cout<<"Value Not Found\n";
        return;
    }

    node *ptr=new node(val);

    ptr->next=curr->next;
    ptr->prev=curr;

    if(curr->next!=nullptr)
        curr->next->prev=ptr;

    curr->next=ptr;
}
void linkedlist::atpos()
{
    int val,pos;

    cout<<"Enter Value : ";
    cin>>val;

    cout<<"Enter Position : ";
    cin>>pos;

    node *ptr=new node(val);

    if(pos==1)
    {
        ptr->next=start;

        if(start!=nullptr)
            start->prev=ptr;

        start=ptr;
        return;
    }
    if(pos < 1)
{
    cout << "Invalid Position\n";
    delete ptr;
    return;
}

if(start == nullptr && pos != 1)
{
    cout << "Invalid Position\n";
    delete ptr;
    return;
}

    node *temp=start;

    for(int i=1;i<pos-1 && temp!=nullptr;i++)
        temp=temp->next;

    if(temp==nullptr)
    {
        cout<<"Invalid Position\n";
        delete ptr;
        return;
    }

    ptr->next=temp->next;
    ptr->prev=temp;

    if(temp->next!=nullptr)
        temp->next->prev=ptr;

    temp->next=ptr;
}

void linkedlist::sort()
{
    if(start==nullptr || start->next==nullptr)
    {
        cout<<"Nothing to Sort\n";
        return;
    }

    node *i,*j;

    for(i=start;i->next!=nullptr;i=i->next)
    {
        for(j=i->next;j!=nullptr;j=j->next)
        {
            if(i->num > j->num)
            {
                int temp=i->num;
                i->num=j->num;
                j->num=temp;
            }
        }
    }

    cout<<"Linked List Sorted Successfully\n";
}

void linkedlist::reverse()
{
    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    node *current=start;
    node *temp=nullptr;

    while(current!=nullptr)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;

        current=current->prev;
    }

    if(temp!=nullptr)
        start=temp->prev;

    cout<<"Linked List Reversed Successfully\n";
}

void linkedlist::delbeg()
{
    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    node *temp=start;

    start=start->next;

    if(start!=nullptr)
        start->prev=nullptr;

    delete temp;

    cout<<"Node Deleted Successfully\n";
}

void linkedlist::delend()
{
    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    if(start->next==nullptr)
    {
        delete start;
        start=nullptr;
        cout<<"Node Deleted Successfully\n";
        return;
    }

    node *temp=start;

    while(temp->next!=nullptr)
        temp=temp->next;

    temp->prev->next=nullptr;

    delete temp;

    cout<<"Node Deleted Successfully\n";
}

void linkedlist::delbefore()
{
    int key;

    if(start==nullptr || start->next==nullptr)
    {
        cout<<"Not Enough Nodes\n";
        return;
    }

    cout<<"Delete Before : ";
    cin>>key;

    node *curr=start;

    while(curr!=nullptr && curr->num!=key)
        curr=curr->next;

    if(curr==nullptr)
    {
        cout<<"Value Not Found\n";
        return;
    }

    if(curr->prev==nullptr)
    {
        cout<<"No Node Exists Before This Value\n";
        return;
    }

    node *del=curr->prev;

    if(del->prev==nullptr)
    {
        start=curr;
        curr->prev=nullptr;
    }
    else
    {
        del->prev->next=curr;
        curr->prev=del->prev;
    }

    delete del;

    cout<<"Node Deleted Successfully\n";
}

void linkedlist::delafter()
{
    int key;

    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    cout<<"Delete After : ";
    cin>>key;

    node *curr=start;

    while(curr!=nullptr && curr->num!=key)
        curr=curr->next;

    if(curr==nullptr)
    {
        cout<<"Value Not Found\n";
        return;
    }

    if(curr->next==nullptr)
    {
        cout<<"No Node Exists After This Value\n";
        return;
    }

    node *del=curr->next;

    curr->next=del->next;

    if(del->next!=nullptr)
        del->next->prev=curr;

    delete del;

    cout<<"Node Deleted Successfully\n";
}

void linkedlist::delatpos()
{
    int pos;

    cout<<"Enter Position : ";
    cin>>pos;

    if(pos<1)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(start==nullptr)
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    if(pos==1)
    {
        delbeg();
        return;
    }

    node *temp=start;

    for(int i=1;i<pos && temp!=nullptr;i++)
        temp=temp->next;

    if(temp==nullptr)
    {
        cout<<"Invalid Position\n";
        return;
    }

    temp->prev->next=temp->next;

    if(temp->next!=nullptr)
        temp->next->prev=temp->prev;

    delete temp;

    cout<<"Node Deleted Successfully\n";
}
