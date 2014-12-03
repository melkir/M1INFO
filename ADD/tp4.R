# Chargement de la librairie
library(FactoMineR)

# --- Exercice 1 ---
joujou = read.table("data/joujou.txt")
joujou.pca = PCA(joujou, graph=FALSE)
#dimdesc(pca.joujou)
# V2, V4 sont fortement correlé dans la dim1
# V3 est fortement correlé dans la dim2
# V1 est faiblement correlé dans les dim1 et dim2

# --- Exercice 2 ---
chaise = read.table("data/chaise.txt")
chaise.pca = PCA(chaise, graph=FALSE)
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
papillon = read.table("data/papillon.txt")
papillon.pca = PCA(papillon, graph=FALSE)
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
data(decathlon)
scaled.pca = PCA(decathlon, scale.unit=TRUE, quanti.sup=11:12, quali.sup=13, graph=FALSE)
nscaled.pca = PCA(decathlon, scale.unit=FALSE, quanti.sup=11:12, quali.sup=13, graph=FALSE)
# pdf("DecathlonGraph.pdf",width=12,height=10)
# par(mfrow=c(2,2))
# plot(scaled.pca, choix="ind", new.plot=FALSE)
# plot(scaled.pca, choix="var", new.plot=FALSE)
# plot(nscaled.pca, choix="ind", new.plot=FALSE)
# plot(nscaled.pca, choix="var", new.plot=FALSE)
# dev.off()
barplot(scaled.pca$eig[,1], main="Eigenvalues") # 4 dimensions determinés
barplot(scaled.pca$eig[1:4,2], main="Inertie")
dimdesc(scaled.pca)
