import re

def input_as(T=str, num=2):
    return [T(x) for x in re.split(r'\s+', input())]

def main():
    N, T = input_as(int)
    homework = []
    homeworkdiff = []
    homeworksum = 0
    for i in range(N):
        a, b = input_as(int)
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