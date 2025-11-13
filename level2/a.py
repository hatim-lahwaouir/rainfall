
import sys


a = bytes.fromhex(sys.argv[1])[::-1]

s = ''

for c in a:
    c = str(c)
    s += '\\x' + c

s = "A" * 80 + s
print(f'echo -e "{s}"')
