# hypercube/social-network-ml-microservices
FROM yg397/thrift-microservice-deps:xenial@sha256:66d016da04e1d584e73cae8826a135610c9bcbd7f338d01e86680ffda9c5614f

ARG NUM_CPUS=1

COPY ./ /social-network-microservices
RUN cd /social-network-microservices \
    && mkdir -p build \
    && cd build \
    && cmake .. \
    && make -j${NUM_CPUS} \
    && make install

WORKDIR /social-network-microservices
