#include <stdio.h>

// 학기 정보를 담는 구조체
struct Semester {
    float credit;
    float score;
};

// 학점 계산 함수
float calculator(struct Semester semesters[], int Grade, int Semester);

// 학점계산기 사용 여부 확인 함수
char Calc_start();

// 학년 학기 입력 함수
void getYearSemester(int* Grade, int* Semester);

// 메인 함수
int main() {
    // 학기 정보 배열을 저장하는 배열
    struct Semester semesters[10];

    int Grade, Semester;

    // 학점계산기 사용 여부 확인
    char start = Calc_start();
    if (start != 'y' && start != 'Y') {
        printf("학점계산기를 종료합니다.\n");
        return 0;
    }

    // 학년 학기 입력
    getYearSemester(&Grade, &Semester);

    // 총 평점 계산 및 출력
    float totalGPA = calculator(semesters, Grade, Semester);
    printf("\n전체 평균 평점: %.2f\n", totalGPA);

    return 0;
}