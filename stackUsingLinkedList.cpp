#include <iostream>
using namespace std;

class Node
{
public : 
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack //nama kelas
{

private : //akses modifier
    Node *top;

public : //akses modifier
    stack()
    {

        top = NULL;
    }

    