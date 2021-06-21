/*************************************************************
*
*             Print all sub-arrays that equal zero
*
*************************************************************/

#include <iostream>

class SubArrayCheck {

    public:
        int n;
        
        SubArrayCheck(int initalArray[]) : storedArray(initalArray){}
        
        int SubArraySearch() const
        {
            int i = 0;
            int j = 1;
            int start = 0;
            int counter = 0;
            int sumCheck = 0;
            int incrementor = 0;
            
            int *subArray = new int(n);
            
            while(j <= n-1 && i <= n-1)
            {
                start = storedArray[i];
                incrementor = storedArray[j];
                
                if(sumCheck == 0)
                {
                    sumCheck = sumCheck + start + incrementor;
                    std::cout<< i <<". Sum Check A: " << sumCheck << std::endl;
                    sumCheck = 0;
                    i+=1;
                    
                    for(int z = 0; z <= n - 1; z++)
                    {            
                        std::cout << z <<". Sub Array: " << subArray[i] << std::endl;
                    }
                }
                else
                {
                    subArray[counter] = start;
                    counter+=1;
                    subArray[counter+1] = incrementor;
                    sumCheck = sumCheck + incrementor;
                    std::cout<< i <<". Sum Check B: " << sumCheck << std::endl;
                    j+=1;
                }
            }
            
            return sumCheck;
            
        }//End of SubArraySearch
        
        /* Used for debugging*/
        void ArrayPrint()
        {
            std::cout << "The Stored Values" << std::endl;
            std::cout << "The Size of the stored values " << sizeof(storedArray)/sizeof(storedArray[0]) <<std::endl;
            std::cout << std::endl;
            for(int i = 0; i <= n - 1; i++)
            {            
                std::cout << i <<". " << storedArray[i] << std::endl;
            }
        }
        
    private:
        int *storedArray = new int(n); //Memorize

};//end of SubArrayCheck

#include <stdio.h>

int main() {

    using namespace std;

    int array [] = {1, 2, -3, 4, 5, 6, -7, -8};
    
    SubArrayCheck test(array);
    
    
    test.n = sizeof(array)/sizeof(array[0]);
    
    test.ArrayPrint();
    
    test.SubArraySearch();
    
    return 0;
    
}//end of main