//books
#include<iostream>

// Book, author, title, price, publisher and number of copies
class Books
{

public:
    std::string authorfirst;
    std::string authorsecond;
    /*std::string tittle;
    std::string publish_name;
    std::string price;
    std::string copies;*/

    Books();
    ~Books();
    void print(){
        std::cout << authorfirst << std::endl;
        std::cout << authorsecond << std::endl;
        /*std::cout << publish_name << std::endl;
        std::cout << price << std::endl;
        std::cout << copies << std::endl;
        std::cout << std::endl;*/
    }

};
Books::Books()
{

    std::cout << "Enter Author First Name: ";
    std::cin >> authorfirst;
    std::cout << "Enter Author Second Name: ";
    std::cin >> authorsecond;
//  std::cout << "Enter Tittle Name: ";
//  std::cin >> tittle;
//  std::cout << "Enter Publisher Name: ";
//  std::cin >> publish_name;
//  std::cout << "Enter Price: ";
//  std::cin >> price;
//  std::cout << "Enter numbers of copies: ";
//  std::cin >> copies;


}

/*Books::~Books()
{
    if (this->buffer != nullptr){
        delete [] this->buffer;
    }
}*/
