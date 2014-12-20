# Chargement de la librairie
library(FactoMineR)
library(cluster)

data(decathlon)
dnorm=scale(decathlon[,12])
deca.3means=kmeans(dnorm, 3)
