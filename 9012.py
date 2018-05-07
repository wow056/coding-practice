N = int(input())

for i in range(N):
    data = input()
    count_of_open_parenthesis = 0
    is_VPS = True
    for ch in data:
        if ch == '(':
            count_of_open_parenthesis += 1
        elif ch == ')':
            if count_of_open_parenthesis == 0:
                is_VPS = False
                break
            else:
                count_of_open_parenthesis -=1
    if count_of_open_parenthesis > 0:
        is_VPS = False
    if is_VPS:
        print("YES")
    else:
        print("NO")
