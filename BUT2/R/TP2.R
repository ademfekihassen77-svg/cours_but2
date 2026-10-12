X = runif(300)
mean(X)

n = 100
N = 300
M=c()
for (i in 1:n) {
  M=c(M,mean(runif(N)))
}
plot(seq(1,100),M)
m = mean(M)
s=etype1(M)
binf=m-s
bsup=m+s

abline(h=m,col='blue')
abline(h=binf,col='red')
abline(h=bsup,col='red')

 compteur=0
 n=100
 for (i in 1:n){
   if(binf < M[i] & M[i]<bsup ){
     compteur=compteur+1
     
   }
 
 }   
indice=which(M>=binf&M<=bsup)
length(indice)
points(indice,M[indice],col='darkgreen')
