    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    // Read and save an integer, double, and String to your variables.
    cin >> a >> b;
    cin.ignore();
    getline(cin, c);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << a + i << "\n";
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << fixed << b + d << "\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + c << "\n";