library(spelling)

tmp <- tempfile(fileext=".Rmd")
file.copy("mrgsolve-vignette.qmd", tmp)

ignore <- c(
  "Rcpp", "tidyverse", "vskip", 
  "NMTRAN", "NONMEM", "mrgsolve", "mrgreen", "mrg", 
  "pre", "rescale", "tibble", "yaml", "locf", 
  "hrule", "idata", "ETAs", "EVID", "dplyr", "cpp", 
  "ALAG", "autodec", "azithromycin", "nm", "NONMEM's", 
  "pharmacokinetic"
)

spell_check_files(tmp, ignore = ignore)

