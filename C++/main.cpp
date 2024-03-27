#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "Enter : ";
    std::getline(std::cin, line);

    
    for (char& c : line) {
        if (c == ' ') {
            c = '\t';
        }
    }

    std::cout << "Modified: " << line << std::endl;

    return 0;
}


#include <iostream>
#include <cctype> 

int main() {
    std::string line;
    std::cout << "Enter: ";
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


    std::cout << "of letters: " << letterCount << std::endl;
    std::cout << "number : " << digitCount << std::endl;
    std::cout << "other symbols: " << otherCount << std::endl;

    return 0;
}



#include <iostream>
#include <string>
#include <sstream> 

int main() {
    std::string sentence;

  
    std::cout << "Enter: ";
    std::getline(std::cin, sentence);

    std::stringstream ss(sentence);
    std::string word;
    int wordCount = 0;
    while (ss >> word) {
        wordCount++;
    }

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}


#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string str;

    std::cout << "Enter: ";
    std::getline(std::cin, str);

    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());

    
    if (str == reversedStr) {
        std::cout << "is a palindrome." << std::endl;
    } else {
        std::cout << "not a palindrome." << std::endl;
    }

    return 0;
}
