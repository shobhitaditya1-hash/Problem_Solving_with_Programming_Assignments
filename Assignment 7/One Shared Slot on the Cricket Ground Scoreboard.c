#include <stdio.h>
#include <string.h>
union ScoreSlot {
    float runRate;
    char status[10]
};

struct ScoreBoth {
    float runRate;
    char status[10];
};


int main() {
    union ScoreSlot slot;
    
    slot.runRate = 7.5;
    printf("Slot shows run rate: %.1f\n", slot.runRate);
    strcpy(slot.status, "OUT");
    printf("Slot now shows: %s\n", slot.status);
    printf("Run Rate reads now: %.1f <-- leftover, meaningless\n ", slot.runRate);
    printf("sizeof(union ScoreSlot) = %d bytes\n", (int)sizeof(union ScoreSlot));
    printf("sizeof(struct ScoreBoth) = %d bytes\n", (int)sizeof(struct ScoreBoth));
    return 0;
}
