import sys

def main():
    input = sys.stdin.readline
    N = int(input())
    P = [int(x) for x in input().split()]
    Q = int(input())
    U = []  
    D = [] 
    for i in range(Q):
        U[i], D[i] = [int(x) for x in input().split()]
    
    root_path = {}
    root_path[1] = [1]
    for i in range(N-1):
        root_path[i+2] = root_path[P[i]][:]
        root_path[i+2].append(i+2)

    path_list = [x for x in root_path.values()]
    ans = []
    for i in range(Q):
        temp = 0
        for path in path_list:
            if len(path) == D[i]+1 and C[i] in path:
                temp += 1
        ans.append(temp)

    for a in ans:
        print(a)

if __name__ == '__main__':
     main()
