/* A car service shop needs to keep track of the records of services they provide to their customer. Create a system
for them so they could keep ATLEAST the below records
• Date the customer visited
• Services performed (at least 2 different services)
• Parts changed (at least 2 different parts)
• Payment (method & amount)*/

#include<iostream>
#include <string>

class serviceRecord
{

public:
    float date;
    std::string * service = nullptr;
    std::string* partchanged = nullptr;
    std::string* payment_method = nullptr;
    float payment_amount;

    void userInput();
    void display(serviceRecord*);

    serviceRecord(unsigned int record_size){
        float date;
        this->service = new std::string[2];
        this->partchanged = new std::string[2];
        this->payment_method = new std::string[2];
        float payment_amount;
    };
        serviceRecord(){};

    // ~serviceRecord();
};
void serviceRecord::userInput(){
        std::cout<<"Type the date\n";
        std::cin>>date;

    for(int i =0; i <2; i++){
        std::cout<<"Type the service\n";
        std::cin>>service[i];
        std::cout<<"Type the part you changed\n";
        std::cin>>partchanged[i];
        std::cout<<"Type you want to pay cash or card\n";
        std::cin>>payment_method[i];
    }
        std::cout<<"Type how much you paid\n";
        std::cin>>payment_amount;
}

void serviceRecord::display(serviceRecord* array){

    serviceRecord se= *array;
    std::cout<<"display date "<< se.date<<std::endl;
    for(int j=0;j<2;j++){
        std::cout<<"display service "<< se.service[j]<<std::endl;

        std::cout<<"display payment method "<< se.payment_method[j]<<std::endl;
    }

    std::cout<<"display payment amout "<< se.payment_amount<<std::endl;

}


int main(){

    unsigned int record_size;

    std::cout<<"Input how many record do you want to be saved: \n";
    std::cin>> record_size;
    serviceRecord array[record_size];


    //serviceRecord serRecord(record_size);
    for(int i=0;i<record_size; i++){
        serviceRecord *current_object = new serviceRecord(record_size);
        array[i] = *current_object;

        current_object->userInput();
        current_object->display(current_object);
    }

}

