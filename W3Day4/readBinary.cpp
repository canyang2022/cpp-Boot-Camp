/*Assignment EC++1
Implement a function that can read the information shown in the figure
1 0 1 1 1 0 1 0 0 1 0 1 1 0 1 1*/
#include<iostream>
#include<bitset>
int main(){

    std::string input_= "1011101001011011";
    std::bitset<16> input(input_);
    std::cout << "The original input: "<<input<<std::endl;

    // seat belt
    std::bitset<16> seat_belt(input>>11);
    std::cout << "the seat belt status is: "<< seat_belt<<'\n';

    //Light
    std::bitset<16> light_tem(input<<13);
    std::bitset<16> light(light_tem>>13);
    std::cout << "the light status is: " << light<<'\n';

    //windows
    std::bitset<16> cal_win(input>>7);
    std::bitset<16> cal_win_s2(cal_win<<12);
    std::bitset<16> window(cal_win_s2>>12);
    std::cout << "the window status is: " << window<<'\n';

    //doors
    std::bitset<16> door_1(input<<9);
    std::bitset<16> door(door_1>>12);
    std::cout<< "the door status is: " << door<<'\n';


    std::cout<<"--------------------------------------------------------------";






}