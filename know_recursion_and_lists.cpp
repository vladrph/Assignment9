#include <iostream>

using namespace std;

class node
{
public:


    node * next;
    int data;
};








void fun( node* start)
{
 if(start == NULL)
return;
 cout<< start->data<< endl;
 if(start->next != NULL )
fun(start->next->next);
 cout<< start->data<<endl;
}
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

