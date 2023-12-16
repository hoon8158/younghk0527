#include <stdio.h>

// �б� ������ ��� ����ü
struct Semester {
    float credit;
    float score;
};

// ���� ��� �Լ�
float calculator(struct Semester semesters[], int Grade, int Semester) {
    float totalGradePoints = 0.0;
    float totalCredits = 0.0;

    for (int year = 1; year <= Grade; year++) {
        float yearTotalGradePoints = 0.0;
        float yearTotalCredits = 0.0;

        for (int semester = 1; semester <= ((year == Grade) ? Semester : 2); semester++) {
            printf("%d-%d ����: ", year, semester);
            scanf("%f", &(semesters[(year - 1) * 2 + semester - 1].credit));

            printf("%d-%d ����: ", year, semester);
            scanf("%f", &(semesters[(year - 1) * 2 + semester - 1].score));

            yearTotalGradePoints += semesters[(year - 1) * 2 + semester - 1].credit * semesters[(year - 1) * 2 + semester - 1].score;
            yearTotalCredits += semesters[(year - 1) * 2 + semester - 1].credit;
        }
        
        // �ش� �г� �б��� ��� ���
        if (yearTotalCredits > 0) {
            float yearGPA = yearTotalGradePoints / yearTotalCredits;
            printf("%d �г� ��� ����: %.2f\n", year, yearGPA);

            // ��ü �� ���� �� ���� ����
            totalGradePoints += yearTotalGradePoints;
            totalCredits += yearTotalCredits;
        }
    }

    // ��ü �� ���� ���
    if (totalCredits > 0) {
        return totalGradePoints / totalCredits;
    }
    else {
        return 0.0;
    }
}

// �������� ��� ���� Ȯ�� �Լ�
char Calc_start() {
    char start;
    printf("�������⸦ ����Ͻðڽ��ϱ�? (y/n): ");
    scanf(" %c", &start);
    return start;
}

// �г� �б� �Է� �Լ�
void getYearSemester(int* Grade, int* Semester) {
    printf("�г� �б⸦ �Է��Ͻÿ� (��: 2 2): ");
    scanf("%d %d", Grade, Semester);
}