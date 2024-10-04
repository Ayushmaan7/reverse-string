#include <iostream>

void reverseString(const char* input) {
    // Determine the length of the input string without using standard library functions
    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    // Create a new dynamically allocated character array to store the reversed string
    char* reversed = new char[length + 1]; // +1 for the null terminator

    // Reverse the characters of the input string
    for (int i = 0; i < length; ++i) {
        reversed[i] = input[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Print the original and reversed strings
    std::cout << "Original String: " << input << std::endl;
    std::cout << "Reversed String: " << reversed << std::endl;

    // Free the dynamically allocated memory
    delete[] reversed;
}

int main() {
    const char* str = "practice";
    reverseString(str);
    return 0;
}
