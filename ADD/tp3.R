# --- Exercice 1 ---
moyenne.vecteur <- function(x) {
	return (round(mean(x),4))
}

# --- Exercice 2 ---
fact.number <- function(n) {
	if (n < 0) stop("on a besoin d'un entier strictement positif")
	if (n == 0) return (1)
	if (floor(n)!=n) {
		warning("floor number")
		n=floor(n)
	}
	#res=1
	#for (i in 1:n) res=res*i
	#return (res)
	return (prod(1:n))
}

# --- Exercice 3 ---
summary.vecteur <- function(x, type=c("none", "mean", "median", "sd")) {
  type <- match.arg(type)
  switch(type,
  		 none = print("Usage: function(x, type)"),
         mean = mean(x),
         median = median(x),
         sd = sd(x))
}

# --- Exercice 4 ---
abs.vecteur <- function(x) {
	#abs(x)
	for (i in 0:length(x)) {
		if (x[i] < 0) x[i] = -x[i]
	}
}

# --- Exercice 5 ---
binomialDensity <- function(size,prob,color) {
	x<-0:size
	binom=dbinom(x, size, prob)
	plot(x, binom, type="h", col=color)
}

# --- Exercice 6 ---
graph_exo6a <- function() {
	layout(matrix(c(1,2,3,3), 2, 2, byrow = TRUE))
	plot(1:4, rep(1,4), "l")
	plot(1:4, c(2,3,-1,0),"l")
	plot(1:7, 7:1, "p", pch=2)
}

graph_exo6b <- function() {
	layout(matrix(c(1,2,3,3), 2, 2, byrow = TRUE), widths=c(3,1))
	plot(1:4, rep(1,4), "l")
	plot(1:7, 7:1, "p", pch=2)
	plot(1:4, c(2,3,-1,0),"l")
}

# --- Exercice 7 ---
graph_exo7 <- function() {
	x=seq(0,6,0.1)
	y=sin(x)
	plot(x,y, "l", col="red", lwd=15)
}

# --- Exercice 8 ---
graph_exo8 <- function() {
	# TODO
	m<-matrix(c(2,3,0,1,0,0,0,4,0,0,0,5,6,0,0), 5, 3, byrow = TRUE)
	layout(m)
	layout.show(6)
	par(mfrow=c(1,1))	# restore default param
}

# --- Exercice 9 ---
graph_exo9 <- function() {
	attach(Orange)
	plot(age,
		circumference,
		pch=6,
		main="Le jeu de données Orange",
		sub="Auteur : Michel XXXXXX")
}

# --- Exercice 10 ---
graph_exo10 <- function() {
	x=seq(-6,6,0.1)
	norm=dnorm(x)
	plot(x, norm, type="l")
	legend("topright", legend="La loi normale entre -6 et 6", lty=1, seg.len = 1)
	segments(min(x),min(norm),max(x),min(norm))
	segments(0,0,0,max(norm), lty = "dashed")
}

# --- Exercice 11 ---
graph_exo11 <- function() {
	x=seq(-2, 2, 0.1)
	plot(x, x^5+x^3-3*x, "l")
}
