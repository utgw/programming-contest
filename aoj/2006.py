N=int(input())
chars=('','.,!? ','abc','def','ghi','jkl','mno','pqrs','tuv','wxyz')
for i in range(N):
    instr=input().rstrip()
    for chunk in [x for x in instr.split('0') if len(x)>0]:
        print(chars[int(chunk[0])][(len(chunk)-1)%len(chars[int(chunk[0])])],end='')
    print()

