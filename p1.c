// #include <stdio.h>
// void main()
// {
//     int num, i, n;
//     printf("enter the range of array:- ");
//     scanf("%d", &num);
//     int arr[num];
//     for (i = 0; i < num; i++)
//     {
//         printf("enter %d element :- ", i);
//         scanf("%d", &n);
//         arr[i] = n;
//     }

//     for (i = 0; i < num; i++)
//     {
//         printf("%d", arr[i]);
//     }
// }

// #include <stdio.h>
// void main()
// {
//     int num;
//     printf("enter number:-");
//     scanf("%d", &num);
//     int arr[num], n;
//     for (int i = 0; i < num; i++)
//     {
//         printf("enter %d:- ", i);
//         scanf("%d", &n);
//         arr[i] = n;
//     }
//     int ans = 0;

//     for (int i = 0; i < num; i++)
//     {
//         ans = ans + arr[i];
//     }

//     printf("%d", ans);
// }

// #include <stdio.h>
// void main()
// {
//     int num;
//     printf("enter number:-");
//     scanf("%d", &num);
//     int arr[num], n, sum = 0;
//     for (int i = 0; i < num; i++)
//     {
//         printf("enter %d:- ", i);
//         scanf("%d", &n);
//         arr[i] = n;
//     }
//     for (int i = 0; i < num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + arr[i];
//         }
//     }
//     printf("%d", sum);
// }

#include <stdio.h>
void main()
{
    int num;
    printf("enter range : - ");
    scanf("%d", &num);
    int arr[num], min, max = 0, n;

    for (int i = 0; i < num; i++)
    {
        printf("enter %d:- ", i);
        scanf("%d", &n);
        arr[i] = n;
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf(" max is %d ", max);
    printf(" min is %d ", min);
}