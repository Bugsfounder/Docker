FROM ubuntu:14.04
LABEL name="Manisha"
LABEL email="manishakumari200307@gmail.com"
ENV NAME manisha
ENV PASSWORD password123
RUN pwd>/tmp/1stpwd.txt
RUN cd /tmp
RUN pwd>/tmp/2ndpwd.txt
WORKDIR /tmp
RUN pwd>/tmp/3rdpwd.txt
RUN apt-get update && apt-get install -y openssh-server && apt-get install -y python
RUN useradd -d /home/manisha -g root -G sudo -m -p $(echo "$PASSWORD" | openssl passwd -1 -stdin) $NAME
RUN whoami > /tmp/1stwhoami.txt
USER $NAME
RUN whoami > /tmp/2ndwhoami.txt
RUN mkdir -p /tmp/project
# COPY cppTutorial /tmp/project/
# ADD cppTutorial /tmp/project/
# COPY External_test_data.tar.gz /tmp/project/
ADD External_test_data.tar.gz /tmp/project/

