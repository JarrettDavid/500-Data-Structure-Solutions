/******************************************************************************

                 Find the Kth last value in a Single Linked List

*******************************************************************************/
#include <iostream>

using namespace std;

class LinkedListNode
{
    public:
        int intValue_;
        LinkedListNode* next_;
    
        LinkedListNode(int intValue) :
            intValue_(intValue),
            next_(nullptr)
        {}    
};
    
int kthToLastNode(int i, LinkedListNode* start) 
{
  int retrival;
  int state = 1;
  int listSize = 0;
  
  LinkedListNode* temp = start->next_;
  LinkedListNode* returnedPtr = start->next_;
  
  while(state == 1)
  {
     if(temp->next_ != NULL)
     {
        temp = temp->next_;
        listSize+=1;
     }
     else
     {
         state = 0;
     }
  }
  retrival = listSize - i;
  
  for(int ip = 0; ip <= (retrival); ip++)
      returnedPtr = returnedPtr->next_;
      
  return returnedPtr->intValue_;
}

int main()
{
    LinkedListNode* a = new LinkedListNode(1);
    LinkedListNode* b = new LinkedListNode(2);
    LinkedListNode* c = new LinkedListNode(3);
    LinkedListNode* d = new LinkedListNode(4);
    LinkedListNode* e = new LinkedListNode(5);
    LinkedListNode* f = new LinkedListNode(6);
    
    a->next_ = b;
    b->next_ = c;
    c->next_ = d;
    d->next_ = e;
    e->next_ = f;
    
    //cout<<"The Next ptr for head is "<< a->next_ <<endl;
    cout<<"The Next ptr for head is "<< kthToLastNode(3, a) <<endl;
    return 0;
}
