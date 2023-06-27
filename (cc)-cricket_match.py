def game(t, m, n):
    i = 0
    for i in range(t):
        if (n*36 >= m):
            print("YES")
        else:
            print("NO")

x = int(input())
i = 0
for i in range(x):
    y = int(input())
    z = int(input())

print(game(x,y,z))
