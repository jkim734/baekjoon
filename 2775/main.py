test_case = int(input())
for _ in range(test_case):
    k = int(input())
    n = int(input())
    residence = []
    for i in range(k+1):
        residence.append([])
        residence[i][0] = 1
        for j in range(n):
            residence[0][j] = n+1
    for i in range(k):
        for j in range(n):
            residence[i][j] = residence[i][j-1] + residence[i-1][j]
    print(residence[k][n+1])