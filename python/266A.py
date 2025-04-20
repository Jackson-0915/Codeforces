n = int(input())
arr = input()
l = list(arr)
result = 0
for i in range(1, len(l)):
    if l[i - 1] is l[i]:
        result += 1
print(result)