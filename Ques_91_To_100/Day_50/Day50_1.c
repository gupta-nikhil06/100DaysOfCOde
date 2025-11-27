/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

void change_date_format(const char* date_str, char* formatted_date) {
    const char* month_abbr = "Apr";
    char day[3], year[5];
    
    strncpy(day, date_str, 2);
    day[2] = '\0';
    strncpy(year, date_str + 6, 4);
    year[4] = '\0';
    
    sprintf(formatted_date, "%s-%s-%s", day, month_abbr, year);
}

int main() {
    char date_str[11];
    char formatted_date[15];
    
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date_str);
    
    change_date_format(date_str, formatted_date);
    
    printf("Formatted date: %s\n", formatted_date);
    
    return 0;
}