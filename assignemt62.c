#include <stdio.h>
void modifyValues(int *x, int *y)
{
    *x = *x + 10;
    *y = *y * 2;
}

int main()
{
    int a = 5, b = 7;
    printf("Before modification:\n");
    printf("a = %d, b = %d\n\n", a, b);
    modifyValues(&a, &b);
    printf("After modification (inside main):\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

%% Function Definition
subgraph Function_reverse [" "]
Q([Start]) --> R[Declare int temp]
R --> S[Initialize i = 0]

subgraph Reverse_Loop [" "]
S --> T{"i < n/2 ?"}
T -- No --> U[Exit Loop]
T -- Yes --> V["temp = x[i]"]
V --> W["x[i] = x[n - 1 - i]"]
W --> X["x[n - 1 - i] = temp"]
X --> Y[i = i + 1]
Y --> T
end

U --> Z([Return])
end

style Reverse_Loop fill:None,border:#ffffff,stroke:None
style Function_reverse fill:None,border:#ffffff,stroke:None

