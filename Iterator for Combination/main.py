


for i in range(2**len(n)):
  cursub_msg = "current subset contains : "
  cursub = ""
  for j in range(len(n)):
    print(1<<j)
    if ((1<<j) & i > 0):
      cursub += (n[j])
      if len(cursub) == 2 and cursub not in every_comb:
        #print(cursub)
        every_comb.append(cursub)

  #print(cursub_msg, cursub)

#print(every_comb)
