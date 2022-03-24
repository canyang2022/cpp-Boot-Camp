/* Write a program to return an array containing the values between two 8-bits unsigned integers IN DESCENDING
ORDER EXCLUSIVE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in
between, and then arrange the sequence in descending order excluding the upper and lower values.
If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value =
0xFF
Example:
Input: LowerValue=2 and UpperValue=5 Output:
Output Array=4,3 Output Array Size=2*/
//Can Yang
#include <iostream>

#define size 10

int descendingOrderEclusive(unsigned long int, unsigned long int);

int main()
{
    unsigned long int lowerValue;
    unsigned long int UpperValue;

    lowerValue =15;
    UpperValue =24;

    descendingOrderEclusive(lowerValue, UpperValue);

}

int descendingOrderEclusive(unsigned long int lowerValue, unsigned long int UpperValue)
{
    int arry[size];
    int return_array[2];

    for(int i=UpperValue-1;i>lowerValue; i--) {
        for(int len=0; len<UpperValue-lowerValue-1; len++){
            arry[len]=i;
            //std::cout<<"arry"<< arry[len]<<std::endl;
        }
    }
    if (lowerValue>=UpperValue){
        for(int j=0; j<2; j++){
            return_array[j]=0xFF;
            //std::cout<<"arry  "<< return_array[j]<<std::endl;
        }
        return return_array[2];

    }
    return 0;
}

//Need to add if low equal to high
