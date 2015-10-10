all:                                                                                                                 
    @$(MAKE) -C node
    @$(MAKE) -C example
    @$(MAKE) -C test
    mkdir -p release

clean:
    @$(MAKE) clean -C node
    @$(MAKE) clean -C example
    @$(MAKE) clean -C test
    @if [ -d ./release ] ; then rm -rf ./release ; fi
