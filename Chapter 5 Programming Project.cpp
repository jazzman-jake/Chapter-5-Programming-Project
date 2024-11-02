//Terrence Williamson
//11.01.2024
//Chapter 5 Programming Project
//Population

#include <iostream>
using namespace std;
int days;
double pop, rate, total;
char redo;

int main()
{ //get data for current population, rate of growth, duration of increase
    do {
        cout << "What is the population? ", cin >> pop;
        cout << "What is the avg. daily population increase? (ex. input 90 if 90%) ";
        cin >> rate, rate /= 100; //convert percentage to decimal for calc.
        cout << "For how many days will the population grow? ", cin >> days;
        if (pop < 2 || days < 1 || rate < 0) //input validation
            cout << "Invalid input. Try again? Y/N ", cin >> redo;
        else {
            for (int counter = 1; counter <= days; counter++) { //show data for each day
                total = rate * pop;
                pop += total;
                cout << "After " << counter << " day(s), the population is " << pop << endl;
            }
            cout << "\nDo you want to run the program again? Y/N ", cin >> redo;
        }
    } while (redo == 'Y' || redo == 'y');
}