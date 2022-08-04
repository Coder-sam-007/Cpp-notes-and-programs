#include <stdio.h>
#include <stdlib.h> // to use system("cls")
#include <unistd.h> // to use sleep()

void quiz();                  // all questions
void history();               // display previus results
void result_countdown(int a); // display recent score and wait 5 sec and jump to next question

int main()
{
    char choice;
    char exit = 'n';
    do
    {
        printf("================      QUIZ   GAME      ================");
        printf("\n\n");
        printf("\n1. Want To Play\n2. Previous Result\nEnter (1 or 2) : ");
        scanf(" %c", &choice);
        system("cls");
        switch (choice)
        {
        case '1':
            quiz();
            break;
        case '2':
            history();
            break;
        default:
            printf("!! wrong option !!\n");
            continue;
        }
        printf("\n\n\nDo you want to EXIT (y/n) : ");
        scanf(" %c", &exit);
        system("cls");
    } while (exit != 'y');
    return 0;
}

void result_countdown(int a)
{
    int i;
    printf("\n\n");
    if (a == 1)
    {
        printf("Right answer  :  +4\n\n");
    }
    else
    {
        printf("Wrong answer  :  -1\n\n");
    }
    printf("Next  :");
    for (i = 5; i >= 0; i--)
    {
        sleep(1);
        printf("  %d", i);
    }
    
}

void history()
{
    FILE *fresult;
    fresult = fopen("history.txt", "r");
    char c;
    printf("----------------------------------------------");
    printf("\n                 Saved Result                 ");
    printf("\n----------------------------------------------\n");
    c = getc(fresult);
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fresult);
    }
    fclose(fresult);
    printf("----------------------------------------------");
}

void quiz()
{
    char name[30];
    int score = 0, a, result;
    printf("================    Rules    ================\n");
    printf("\n--> there are 10 question");
    printf("\n--> +4 for each RIGHT answer");
    printf("\n--> -1 for each WRONG answer");
    printf("\n--> each time enter 1\\2\\3\\4");
    printf("\n\n\n\tplayer name : ");
    scanf("%s", &name);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n1)How many time zones are there in Russia?\n1)9\n2)10\n3)11\n4)12");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 3:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n2)What's the smallest country in the world?\n1)Nauru\n2)Vatican City\n3)Vutan\n4)Monaco");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 2:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n3)Name the longest river in the world?\n1)Amazon River\n2)Yangtze River\n3)Godavari River\n4)Nile River");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n4)Which Indian city is the capital of two states?\n1)Chennai\n2)Mumbai\n3)Chandigarh\n4)Kolkata");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 3:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n5)Who was the last Mughal emperor of India?\n1)Nadir Shah\n2)Jahangir\n3)Muhammad Shah\n4)Bahadur Shāh II");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n6)Which river does not originate from India?\n1)Chenab\n2)Satluj\n3)Ganga\n4)Brahmaputra");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n7)Which of these is a union territory of India?\n1)Shimla\n2)Ladakh\n3)Kolkatta\n4)Chennai");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 2:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n8)Which of the following states is not located in the North?\n1)Jharkhand\n2)Jammu and Kashmir\n3)Himachal Pradesh\n4)Haryana");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n9)Which state has the largest area?\n1)Maharashtra\n2)Madhya Pradesh\n3)Uttar Pradesh\n4)Rajasthan");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);
    printf("\n\n10)Which state has the largest population?\n1)Uttar Pradesh\n2)Maharastra\n3)Bihar\n4)Andra Pradesh");
    printf("\nans : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        score += 4;
        result = 1;
        break;
    default:
        score -= 1;
        result = 0;
    }
    result_countdown(result);
    system("cls");
    printf("================   Player : %s   ================", name);
    printf("\nTotal score  :  %d            ", score);

    FILE *fresult;
    fresult = fopen("history.txt", "a");
    char score_char[5];
    sprintf(score_char, "%d", score);
    fputs(name, fresult);
    fputs("   :   ", fresult);
    fputs(score_char, fresult);
    fputc('\n', fresult);
    fclose(fresult);
}