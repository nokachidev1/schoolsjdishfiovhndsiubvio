#include <stdio.h>

int main(void) {
    /* Hardcoded input N = 22 as requested */
    int N = 22;

    int regular_teams = N / 4;
    int remaining_students = N % 4;
    int special_team = (remaining_students >= 2) ? 1 : 0;
    int total_teams = regular_teams + special_team;

    printf("Regular teams = %d\n", regular_teams);
    printf("Remaining students = %d\n", remaining_students);
    printf("Total teams = %d\n", total_teams);
    printf("Special team = %d\n", special_team);

    return 0;
}
