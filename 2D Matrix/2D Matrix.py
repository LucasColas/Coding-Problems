def matrice(n):
  mat = []

  for i in range(n//2 + 1):
    mat.append([])
    j = 0
    while j < (n / 2):
      mat[i].append(min(i + 1, j + 1))
      j += 1

    mat[i] = mat[i] + mat[i][::-1] #mat[i][::-1] renverse la liste : la dernière valeur devient la première, l'avant dernière la deuxième, etc.
  if len(mat) >= 3:
    mat = mat + mat[-3::-1] #Ajout de l'autre partie de la matrice
  return mat



n = int(input(" n : "))
m = matrice(n)

for i in m:
  print(i)
