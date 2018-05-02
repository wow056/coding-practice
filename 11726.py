from math import factorial


def combination(n, r):
    if n == 0:
        return 1
    else:
        return factorial(n) // (factorial(r) * factorial(n - r))


def combination_with_repitition(n, k):
    return combination(n+k-1, k)


n = int(input())
one = n
two = 0
case = 0
while one >= 0:
    case += combination_with_repitition(one + 1, two)
    one -= 2
    two += 1
print(case % 10007)
