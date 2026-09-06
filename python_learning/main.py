nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# List 推導式：[運算表達式 for 變數 in 容器 if 條件]
even_squares = [x*x for x in nums if x % 2 == 0]
print(even_squares)  # [4, 16, 36, 64, 100]

# Dict 推導式：把 tuple 陣列快速轉為 hash map
raw_data = [("server1", 8080), ("server2", 9000)]
port_map = {name: port for name, port in raw_data}
print(port_map)      # {'server1': 8080, 'server2': 9000}