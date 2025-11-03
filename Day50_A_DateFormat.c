// Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20], dd[3], mm[3], yyyy[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    sscanf(date, "%2s/%2s/%4s", dd, mm, yyyy);

    int m = (mm[0]-'0')*10 + (mm[1]-'0');

    if (m >= 1 && m <= 12)
        printf("Converted: %s-%s-%s\n", dd, months[m-1], yyyy);
    else
        printf("Invalid month!\n");

    return 0;
}

/*
Sample Test Case:
Input:  12/04/2024
Output: Converted: 12-Apr-2024
*/
