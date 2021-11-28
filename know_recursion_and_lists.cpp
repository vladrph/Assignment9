#include <iostream>


using namespace std;

/********************************************************************************************

Name:Vladimir Petit-Homme	                            Z#:Z15346795
Course: Date Structures and Algorithm Analysis (COP3530) Professor: Dr. Petrie
Due Date: 11/28/2021	Due Time: 11:59pm
Total Points: 100 Assignment 10b: know_recursion_and_list

Description: This assignment  test the function of palindromes and also replaces a subsection of a string with a new string .



*********************************************************************************************/

class node
{
public:


    node * next;
    int data;
};
///////////////////////////////////////////////////////////////////////////////////////////////
//Function Name: fun
//Precondition:  none
//Postcondition: Linked list is created
//Description: Creates a linked list of a specific data type.
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////
void fun( node* start)
{
 if(start == NULL)
return;
 cout<< start->data<< endl;
 if(start->next != NULL )
fun(start->next->next);
 cout<< start->data<<endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//Function Name: add_back
//Precondition:  none
//Postcondition: Node is added to the back of the list.
//Description:Function either inserts a node into an empty list or inserts a node into the back of a list
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////
void add_back(node *&front, node *&back, int x) {
    if (front == NULL){
        node *newNode = new node;
         front = newNode;
         back =newNode;
       //    front->next = newNode;
        newNode->data = x;

        newNode->next = back;
       // front= newNode;

    }else {

        node *newNode = new node;
        newNode->data =x;
        newNode->next =back;
       // front->next = newNode;

       back->next = newNode;
        back = back->next;
      back->next =0;

//cout << "new node data:: " << newNode->data << endl;

    }

}


int main() {
    node* front = 0;
    node* back = 0;
    for (int i = 1; i <= 6; i++)
    {
      //  cout << "i: "<< i << endl;
        add_back(front,back,i);
       // insert(front, back, i);
    }
    fun(front);
    return 0;

}

