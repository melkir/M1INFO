# Chargement de la librairie
library(FactoMineR)
library(cluster)

data(decathlon)
# scale(decathlon[,1:10])
cah <- agnes(decathlon, method="ward", stand=TRUE)

# plot(cah, xlab = "Individu") # title("Dendogramme")
# plot(cah, xlab="Individu", ylab="Seuil", col.axis="red", col.lab="red", main="Dendogramme Decathlon")
classes = cutree(cah, 4)
# Ajout d'une colonne
decath.classes=cbind.data.frame(decathlon, as.factor(classes))
decath.classes
dim(decath.classes)
colnames(decath.classes)[14]="Classe"
# Decrit la variable qui ont influencés le plus pour la création des cluster
catdes(decath.classes, num.var=14)
res.pca = PCA(decath.classes, quanti.sup=11:12, quali.sup=13:14, graph=FALSE)
#plot(res.pca, choix="ind", habillage=14)
# Uniquement sur les 8 composantes principales
res.pca = PCA(decathlon, quanti.sup=11:12, quali.sup=13, graph=FALSE, ncp=8)
res.cah=agnes(res.pca$ind$coord, method="ward")
#plot(res.cah)
#HCPC(res.pca)
