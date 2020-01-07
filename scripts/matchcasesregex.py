import re
pattern = re.compile("\w+ v \w+")


for i, line in enumerate(open('../edited/Law notes.txt')):
    for match in re.finditer(pattern, line):
        print 'Found on line %s: %s' % (i+1, match.group())
