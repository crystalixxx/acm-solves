import itertools

def ask (x, y):
    print(x, y)



nums = [i for i in range(1, 10)]
lst_of_permutations = []
for i in itertools.permutations(nums, r=None):
    if i[0] + i[1] + i[2] == 15 and \
            i[3] + i[4] + i[5] == 15 and \
            i[6] + i[7] + i[8] == 15 and \
            i[0] + i[3] + i[6] == 15 and \
            i[1] + i[4] + i[7] == 15 and \
            i[0] + i[4] + i[8] == 15 and \
            i[2] + i[4] + i[6] == 15 and \
            i[2] + i[5] + i[8] == 15:
        lst_of_permutations.append(list(i))
ask(1, 2)
b = int(input())
good = []
for i in lst_of_permutations:
    if i[1] == b - 1 or i[1] == b + 1 or i[1] == b:
        good.append(i)
ask(2, 1)
b = int(input())
for i in good:
    if i[3] == b - 1 or i[3] == b + 1 or i[3] == b:
        print("".join([str(j) for j in i]))
        break
