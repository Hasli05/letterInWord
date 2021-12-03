using namespace std;
#include <iostream>

int main()
{
    string userWord;
    char userLetter;
    int letterNum = 0;

    cout << "Enter word :" << endl;
    cin >> userWord;

    cout << "Enter letter :" << endl;
    cin >> userLetter;

    for (int i = 0; i < userWord.size(); ++i)
    {
        if (userLetter == userWord[i])
        {
            ++letterNum;
        }
    }

    cout << "Letter " << userLetter << " in word :" << letterNum << endl;
}

