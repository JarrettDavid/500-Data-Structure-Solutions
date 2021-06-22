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
            int sumCheck = 0;
            int start = 0;
            int counter = 0;
            int incrementor = 0;
            
            int *subArray = new int(n);
            
            for(int x = 0; x <= n - 1; x++) 
            {
                start = storedArray[x];
                
                subArray[counter] = start;
                std::cout<< x << ". Start " << start << std::endl;
                
                if((x+1) <= (n-1))
                {
                    for(int y = (x+1); y <= n - 1; y++) 
                    {
                        incrementor = storedArray[y];
                        
                        if(counter == 0)
                            sumCheck = sumCheck + start + incrementor;
                        else
                            sumCheck = sumCheck + incrementor;
                            
                        std::cout<< x <<". x value "<< y << ". Incrementor " << incrementor << std::endl;
                        counter+=1;
                        subArray[counter] = incrementor;
                        
                        if(sumCheck == 0)
                        {
                            for(int z = 0; z <= counter; z++)
                            {
                                std::cout << z <<". Sub Array: " << subArray[z] << std::endl;
                                subArray[z] = 0; 
                            }
                            y = (n-1);
                            sumCheck = 0;
                            counter = 0;
                        }
                        
                        std::cout<< "Sum Check: " << sumCheck << std::endl;
                    }
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

    int array [] = {1, 2, -3, 4, 5, -8, -7, 6};
    
    SubArrayCheck test(array);
    
    
    test.n = sizeof(array)/sizeof(array[0]);
    
    test.ArrayPrint();
    
    test.SubArraySearch();
    
    return 0;
    
}//end of main
