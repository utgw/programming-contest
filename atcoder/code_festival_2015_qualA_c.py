
def input_as(T=[int]):
    return [t(x) for t,x in zip(T, input().split(' '))]

def main():
    N, T = input_as([int]*2)
    homework = []
    homeworkdiff = []
    homeworksum = 0
    for i in range(N):
        a, b = input_as([int]*2)
        homeworksum += b
        homeworkdiff.append(a - b)
    if homeworksum > T:
        print(-1)
        return
    else:
        replace = 0
        for diff in sorted(homeworkdiff):
            if homeworksum + diff <= T:
                homeworksum += diff
                replace += 1
            else:
                break
        print(N - replace)
        return

if __name__ == '__main__':
    main()