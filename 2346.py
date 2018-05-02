N = int(input())
balloon_input = input()
number = balloon_input.split()
balloons = []
for i in range(N):
    balloons.append({'initial pos': i + 1, 'number': int(number[i])})

i = 0
while True:
    balloon = balloons.pop(i)
    print(balloon['initial pos'], end=' ')
    if not balloons:
        break
    i_initial = i

    i += balloon['number']
    if balloon['number'] > 0:
        i -= 1
    i %= len(balloons)
