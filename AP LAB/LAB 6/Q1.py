Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
week={1:'Monday',2:'Monday',3:'Monday',4:'Monday',5:'Monday',6:'Monday',7:'Monday'}

week={1:'Monday',2:'Tuesday',3:'Wednesday',4:'Thursday',5:'Friday',6:'Saturday',7:'Sunday'}
week
{1: 'Monday', 2: 'Tuesday', 3: 'Wednesday', 4: 'Thursday', 5: 'Friday', 6: 'Saturday', 7: 'Sunday'}

================== RESTART: N:/AP LAB/LAB 6/Q2.py =================
D1
{141152: 'Sanjay Jain', 141153: 'Abhinav Agarwal', 141154: 'Abhishek Nigam', 141155: 'Aditya Arora', 141156: 'Aditya Srivastava', 141157: 'Aditya Thakur', 141158: 'Amit Kumar', 141159: 'Aashi Jain', 141160: 'Deepak Singh', 141161: 'Mahendra Singh', 141162: 'Vijy Kumar', 141163: 'Aditya Pandey', 141164: 'Aditya Kumar', 141165: 'Aditi Bharadwaj', 141166: 'Anup Kumar Nigam', 141167: 'Abhishek Chatterjee', 141168: 'Abhimanyu Singh'}

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
a
{1: 10, 2: 20, 3: 30, 4: 40}

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
{1: 10, 2: 20, 3: 30, 4: 40}

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
{'one': 1, 'two': 2, 'three': 3, 'four': 4}

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
{'one': 1, 'two': 2, 'three': 3, 'four': 4}

================= RESTART: N:/AP LAB/LAB 6/demo.py ================

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
Traceback (most recent call last):
  File "N:/AP LAB/LAB 6/demo.py", line 6, in <module>
    b.key(1)
AttributeError: 'dict' object has no attribute 'key'. Did you mean: 'keys'?

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
Traceback (most recent call last):
  File "N:/AP LAB/LAB 6/demo.py", line 6, in <module>
    b.keys(1)
TypeError: dict.keys() takes no arguments (1 given)

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
b.keys()
dict_keys(['one', 'two', 'three', 'four'])

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
b.values()
dict_values([1, 2, 3, 4])

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
b.get('two')
2

================= RESTART: N:/AP LAB/LAB 6/demo.py ================
b.update({'five':5})
b
{'one': 1, 'two': 2, 'three': 3, 'four': 4, 'five': 5}
