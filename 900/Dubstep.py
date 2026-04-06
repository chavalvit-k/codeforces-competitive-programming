"""
Author: passa
Task #: 208A
Task Name: Dubstep
Difficulty: 900
Tags: strings
Language: Python
"""

def solve():
    s = input()
    answer =  " ".join(s.split("WUB")).strip()
    print(answer)

def main():
    solve()

if __name__ == "__main__":
    main()
