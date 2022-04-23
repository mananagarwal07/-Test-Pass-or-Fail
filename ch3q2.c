#include <stdio.h>

/* PROGRAM TO FIND WHETHER A STUDENT IS PASS OR FAIL IF IT REQUIRES TOTAL 40% AND AT LEAST 33% IN EACH SEBJECT TO PASS. ASSUME 3 SUBJECTS AND TAKE MARKS AS INPUT FROM USER.
 */

int main()
{
    int m1, m2, m3;
    printf("Enter marks1 \n");
    scanf("%d", &m1);

    printf("Enter marks2 \n");
    scanf("%d", &m2);

    printf("Enter marks3 \n");
    scanf("%d", &m3);

    int total = m1 + m2 + m3;

    if(total>=40){
        if(m1<33 || m2<33 || m3<33){
            printf("Sorry you are not passed because your marks in one of the subjects is less than 33");
        }
        else{
            printf("Congratulations you have passed the exam!");
        }
    }
    else{
        printf("Sorry you are not passed because your marks are less than 40%%");
    }

    return 0;
}
