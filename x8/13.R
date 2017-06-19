data <- read.csv("/Users/pingles/Work/cpp-programming-language-exercises/data4.csv")
names(data) <- c("method", "i", "pairs", "time.ns")
data$method <- as.factor(data$method)

require(ggplot2)
p <- ggplot(data, aes(x=method, y=time.ns))
p + geom_boxplot()

require(plyr)
s <- ddply(data, c("method"), summarize, mean = mean(time.ns), sd = sd(time.ns))
summary(subset(data, method == 'indexer'))
summary(subset(data, method == 'pointer'))
summary(subset(data, method == 'string::operator[]'))
