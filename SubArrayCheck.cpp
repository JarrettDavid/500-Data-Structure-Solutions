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
            
            bool stateCheck = false;
            
            int *subArray = new int(n);
            start = storedArray[i];
            incrementor = storedArray[j];
            sumCheck = sumCheck + start + incrementor;
            
            subArray[counter] = start;
            counter+=1;
            std::cout<< i <<". start: "<< start <<" incrementor: "<< incrementor << " Sum Check A: " << sumCheck << std::endl;
            while(j <= (n-1))
            {
                if(sumCheck == 0 || j == (n-1))
                {
                    i+=1;
                    j = (i+1);
                    
                    for(int z = 0; z <= counter; z++)
                    {            
                        std::cout << z <<". Sub Array: " << subArray[z] << std::endl;
                    }
                    
                    counter = 0;
                    start = storedArray[i];
                    incrementor = storedArray[j];
                    subArray[counter] = start;
                    
                    counter+=1;
                    subArray[counter] = incrementor;
                    sumCheck = 0;
                    sumCheck = sumCheck + start + incrementor;
                    std::cout<< i <<". start: "<< start <<" incrementor: "<< incrementor << " Sum Check B: " << sumCheck << std::endl;
                }
                
                subArray[counter] = incrementor;
                
                counter+=1;
                j+=1;
                incrementor = storedArray[j];
                
                sumCheck = sumCheck + incrementor;
               subArray[counter] = incrementor;
                std::cout<< i <<" incrementor: "<< incrementor << " Sum Check D: " << sumCheck << std::endl;
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

    int array [] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    
    SubArrayCheck test(array);
    
    
    test.n = sizeof(array)/sizeof(array[0]);
    
    test.ArrayPrint();
    
    test.SubArraySearch();
    
    return 0;
    
}//end of main
