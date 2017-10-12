import pip
import re

def install(package):
	value = pip.main(['install', package])
	if value == 0:
		print('success', package, 'value', value)
	else:
		print('failure', package, 'value', value)

if __name__ == '__main__':
	with open('requirements.json') as f:
		content = f.read()
		pattern = "([^\n=]+)=="
		packages = re.findall(pattern, content)
		print (len(packages), packages)
		for p in packages:
			install(p)