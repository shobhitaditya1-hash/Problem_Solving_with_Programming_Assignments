#include <stdio.h>
#include <string.h>
struct MatchResult {
    int goalA;
    int goalB;
    char winner[20];
};
struct MatchResult buildResult(int goalA, int goalB) {
    struct MatchResult m;
    m.goalA = goalA;
    m.goalB = goalB;
    if (goalA>goalB) {
        strcpy(m.winner, "Team A");
    } else if(goalB>goalA){
        strcpy(m.winner, "Team B");
    } else {
        strcpy(m.winner, "Draw");
    }
    return m;
}
int main() {
    struct MatchResult today = buildResult(3, 1);
    printf("Football Ground Result\n");
    printf("Team A: %d\n", today.goalA);
    printf("Team B: %d\n", today.goalB);
    printf("Winner: %s\n", today.winner);
    return 0;
}