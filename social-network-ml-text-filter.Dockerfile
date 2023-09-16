# hypercube/social-network-ml-text-filter
FROM yz2297/social-network-text-filter:latest@sha256:9a3d9b2ebed06178fb50fdb05b8671a1b5371e11ec66312ddd4eb30631497380

COPY config/ /social-network-microservices/config
COPY config/service-config-py.json /social-network-microservices/config/service-config.json
