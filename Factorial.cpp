#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases)
    {
        int fact;
        cin>>fact; 
        int numofzeros = 0;
        while(0 != (int)fact/5){
            numofzeros = numofzeros + (int)fact/5;
            fact = (int)fact/5;            
        }
        cout<<numofzeros<<endl;
        testcases--;        
    }
    return 0;
}
