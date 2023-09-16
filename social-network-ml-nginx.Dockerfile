# hypercube/social-network-ml-nginx
FROM yg397/openresty-thrift:xenial@sha256:6c295fda3c2f6b941d85ebf16421bafac0dcf72450c96f53a2d031b29d8c81ef

COPY nginx-web-server/ /usr/local/openresty/nginx
COPY gen-lua/ /gen-lua
