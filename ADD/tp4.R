# Chargement de la librairie
library(FactoMineR)

# --- Exercice 1 ---
joujou = read.table("joujou.txt")
pca.joujou = PCA(joujou, graph=FALSE)
#dimdesc(pca.joujou)
# V2, V4 sont fortement correlé dans la dim1
# V3 est fortement correlé dans la dim2
# V1 est faiblement correlé dans les dim1 et dim2

# --- Exercice 2 ---
chaise = read.table("chaise.txt")
pca.chaise = PCA(chaise, graph=FALSE)
#dimdesc(pca.chaise)
# $Dim.1$quanti
#    correlation     p.value
# V2   0.8852262 0.008050480
# V1   0.8790485 0.009146298
# V5   0.8419835 0.017475102
# V6   0.7821491 0.037686843
	# $Dim.2
# $Dim.2$quanti
#    correlation    p.value
# V4   0.7665024 0.04441757
# V3   0.7584628 0.04811430

# --- Exercice 3 ---
papillon = read.table("papillon.txt")
pca.papillon = PCA(papillon)
# $Dim.1$quanti
#    correlation      p.value
# V3   0.9574313 8.336957e-13
# V2   0.9574202 8.359493e-13
# V1   0.8098129 2.847019e-06
# V4  -0.4142490 4.939177e-02


# $Dim.2
# $Dim.2$quanti
#    correlation      p.value
# V4   0.9061212 2.679069e-09


# $Dim.3
# $Dim.3$quanti
#    correlation     p.value
# V1  -0.5408064 0.007710041

# --- Exercice 4 ---
