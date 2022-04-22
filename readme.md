# Docker Commands: 
## Basic Commands
```
docker info
service docker status
service docker start
docker version
```
## Get Help:
```
docker --help | less
```

## 4. Create a container, list container, remove container:
```
docker container ls
docker image ls
docker network ls
docker container run ubuntu cat /etc/os-release
docker container ls -a
docker container run ubuntu sleep 30
docker container rm <container_id> 
docker container rm <container_id> <container_id> 
```

## 5. Docker (in Hindi) : create a container in background, stop,start,detach container,
```
docker container start <container_id> 
docker container stop <container_id> 
docker run -d ubuntu sleep 30 # -d for detach run in background
docker container run -it ubuntu /bin/bash # access shell 
docker container ls -aq # all container's id
docker container rm $(docker container ls -aq) # delete all containers
```
## 6. Docker(in hindi) : docker container inspact
```
docker container inspect <container_id>
docker container inspect <container_id> | less # for readability
```

## 7. Docker(in hindi) : what's going on inside container
```
docker container logs <container_id>
docker container top <container_id>
ps -aux
docker container stats
```

## 8. Docker (in Hindi) : Docker port mapping, rename container, restart container, exec container
```
docker container run -d -p 3600:80 --name test_web nginx
docker container exec -it <container_id> /bin/bash
docker container rename <container_id> <newName>
```
## 9. Docker (in Hindi) : Attach to running container, kill, wait, pause, unpause, prune, port
```
docker container attach <container_id>
docker container kill <container_id>
docker container run -itd ubuntu /bin/bash
docker container wait <container_id>
docker container pause <container_id>
docker container unpause <container_id>
docker container prune # delete all stop containers add -f at the end so it not ask for confirmation
```
## 10. Docker (in Hindi) : create docker container, diff docker container and copy file into container
```
docker container create ubuntu
ocker container diff <container_id>
docker container cp <|directoryOrFile/|> <container_id>:<|dirWhereCopy/|>
```

## 11. Docker (in Hindi) : Export/Import docker container
```
docker container export <container_id> > filename.tar
docker container export <container_id> -o filename1.tar
docker image import filename.tar imageName
docker container run -it imageName /bin/bash
```

## 12. Docker (in Hindi) : how to create docker image from running container (docker commit)
```
docker commit --author "Manisha Kumari" -m "this is test commit" <container_id> <image_name>
docker container run -it <image_name> bin/bash
```

## 13. Docker (in Hindi) : How to push image on docker hub, image tag, image pull, docker login
```
docker pull ubuntu:14.04
docker image tag <imageName> bugsfounder/<imageNameToShow> # tag image
docker login # ENTER USERNAME AND PASSWORD OF DOCKER_HUB ACCOUNT
docker push bugsfounder/<imageNameToShow>
docker pull bugsfounder/<imageNameToShow>
```

## 14. Docker (in Hindi) : How to inspect remove,inspect, list and history for the docker image
```
docker image ls --format "{{.ID}} , {{.Repository}}"
docker image history <imageName>
docker images
docker image rmi <image_name1> <image_name2> # rm and rmi are working same
docker image rmi <image_name1> <image_name2> -f
docker image rm <image_name1>:<version>
docker image inspect <image_name> | less
docker image prune # delete all images
```

## 15. Docker (in hindi ) Docker save/docker load. Diff between export and save & load &import
```
docker image save <image_name> > <image_name.tar> 
docker image save <image_name> -o <image_name.tar> 
docker image load < <image_name.tar>  
```

## 16. Docker (in Hindi) : Layered Architecture and Dockerfiles
```
# Dockerfile
FROM ubuntu:16.04

# build image --> commandline
docker image build -t myubuntu:1 .

# run image --> commandline
docker run -it myubuntu:1
```

## 17. Docker (in Hindi) : Dockerfile (Label, Run, Env, Workdir)
```
# ubuntu image
FROM ubuntu:14.04

# Label
LABEL name="Manisha"
LABEL email="manishakumari200307@gmail.com"

# Environment Variables
ENV NAME manisha
ENV PASSWORD password

# Understanding WORKDIR
RUN pwd>/tmp/1stpwd.txt # /
RUN cd /tmp 
RUN pwd>/tmp/2ndpwd.txt # / (expecting /tmp here but it still /)
WORKDIR /tmp
RUN pwd>/tmp/3rdpwd.txt # /tmp

# create image and run container using build commands given above
```
## 18. Docker (in Hindi) : Dockerfile (add, copy, user) difference between copy and add in docker file
```
# ubuntu image
FROM ubuntu:14.04

# Label
LABEL name="Manisha"
LABEL email="manishakumari200307@gmail.com"

# Environment Variables
ENV NAME manisha
ENV PASSWORD password

# Understanding WORKDIR
RUN pwd>/tmp/1stpwd.txt # /
RUN cd /tmp 
RUN pwd>/tmp/2ndpwd.txt # / (expecting /tmp here but it still /)
WORKDIR /tmp
RUN pwd>/tmp/3rdpwd.txt # /tmp

# install required things
RUN apt-get update && apt-get install -y openssh-server && apt-get install -y python

# adding user manisha
RUN useradd -d /home/manisha -g root -G sudo -m -p $(echo "$PASSWORD" | openssl passwd -1 -stdin) $NAME

# Understanding Switching User
RUN whoami > /tmp/1stwhoami.txt # root

# changing user
USER $NAME

RUN whoami > /tmp/2ndwhoami.txt # manisha

# creating project dir inside tmp dir
RUN mkdir -p /tmp/project

# COPY cppTutorial /tmp/project/ # copy all files inside cppTutorial to /tmp/project/ dir
# ADD cppTutorial /tmp/project/ # add all files inside cppTutorial to /tmp/project/ dir 
# COPY External_test_data.tar.gz /tmp/project/ # copy the tar file as it is to project dir
ADD External_test_data.tar.gz /tmp/project/ # extract the tar file automatically and add all files of .tar.gz to project dir inside container

# create image and run container using build commands given above
```

## 19. Docker ( In hindi) : Dockerfile ( CMD )
```
# a docker file can containe only one CMD command.
# if more than one CMD has been added then last one is execute.
# CMD is execute at the end.

Syntax/Code example:
CMD ["python"]
```

## 20. Docker ( In hindi) : Dockerfile ( Expose and create a SSH container using dockerfile )
```
FROM ubuntu:16.04

# creating username and password as environment variable
ENV NAME manisha
ENV PASS password123

# cteating sshd dir
RUN mkdir -p /var/run/sshd

# installing required things
RUN apt-get update
RUN apt-get install -y openssh-server

# creating user called manisha
RUN useradd -d /home/manisha -g root -G sudo -m -p $(echo "$PASS" | openssl passwd -1 -stdin) $NAME

# expose ports
# EXPOSE 22 
EXPOSE 22 80 4444 8000

# CMD command 
CMD ["/usr/sbin/sshd", "-D"]

# build commands:
docker image build -t myubunt:51 . # build image
docker container run -P -itd myubunt:51 # build container using image (-P is important)
```

# Problems While learning
```
1. when i start the nginx container is hosted on port 80 at ip 172.17.0.2 i got it throw inspecting container. ip eg:172.17.0.2 when i send request to the server using browser it showing ``This site can’t be reached.``.
```

