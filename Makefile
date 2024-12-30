all:
	quarto render mrgsolve-vignette.qmd
	cp mrgsolve-vignette.html docs/index.html
	cp mrgsolve-vignette.pdf docs
