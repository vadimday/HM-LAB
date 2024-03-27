#include <iostream>
#include <string>


using std::string;
using std::cin;
using std::cout;


void del(string& str, int n) {
    for (int count = n - 1; count < str.size(); count++) {
        str[count] = str[count + 1];
    }
}

int main() {
    int n;
    string str;

    cin >> str >> n;

    del(str, n);

    cout << str;

    return 0;
}

#include <iostream>
#include <string>


void deleteChar(std::string& str, char ch) {
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str.erase(j, str.length() - j);
}

int main() {
    std::string str = "z";
    char ch = 'o';
    deleteChar(str, ch);
    std::cout << str << std::endl;
    return 0;
}


#include <iostream>
#include <string>

void insertChar(std::string& str, int pos, char ch) {
    if (pos >= 0 && pos <= str.length()) {  
        str.insert(pos, 1, ch);  
    }
    else {
        std::cout << "eror!" << std::endl;
    }
}

int main() {
    std::string str = "z";

    std::cout << "nature: " << str << std::endl;
    insertChar(str, 7, '!');

    std::cout << "change " << str << std::endl;

    return 0;
}


#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "Enter a line: ";
    std::getline(std::cin, line);
    for (char& c : line) {
        if (c == '.')
            c = '!';
    std::cout << "Modified line: " << line << std::endl;

    return 0;
}


#include <iostream>
#include <string>

    int main() {
        std::string line;
        char desiredChar;

      
        std::cout << "Enter : ";
        std::getline(std::cin, line);

        
        std::cout << " you want : ";
        std::cin >> desiredChar;

        
        int count = 0;
        for (char c : line) {
            if (c == desiredChar)
                count++;
        }

        
        std::cout << "The character '" << desiredChar << "' occurs " << count << " times." << std::endl;

        return 0;
    }



#include <iostream>
#include <cctype> 

    int main() {
        std::string line;

       
        std::cout << "Enter a string: ";
        std::getline(std::cin, line);

      
        int letterCount = 0;
        int digitCount = 0;
        int otherCount = 0;

        
        for (char c : line) {
            if (std::isalpha(c)) { 
                letterCount++;
            }
            else if (std::isdigit(c)) { 
                digitCount++;
            }
            else { 
                otherCount++;
            }
        }

        
        std::cout << "Number of letters: " << letterCount << std::endl;
        std::cout << "Number of numbers: " << digitCount << std::endl;
        std::cout << "Number of other symbols: " << otherCount << std::endl;

        return 0;
    }
