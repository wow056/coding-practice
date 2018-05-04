dictionary = {}


def calculate(n, call):
    if n == 1:
        return 0
    else:
        global dictionary
        if n in dictionary:
            return dictionary[n]
        elif call > 500:
            return 1000000000
        else:
            templist = []
            if n % 3 == 0:
                templist.append(calculate(n // 3, call + 1) + 1)
            if n % 2 == 0:
                templist.append(calculate(n // 2, call + 1) + 1)
            templist.append(calculate(n - 1, call + 1) + 1)
            dictionary[n] = min(templist)
            return dictionary[n]


X = int(input())
print(calculate(X, 0))