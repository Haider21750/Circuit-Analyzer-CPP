#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    // Basic Terminal Colors
    string RED = "\033[31m";
    string GREEN = "\033[32m";
    string CYAN = "\033[36m";
    string RESET = "\033[0m";

    // Arrays for Questions and Options
    string questions[5] = {
        "1. What does CPU stand for?",
        "2. Which of the following is not a C++ data type?",
        "3. Who is the creator of C++?",
        "4. What is the time complexity of binary search?",
        "5. Which electronic component can store electrical charge?"
    };

    string options[5] = {
        "A) Central Process Unit   B) Computer Personal Unit   C) Central Processing Unit",
        "A) int                    B) float                    C) real",
        "A) Bjarne Stroustrup      B) Dennis Ritchie           C) James Gosling",
        "A) O(1)                   B) O(n)                     C) O(log n)",
        "A) Resistor               B) Capacitor                C) Inductor"
    };

    // Array for correct answers
    char answers[5] = {'C', 'C', 'A', 'C', 'B'};
    
    int score = 0;
    char userAnswer;

    cout<< CYAN << "=====================================\n";
    cout<< "   WELCOME TO THE TECH QUIZ 2026!    \n";
    cout<< "=====================================\n" << RESET;
    cout<< "Rules: 10 points for each correct answer.\n\n";

    // Start time record karna
    time_t startTime = time(0);

    // Quiz Loop
    for (int i = 0; i < 5; i++) {
        cout<< questions[i]<<endl;
        cout<< options[i]<<endl;
        cout<<"Enter your answer (A/B/C): ";
        cin>> userAnswer;
        
        userAnswer = toupper(userAnswer); 

        if (userAnswer == answers[i]) {
            cout<< GREEN << "Correct!\n\n" << RESET;
            score += 10;
        } else {
            cout<< RED << "Wrong! Correct answer was " << answers[i] << "\n\n" << RESET;
        }
    }

   
    time_t endTime = time(0);
    int timeTaken = endTime - startTime;

    // Final Grading
    cout<< CYAN << "========== RESULT ==========\n" << RESET;
    cout<< "Total Score: " << score << " / 50\n";
    cout<< "Time Taken:  " << timeTaken << " seconds\n";

    if (score == 50) {
        cout<<GREEN << "Outstanding! Full marks!\n" << RESET;
    } else if (score >= 30) {
        cout<<"Good effort! Keep learning.\n";
    } else {
        cout<<RED<< "You need more practice.\n" << RESET;
    }

    return 0;
}