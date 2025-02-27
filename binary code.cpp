#include <iostream> // Include standard input-output stream library
#include <string>   // Include string library for string manipulation
#include <algorithm> // Include algorithm library (though it's not used in the code)

using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int n) {
  if (n == 0) return "0"; // If the number is 0, return "0"
  string binary = "";
  while (n > 0) {
    binary = to_string(n % 2) + binary; // Add the remainder (0 or 1) to the binary string
    n = n / 2; // Divide the number by 2
  }
  return binary; // Return the binary representation
}

// Function to convert binary to decimal
int binaryToDecimal(string b) {
  int decimal = 0;
  for (char digit : b) {
    decimal = decimal * 2 + (digit - '0'); // Convert each binary digit to decimal
  }
  return decimal; // Return the decimal representation
}

int main() {
  int choice;
  cout << "Welcome to the Decimal-Binary Converter Program\n";
  cout << "Please select an option from the menu below:\n";
  cout << "1. Decimal to Binary Conversion\n";
  cout << "2. Binary to Decimal Conversion\n";
  cout << "Enter your choice (1 or 2): ";
  cin >> choice;
  
  if (choice == 1) {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    string binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;
  } else if (choice == 2) {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "Decimal representation: " << decimal << endl;
  } else {
    cout << "Invalid choice. Please run the program again and select either 1 or 2." << endl;
  }
  
  return 0;
}
