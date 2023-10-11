/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char Name[50];
    float Score;
};

int main() {
    struct Student students[4];

    for (int i = 0; i < 4; i++) {
        printf("Student %c\nName :\n", 'A' + i);
        scanf(" %[^\n]", students[i].Name);
        printf("Score :\n");
        scanf("%f", &students[i].Score);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (students[j].Score < students[j + 1].Score) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nOutput:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s ", students[i].Name);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2f ", students[i].Score);
    }
    printf("\n");

    return 0;
}
