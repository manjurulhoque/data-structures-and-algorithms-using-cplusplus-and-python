def search(arr, key):
    flag = False

    for i in range(len(arr)):
        if arr[i] == key:
            flag = True
            break
    return flag


arr = [5, 3, 6, 2, 8]
if search(arr, 9):
    print("Key Found")
else:
    print("Key not found")
