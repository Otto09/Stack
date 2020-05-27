#include <iostream>

using namespace std;

void push(int a[], int &stack_pointer, int value);
void afisez(int a[], int &stack_pointer);
int pop(int a[], int &stack_pointer);

int main()
{
    int stiva[100] = {12, 31, 7, 19};
    int sp = 3;

    push(stiva, sp, 56);//Adaug in stiva valoarea 56

    afisez(stiva, sp);

    int v = pop(stiva, sp);

    afisez(stiva, sp);

    pop(stiva, sp);

    afisez(stiva, sp);

    return 0;
}

void push(int a[], int &stack_pointer, int value)
{
    stack_pointer++;
    a[stack_pointer] = value;
}

void afisez(int a[], int &stack_pointer)
{
    cout << "SP: " << stack_pointer << ", stiva: ";

    for (int i = 0; i <= stack_pointer; i++)
        cout << a[i] << " ";
    cout << endl;
}

int pop(int a[], int &stack_pointer)
{
    stack_pointer--;
    return a[stack_pointer + 1];
}
