variance.vecteur <- function(x) {
    n <- length(x);
    m <- mean(x);
    V <- (1/(n-1)) * sum((x-m)^2);
    return (V)
}
v<-c(1:3,5,10,12,13,22,5,9,8,34,7,1,4,3);
