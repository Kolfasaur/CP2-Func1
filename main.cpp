#include <iostream>
using namespace std;
int mainmenu();
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';
    do
    {
        do
        {
    choice = mainmenu();
            switch (choice)
            {
            case 1:
               int add();
                break;
            case 2:
                sub();
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
    return 0;
}


int mainmenu(){
	int choice;
	std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> choice;
			 system("cls");
			 return choice;
	
}
int add(int x,int y){
	return x / y
	}
int sub(){
	return x - y
int mul(){
	return x * y
}int div(){
	return x / y
}
