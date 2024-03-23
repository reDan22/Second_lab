#include <iostream>
#include <unordered_set>
int main()
{
    typedef std::unordered_set <std::string> StringSet;


    StringSet str;
    char oper;
    std::string input;

    while (true) {

        std::cin >> oper >> input;


        if (oper == '#') {
            break;
        }

        if (oper == '+') {
            str.insert(input);
        }
        else if (oper == '-') {
            str.erase(input);
        }
        else if (oper == '?') {
            if (str.find(input) != str.end()) {
                std::cout << "YES" << std::endl;

            }
            else {
                std::cout << "NO" << std::endl;
            }
        }


    }





}