library(FactoMineR)
data(decathlon)
# Variable supplémentaire Competition, Rank (non nécessaire à l'ACP)
# ACP pour déterminer si un sportir est plus adapté pour une épreuve endurance ou non par exemple
#			data	   var supp 	     var quatitative
res.pca=PCA(decathlon, quanti.sup=11:12, quali.sup=13, graph=FALSE)
par(mfrow=c(1,2))
plot.PCA(res.pca, choix="ind", habillage=13, cex=0.7)
plot.PCA(res.pca, choix="var")
