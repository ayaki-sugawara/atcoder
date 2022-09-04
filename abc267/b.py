def ifStand(arr):
  flag = False
  for p in arr:
    if p:
      flag = True
  return flag
  
def main():
  s = input()
  p = [int(x) for x in s]
  if(p[0] == 1):
    print('No')
    return
  rows = [
    [p[6]],
    [p[3]],
    [p[7],p[1]],
    [p[0],p[4]],
    [p[2],p[8]],
    [p[5]],
    [p[9]]
  ]
  for i in range(len(rows)):
    for j in range(i+1, len(rows)):
      # check each row
      if ifStand(rows[i]) and ifStand(rows[j]):
        flag = False
        for s in (i+1, j):
          if not ifStand(rows[s]):
            flag = True
        if flag:
          print("Yes")
          return
  print("No")
main()
