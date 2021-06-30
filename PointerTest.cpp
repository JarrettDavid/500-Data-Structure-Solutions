/*************************************************************
*
*             Print all sub-arrays that equal zero
*
*************************************************************/

#include <iostream>
#include <stdio.h>

class PointerTest {

    public:
        int test;
        int *arrayValue = new int();
        explicit PointerTest(int test = 7) : storeValue(test){}
        
        int PrintPtr() const 
        {
            return storeValue;
        }
        
    private:
        int storeValue;

};//end of SubArrayCheck


int main() {

    using namespace std;

    PointerTest *test1 = new PointerTest(23);
    PointerTest *test2 = new PointerTest(47);
    
    test1->test = 75;
    test2->test = 97;
    

    cout<<"The current value in test 1: "<<test1->test<<endl;
    cout<<"The current value in test 2: "<<test2->test<<endl;
    
    cout<<"The recently stored ptr value test 1: "<<test1->PrintPtr()<<endl;
    cout<<"The recently stored ptr value test 2: "<<test2->PrintPtr()<<endl;
    
    for(int x = 0; x <= 10; x++)
    {
        test1->arrayValue[x] = (x * 2);
    }
    
    cout<<"The values in test 1 arrayValue:"<<endl;
    for(int x = 0; x <= 10; x++)
    {
        cout<<test1->arrayValue[x]<<" ";
    }
    cout<<endl;
    
    
    for(int y = 0; y <= 10; y++)
    {
        test2->arrayValue[y] = (y * 6 + 2);
    }
    
    cout<<"The values in test 2 arrayValue:"<<endl;
    for(int y = 0; y <= 10; y++)
    {
        cout<<test2->arrayValue[y]<<" ";
    }
    cout<<endl;
    
    return 0;
    
}//end of main