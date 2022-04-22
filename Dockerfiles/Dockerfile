FROM ubuntu:14.04
ENV NAME manisha
ENV PASS password123
RUN mkdir -p /var/run/sshd
RUN apt-get update
RUN apt-get install -y python tree
COPY test.sh /tmp/
ENTRYPOINT ["/tmp/test.sh"]
