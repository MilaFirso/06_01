#include <iostream>
using namespace std;

int simple_string_hash(string& word)
{
    int hash = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        hash += static_cast<int>(word[i]);
    }

    return hash;
}

int main() {
    setlocale(LC_ALL, "rus");
    system("chcp 1251");
    string input = "";

    while (input != "exit")
    {
        cout << "Введите строку: ";
        cin >> input;

        cout << "Наивный хэш строки " << input << " = " << simple_string_hash(input) << endl;
    }

    return 0;
}