#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int PlayerCount = 0;
    int PlayerIndex = 0;
    int TotalCount = 0;
    char PlayerInput[50] = "";
    char *InputPointer = NULL;

    printf("게임에 참가할 인원 수: ");
    scanf("%d", &PlayerCount);

    while (getchar() != '\n');

    while (1)
    {
        PlayerIndex = PlayerIndex % PlayerCount + 1;
        printf("%d번 플레이어: ", PlayerIndex);
        fgets(PlayerInput, sizeof(PlayerInput), stdin);

        int ConvertedInput[3] = {0, 0, 0};
        int index = 0;

        InputPointer = strtok(PlayerInput, ",");
        while (InputPointer != NULL)
        {
            ConvertedInput[index] = atoi(InputPointer);
            InputPointer = strtok(NULL, ",");
            index++;
        }

        if (index == 0)
        {
            printf("잘못된 입력입니다. 숫자를 입력해주세요.\n");
        }
        else if (index > 3)
        {
            printf("최대 세 개까지만 입력할 수 있습니다.\n");
        }
        else if (ConvertedInput[0] != TotalCount + 1)
        {
            printf("잘못된 입력입니다. 연속된 숫자여야 합니다.\n");
            PlayerIndex = PlayerIndex - 1;
            continue;
        }
        else if (index == 3 && (ConvertedInput[0] + 1 != ConvertedInput[1] || ConvertedInput[1] + 1 != ConvertedInput[2]))
        {
            printf("잘못된 입력입니다. 연속된 숫자여야 합니다.\n");
            PlayerIndex = PlayerIndex - 1;
            continue;
        }
        else if (index == 2 && ConvertedInput[0] + 1 != ConvertedInput[1])
        {
            printf("잘못된 입력입니다. 연속된 숫자여야 합니다.\n");
            PlayerIndex = PlayerIndex - 1;
            continue;
        }
        else
        {
            for (int i = 0; i < index; i++)
            {
                TotalCount = TotalCount + 1;
            }
            printf("현재 카운트: %d\n", TotalCount);
            if (TotalCount >= 31)
            {
                printf("%d번 플레이어님이 패배하였습니다.", PlayerIndex);
                break;
            }
        }
    }
}
