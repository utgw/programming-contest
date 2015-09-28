def input_as(T=[int]):
    return [t(x) for t,x in zip(T, input().split(' '))]

def main():
    def ok(x):
        l = 0
        for i in range(M):
            num = X[i] - l
            if num > x:
                return False
            if num <= 0:
                l = X[i] + x + 1
            else:
                l = min(N, max(X[i] - 2*num + x, X[i] + (x-num)/2) + 1)
        return l >= N
    
    N, M = input_as([int]*2)
    X = []
    for i in range(M):
        X.append(input_as([int])[0] - 1)
    
    left = -1
    right = 1<<55
    while right - left > 1:
        T = int((left + right)/2)
        if ok(T):
            right = T
        else:
            left = T
    
    print(right)
    return

if __name__ == '__main__':
    main()