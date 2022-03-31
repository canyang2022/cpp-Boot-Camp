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
    int serviceID;
    void userInput();
    // date the customer visited


    // service performed
    std::string servicePerformed[2] = {"airFilterChange", "tireChange"};

    //parts changed
    std::string partsChanged[2]={"break", "wheel"};

    //payment(method &amount)
    //void payment();

    serviceRecord(){
        char servicePerformed[2];
        float date;
    };
    // ~serviceRecord();
};


void serviceRecord::userInput(){
    std::cout << "Input the date of the customer visited\n";
    //std::cin >>serviceRecord.date;
    //std::cout <<date;
}



int main(){
    serviceRecord serviceRecord;
    serviceRecord.userInput();

}

