#include <iostream>
#include <string>

class Char {
    private:
    std::string price;
    std::string temp;
    std::string sec;
    public:
    Char(std::string p, std::string t, std::string s) {
        price = p;
        temp = t;
        sec = s;
    }

    std::string getPrice() {
        return price;
    }

    std::string getTemp() {
        return temp;
    }

    std::string getSec() {
        return sec;
    }
};

int main() {

    //double (number with decimal)

    double price = 10.99; //OOP price
    double gpa = 3.0; //OOP gpa
    double temperature = 71.2; //OOP temp
    double time = 5.4; //OOP time

    std::cout << "Price:" << "$" << price << '\n';
    std::cout << "GPA:" << gpa << '\n';
    std::cout << "Temperature:" << temperature << " " << "Farenheight" << '\n';
    std::cout << "Time:" <<time << " " << "seconds" << '\n';


    return 0;
}