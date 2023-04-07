def bubbleSort(arr, n):
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

if __name__ == "__main__":
    with open("random_ints.txt", "r") as inputFile:
        arr = []
        for line in inputFile:
            for num in line.split():
                arr.append(int(num))

    n = len(arr)

    bubbleSort(arr, n)

    for i in range(n):
        print(arr[i], end=" ")
    print()
