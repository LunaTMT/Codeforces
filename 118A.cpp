#include <string>
#include <iostream>
#include <cctype> 

std::string vowels = "aeiouyAEIOUY"; 

bool isVowel(char c) {
    return vowels.find(c) != std::string::npos;
}

int main() {
    std::string input, output;
    std::cin >> input;
    
    for (size_t i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (!isVowel(c)) {  
            output += '.';
            output += static_cast<char>(std::tolower(c));  // Convert character to lowercase
        }
    }
    
    std::cout << output;
    return 0;
}
