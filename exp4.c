#include <stdio.h>

int main() {
    int nums = 0, chars = 0, spaces = 0, others = 0;
    char str[1010];// use array to record input, it's no need, we can counting while input
    int n = 0; // the Lenthe of the array
    while (scanf(" %c", &str[n]) != EOF)//store the input into str[], EOF is the end of the input
        n++;
    for (int i = 0; i < n; i++) //traverse the array, start counting
    {
        if (str[i] >= '0' && str[i] <= '9')// if str[i] is a number it must be 0-9
            nums++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // if str[i] is a charaters it must be a-z or A-Z
            chars++;
        else if (str[i] =='')// if str[i] is a  spaces + 1
            spaces++;
        else
            others++;
    }
    printf("numbers num: %d\n", nums); // output all types' numbers
    printf("chars num: %d\n", chars);
    printf("spaces num : %d\n", spaces);
    printf("others num: %d\n", others);
    return 0;
}
