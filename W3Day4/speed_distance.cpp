/*Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,...)
• Distance / 150 (So 1=150mm, 2=300mm,...)
It is a trade off between memory usage and accuracy.
unit16_t 1 0 1 1 1 0 1 0 0 1 0 1 1 0 1 1*/

#include<iostream>
#include<bitset>
#include <cstring>
#include<string>
#include <fstream>

#define size 8

unsigned int cal_dis(unsigned int);
void calculate_sped_dis(unsigned int, unsigned int, unsigned int,unsigned int, unsigned int);
std::bitset<16> fill_size3_in_encoder(std::bitset<16> encode, std::bitset<3> input_obj, int);
std::bitset<16> fill_size4_in_encoder(std::bitset<16> encode, std::bitset<4> input_obj,int i);


int main(){
    unsigned int speed = 200;
    unsigned int fron=300;
    unsigned int rea=300;
    unsigned int lef=300;
    unsigned int righ=300;

    calculate_sped_dis(speed, fron, rea, lef, righ);

}

void calculate_sped_dis(unsigned int speed, unsigned int fron, unsigned int rea,unsigned int lef, unsigned int righ){

    unsigned int str_sp=speed/2;
    unsigned int front = cal_dis(fron);
    unsigned int rear = cal_dis(rear);
    unsigned int left = cal_dis(lef);
    unsigned int right = cal_dis(righ);

    std::bitset<4> speed_b(str_sp);
    std::bitset<3> front_b(front);
    std::bitset<3> rear_b(rear);
    std::bitset<3> left_b(left);
    std::bitset<3> right_b(right);
    std::bitset<16> encode;

    // solution 1: print without space made it combining together.
    std::cout << speed_b;
    std::cout << front_b;
    std::cout << rear_b;
    std::cout << right_b;
    std::cout << left_b<<'\n';

    // solution 2:
    // Brief: Stroed each result in the new container called encode.
    // Detailes: But since I didnt figure out how to use look with different length and change the input
    // of the same size. so i did line by line, not smart way.
    int i=0;
    encode = fill_size3_in_encoder(encode, left_b,i);
    i=i+1;
    encode = fill_size3_in_encoder(encode, right_b,i);
    i=i+1;
    encode = fill_size3_in_encoder(encode, rear_b,i);
    i=i+1;
    encode = fill_size3_in_encoder(encode, front_b,i);
    i=i+1;
    encode = fill_size4_in_encoder(encode, speed_b,i);

    std::cout << "encoder: "<< encode << '\n';

    // solution 3:
    // use io stream to write in a file called encoded_message.txt.
    std::fstream input, output;
    input.open("encoded_message.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
    if (!input.is_open()) {
        std::cout << "Input file is not open." << std::endl;
    }
    input << "Here is the coded value of speed, front, rear, left, right: " << std::endl;
    input << speed_b;
    input << front_b;
    input << rear_b;
    input << right_b;
    input << left_b<<'\n';
    input.close();

}

unsigned int cal_dis(unsigned int posi){
    return (posi/150);
}

std::bitset<16> fill_size3_in_encoder(std::bitset<16> encode, std::bitset<3> input_obj,int i){

        for(int j=0;j<3;j++){
            encode[i*3+j]=input_obj[j];
        }
        return encode;

    }

std::bitset<16> fill_size4_in_encoder(std::bitset<16> encode, std::bitset<4> input_obj,int i){

        for(int j=0;j<4;j++){
            encode[i*3+j]=input_obj[j];
        }
        return encode;

    }


