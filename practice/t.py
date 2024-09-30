t = int(input())
for i in range(t):
    arr = list(map(int, input().split()))

    if arr[1] - arr[0] == arr[2] - arr[1]:
        ans = arr[3] + (arr[2] - arr[1])
    elif arr[1] // arr[0] == arr[2] // arr[1]:
        ans = arr[3] * (arr[2] // arr[1])
    print(arr[0], arr[1], arr[2], arr[3], ans)