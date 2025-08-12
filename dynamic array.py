def display(arr):
    print("Array:", arr)

arr = []

# Insert elements
arr.append(10)
arr.append(20)
arr.append(30)
display(arr)

arr.insert(1, 15)   # Insert 15 at index 1
display(arr)

arr.remove(20)      # Remove first occurrence of 20
display(arr)

x = 30
if x in arr:
    print(f"{x} found at index {arr.index(x)}")
else:
    print(f"{x} not found")

arr[0] = 5
display(arr)
