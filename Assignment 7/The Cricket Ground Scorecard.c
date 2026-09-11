#include <stdio.h>
struct Player {
    char name[20];
    int runs;
};
int main() {
    struct Player team[5] = {
        {"ABCD", 45}, {"EFGH", 62}, {"IJKL", 12},
        {"MNOP", 88}, {"QRST", 21}
    };
    int i, teamTotal = 0;
    printf("Cricket Ground Scorecard\n");
    for(i = 0; i < 5; i++) {
        printf("%-18s %3d runs\n", team[i].name, team[i].runs);
        teamTotal = teamTotal + team[i].runs;
    }
    printf("************************\n");
    printf("%-18s %3d runs\n", "Team Total", teamTotal);
    return 0;
}