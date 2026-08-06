#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main() {
//	int multi = 1;
//	int number = 1;
//	while (1) {
//		multi = multi * number;
//		if (multi >= 50000) {
//			printf("multi: %d", multi);
//			break;
//		}
//		number++;
//	}
//	return 0;
// }

// int main() {
//	int i = 65;
//	while (i < 91) {
//		printf("%c\n", i);
//		i++;
//		if (i == 70) {
//			i++;
//			continue;
//		}
//	}
//	return 0;
// }

// int main() {
//	int num = 0;
//	int a, b;
//	while (1) {
//		printf("A: ");
//		scanf("%d", &a);
//		num = num + a;
//		printf("=> %d\n", num);
//		if (num >= 31) {
//			printf("B 승리");
//			break;
//		}
//		printf("B: ");
//		scanf("%d", &b);
//		num = num + b;
//		printf("=> %d\n", num);
//		if (num >= 31) {
//			printf("A승리");
//			break;
//		}
//	}
//	return 0;
// }

// int main() {
//	int sum = 0;
//	int input;
//	int turn = 0;
//	while (1) {
//		printf("%c: ",turn?'B':'A');
//		if (turn) {
//			turn = 0;
//		}
//		else {
//			turn = 1;
//		}
//		scanf("%d", &input);
//		sum = sum + input;
//		printf("=> %d\n", sum);
//		if (sum >= 31) {
//			printf("%c승리", turn ? 'B' : 'A');
//			break;
//		}
//
//	}
// }

// int main() {
//	int sum = 0;
//	int input = 0;
//	int num = 0;
//	int count = 0;
//
//	printf("플레이어 수:");
//	scanf("%d", &count);
//
//	while (1) {
//		num = num % count + 1;
//		printf("%d번 플레이어>", num);
//		scanf("%d", &input);
//		sum = sum + input;
//		printf("지금까지의 합: %d\n", sum);
//		if (sum >= 31) {
//			printf("%d번 플레이어 패배", num);
//			break;
//		}
//	}
// }

// int main()
//{
//     char PlayerInput[30] = "";
//     int TotalCount = 0;
//     int PlayerIndex = 0;
//     int PlayerCount = 0;
//     char *ReturnToken = NULL;
//     printf("플레이어 수 입력: ");
//     scanf("%d", &PlayerCount);
//     printf("총 플레이어 수: %d\n", PlayerCount);
//     printf("━━━━━━━━━━━━━━━━━━━━\n");
//
//     while (getchar() != '\n')
//         ;
//     while (1)
//     {
//         PlayerIndex = PlayerIndex % PlayerCount + 1;
//         printf("\033[36m%d번 플레이어==>\033[0m", PlayerIndex);
//         fgets(PlayerInput, sizeof(PlayerInput), stdin);
//         PlayerInput[strlen(PlayerInput) - 1] = '\0';
//         ReturnToken = strtok(PlayerInput, ",");
//
//         int index = 0;
//         int ConvertedInput[3] = {0, 0, 0};
//
//         while (ReturnToken != NULL)
//         {
//             ConvertedInput[index] = atoi(ReturnToken);
//             ReturnToken = strtok(NULL, ",");
//             index++;
//         }
//
//         if (index > 3)
//         {
//             printf("\033[31m한 번에 최대 세 개까지만 입력 가능합니다.\n");
//             PlayerIndex = PlayerIndex - 1;
//             continue;
//         }
//         else if (index == 3 && (ConvertedInput[0] + 1 != ConvertedInput[1] || ConvertedInput[1] + 1 != ConvertedInput[2]))
//         {
//             printf("\033[31m다시 입력하세요. 연속된 숫자여야 합니다.\n");
//             PlayerIndex = PlayerIndex - 1;
//             continue;
//         }
//         else if (index == 2 && (ConvertedInput[0] + 1 != ConvertedInput[1]))
//         {
//             printf("\033[31m다시 입력하세요. 연속된 숫자여야 합니다.\n");
//             PlayerIndex = PlayerIndex - 1;
//             continue;
//         }
//         else if (ConvertedInput[0] != TotalCount + 1)
//         {
//             printf("\033[31m다시 입력하세요. Total: %d\n", TotalCount);
//             PlayerIndex = PlayerIndex - 1;
//             continue;
//         }
//
//         for (int i = 0; i < index; i++)
//         {
//             TotalCount = TotalCount + 1;
//         }
//
//         printf("\033[32m현재까지 카운트: %d\n", TotalCount);
//         if (TotalCount >= 31)
//         {
//             printf("\033[31m%d번 플레이어 패배", PlayerIndex);
//             break;
//         }
//     }
// }

int main()
{
    int input;
    enum
    {
        GAMEOVER,
        NEWGAME,
        LOADGAME,
        OPTION
    };

    do
    {
        printf("\n메뉴 선택: %");
        printf("1:새 게임 2:이어하기 3:옵션 (0:종료)");
        scanf("%d", &input);

        switch (input)
        {
        case NEWGAME:
            printf("새 게임\n");
        case LOADGAME:
            printf("세이브 데이터 로드\n");
        case OPTION:
            printf("옵션 세팅\n");
        }
    } while (input != 0);
    printf("게임 종료");
    return 0;
}