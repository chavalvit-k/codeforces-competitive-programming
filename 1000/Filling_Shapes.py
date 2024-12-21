"""
Author: passa
Task #: 1182A
Task Name: Filling Shapes
Difficulty: 1000
Language: Python
"""

def solution(n):
    if n % 2 != 0:
        return 0
  
    return 2 ** int(n/2)

n = int(input())

print(solution(n))