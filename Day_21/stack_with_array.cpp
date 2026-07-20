#include <iostream>
using namespace std;

class Stack{
int size;
int *arr;
int top;
public:
Stack(int s){
    size = s;
    arr = new int[size];
    top = -1;
}

void push(){
    if(top==size-1){
        cout<<"Stack is full";
        return;
    }else{
        int val;
        cout<<"Enter a value: ";
        cin>>val;
        top++;
        arr[top] = val;
        cout<<"Data inserted!\n";
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if(top==size-1){
        return 1;
    }else{
        return 0;
    }
    
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is Empty. Cannot pop!\n";
        return;
    }

    cout << "Deleted element: " << arr[top] << endl;
    top--;
}

void peek(){
    if(isEmpty()){
        cout<<"Stack is empty! Cannot pop!!\n";
        return;
    }
    cout<<"The peek element is "<<arr[top]<<endl;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    cout<<"Satck Elements: "<<endl;

    for(int i=top;i>=0; i--){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}



~Stack() {
    delete[] arr;
}
};

int main(){
    Stack s1(5);
    int ch1;
    char choice1 = 'y';
    system("cls");

    do
    {
        cout<<"\n STACK PROJECT \n";
        cout<<"\n 1. PUSH     ";
        cout<<"\n 2. ISEMPTY     ";
        cout<<"\n 3. ISFULL      ";
        cout<<"\n 4. POP        ";
        cout<<"\n 5. PEEK ";
        cout<<"\n 6. DISPLAY      ";
        cout<<"\n 7. EXIT        ";
        cout<<"\n\n Enter Your Choice = ";
        cin>>ch1;

        switch (ch1)
        {
        case 1:
            s1.push();
            break;
        case 2:
              if(s1.isEmpty())
                cout << "Stack is Empty\n";
              else
                cout << "Stack is not Empty\n";
             break;
        case 3:
              if(s1.isFull())
                cout << "Stack is Full\n";
              else
                cout << "Stack is not Full\n";
             break;
        case 4:
            s1.pop();
            break;
        case 5:
            s1.peek();
            break;
        case 6:
            s1.display();
            break;
        case 7:
            choice1 = 'n';
            break;
        default:
            cout<<"invalid choice";
        }
    } while (choice1 == 'y');

    return 0;
}