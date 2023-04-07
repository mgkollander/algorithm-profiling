def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

arr = []
with open("random_ints.txt", "r") as infile:
    for line in infile:
        nums = line.split()
        for num in nums:
            arr.append(int(num))

insertionSort(arr)

for i in range(len(arr)):
    print(arr[i], end=" ")
print()
