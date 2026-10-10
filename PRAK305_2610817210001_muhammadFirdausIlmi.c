#include <stdio.h>

int main() {
    int totalSeconds;
    int day, hour, minute, second, remainder;

    scanf("%d", &totalSeconds);

    day = totalSeconds / 86400;
    remainder = totalSeconds % 86400;

    hour = remainder / 3600;
    remainder = remainder % 3600;

    minute = remainder / 60;
    second = remainder % 60;

    printf("%d hari %d:%d:%d\n", day, hour, minute, second);

    return 0;
}