"""
Author: passa
Task #: 1941B
Task Name: Rudolf and 121
Difficulty: 1000
Language: Python
"""

def solution(lst):
    for i in range(1, len(lst) - 1):
        if lst[i-1] == 0:
            continue
        if lst[i-1] * 2 > lst[i]:
            return "NO"
        
        lst[i] -= lst[i-1] * 2
        lst[i+1] -= lst[i-1]

    if lst[len(lst) - 1] == 0 and lst[len(lst) - 2] == 0:
        return "YES"
    else: return "NO"

def read_input():
    n = int(input())

    lst = [int(a) for a in input().split()]

    return lst

### main ###

t = int(input())

for i in range(t):
    lst = read_input()
    print(solution(lst))