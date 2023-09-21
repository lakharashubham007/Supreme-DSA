#include<iostream>
using namespace std;

class Queue{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // constructor
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //push for que by array
void push(int data)
    {
        if (rear == size)
        {
            cout << "Q is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    // pop
    void pop()
    {
        if (front == rear)
        {
            cout << "Q is Empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    // getfront
    int getfront()
    {
        if (front == rear)
        {
            cout << "Q is empty" << endl;
        }
        else
        {
            return arr[front];
        }
         return 0;
    }

    // isEMpty()
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // size

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);

    cout << "Size of q is: " << q.getSize() << endl;

    q.pop();

    cout << "Front of q is: " << q.getfront() << endl;

    if (q.isEmpty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    return 0;
}