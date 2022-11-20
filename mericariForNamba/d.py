def main(s='abcdde'):
    left = 0
    right = len(s) - 1
    cost = 0
    while left < right:
        if(s[left] == s[right]):
            left += 1
            right -= 1
        else:
            cost += 1
            left += 1
    print(cost)
    return cost


main()
