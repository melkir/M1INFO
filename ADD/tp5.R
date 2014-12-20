#TP5 : Introduction à l'analyse des données


#Exercice 1
#******************************************************************************************************************
#1
#library(FactoMineR)
#data(decathlon)
#decathlon

#2 Competition ets une variable qulitativet et rand et points sont des variables quantifatives
#dim(decathlon)

#3
#summary(decathlon)
#?PCA
#******************************************************************************************************************

#pq on va faire acp?
#on va voir si on a des profil similaire pour creer der groupes

#7
#interpretatin du cercle de correlation
#100 metere est correle neg aveclong.jump
#100 et 110 metre tres corelee
#rank soppose a points
#pole.vault na pas une grande signification car elle est petite
#axe2 separe les variables, on a 2 groupes : * tout ce qui est cours, d200 m en haut (endurance)
#											* les puissances sont en bas
#par rapport aux individus (deuxieme graphe)
#cote positif du premier axe sont ceux qui ont participe aux jeux olypic (minuscules)
#lautre axe est presente par ceux qui ont participe a decastar (majuscule)
#prmeier axe :32,7%
#deuxieme:17,%

#******************************************************************************************************************
#8
#res.pca=PCA(decathlon,quanti.sup=11:12,quali.sup=13)
#******************************************************************************************************************

#******************************************************************************************************************
#plot(res.pca,choix="ind",habillage=13,cex=0.7)
#******************************************************************************************************************

#3ieme graphe : donne la repartiotin selon les classes en differentes couleurs, c plus clair
#les individus des jeux olympic sont en rouge
#les individus de decaster en noir
#cote positif sont les bons joueurs(cote droite du premier axe)
#cote negatif les pires joueurs(cote gauche)

#11
res.decathlon=PCA(decathlon, quanti.sup=11:12,quali.sup=13)
res.decathlohn$eig
barplot(res.decathlon$eig[,2]) # on prend la deuxieme colonne
#on prend ls quatre premiersbares de ce diagmramme

#12
round(res.decathlon$eig([1:4,],2)

#13
dimdesc(res.decathlon)