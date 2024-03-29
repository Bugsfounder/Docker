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

21. Docker (in Hindi) : Dockerfile (Entrypoint)
```
# entry point is just like CMD

FROM ubuntu:14.04

# Environment Variables
ENV NAME manisha
ENV PASS password123

# Adding RUN as required
RUN mkdir -p /var/run/sshd
RUN apt-get update
RUN apt-get install -y python tree

# Copy .sh file from machine to container /tmp/
COPY test.sh /tmp/

# ENTRYPOINT HERE
ENTRYPOINT ["/tmp/test.sh"]
```

```
# pull mysql database from docker hub
docker pull mysql

# inspecting mysql image and check the volums path
docker image inspect mysql:latest | less
'''
 "Volumes": {
                "/var/lib/mysql": {}
            },
'''

# creating container using mysql image
docker container  run -d --name mysql1 -e MYSQL_ALLOW_EMPTY_PASSWORD=true mysql


cd /home/jocefyneroot/.local/share/docker/volumes/<volume_id>/_data

# executing container's terminal
docker container exec -it <container_id> bash

inside docker container create some database
"""
mysql
show databases;
create database dbName
"""

# remote the container
docker container rm -f <container_id>

# again creating the container 
docker container run -d --name mysql1 -e MYSQL_ALLOW_EMPTY_PASSWORD=true mysql

# executing container's terminal
docker container exec -it <container_id> bash

inside docker container create some database
"""
mysql
show databases;
create database dbName
# you see all databases that you created is not here all databases was deleted
"""

# creating a container specifying volume name
docker container run -itd -v <volume_name>:/var/lib/mysql mysql 


docker volume basic commands --> commandLine
docker volume ls
docker volume prune 
docker volume create <volume_name>
docker volume inspect <volume_name>
docker volume rm <volume_name>
docker volume rm <volume_name1> <volume_name2> <volume_name3>
```

## 25. Docker (in Hindi) : Docker Bind mount
```
# create folder that you want to share eg: /home/jocefyneroot/bind and create files inside this folder and see inside container file is in sync with system machine
# always give full path of the folder (important)
docker container run -it -v /home/jocefyneroot/bind:/tmp/test/ ubuntu:14.04 bash

# you can also use:
docker container run -it --mount type=bind,source=$(pwd),target=/tmp/test/ ubuntu:14.04 bash
```
26. Docker (in Hindi) : Docker Networking ( Bridge Network Overview )
```
# Basic Commands
docker network ls
```

27. Docker (in Hindi) : Docker Networking (Bridge Network)
```
# docker network create <options> <driver> <name>
docker network create -d bridge test

# attaching network to a container
docker container run -it --network=<name> ubuntu:14.04 bash
```

## 31. Docker (in Hindi) : Docker Networking (Connect, Disconnect)
```
# connect
docker network connect <network_name> <container_id>

# disconnect
docker network disconnect <network_name> <container_id>
```

## 32. Docker (in Hindi) : Docker Networking (Remove, Proun)
```
docker network rm <network_name> 
docker network prune # delete all unused networks 
```

## 33. Docker (in Hindi) : Docker Registry/Repository (Insecure)
```
docker pull registry
docker container run -d -p 5000:5000 --name simple_registory registry

# create image
docker image tag ubuntu:14.04 127.0.0.1:5000/ubuntu:14.04

# push
docker image push 127.0.0.1:5000/ubuntu:14.04

# pull
docker image pull 127.0.0.1:5000/ubuntu:14.04
```

## 34. Docker (in Hindi) : Docker Registry/Repository (secure)
```
# creating ssh key
openssl req -newkey rsa:4096 -nodes -sha256 -keyout certs/domain.key -x509 -days 365 -out certs/
domain.crt

#leave everything blank keep pressing enter if common name enter:
repo.docker.local

cd /etc/docker/
sudo mkdir certs.d
cd certs.d/
sudo mkdir repo.docker.local:5000
sudo cp certs/domain.crt /etc/docker/certs.d/repo.docker.local\:5000/ca.crt


# run this command
docker container run -d -p 5000:5000 --name source_registry -v $(pwd)/certs/:/certs -e REGISTRY_HTTP_TLS_CERTIFICATE=/certs/domain.crt -e REGISTRY_HTTP_TLS_KEY=/certs/domain.key registry

sudo vi /etc/hosts
# add this line 
<ipaddress>   repo.docker.local


docker image tag mongo repo.docker.local:5000/mongo
docker image push repo.docker.local:5000/mongo

```

## 3. Docker Compose (in Hindi) : Create First docker-compose.yml file
```
# commands
docker-compose up -d
docker-compose down

# if you have a docker-compose file with another name instead of docker-compose.yml
# docker-compose -f <file_name> up -d
docker-compose -f docker-compose2.yml up -d
docker-compose -f docker-compose2.yml down


# json file
docker-compose  -f docker-compose.json up -d

```
#### docker-compose.json
```
{
  "version": "3",
  "services": {
    "webapp1": {
      "image": "nginx",
      "ports": [
        "8000:80"
      ]
    },
    "webapp2": {
      "image": "nginx",
      "ports": [
        "8002:80"
      ]
    }
  }
}
```

#### docker-compose.yml
```
version: '3'
services:
  webapp1:
    image: nginx
    ports:
      - "8000:80"
  webapp2:
    image: nginx
    ports:
      - "8002:80"
```

## 4. Docker Compose (In Hindi) : Basic Command ( create, start, stop, rm, up, down, ps, pause, unpause, Kill, exec, run, help, log)
```
docker-compose create # creat has been depricated
docker-compose rm

# use this instead of creat
docker-compose up --no-start

# start stop containers
docker-compose start

# stop running containers
docker-compose stop

# delete containers
docker-compose rm

# images
docker-compose images

# list containers
docker-compose ps

# pause containers
docker-compose pause

# unpause containers
docker-compose unpause

# kill
docker-compose kill

# see which port of container mapping which port of machine
# docker-compose port <container_name> <port>
docker-compose port webapp1 80

# see logs
docker-compose logs

docker-compose exec webapp1 ls
docker-compose run webapp1 ls
docker-compose restart
docker-compose pull
docker-compose scale webapp1=4 webapp2=2
docker-compose top
```

## keyboard hortcuts 
```
# leave container running and come outside docker
ctrl + q or ctrl + p
```

# Problems While learning
```
1. when i start the nginx container is hosted on port 80 at ip 172.17.0.2 i got it throw inspecting container. ip eg:172.17.0.2 when i send request to the server using browser it showing ``This site can’t be reached.``.

2. docker: Error response from daemon: OCI runtime create failed: container_linux.go:380: starting container process caused: exec: "/tmp/test.sh": permission denied: unknown.
ERRO[0000] error waiting for container: context canceled 
```

