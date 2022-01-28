a = int(input()) 
if a > 41:
    print("AGC{}".format(str(a+1).zfill(3)))
else:
    print("AGC{}".format(str(a).zfill(3)))
