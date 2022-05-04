FROM ubuntu:latest

# BASIC ENV SETUP 
RUN apt install build-essential zlib1g-dev libncur
RUN add-apt-repository ppa:deadsnakes/ppa
RUN apt-get -y update

RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends autoconf wget build-essential \
    git pkg-config curl automake libtool curl g++ libopencv-dev libspdlog-dev snap pkg-config unzip \
    libzmqpp-dev libavfilter-dev libavdevice-dev libswresample-dev libswscale-dev libmsgpack-dev \
    && apt-get clean

# install other utils
RUN apt-get -y install zip xauth python3 openssh-client pip

# INSTALLING CMAKE - LATEST
RUN apt install -y apt-transport-https ca-certificates gnupg software-properties-common
RUN wget -o - https:apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tree /usr/share/keyrings/kitware-archive-keyring.gpg >/dev/null
RUN echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ focal main' | tree /etc/apt/-sources.list.d/kitware.list >/dev/null && \
    apt update && \
    rm /usr/share/keyrings/kitware-archive-keyring.gpg && \
    apt install -y kitware-archive-keyring
RUN apt install -y cmake 
RUN cmake --version
RUN mkdir -p /home/manisha-coding/

# INSTALLING QT 
RUN apt-get install qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools

# python packages
RUN apt-get install -y python3-venv
RUN python3 -m pip install grpcio \
    && python3 -m pip install grpcio-tools
RUN python3 -m pip install wheel



