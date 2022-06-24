#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#$%&/()=?»@£§€{[]} ";
    string password;
    int lenght, random_number;

    ofstream outfile;

    outfile.open("password.txt");

    cout << "Enter the lenght of your password:\n";
    cin >> lenght;

    srand(time(NULL));

    for (int i = 1; i <= lenght; i++)
    {
        random_number = rand() % 82 + 1;
        outfile << characters[random_number];
    }

    cout << "Done, check your new file(it's in the same folder as the main code).\n";
    return 0;
}
