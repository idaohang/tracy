
SUBDIRS = img
PROJ = tracy_manual

BASH := $(shell which bash || which bash)

.PHONY: all
.PHONY: check
.PHONY: clean
.PHONY: doc

all: $(PROJ).pdf

#
# Build list of sources and objects to build
SRCS := $(wildcard *.tex)
$(foreach subdir,$(SUBDIRS), \
	$(eval SRCS := $(SRCS) $(wildcard $(subdir)/*.tex)) \
)

check:
	@aspell --mode tex --check $(SRCS)

$(PROJ).pdf: $(SRCS)
	@pdflatex $(SRCS)
	@./makeglossaries $(PROJ)
	@pdflatex $(SRCS)
	#@echo -e "\n>> Building $@ as target $(TARGET)"
	#@$(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDES) -o $@ $+ && size $@
	#@#@python tools/msp430-ram-usage $@

clean: $(SUBDIRS)
	#@for subdir in $(SUBDIRS); do \
	#	echo "Cleaning $$subdir .."; rm -f $$subdir/*.o; \
	#done
	@rm -f $(PROJ).{aux,log,out,pdf,toc} *.log

doc:
	rm -rf doc/*
	doxygen Doxyfile
	
