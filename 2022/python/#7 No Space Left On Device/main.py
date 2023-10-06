class Folder:
   def __init__(self,name,parent):
      self.__children={}
      self.__name=name
      self.__parent=parent

   def add(self,node):
      self.__children[node.getName()]=node

   def getName(self):
      return self.__name

   def calcSize(self):
      size=0
      for childName in self.__children:
         node = self.__children[childName]
         if type(node) == Folder:  
            size+= node.calcSize()
         elif type(node) == File:
            size+= node.getSize()
         else:
            return 0
      return size

   def getParent(self):
      return self.__parent
      
   def getChild(self,childName):
      return self.__children[childName]
   
   def getChildren(self):
      return list(self.__children.values())

class File:
   def __init__(self,name,size):
      self.__name=name
      self.__size=size
   
   def getName(self):
      return self.__name

   def getSize(self):
      return self.__size

def sumOfFoldersLessThan100k(node):
   sum=0
   for child in node.getChildren():
      if type(child)==File:
         continue
      else:
         size=child.calcSize()
         if size<=100000:
            sum+=size
            sum+=sumOfFoldersLessThan100k(child)
         else:
            sum+=sumOfFoldersLessThan100k(child)
   return sum
#1297159

def smallestFolderToFreeSpace(node,spaceToFree,smallestSoFar):
   for child in node.getChildren():
      if type(child)==File:
         continue
      else:
         size=child.calcSize()
         if size<spaceToFree:
            continue
         elif size>=spaceToFree and size<smallestSoFar:
            smallestSoFar = size
         smallestSoFar = smallestFolderToFreeSpace(child,spaceToFree,smallestSoFar)
   return smallestSoFar 
#3866390

rootFolder=Folder("root",None)
cwdFolder=rootFolder
with open("input","r") as f:
   lines = f.readlines()
   for line in lines:
      line=line.rstrip()
      line=line.split(" ")
      if line[0]=="$":
         if line[1]=="cd":
            if line[2] == "/":
               cwdFolder=rootFolder
            elif line[2] == "..":
               cwdFolder=cwdFolder.getParent()
            else:
               cwdFolder=cwdFolder.getChild(line[2])
      elif line[0]=="dir":
         cwdFolder.add(Folder(line[1],cwdFolder))
      else:
         cwdFolder.add(File(line[1],int(line[0])))


print(sumOfFoldersLessThan100k(rootFolder))


MAXCAPACITY=70000000
NEEDEDSPACE=30000000
origCapacity=rootFolder.calcSize()
currSpace=MAXCAPACITY-origCapacity
toFree=NEEDEDSPACE-currSpace

print(smallestFolderToFreeSpace(rootFolder,toFree,origCapacity))
