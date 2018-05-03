N = int(input())

if N % 5 == 0:
    print(N // 5)
    exit()
bottle_5kg = N // 5
while bottle_5kg >= 0:
    if (N - 5 * bottle_5kg) % 3 == 0:
        print(bottle_5kg + (N - 5 * bottle_5kg) // 3)
        exit()
    else:
        bottle_5kg -= 1
print(-1)
exit()
