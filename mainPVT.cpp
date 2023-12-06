//Project for data structure in C for Collage class,this program manage student information using a structure called Student.
#include <iostream>
#include <string>
#include <vector>
struct Student {
    int MAT;
    std::string name;
    float note1;
    float note2;
};
void calculateAverage(std::vector<Student>& students) {
    for (int i = 0; i < students.size(); ++i) {
        float average = (students[i].note1 + students[i].note2) / 2.0;
        std::cout << "MAT: " << students[i].MAT << ", Name: " << students[i].name << ", Average: " << average << std::endl;
    }
}
int main() {
    std::vector<Student> students(50);//50 was a teacher request

    for (int i = 0; i < students.size(); ++i) {
        std::cout << "Informar matricula " << i + 1 << ": ";
        std::cin >> students[i].MAT;
        std::cin.ignore(); // Clear newline left in the input buffer
        std::cout << "Nome do aluno " << i + 1 << ": ";
        std::getline(std::cin, students[i].name);
        std::cout << "Primeira nota do aluno " << i + 1 << ": ";
        std::cin >> students[i].note1;
        std::cout << "Segunda nota do aluno " << i + 1 << ": ";
        std::cin >> students[i].note2;
    }

    calculateAverage(students);
    return 0;
}
