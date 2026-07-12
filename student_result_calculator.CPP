#include<stdio.h>
#include<conio.h>

 void main()

  {char name[30];
    int eng, math, comp, phy, urdu, isl;
    int total, highest, lowest;
    float percentage;

    printf("===== Student Result System =====\n\n");

    printf("Enter Student Name: ");
    scanf("%s", &name);

    printf("Enter English Marks: ");
    scanf("%d", &eng);

    printf("Enter Math Marks: ");
    scanf("%d", &math);

    printf("Enter Computer Marks: ");
    scanf("%d", &comp);

    printf("Enter Physics Marks: ");
    scanf("%d", &phy);

    printf("Enter Urdu Marks: ");
    scanf("%d", &urdu);

    printf("Enter Islamiat Marks: ");
    scanf("%d", &isl);

    total = eng + math + comp + phy + urdu + isl;
    percentage = total/6.0;

    highest = eng;
    if (math > highest) highest = math;
    if (comp > highest) highest = comp;
    if (phy > highest) highest = phy;
    if (urdu > highest) highest = urdu;
    if (isl > highest) highest = isl;

    lowest = eng;
    if (math < lowest) lowest = math;
    if (comp < lowest) lowest = comp;
    if (phy < lowest) lowest = phy;
    if (urdu < lowest) lowest = urdu;
    if (isl < lowest) lowest = isl;

    printf("\n\n===== RESULT =====\n");
    printf("Student Name : %s\n", name);
    printf("Total Marks  : %d\n", total);
    printf("Percentage   : %f\n", percentage);
    printf("Highest Mark : %d\n", highest);
    printf("Lowest Mark  : %d\n", lowest);

    if (percentage >= 80)
        printf("Grade : A");
    else if (percentage >= 70)
        printf("Grade : B");
    else if (percentage >= 60)
        printf("Grade : C");
    else if (percentage >= 50)
        printf("Grade : D");
    else
        printf("Grade : Fail");

    printf("\n");

    if (percentage >= 80)
        printf("Excellent! Keep it up.");
    else if (percentage >= 70)
        printf("Very Good Job!");
    else if (percentage >= 60)
        printf("Good! You can do even better.");
    else if (percentage >= 50)
        printf("Work harder next time.");
    else
        printf("Needs Improvement. Don't give up!");

    getch();
}