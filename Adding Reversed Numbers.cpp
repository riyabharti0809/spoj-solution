#include<iostream>
#include<math.h>
using namespace std;
long quick_pow10(int n)
{
    static long pow10[12] = {
        1, 10, 100, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000
    };
    return pow10[n]; 
}
long reverseint(long firstnum){
    long  temp = 10;
    int  count = 0;
    while(firstnum%temp!=firstnum){
        temp  = temp*10;
        count = count + 1;        
    }    
    count =count+1;
    temp=0;
    int count1=1;
    while(count){
        if (count1==1){
            temp = firstnum%quick_pow10(count1)*quick_pow10(count-1);
        }
        else
        {
            temp = temp + (((firstnum%quick_pow10(count1))-(firstnum%quick_pow10(count1-1)))/quick_pow10(count1-1))*quick_pow10(count-1);  
        }        
        count--;
        count1++;
    }
    return temp;
}
int main(void)
{
    int testcases;
    cin>>testcases;
    while(testcases){
        unsigned long firstnum;
        unsigned long secondnum;
        unsigned long sum;
        unsigned long reversedsum;
        cin>>firstnum;
        cin>>secondnum;
        sum = reverseint(firstnum) + reverseint(secondnum);   
        cout<<reverseint(sum)<<endl;
        testcases--;
    }
    return 0;
}
