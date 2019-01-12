//
//  main.cpp
//  Bulls-And-Cows-Game
//
//  Created by Casey O'Neill on 12/31/18.
//  Copyright © The Curious Corporation All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// Simple addition function
int add(int a, int b) {
    return a + b;
}

int main() {
    
    int a, b, answer;
    string name;
    cout << "What is you name? ";
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "Please enter two numbers" << endl;
    cout << "First: ";
    cin >> a;
    cout << "Second: ";
    cin >> b;
    answer = add(a, b);
    cout << "The answer to " << a << " + " << b << " is " << answer << endl;
    cout << "Come back again soon." << endl;
    return 0;
}
