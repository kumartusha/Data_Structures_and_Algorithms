# Here we implement the Binary Search.


def binarySearch(array, start, end, element):
    mid = (start + end) // 2

    while start <= end:
        mid = start + (end - start) // 2
        if array[mid] == element:
            return array[mid]
        
        elif array[mid] > element:
            end = mid - 1
        
        else:
            start = mid + 1
        
    return 0

if __name__ == "__main__":
    array = [1,2,3,4,5,6,7,8,9,10]
    start = 0
    end = len(array) - 1
    element = 12

    if (binarySearch(array, start, end, element)):
        print("Element Found")
    else:
        print("Element Not Found")