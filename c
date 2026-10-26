#include <stdio.h>

int main() {
    // 프로그램 실행 시 가장 먼저 과목명 출력
    printf("==============================\n");
    printf("     과목명: 양자 컴퓨팅 개론     \n");
    printf("==============================\n\n");

    int att, asg, mid, fin, sum;
   
    // 점수 입력 받기 (정수형)
    printf("출석 점수 입력 (30점 만점): ");
    scanf("%d", &att);
   
    printf("과제 점수 입력 (20점 만점): ");
    scanf("%d", &asg);
   
    printf("중간고사 점수 입력 (25점 만점): ");
    scanf("%d", &mid);
   
    printf("기말고사 점수 입력 (25점 만점): ");
    scanf("%d", &fin);
   
    // 출석 과락 조건 (22점 이하인 경우 총점과 무관하게 F 학점)
    if (att <= 22) {
        printf("\n[성적 결과]\n");
        printf("출석 점수가 22점 이하이므로 과락(F 학점)입니다.\n");
        return 0;
    }
   
    // 총점 계산
    sum = att + asg + mid + fin;
   
    // 결과 출력 및 학점 판정
    printf("\n[성적 결과]\n");
    printf("총점: %d점 / 100점\n", sum);
   
    if (sum >= 90) {
        printf("최종 학점: A 학점\n");
    } else if (sum >= 80) {
        printf("최종 학점: B 학점\n");
    } else if (sum >= 70) {
        printf("최종 학점: C 학점\n");
    } else if (sum >= 60) {
        printf("최종 학점: D 학점\n");
    } else {
        printf("최종 학점: F 학점\n");
    }
   
    return 0;
}
