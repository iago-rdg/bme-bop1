#include <stdio.h>
 
typedef struct Date {
    int year, month, day;
} Date;
 
typedef struct Competitor {
    char name[31];
    Date birth;
    int rank;
} Competitor;
 
void Date_print(Date d);
 
void Competitor_print(Competitor c);
 
int main() {
    Competitor competitors[5] = {
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };

    /* name of competitor 0 - printf %s */
    /* rank of competitor 2 */
    /* birth date of competitor 4, use the given function */
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    /* is competitor 4 faster than competitor 3? */
    /* was competitor 1 born in the same year as competitor 2? */
    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */
    /* at last print all data of all competitors. */

    printf("Name of competitor 0: %s",competitors[0].name);
    printf("\nRank of competitor 2: %i",competitors[2].rank);
    printf("\nBirth date of competitor 4: ");
    Date_print(competitors[4].birth);
    printf("\nThe first letter of the name of competitor 1: %c",competitors[1].name[0]);
    printf("\nIs competitor 1 among the best three? - %s",competitors[1].rank<=3 ? "yes" : "no");
    printf("\nIs competitor 4 faster than competitor 3? - %s",competitors[4].rank < competitors[3].rank ? "yes" : "no");
    printf("\nWas competitor 1 born in the same year as competitor 2? - %s",competitors[1].birth.year == competitors[2].birth.year ? "yes" : "no");
    printf("\nPrint all data of competitor 1: \n");
    Competitor_print(competitors[1]);    
    printf("\n\nPrint all data of all competitors: ");
    for(int i = 0; i < 5; i++) {
        printf("\n\nCompetitor %i: \n", i);
        Competitor_print(competitors[i]);
    }
 
    return 0;
}
 
void Date_print(Date d) {
    printf("%i-%i-%i",d.year,d.month,d.day);
}
 
void Competitor_print(Competitor c) {
    printf("Name: %s\nBirth: ",c.name);
    Date_print(c.birth);
    printf("\nRank: %i",c.rank);
}