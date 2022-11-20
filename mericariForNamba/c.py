def main(arr=[1, 2, 3, 1, 2]):
    n = len(arr)
    cost = 0
    for i in range(n - 2, -1, -1):
        cost += abs(arr[i + 1] - arr[i])
    return cost


main()
