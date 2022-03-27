// Write a program that use the selection sort algorithm to sort an integer array in ascending order (search for the
// selection sorting algorithm).
// Can Yang
// Write a program that use the bubble sort algorithm to sort an integer array in ascending order (search for the
// bubble sorting algorithm).
// Can YAng
#include <iostream>

#define size 5

void print_(int arry[]);
void selectionSort(int array[]);


int main()
{
    int array[size];
    std::cout << "type an array: ";
    for(int i=0;i<size;i++)
    {
        std::cin>> array[i];
    }
    selectionSort(array);
}

void selectionSort(int array[])
{
    int max;
    for(int i_in_array=0;i_in_array<size; i_in_array++){

        for(int obje_in_array=i_in_array+1;obje_in_array<size; obje_in_array++)
        {
            if(array[i_in_array] < array[obje_in_array]){
                continue;
            }else{
                max = array[i_in_array];
                array[i_in_array] = array[obje_in_array];
                array[obje_in_array]=max;
            }
        }
    }
    print_(array);

}

void print_(int arry[]) {
  for (int i_in_arry=0; i_in_arry<size; ++i_in_arry)
    std::cout << "new array element"<< i_in_arry << " "<< arry[i_in_arry] << std::endl;
}
