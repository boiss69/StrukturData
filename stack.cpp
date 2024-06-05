#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

// Using this function we will be pushing elements into the stack
void push(int data)
{

    struct Node* tem;
    tem = new Node();

    if (!tem)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    tem->data = data;

    tem->link = top;

    top = tem;
}

// Using this function we will be checking whether the stack is empty or not
int isEmpty()
{
    return top == NULL;
}

// Using this function we will return the top element of the stack
int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

// Using this function we will pop the top element of the stack
void pop()
{
    struct Node* tem;

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        tem = top;

        top = top->link;

        tem->link = NULL;

        free(tem);
    }
}

// this function will be used to display the items of the stack
void display()
{
    struct Node* tem;

    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        tem = top;
        while (tem != NULL)
        {

            cout << tem->data << "-> ";

            tem = tem->link;
        }
    }
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    display();

    cout << "\nTop element: "<< peek() << endl;

    pop();
    pop();

    cout<<"Stack setelah popping 2 kali \n";
    display();

    cout << "\nTop element: "<< peek() << endl;
        
    return 0;
}
