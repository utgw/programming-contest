memo = list()
for i in range(10000):
  memo.append(-1)
memo[0:2] = [1,1,1]

def fib(n):
  global memo
  if memo[n] != -1:
    return memo[n]
  memo[n] = fib(n-1) + fib(n-2)
  return memo[n]

i = 0
while len(str(fib(i))) < 1000:
  i += 1

print(i)
