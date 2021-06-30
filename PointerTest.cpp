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
        int *testArray = new int();
        PointerTest(int test = 7) : storeValue(test){}

        PointerTest(int Array[]) {
            int size = sizeof(Array)/sizeof(Array[0]);
            std::cout<<size;
            
            for(int i = 0; i <= (size - 1); i++)
            {
                testArray[i] = Array[i];
            }
        }
        
        int PrintPtr() const 
        {
            return storeValue;
        }

        void PrintPtrArray() 
        {
            int size = sizeof(testArray)/sizeof(testArray[0]);
            for(int i = 0; i <= (size - 1); i++)
            {
                std::cout<<testArray[i]<<" ";
            }
        }
        
    private:
        int storeValue;
        int *storeArray = new int();

};//end of SubArrayCheck


int main() {

    using namespace std;
    
    int Test[] = {1,2,3,5,6,7,8,12,435,4,32,7,976};

    PointerTest *test1 = new PointerTest(23);
    
    test1->test = 75;

    cout<<"The current value in test 1: "<<test1->test<<endl;
    
    cout<<"The recently stored ptr value test 1: "<<test1->PrintPtr()<<endl;
    
    for(int x = 0; x <= 10; x++)
    {
        test1->testArray[x] = (x * 2);
    }
    
    cout<<"The values in test 1 arrayValue:"<<endl;
    for(int xi = 0; xi <= 10; xi++)
    {
        cout<<test1->testArray[xi]<<" ";
    }
    cout<<endl;
    cout<<endl;

    PointerTest *test2 = new PointerTest(47);
    
    test2->test = 97;
    
    cout<<"The current value in test 2: "<<test2->test<<endl;
    
    cout<<"The recently stored ptr value test 2: "<<test2->PrintPtr()<<endl;
    
    for(int y = 0; y <= 10; y++)
    {
        test2->testArray[y] = (y * 6 + 2);
    }
    
    cout<<"The values in test 2 arrayValue:"<<endl;
    for(int yi = 0; yi <= 10; yi++)
    {
        cout<<test2->testArray[yi]<<" ";
    }
    cout<<endl;
    
    delete test1;
    delete test2;

    PointerTest *test3 = new PointerTest(Test);
    
    test3->PrintPtrArray();    
    
    return 0;
    
}//end of main
