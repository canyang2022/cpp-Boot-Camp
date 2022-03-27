// Write a program that use the bubble sort algorithm to sort an integer array in ascending order (search for the
// bubble sorting algorithm).
// Can YAng
#include <iostream>

#define size 5

void print_(int arry[]) {
  for (int i_in_arry=0; i_in_arry<size; ++i_in_arry)
    std::cout << "new array element"<< i_in_arry << " "<< arry[i_in_arry] << std::endl;
}

int ifAcesnd(int array[])
{
    int count = 0;
    for(int i_in_arry = 0; i_in_arry < size; i_in_arry++){
        if (array[i_in_arry]<array[i_in_arry+1]){
            count++;
            std::cout<< "cout"<< count;

            if(count==size){
                return 1;
                break;
            }else{
                continue;
            }
        }
    }
    return 0;

}

void bubbleSort(int array[])
{
    int tem;
    for(int loop_time = 0;(!ifAcesnd(array));loop_time++){
        for(int i_in_array=0;i_in_array<size; ++i_in_array){
            //std::cout <<"i_in_array"<<i_in_array<< std::endl;
                if (array[i_in_array] < array[i_in_array+1]){
                    //array[i_in_array] =array[i_in_array];
                    //array[i_in_array+1] =array[i_in_array+1];
                    continue;

                }else{
                    tem = array[i_in_array];
                    array[i_in_array]=array[i_in_array+1];
                    array[i_in_array+1]=tem;
                }
            //std::cout <<"array[i_in_array]"<<array[i_in_array]<< std::endl;
            //std::cout <<"array[i_in_array+1]"<<array[i_in_array+1]<< std::endl;
        }

    }
    print_(array);
}

int main()
{
    int array[size];
    std::cout << "type an array: ";
    for(int i=0;i<size;i++)
    {
        std::cin>> array[i];
    }
    bubbleSort(array);
}

