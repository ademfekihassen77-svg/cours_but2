
a=9
b=1
c=b+a
c
a=c(1,3,4,5,6,10,12,14)
a
median(a)
quantile(a)
quantile(a,type=2)
# R calcul de base avec sa propre méthode pour les médianes, pour avoir la méhod qu'on utilise en générale il faut penser a mettre en argument type=2
# summar donne un résumé des valeur des la liste/vecteur données

# moyenne pondéré
x=c(1,3,4,5,6,10,12,14) # notes
n=c(1,2,1,4,2,1,5,1) # coef
weighted.mean(x,n)
a[which((a)%%2 == 0)]


# fonction
variance = function(x) {
  return(mean(x^2)-mean(x)**2)
}
wvar = function(x,n) {
  return(weighted.mean(x**2,n)-weighted.mean(x,n)**2)
}

etype1 = function(x){
  return(sqrt(variance(x)))
}

etype2 = function(x,n){
  return(sqrt(wvar(x,n)))
}

covariance= function(x,y){
  return (sum(x*y)/length(x)-mean(x*mean(y)))
}
droite1= function(x,y){
  m = covariance(x,y)/variance(x)
  p = mean(y)-m*mean(x)
  return(c(m,p))
}
droite2= function(x,y){
  m = covariance(x,y)/variance(y)
  p = mean(x)-m*mean(y)
  return(c(1/m,-p/m))
}
res=runif(300)

x= mean(res)

laa=c()
for (i in 1:100){
  Z=runif(300)
  M=mean(Z)
  laa=c(laa,M)
}
