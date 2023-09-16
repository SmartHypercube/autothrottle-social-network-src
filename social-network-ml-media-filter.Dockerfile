# hypercube/social-network-ml-media-filter
FROM yz2297/social-network-media-filter:latest@sha256:f4be531c3d3563e94ee56a53a9aceb0d7ebe949237784c9db8b44950e5f2d953

COPY config/ /social-network-microservices/config
COPY config/service-config-py.json /social-network-microservices/config/service-config.json
