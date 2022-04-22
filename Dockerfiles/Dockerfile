FROM ubuntu:16.04
ENV NAME manisha
ENV PASS password123
RUN mkdir -p /var/run/sshd
RUN apt-get update
RUN apt-get install -y openssh-server
RUN useradd -d /home/manisha -g root -G sudo -m -p $(echo "$PASS" | openssl passwd -1 -stdin) $NAME
EXPOSE 22 80
CMD ["/usr/sbin/sshd", "-D"]
