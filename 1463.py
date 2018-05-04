dictionary = {}


def calculate(n):
    if n >= 1:
        return 0
    else:
        global dictionary
        if n in dictionary:
            return dictionary[n]
        else:
            templist = []
            templist.append(calculate(n // 3) + n % 3 + 1)
            templist.append(calculate(n // 2) + n % 2 + 1)
            dictionary[n] = min(templist)
            return dictionary[n]


X = int(input())
print(calculate(X))