# --- Exercice 1 ---
Ident = c(1:5)
Sexe = c('H','F','F','H','H')
Poids = c(75,68,48,72,83)
Taille = c(182,165,160,178,183)
A = data.frame(Ident,Sexe,Poids)
B = data.frame(Ident,Sexe,Taille)
C = cbind(A, Taille) # merge(A,B)

# --- Exercice 2 ---
taille<-c(183,160,170,150,191)
sexe<-c(0,1,1,1,0)
taille[2:4]
taille[sexe > 0]

# --- Exercice 3 ---
x<-c(0.2,0.6,2.1,3.7,2.8,2.7,1.9,2.3,5.9)
x[x > 2 & x < 3]

# --- Exercice 4 ---
Y = matrix(
	data = c(1,6,5,0,0,6,6,1,3,0,2,2,4,4,3,4), 
	nrow=4,
	ncol=4,
	byrow = TRUE)

# colnames(Y) = paste("column ", 1:4)
# dimnames(Y) = paste("row", 1:4, sep="=")
dimnames(Y) <- list(
	rownames(Y, do.NULL = FALSE, prefix = "row-"), 
	colnames(Y, do.NULL = FALSE, prefix = "column ")
)
det(Y) # Calcul du determinant de la matrice
solve(Y) # Inverse de la matrice

# --- Exercice 5 ---
apply(Orange[2:3], 2, mean) # colMeans(Orange[2:3]) 
apply(Orange[2:3], 2, sd)
apply(Orange[2:3], 2, min)
apply(Orange[2:3], 2, quantile)
apply(Orange[2:3], 2, quantile, prob = seq(0.1,1,length=10))

# --- Exercice 6 ---
k<-rep(c(8,2,6), 3)
w<-c(rep(4,7),rep(9,5),rep(2,3))
w<-rep(c(4,9,2),c(7,5,3))

# --- Exercice 7 ---
taille<-c(178,175,160,191,176,155,163,174,182)
taille1<-c(164,172,156,195,166)
new.taille<-c(rep(taille1, 2), taille[3:9])
write.csv(new.taille, file="output.csv")

# --- Exercice 8 ---

# --- Exercice 9 ---

# --- Exercice 10 ---

# --- Exercice 11 ---
