import itertools
N = int(input())
A = list('abc')
for i in itertools.product(A, repeat=N):
    print(''.join(i))