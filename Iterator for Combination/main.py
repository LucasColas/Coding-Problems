class CombinationIterator:
  def __init__(self, characters, combinationLength):
    self.characters = characters
    self.combinationLength = combinationLength
    self.every_comb = self.generate()

  def generate(self):
    every_comb = []
    for i in range(2**len(self.characters)):
      string = ""
      for j in range(len(self.characters)):

        if ((1<<j) & i > 0):
          string += self.characters[j]
        
        if len(string) == self.combinationLength and string not in every_comb:
          every_comb.append(string)
    
    every_comb.sort()
    return every_comb

  def nextStr(self):
    for id in range(len(self.every_comb)):
      return self.every_comb.pop(id)              

  def hasNext(self):
    if len(self.every_comb) >= 1:
      return True

    return False
        

itr = CombinationIterator("bvwz", 2)
#print(itr.every_comb)
