/*C Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print
it.*/
#include <stdio.h>

int main()
{
    int Roll_no,Mark1,Mark2,Mark3,Total;
    float Average;

    printf("Enter the Roll no\n");
    scanf("%d",&Roll_no);
    printf("Enter the 3 subject marks\n");
    scanf("%d\n %d\n %d",&Mark1,&Mark2,&Mark3);
    Total=Mark1+Mark2+Mark3;
    Average=Total/3;
    printf("Student Roll no=%d\n",Roll_no);
    printf("subject1 marks=%d\n",Mark1);
    printf("subject2 marks=%d\n",Mark2);
    printf("subject3 marks=%d\n",Mark3);
    printf("subject Total=%d\n",Total);
    printf("subject Average=%f\n",Average);
    return 0;
}
