#include <iostream>
#include <string>

int main() {

    //Prompts the user to read their name and stores the name to variable "name"
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;

    //Constructing the greeting for the user- the centerpiece of the frame
    const std::string greeting = "Hello" + name + "!";

    //Creates a constant with the name spaces to create as many spaces as the size of our greeting covers
    const std::string spaces(greeting.size(),"");
    const std::string second = "* " + spaces + " *";

    //Creates the first and last line using as many spaces as our second and fourth lines do- and denotes each space with a "*"
    const std::string first(second.size(),'*');

    //Writing the entire frame out
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" <<std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

return 0;

                }