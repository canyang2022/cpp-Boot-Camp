/* You are designing a poster which prints out numbers with a unique style applied to each of them. The styling is
 based on the number of closed paths or holes present in a giver number. The number of holes that each of the
 digits from 0 to 9 have are equal to the number of closed paths in the digit. Their values are:
 1, 2, 3, 5 and 7 = 0 holes.
 0, 4, 6, and 9 = 1 hole.
 8 = 2 holes.
 Given a number, you must determine the sum of the number of holes for all of its digits. For example, the
 number 819 has 3 holes.
 Function Description
 Complete the function countHoles. The function must return an integer denoting the total number of holes in
 num. */

 #include<iostream>
 #include<cmath>
 int sum;

 void findSegementation(int, int*);
 void countHolesEach(int, int*);


 int main()
 {
    int obj;
    std::cout << "type a number: ";
    std::cin >> obj;
    int sum =0;
    findSegementation(obj, &sum);
    std::cout << "the number of holes is: "<< sum <<std::endl;

 }

 void findSegementation(int obj, int* sum){
     int zeroNum= 0;
     int length = log10(obj)+1;
     int array[length];

     for(int i=length-1;i>=0; i--){
        int j=0;
        int pre_ele=obj/pow(10, i+1);
        int ele =obj/pow(10, i)-(pre_ele*10);
        countHolesEach(ele, &zeroNum);
        array[j]= zeroNum;
        //std::cout << zeroNum;
        *sum = array[j]+*sum;
        j++;
     }
 }


void countHolesEach(int each_ele, int* zeroNum){
    if(each_ele%2!=0&&each_ele!=9||each_ele==2){
        *zeroNum = 0;
        }else if(each_ele==8){
            *zeroNum=2;
        }else{
            *zeroNum=1;
        };
}


