

array = [ 2, 3, 4, 10, 40 ]


x= 40


def binarySearch(x,array, low , high):
    if high >= low:
        mid = (high + low) // 2
        if array[mid] == x:
            return mid
        elif array[mid] > x:
            return binarySearch(x, array, low, mid - 1)
        else:
            return binarySearch(x, array, mid + 1, high)
    else:
        return -1


result = binarySearch(x, array, 0, len(array) - 1)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Element is not present in array")
