// Tryout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

 string xor_cipher(const  string& input, const  string& key) {
     string output;
    output.resize(input.size());
    for (size_t i = 0; i < input.size(); ++i) {
        output[i] = input[i] ^ key[i % key.size()];
    }
    return output;
}

 string caesar_cipher(const  string& input, int shift) {
     string output = input;
    for (char& c : output) {
        if (isalpha(c)) {
            char a = isupper(c) ? 'A' : 'a';
            c = (c - a + shift) % 26 + a;
        }
    }
    return output;
}

 string reverse_string(const  string& input) {
     string output = input;
     reverse(output.begin(), output.end());
    return output;
}

 string to_ascii_decimal(const  string& input) {
     string output;
    for (char c : input) {
        output +=  to_string(static_cast<int>(c)) + " ";
    }
    return output;
}

 string from_ascii_decimal(const  string& input) {
     string output;
    istringstream iss(input);
    int value;
    while (iss >> value) {
        output += static_cast<char>(value);
    }
    return output;
}

// Function to create a new file and write to it
void create() {
    string encryptedText;
    string s;
    string choice;
    // Prompt the user to enter a filename
    cout << "Create a file.\n";
    cout << "FileName:";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    s = s + ".txt";
    cout << "\nYour file is " + s;
    // Ask the user what they want to write in the file
    cout << "\nWhat do you want to write in the file? (Enter 'EOF' on a new line when done)\n";
    string line;
    string info;
    // Use a loop to keep reading lines until the user enters "EOF"
    while (getline(cin, line)) {
        if (line == "EOF") { // Check if the user entered the sentinel value
            break; // Exit the loop if "EOF" is entered
        }
        info += line + "\n"; // Append the line and a newline character to 'info'
    }
    encryptedText = xor_cipher(info, "LivingThought");
    encryptedText = caesar_cipher(encryptedText, 6);
    encryptedText = reverse_string(encryptedText);
    encryptedText = to_ascii_decimal(encryptedText);
    // Create a new file and write the user's input to it
    ofstream newfile(s);
    newfile << encryptedText;
    // Ask the user if they want to view the file
    cout << "Do you want to view the file?" << endl;
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // If the user wants to view the file, read the file and print the contents
    if (choice.compare("Yes") == 0 || choice.compare("yes") == 0)
    {
        newfile.close();
        string myText;

        ifstream readFile(s);

        while (getline(readFile, myText)) {

            string decrypted = from_ascii_decimal(myText);
            decrypted = reverse_string(decrypted);
            decrypted = caesar_cipher(decrypted, -6);
            decrypted = xor_cipher(decrypted, "LivingThought");

            cout << decrypted <<endl<<endl;

        }

        readFile.close();

    }

    // If the user doesn't want to view the file, simply close it
    else {
        newfile.close();
        cout << "close";
    }
}

// Function to read a file and print its contents
void read() {
    string s;
    // Prompt the user to enter a filename
    cout << "Read a file.\n";
    cout << "FileName:";
    cin >> s;
    s = s + ".txt";
    cout << "\nYour file is " + s + "\n\n";
    string myText;

    // Read from the text file
    ifstream readFile(s);
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(readFile, myText)) {
        // Output the text from the file
        string decrypted = from_ascii_decimal(myText);
        decrypted = reverse_string(decrypted);
        decrypted = caesar_cipher(decrypted, -6);
        decrypted = xor_cipher(decrypted, "LivingThought");
        cout << decrypted << endl;
    }
    readFile.close();
}

// Function to edit a specific line in a file
void access() {
    string s;
    string choice;
    string info;
    string decrypted;
    // Prompt the user to enter a filename
    cout << "Access a file";
    cout << "FileName:";
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    s = s + ".txt";
    cout << "Accessing file..."+s+"\n";
    // Open the file "s"
    ifstream inputFile(s);

    // Read the file line by line into a vector
    vector<string> lines;
    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    // Close the file
    inputFile.close();

    // Display the file to the user
    for (size_t i = 0; i < lines.size(); i++) {
        decrypted = from_ascii_decimal(lines[i]);
        decrypted = reverse_string(decrypted);
        decrypted = caesar_cipher(decrypted, -6);
        decrypted = xor_cipher(decrypted, "LivingThought");
        cout << i + 1 << ": " << decrypted << '\n';
    }

    // Ask the user for an action: edit or add
    cout << "Do you want to edit a line or add a new one? (edit/add): ";
    string action;
    cin >> action;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    if (action == "edit") {
        // Ask the user for a line number to edit
        cout << "Enter line number to edit: ";
        int lineNumber;
        cin >> lineNumber;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer after reading a number

        // Check if the line number is valid
        if (lineNumber < 1 || lineNumber > static_cast<int>(lines.size())) {
            cout << "Invalid line number!\n";
            return; // Exit the function
        }

        // Ask the user for the new text
        cout << "Enter new text: ";
        getline(cin, line);
        string encryptedText = xor_cipher(line, "LivingThought");
        encryptedText = caesar_cipher(encryptedText, 6);
        encryptedText = reverse_string(encryptedText);
        encryptedText = to_ascii_decimal(encryptedText);

        // Update the line
        lines[lineNumber - 1] = encryptedText;
    }
    else if (action == "add") {
        // Ask the user for the new text to add
        cout << "Enter new text to add: ";
        getline(cin, line);
        string encryptedText = xor_cipher(line, "LivingThought");
        encryptedText = caesar_cipher(encryptedText, 6);
        encryptedText = reverse_string(encryptedText);
        encryptedText = to_ascii_decimal(encryptedText);
        lines.push_back(encryptedText); // Add the new line to the end of the vector
    }
    else {
        cout << "Invalid action.\n";
        return; // Exit the function
    }

    // Open the file in output mode and write the lines back to the file
    ofstream outputFile(s);
    for (const auto& line : lines) {
        outputFile << line << '\n';
    }

    // Close the file
    outputFile.close();
}

int main()
{
    string cont;
    bool c = true;
    string what;
    do
    {
        // Ask the user what operation they want to perform
        cout << "Do you want to: a) create a file, b) read a file, or c) edit a file?" << endl;
        cin >> what;
        // Perform the appropriate operation based on the user's input
        if (what == "a")
        {
            create();
            cout << "Is there anything that you need?" << endl;
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }
        else if (what == "b")
        {
            read();
            cout << "Is there anything that you need?";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }
        else if (what == "c")
        {
            access();
            cout << "Is there anything that you need?";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }
        // If the user's input is invalid, ask them if they want to continue
        else {
            cout << "You gave an invalid answer, do you want to continue?";
            cin >> cont;
            if (cont == "yes" || cont == "Yes" || cont == "y" || cont == "Y") {
                cout << "\nPlease Continue...";
            }
            else {
                c = false;
            }
        }

    }
    // Continue the loop as long as the user wants to perform more operations
    while (c == true);

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
