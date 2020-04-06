#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

struct Stack{
    int data[20];
    int top;
};


void createStack();
void push(int input);
int pop(void);
bool isEmpty(void);
bool isFull(void);
void print(void);

Stack S;


#endif