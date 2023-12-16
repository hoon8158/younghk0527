#include <stdio.h>

// 학기 정보를 담는 구조체
struct Semester {
    float credit;
    float score;
};

// 학점 계산 함수
float calculator(struct Semester semesters[], int Grade, int Semester) {
    float totalGradePoints = 0.0;
    float totalCredits = 0.0;

    for (int year = 1; year <= Grade; year++) {
        float yearTotalGradePoints = 0.0;
        float yearTotalCredits = 0.0;

        for (int semester = 1; semester <= ((year == Grade) ? Semester : 2); semester++) {
            printf("%d-%d 학점: ", year, semester);
            scanf("%f", &(semesters[(year - 1) * 2 + semester - 1].credit));

            printf("%d-%d 점수: ", year, semester);
            scanf("%f", &(semesters[(year - 1) * 2 + semester - 1].score));

            yearTotalGradePoints += semesters[(year - 1) * 2 + semester - 1].credit * semesters[(year - 1) * 2 + semester - 1].score;
            yearTotalCredits += semesters[(year - 1) * 2 + semester - 1].credit;
        }
        
        // 해당 학년 학기의 평균 계산
        if (yearTotalCredits > 0) {
            float yearGPA = yearTotalGradePoints / yearTotalCredits;
            printf("%d 학년 평균 평점: %.2f\n", year, yearGPA);

            // 전체 총 평점 및 학점 갱신
            totalGradePoints += yearTotalGradePoints;
            totalCredits += yearTotalCredits;
        }
    }

    // 전체 총 평점 계산
    if (totalCredits > 0) {
        return totalGradePoints / totalCredits;
    }
    else {
        return 0.0;
    }
}

// 학점계산기 사용 여부 확인 함수
char Calc_start() {
    char start;
    printf("학점계산기를 사용하시겠습니까? (y/n): ");
    scanf(" %c", &start);
    return start;
}

// 학년 학기 입력 함수
void getYearSemester(int* Grade, int* Semester) {
    printf("학년 학기를 입력하시오 (예: 2 2): ");
    scanf("%d %d", Grade, Semester);
}