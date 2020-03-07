import os 

path="/Users/abraham/Downloads/Tree Photos/"
lst=os.listdir(path)
print(lst)
for filename in lst :
    source= path + filename
    print(source)
    destination=source + ".jpg"
    os.rename(source,destination)