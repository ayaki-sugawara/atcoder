# import math
import os

# import random
# import re
# import sys

#
# Complete the 'findLongestSingleSlot' function below.
#
# The function is expected to return a CHARACTER.
# The function accepts 2D_INTEGER_ARRAY leaveTimes as parameter.
#


def findLongestSingleSlot(leaveTimes):
    # Write your code here
    workTimes = [0 for _ in range(26)]

    for i in range(len(leaveTimes)):
        nowWorker = leaveTimes[i][0]
        nowLeaveTime = leaveTimes[i][1]
        if(i == 0):
            workTimes[nowWorker] = max(nowLeaveTime, workTimes[nowWorker])
        else:
            beforeLeaveTime = leaveTimes[i - 1][1]
            workTimes[nowWorker] = max(nowLeaveTime - beforeLeaveTime, workTimes[nowWorker])

    maxWorker = workTimes.index(max(workTimes))
    return(chr(ord("a") + maxWorker))


a = findLongestSingleSlot([[0, 3], [2, 5], [0, 9], [1, 15]])
print(a)
# if __name__ == '__main__':
#     fptr = open(os.environ['OUTPUT_PATH'], 'w')

#     leaveTimes_rows = int(input().strip())
#     leaveTimes_columns = int(input().strip())

#     leaveTimes = []

#     for _ in range(leaveTimes_rows):
#         leaveTimes.append(list(map(int, input().rstrip().split())))

#     result = findLongestSingleSlot(leaveTimes)

#     fptr.write(str(result) + '\n')

#     fptr.close()
