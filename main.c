#include <stdio.h>

// �б� ������ ��� ����ü
struct Semester {
    float credit;
    float score;
};

// ���� ��� �Լ�
float calculator(struct Semester semesters[], int Grade, int Semester);

// �������� ��� ���� Ȯ�� �Լ�
char Calc_start();

// �г� �б� �Է� �Լ�
void getYearSemester(int* Grade, int* Semester);

// ���� �Լ�
int main() {
    // �б� ���� �迭�� �����ϴ� �迭
    struct Semester semesters[10];

    int Grade, Semester;

    // �������� ��� ���� Ȯ��
    char start = Calc_start();
    if (start != 'y' && start != 'Y') {
        printf("�������⸦ �����մϴ�.\n");
        return 0;
    }

    // �г� �б� �Է�
    getYearSemester(&Grade, &Semester);

    // �� ���� ��� �� ���
    float totalGPA = calculator(semesters, Grade, Semester);
    printf("\n��ü ��� ����: %.2f\n", totalGPA);

    return 0;
}