#include <iostream>
#include <string>
using namespace std;

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

double addFunc(){
    double number1, number2;
    number1 = stoi(input("left operand: "));
    //cout << "left operand: " << endl;
    //cin >> number1;
    number2 = stoi(input("right operand: "));
    //cout << "right operand: " << endl;
    //cin >> number2;

    double answer = number1 + number2;
    return answer;
}

double subFunc(){
    double number1, number2;

    number1 = stoi(input("left operand: "));
    //cout << "left operand: " << endl;
    //cin >> number1;
    number2 = stoi(input("right operand: "));
    //cout << "right operand: " << endl;
    //cin >> number2;

    double answer = number1 - number2;
    return answer;
}

double multFunc(){
    double number1, number2;

    number1 = stoi(input("left operand: "));
    //cout << "left operand: " << endl;
    //cin >> number1;
    number2 = stoi(input("right operand: "));
    //cout << "right operand: " << endl;
    //cin >> number2;

    double answer = number1 * number2;
    return answer;
}

double divFunc(){
    double number1, number2;

    number1 = stoi(input("left operand: "));
    //cout << "left operand: " << endl;
    //cin >> number1;
    number2 = stoi(input("right operand: "));
    //cout << "right operand: " << endl;
    //cin >> number2;

    double answer = number1 / number2;
    return answer;
}

double modFunc(){
    int number1, number2;

    number1 = stoi(input("left operand: "));
    //cout << "left operand: " << endl;
    //cin >> number1;
    number2 = stoi(input("right operand: "));
    //cout << "right operand: " << endl;
    //cin >> number2;

    double answer = number1 % number2;
    return answer;
}


int main(int argc, char const* argv[]) {
    string var = "NA";
    while (var != "") {
        var = input("operation: ");
        //cout << "Enter an operation: ";
        //cin >> var;
        //cin.ignore();
        if (var == "") {
            break;
        }

        else if ((var == "+") || (var == "add") || (var == "plus")) {
            double answer = addFunc();
            cout << answer << endl;
        }
        else if ((var == "-") || (var == "subtract") || (var == "minus") || (var == "sub")) {
            double answer = subFunc();
            cout << answer << endl;
        }
        else if ((var == "*") || (var == "multiply") || (var == "mult")) {
            double answer = multFunc();
            cout << answer << endl;
        }
        else if ((var == "/") || (var == "divide")) {
            double answer = divFunc();
            cout << answer << endl;
        }
        else if ((var == "%") || (var == "mod")) {
            double answer = modFunc();
            cout << answer << endl;
        }
        else {
            cout << var << " isn't a valid operation" << endl;
        }
    }
    return 0;
}
