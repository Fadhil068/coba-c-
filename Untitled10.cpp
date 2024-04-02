int main() {
    int num1, num2;
    string sci_num;

    // Input
    cout << "Enter first integer (0-9999): ";
    cin >> num1;
    cout << "Enter second integer (0-9999): ";
    cin >> num2;
    cout << "Enter scientific notation (e.g., 2.5e3): ";
    cin >> sci_num;

    // Validate input
    if (num1 < 0 || num1 > 9999 || num2 < 0 || num2 > 9999) {
        cout << "Invalid input! Integers must be between 0 and 9999." << endl;
        return 1;
    }
    if (!isValidScientificNotation(sci_num)) {
        cout << "Invalid scientific notation!" << endl;
        return 1;
    }

    // Initialize result
    float result = 0;

    // Perform addition
    do {
        result += num1;
        result += stof(sci_num);
        num1--;
    } while (num1 > 0);

    // Output result in scientific notation
    cout << "Sum in scientific notation: " << scientific << result << endl;

    return 0;
}
