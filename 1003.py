caseNum = int(input())
output = []
for i in range(caseNum):
    fibindex = int(input())
    lastindex = 1
    fiblist = [(1, 0), (0, 1)]
    for index in range(lastindex, fibindex):
        countZero = fiblist[index - 1][0] + fiblist[index][0]
        countOne = fiblist[index - 1][1] + fiblist[index][1]
        fiblist += [(countZero, countOne)]
    output.append(fiblist[fibindex])
for num in output:
    print("%d %d" % num)
