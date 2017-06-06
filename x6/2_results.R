require(ggplot2)

data <- read.csv("2_results.csv")
data$flag <- as.factor(data$flag)
p <- ggplot(data, aes(x=flag, y=us))
p + geom_boxplot()
