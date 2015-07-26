def bs(lst, target):
  center = int(len(lst)/2-1 if len(lst)%2==0 else len(lst)/2)
  if lst[-1] < target or lst[0] > target:
    return False
  else:
    if target > lst[center]:
      return bs(lst[center+1:], target)
    elif target < lst[center]:
      return bs(lst[:center], target)
    else:
      return True

hoge = [1,5,10,12,13]
print(bs(hoge, 10))
