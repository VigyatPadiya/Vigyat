name <- c("Vigyat","Dhruv","Vishwa","Bhakti")
age <- c(20,20,19,21)
gender <- c("M","M","F","F")

friends <- data.frame(name, age ,gender)

friends$name

friends[ , ]

friends [ friends$age<20,1:2]

library(tidyverse)

friends %>%
  select(name, age) %>%
  filter(age<50) %>%
  arrange(age)
