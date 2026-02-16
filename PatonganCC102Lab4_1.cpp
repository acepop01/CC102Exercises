#include <iostream>
using namespace std;

int main() {
    int students, quizzes;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of quizzes: ";
    cin >> quizzes;

    float scores[50][50];

    for (int i = 0; i < students; i++) {
        float sum = 0;

        cout << "\nStudent " << i + 1 << " scores:\n";

        for (int j = 0; j < quizzes; j++) {
            cin >> scores[i][j];
            sum += scores[i][j];
        }

        cout << "Average: " << sum / quizzes << endl;
    }

    return 0;
}
