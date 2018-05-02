from itertools import combinations


class ChickenStore:
    def __init__(self, row, col):
        self.x = row
        self.y = col


class house:
    def __init__(self, row, col):
        self.x = row
        self.y = col

    def ChickenDistance(self, store_list):
        minvalue = 10000000000000000000
        for store in store_list:
            distance = abs(self.x - store.x) + abs(self.y - store.y)
            if distance < minvalue:
                minvalue = distance
        return minvalue


def FindMinChickenDistance(storeList, houseList, r):
    r = int(r)
    minvalue = 100000000000000000000000
    for seperatedStoreList in combinations(storeList, r):
        ChickenDistanceSum = 0
        for house_ in houseList:
            ChickenDistanceSum += house_.ChickenDistance(seperatedStoreList)
        if ChickenDistanceSum < minvalue:
            minvalue = ChickenDistanceSum
    return minvalue


(n, m) = input().split()
village = [tuple(input().split()) for i in range(int(n))]
village = tuple(village)

houseList = []
storeList = []
for i in range(int(n)):
    for j in range(int(n)):
        if village[i][j] == '0':
            pass
        elif village[i][j] == '1':
            houseList.append(house(i, j))
        elif village[i][j] == '2':
            storeList.append(ChickenStore(i, j))
del village

print(FindMinChickenDistance(storeList, houseList, m))
