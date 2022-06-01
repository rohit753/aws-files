exit
# Update the list of packages
sudo apt-get update
# Install pre-requisite packages.
sudo apt-get install -y wget apt-transport-https software-properties-common
# Download the Microsoft repository GPG keys
wget -q https://packages.microsoft.com/config/ubuntu/20.04/packages-microsoft-prod.deb
# Register the Microsoft repository GPG keys
sudo dpkg -i packages-microsoft-prod.deb
# Update the list of packages after we added packages.microsoft.com
sudo apt-get update
# Install PowerShell
sudo apt-get install -y powershell
pwsh
ls
ls -lart
exit
service jenkins stop
service jenkins status
apt update && apt -y install ansible
ansible --version
ls
vi /etc/ansible/hosts 
> /etc/ansible/hosts 
cat /etc/ansible/hosts 
vi /etc/ansible/hosts 
cat /etc/ansible/hosts 
ansible -m ping webservers
ansible -m ping all
ssh-keygen -t rsa
cat .ssh/id_rsa.pub
vi playbook.yaml
ansible-playbook.yaml
ansible -playbook.yaml
ansible --version
ansible -playbook.yamlls
ls
ansible-playbook playbook.yaml
vi playbook.yaml
ls
exit
ssh 172.31.20.73
ssh 172.31.20.73 "date"
vi /etc/ansible/hosts 
ansible -m ping webservers
vi playbook.yaml
ansible-playbook playbook.yaml
exit
ls
vi playbook.yaml
ansible-playbook playbook.yaml
vi playbook.yaml
ansible-playbook playbook.yaml
vi playbook.yaml
ansible-playbook playbook.yaml
vi playbook.yaml
ansible-playbook playbook.yaml
vi playbook.yaml
ls
vi playbook.yaml
ansible-playbook playbook.yaml
vi playbook.yaml
ansible-playbook playbook.yaml
ls
ls -lart
mv playbook.yaml playbook1.yaml 
ls -lart
vi playbook1.yaml
ansible-playbook playbook1.yaml
vi playbook1.yaml
ansible-playbook playbook1.yaml
vi playbook1.yaml
vi playbook2\.yaml
ls
ansible-playbook playbook2.yaml
service apache2 status
ls -lart
cat playbook2.yaml 
ansible -m ping webservers
ansible-playbook playbook2.yaml 
ls
vi playbook2.yaml
ansible-playbook playbook2.yaml
cat .ssh/id_rsa.pub
cat .ssh/id_rsa.pub >> .ssh/authorized_keys 
ssh localhost  "date"
vi /etc/ansible/hosts
ansible -m ping webservers
service jenkins stop
ansible-playbook playbook2.yaml
service jenkins stop
s
ls
vi tomcatinstall.yaml
ansible-playbook tomcatinstall.yaml 
ls
mkdir maven
cd maven/
git clone https://github.com/rohit753/MavenBuild.git
ls
cd MavenBuild/
s
ls
mvn clean install
ls
ansible-playbook deploy.yml 
ls
cd maven/
cd MavenBuild/
LS
ls
ansible-playbook playbook2.yaml 
ansible-playbook deploy.yml
service jenkins start
service jenkins restart
service jenkins stop
service jenkins start
service jenkins restart
service jenkins status
vi deploy.yml 
ansible-playbook deploy.yml
ls
vi remotegit.yaml
mkdir remoteRepo
cd remoteRepo/
cd ..
cp remotegit.yaml remoteRepo/
ls
cd remoteRepo/
ls
ansible-playbook remotegit.yaml 
ls
vi remotegit.yaml 
ansible-playbook remotegit.yaml 
ls
vi remotegit.yaml 
pwd
cd ..
ls

ansible-playbook tomcatuninstall.yaml 
vi tomcatuninstall.yaml 
ansible-playbook tomcatuninstall.yaml 
ls
vi tomcatinstall.yaml 
ls
cd remoteRepo/
ls
vi remotegit.yaml 
cd .
cd ..
ls
vi tomcatuninstall.yaml 
ls~
ls
vi Tomcatinstall.yaml
ansible-playbook Tomcatinstall.yaml 
vi Tomcatinstall.yaml
ansible-playbook Tomcatinstall.yaml 
vi Tomcatinstall.yaml
ansible-playbook Tomcatinstall.yaml 
vi Tomcatinstall.yaml
ansible-playbo
ls\
ls
ansible-playbook tomcatinstall.yaml 
apt update && apt install docker.io
mkdir docker
cd docker/
docker images
ls
docker pull python
ls
docker images
docker pull ubuntu
docker images
docker run -it ubuntu bash
service jenkins stop
docker images
docker run -d mysql
docker images
docker rmi ubuntu
docker rmi ubuntu -f
docker ps
docker pull tomcat:latest
docker run -d --name tomcat_prod tomcat
docker ps -a 
docker stop c5eca32c70de
docker ps -a 
docker stop d2e4e1f51132
docker rm `docker ps -a -q` -f
docker ps -a
docker image
docker images
docker run -d mysql
docker ps -a
docker logs recursing_solomon
docker run -d -e MYSQL_ROOT_PASSWORD=121211 mysql
docker ps -a
docker logs friendly_snyder
ls
cd docker/
ls
git clone https://github.com/anujdevopslearn/Docker
ls
cd Docker/
docker build -t phpcode . -f Dockerfile
ls
docker images
docker run -d -p 3307:3306 -e MYSQL_RANDOM_ROOT_PASSWORD=yes mysql
docker ps
ls
cd docker/
cd Docker/
ls
cd docker/
ls
git clone https://github.com/anujdevopslearn/DockerPipeline.git
ls
cd DockerPipeline/
ls
docker build -t DockerPipleLine . -f Dockerfile
docker build -t dockerpipleline . -f Dockerfile
mvn clean install
docker build -t dockerpipleline . -f Dockerfile
docker images
cd docker/
ls
git clone https://github.com/anujdevopslearn/SpringBootDocker.git
ls\
ls
cd SpringBootDocker/
docker build -t springboot . -f Dockerfile
mvn install
docker build -t springboot . -f Dockerfile
docker images
service jenkins status
service jenkins stop
service jenkins status
docker run -d -p 8080:8080 springboot
ls
cd docker/
ls
git clone https://github.com/anujdevopslearn/node-docker-example
ls
cd node-docker-example/
ls
docker build -t nodedockerexample . -f Dockerfile
ls
docker run -d -p 8080:8080 nodejsexampledocker
docker run -d -p 8080:8080 nodedockerexample
docker run -d -p 8084:8080 nodedockerexample
docker ps -a
docker logs 6ff9c72121db
vi /home/app/.npm/_logs/2022-05-12T07_51_59_774Z-debug.log
df -h
pwd
mvn clean install
docker run -d nodedockerexample
docker ps -a
docker logs 4213105b645b
ls
cat Dockerfile 
docker run -d -p 3000:3000  nodedockerexample
docker ps -a
docker logs 80dcd2b02de8
docker build -t springboot . -f Dockerfiledocker build -t springboot . -f Dockerfile
cd docker/
ls
mkdir composedocker
cd composedocker/
vi dockercompose.yml
ls
docker-compose run dockercompose.yml 
apt install docker-compose
docker-compose run dockercompose.yml 
ls
cd docker/
ls
cd composedocker/
docker-compose config
ls
mv dockercompose.yml . docker-compose.yml
vi docker-compose.yml
vi dockercompose.yml 
vi docker-compose.yml
docker-compose config
vi docker-compose.yml
cd docker/
ls
cd composedocker/
ls
vi docker-compose.yml 
cd docker/
cd composedocker/
vi docker-compose.yml 
docker-compose build
rm dockercompose.yml 
ls
docker-compose build
vi docker-compose.yml 
docker-compose build
vi docker-compose.yml 
docker-compose build
vi docker-compose.yml 
docker-compose build
docker ps -a
docker images
service tomcat stop
service tomcat status
docker-compose up -d
docker-compose down
docker-compose up -d
docker ps -a
docker-compose down
vi docker-compose.yml 
docker-compose up -d
vi docker-compose.yml 
docker-compose up -d
docker ps -a
docker-compose up -d
vi docker-compose.yml 
ls
cd d
cd docker/
ls
cd composedocker/
ls
docker ps -a
docker-compose down
docker ps -a
docker stop eefc9f67ef1d
docker ps -a
docker stop 6dcf79286809
docker ps -a
docker images
df -h
docker images
cd docker/
mkdir swarn
cd swarn/
docker swarm init
docker node ls
cd docker/
cd swarn/
docker service create --name counterapp -p 8080:8080 jocatalin/kubernetes-bootcamp:v1
docker service ls
docker service ps counterapp
cd docker/
cd swarn/
docker service update counterapp --replicas=4
curl localhost:8080
docker ps
curl localhost:8080
docker service ps counterapp
apt-get update && apt-get install -y curl apt-transport-https docker.io
echo '{"exec-opts": ["native.cgroupdriver=systemd"]}' > /etc/docker/daemon.json
service docker restart
curl -s https://packages.cloud.google.com/apt/doc/apt-key.gpg | apt-key add -
echo "deb http://apt.kubernetes.io/ kubernetes-xenial main" >/etc/apt/sources.list.d/kubernetes.list
apt-get update
apt install kubeadm kubectl kubelet
apt-get update && apt-get install -y curl apt-transport-https docker.io
kubeadm init --ignore-preflight-errors=all
kubectl get node
mkdir -p $HOME/.kube
sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config
sudo chown $(id -g) $HOME/.kube/config
kubectl get node
history
export kubever=$(kubectl version | base64 | tr -d '\n')
kubectl apply -f "https://cloud.weave.works/k8s/net?k8s-version=$kubever"
#Using Below Commands to Deploy Custom PODS
kubectl get node
kubectl get pods --all-namespaces
kubectl taint nodes --all node-role.kubernetes.io/master-
kubectl get pods --all-namespaces
kubectl create deployment kubernetes-bootcamp --image=docker.io/jocatalin/kubernetes-bootcamp:v1 --port=8080
kubectl get deployments
kubectl get pods
kubectl describe pod kubernetes-bootcamp-7dc9765bf6-gbkjw
kubectl exec -ti $POD_NAME curl localhost:8080
kubectl get services
kubectl expose deployment/kubernetes-bootcamp --port=8080 --target-port=8080 --type=NodePort
kubectl describe services kubernetes-bootcamp
kubectl scale deployments/kubernetes-bootcamp --replicas=2
kubectl get pods -o wide
ls
cd docker/
ls
mkdir asiignment
ls
cd asiignment/
mkdir app
cd app/
npm install -g @angular/cli
ng new myAng-app
apt install npm
docker emi ' docker images -q' -f
docker rmi ' docker images -q' -f
docker rmi 'docker images -q' -f
docker rmi `docker images -q` -f
docker images
docker stop 8fafd8af70e9
docker ps -a
docker stop 119a1666efb8
docker ps -a
df -h
docker rm `docker ps -a -q` -f
docker rmi 'docker images -q' -f
docker rmi `docker images -q` -f
docker ps -a
df -h
ls
cd docker/
ls
cd asiignment/
cd app/
npm install -g @angular/cli
ls
ls -lart
cd /
ls
cd /usr/local/lib/node_modules/@angular/cli/bin
ls
cd postinstall/
ls
cd ..
ls
cd ..
ls
cd src/
ls
cd /
ls
cd usr/
ls
cd bin/
ls
cd ..
ls
cd src/
ls
cd ..
ls
cd usr/
ls
cd src/
ls
cd ..
exit
cd docker/
cd asiignment/
ls
docker build -t rohit-app:1.0
docker build -t rohit-app:1.0 .
vi Dockerfile 
docker build -t rohit-app:1.0 .
vi Dockerfile 
cd ..
ls
cd docker/
cd asiignment/
ls
cd app/
ls
cd..
cd ..
ng new myAng-app
node -v
apt upgrade nodejs
node -v
ng new myAng-app
apt install nodejs
curl -fsSL https://deb.nodesource.com/setup_16.x | bash -
apt-get install -y nodejs
node -v
ng new myAng-app
cd docker/
cd asiignment/]
cd asiignment
ls
cd myAng-app/
ls
cd src
ls
cd app/
ls
cd ..
cd assets/
ls
cd ..
cd environments/
ls
cd ..
cd ,,
cd ..
ls
cd src/
ls
vi main.ts 
ls
vi test.ts 
find . -name "script*"
find . -name "*.js"
grep -i *.js 
find . -name "s*"
find . -name "ng"
cd docker/
cd asiignment/
cd app/
vi Dockerfile
npm install -g @angular/cli
cd /
cd /usr/local/lib/node_modules/@angular/cli/bin/
ls
cd ..
ls
cd bin/
ls
vi ng.js 
cd ..
ls
cd src/
ls
vi typings.js 
vi typings.d.ts 
ls
cd ..
ls
cd models/
ls
cd ..
ls
vi package.json 
pwd
cd ..
ls
pwd
cd ..
ls
cd @angular/
ls
cd cli
ls
cd src/
ls
cd ..
cd bin/
ls
cd p

ls
ls
cd docker/
cd asiignment/
cd app/
ls
cd ..
ls
vi Dockerfile
ls
vi Dockerfile
ls
vi  Dockerfile 
ald
ls
docker build -t Rohit-app:1.0 .
docker build -t rohit-app:1.0 .
docker images
docker logs b6c4441a8ff5
cd /usr/local/lib/node_modules/@angular/cli/
ls
cd /
ls
cd root
ls
cd docker/
cd asiignment/
;ls
ls
vi Dockerfile 
docker build -t rohit-app:1.0 .
vi Dockerfile 
cd docker/
cd asiignment/
ls
mkdir rough
=l
ls
cp Dockerfile  /rough
ls
cd rough/
ls
cd ..
vim Dockerfile 
cd rough/
ls
vi Dockerfile
l
lsk
ls
cd docker/
cd asiignment/
ls
vim Dockerfile 
ls
docker build -t rohit-app:1.0 .
vim Dockerfile 
docker build -t rohit-app:1.0 .
vim Dockerfile 
docker build -t rohit-app:1.0 .
docker images
docker run rohit-app 
docker run rohit-app
docker run 954f8dc9f3c0
cd ..
ls
cd Docker
ls
cd ..
ls
d
cd docker/
ls
Docker
cd ..
cd docker/
ls
cd asiignment/
ls
docker run 954f8dc9f3c0
ls
vi Dockerfile 
history
docker run 954f8dc9f3c0 -d
docker run 954f8dc9f3c0 -p 8089:8080
docker run 954f8dc9f3c0 -p 8089
docker ps -a
docker logs 954f8dc9f3c0
docker logs 7c8cef8e6df6
docker run 954f8dc9f3c0 
vd docker/
ls
cd docker/
cd asiignment/
ls
rm -r myAng-app/
cd docker/
cd ls
ls
cd asiignment/
ls
vi Dockerfile 
ls
docker images
docker build -t rohit-app:2.0 .
docke images
docker images
docker build -t rohit-app:2.0 .
cd docker/
cd a
cd asiignment/
docker build -t rohit-app:2.0 .
cd docker/
cd asiignment/
ls
cd app/
ls
cd ..
vi Dockerfile 
docker build -t rohitapp2
docker build -t rohitapp2 .
docker images
docker rm 954f8dc9f3c0
docker rm rohit-app
docker rmi rohit-app
docker rmi 954f8dc9f3c0 -f
cd docker/
cd asiignment/
ls
cd rough/
ls
docker build -t myAng .
docker build -t myang .
vi Dockerfile 
cd ..
vi Dockerfile 
cd rough/
vi Dockerfile 
cd ,,
cd ..
vi Dockerfile 
cd docker/
cd asiignment/
history
vi Dockerfile 
docker rm `docker ps -a -q` -f
df -h
cd docker/
cd asiignment/
docker build -t myangapp .
history
cd docker/
cd asiignment/
history
docker rm `docker ps -a -q` -f
cd d
cd docker/
cd asiignment/
history 
docker rmi `docker images -q` -f
docker kill b0e4d4e0d5f2
docker rmi `docker images -q` -f
docker kill b0e4d4e0d5f2
docker kill c5a958631a2e
docker rmi `docker images -q` -f
docker ps
df -h
cd docker/
cd asiignment/~
ls
cd asiignment/
cd rough/
vi Dockerfile 
docker build -t myangapp .
docker login
docker tag nodeimg shubhamglobal/nodeim
docker tag myangapp rohit753/myangapp
docker push rohit753/myangapp
kubectl run myangapp-pod --image=rohit753/myangapp --port=7070 --generator=run/v1
kubectl run myangapp-pod --image=rohit753/myangapp --port=7070
kubectl get pods|egrep -i "^NAME|myangapp-pod"
docker images
docker ps
docker swarm leave
docker swarm leave --force
history
docker rm `docker ps -a -q` -f
docker ps
df -h .
cd docker/
cd 4
cd  asiignment/
history
docker rmi `docker images -q` -f
df -h .
kubectls get pods
kubects get pods
kubectl get pods
kubectl delete deployment kubernetes-bootcamp-b67869b5f-fq2cs
kubectl delete deployment kubernetes-bootcamp-b67869b5f-kmshj
df -h .
kubectl get pods
kubectl delete deployment myangapp-pod
kubectl taint nodes --all node-role.kubernetes.io/master-
ubuntu@ip-172-31-90-181:~$ sudo -i
root@ip-172-31-90-181:~# kubectl taint nodes --all node-role.kubernetes.io/master-
error: taint "node-role.kubernetes.io/master" not found
root@ip-172-31-90-181:~# 
vi deployment.yml
kubectl apply -f deployment.yml
kubectl get deployments -o wide
kubectl delete service kubernetes-bootcamp
kubectl delete service ais-ifm 
kubectl delete service ais-ifm
kubectl get deployments -o wide
kubectl delete service kubernetes-bootcamp
sudo apt-get remove docker docker-engine docker.io containerd runc
apt-get update
apt-get install     ca-certificates     curl     gnupg     lsb-release
history 
docker images
sudo apt-get update
docker images
Kubeadm reset
apt remove --purge jenkins
curl https://assets.nagios.com/downloads/nagiosxi/docs/Installing-Nagios-XI-Manually-on-Linux.pdf
https://assets.nagios.com/downloads/nagiosxi/install.sh | sh
curl https://assets.nagios.com/downloads/nagiosxi/install.sh | sh
clear
ls
mkdir monitoring
cd m
cd monitoring/
docker images
docker pull mysql
docker images
clear
history
clear
$ docker run --name Monitoring-mysql -e MYSQL_ROOT_PASSWORD=121211 -d mysql
docker run --name Monitoring-mysql -e MYSQL_ROOT_PASSWORD=121211 -d mysql
docker ps 
docker logs Monitoring-mysql
whoami
wget https://assets.nagios.com/downloads/ncpa/ncpa-2.4.0.d9.amd64.deb
dpkg -i ncpa-2.4.0.d9.amd64.deb 
vi /usr/local/ncpa/etc/ncpa.cfg
service ncpa_listener restart
service ncpa_listener status
history
cd monitoring/
history
docker images
docker ps
docker ps
apt remove --purge jenkins
apt remove --purge jenkins apache2
clear
history
service ncpa_listener restart
wget https://assets.nagios.com/downloads/ncpa/ncpa-2.4.0.d9.amd64.deb
dpkg -i ncpa-2.4.0.d9.amd64.deb 
ps
service ncpa_listener status
service ncpa_listener stop
service ncpa_listener status
service ncpa_listener start
service ncpa_listener status
exit
history
docker ps
service ncpa_listener status
df -h
sudo apt-get remove nagios-agent
sudo apt-get --purge autoremove nagios-agent
sudo apt-get --purge autoremove nagios
sudo apt-get remove nagios
apt-get updatw
apt-get update
history
service ncpa_listener status
service ncpa_listener stop
service ncpa_listener status
sudo apt-get remove nagios-nrpe-server
sudo apt-get remove --auto-remove nagios-nrpe-server
sudo apt-get purge nagios-nrpe-server
sudo apt-get purge --auto-remove nagios-nrpe-server
top
sudo apt-get remove nagios*
top
service nagios stop
service npcd stop
service ndo2db stop
sudo apt-get remove nagios*
# Stop services
echo "Stopping services..."
service nagios stop
service npcd stop
service ndo2db stop
# Remove init.d files
echo "removing init files..."
rm -rf /etc/init.d/nagios
rm -rf /etc/init.d/npcd
rm -rf /etc/init.d/ndo2db
# Remove users and sudoers
echo "Removing users and suduoers..."
userdel -r nagios
groupdel nagcmd
rm -f /etc/sudoers.d/nagiosxi
# Remove crontabs
echo "Removing crontabs..."
rm -f /etc/cron.d/nagiosxi
# Remove various files
echo "Removing files..."
rm -rf /usr/local/nagios
rm -rf /usr/local/nagiosxi
# Remove NagiosQL files
echo "Removing NagiosQL files..."
rm -rf /etc/nagiosql
rm -rf /var/www/html/nagiosql
rm -rf /var/lib/mysql
rm -rf /var/lib/pgsql
# Not going to do this as it may contain your only backup
#rm -rf /store/backups
# Remove Apache configs
echo "Removing Apache configs..."
rm -f /etc/httpd/conf.d/nagios.conf
rm -f /etc/httpd/conf.d/nagiosxi.conf
rm -f /etc/httpd/conf.d/nagiosql.conf
rm -f /etc/httpd/conf.d/nrdp.conf
rm -f /usr/local/nrdp/nrdp.conf
service httpd restart
# Remove xinetd configs
echo "Removing xinetd configs..."
rm -f /etc/xinetd.d/nrpe
rm -f /etc/xinetd.d/nsca
rm -f /etc/xinetd.d/nrdp
service xinetd restart
# Remove Postgres databases
echo "Removing Postgres and mysql databases..."
yum remove mysql postgresql -y
# Remove DB backup scripts
echo "Removing database backup scripts..."
rm -f /root/scripts/automysqlbackup
rm -f /root/scripts/autopostgresqlbackup
cd /tmp
rm -rf nagiosxi xi*.tar.gz
echo "Preparing to reinstall"
cd /tmp
echo "Downloading latest stable version installer"
wget http://assets.nagios.com/downloads/nagiosxi/xi-latest.tar.gz
# Begin installation
echo "Begining installation! Enjoy the ride!"
tar xzf xi-latest.tar.gz
( cd /tmp/nagiosxi; ./fullinstall; )
top
systemctl start nagios
systemctl status nagios.service
history
history
ansible
ssh localhost "date"
ansible -m ping webservers
cd /usr/bin
ll
cd /var/www
ls
cd html/
ls
cat index.php 
cd ..
ls
cat /etc/ansible/hosts
]
cd /
ls
cd usr
ls
cd ..
cd home/
ls
cd ..
cd etc/
ls
cd java-11-openjdk/
ls
cd ..
ls
cd root/
ls
cd /
ls
cd home/
ls
cd ubuntu/
ls
cd SonarQubeNodeJS/
ls
kubeadm reset
kubeadm init
rm -rf /var/lib/containerd/
apt remove --purge docker.io*
apt install docker.io
apt remove --purge containerd
apt autoremove
apt install docker.io
apt update
apt install docker.io
kubeadm reset
apt remove docker*
apt remove --purge containerd*
apt autoremove
kubectl taint nodes --all node-role.kubernetes.io/master-
kubectl taint nodes --all node-role.kubernetes.io/control-plane-
kubectl taint nodes --all node-role.kubernetes.io/master-
kubectl taint nodes --all node-role.kubernetes.io/control-plane-
kubeadm reset
kubeadm init
mkdir -p $HOME/.kube
sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config
sudo chown $(id -u):$(id -g) $HOME/.kube/config
kubeadm token create --print-join-command
export kubever=$(kubectl version | base64 | tr -d '\n')
kubectl apply -f "https://cloud.weave.works/k8s/net?k8s-version=$kubever"
apt-get update && apt-get install -y curl apt-transport-https docker.io
echo '{"exec-opts": ["native.cgroupdriver=systemd"]}' > /etc/docker/daemon.json
service docker restart
curl -s https://packages.cloud.google.com/apt/doc/apt-key.gpg | apt-key add -
echo "deb http://apt.kubernetes.io/ kubernetes-xenial main" >/etc/apt/sources.list.d/kubernetes.list
apt-get update
apt -y install kubeadm kubectl kubelet
vi /etc/containerd/config.toml 
kubeadm init
mkdir -p $HOME/.kube
df -h
~sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config
sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config
sudo chown $(id -u):$(id -g) $HOME/.kube/config
kubeadm token create --print-join-command
export kubever=$(kubectl version | base64 | tr -d '\n')
kubectl node
kubeadm reset
clear
apt remove --purge kubectl kubeadm kubelet docker.io containerd
docker
apt remove --purge docker.io
apt autoremove
docker
apt remove --purge docker-ce
apt remove --purge docker*
apt install kubectl kubelet kubeadm
kubeadm init
apt remove --purge containerd
apt autoremove
apt remove docker* container*
apt install docker.io
apt install containerd
apt autremove
apt autormeove
apt autoremove
kubeadm init
rm -rf .kube
mkdir -p $HOME/.kube
sudo cp -i /etc/kubernetes/admin.conf $HOME/.kube/config
sudo chown $(id -u):$(id -g) $HOME/.kube/config
kubeadm token create --print-join-command
export kubever=$(kubectl version | base64 | tr -d '\n')
kubectl apply -f "https://cloud.weave.works/k8s/net?k8s-version=$kubever"
kubectl taint nodes --all node-role.kubernetes.io/master-
kubectl taint nodes --all node-role.kubernetes.io/control-plane-
kubectl create deployment kubernetes-bootcamp --image=docker.io/jocatalin/kubernetes-bootcamp:v1 --port=8080
kubectl get deployments
kubectl get deployments -o wide
kubectl get pods -o wide
curl 10.32.0.2:8080
free -m -t
apt remove --purge nginx apache2 postgresql* jenkins -y
apt remove --purge mysql-server-core-5.7 mysql-server-5.7 mysql-server mysql-client mysql-client-5.7 apache2 -y
apt remove --purge nginx apache2 postgresql* jenkins -y
apt remove --purge mysql-server-core-5.7 mysql-server-5.7 mysql-server mysql-client mysql-client-5.7 apache2 -y
apt autoremove -y
free -m -t
curl 10.32.0.2:8080
exit
kubectl
service status jenkins
kubectl get pods
ls
cd docker/
ls
cd ..
ls
history
ls
mkdir helm
ls
cd helm/
helm create kubehemlpro
ls
cd kubehemlpro/
ls
cd templates/
ls
apiVersion: apps/v1
kind: Deployment
metadata:
spec:
history
ls
rm -rf *.yaml tsts NOTES.txt
ls
cd ..
ls
cd kubehemlpro/
cd templates/
ls
project3.yml
vi project3.yml
ls
cd ..
ls
helm package kubehemlpro
LS
ls
helm install randamname ./kubehemlpro-0.1.0.tgz
heml list
helm list
kubectl get all
ls
cd helm/
ls
xcd kubehemlpro
cd kubehemlpro
ls
clear
ls
cd templates/
ls
ci project3.yml 
vi project3.yml 
cd ..
ls
helm list
kubectl get pods
kubectl get all
kubectl get events
ls
cat tomcatinstall.yaml 
ls
ansible -m ping remoteserver
vi etc/ansible/hosts
ansible
ansible -m ping all
vi /etc/ansible/hosts
ansible -m ping remoteservers
ssh-keygen -t rsa
cat .ssh/id_rsa.pub
ssh 174-129-96-31 "date"
ssh 174.129.96.31 "date"
ssh 174.129.96.31 "hostname"
ssh-keygen -t rsa
cat .ssh/id_rsa.pub
ssh 174.129.96.31 "date"
ssh 174.129.96.31 "hostname"
lss
ls
vi playbook2.yaml 
vi Tomcatinstall.yaml 
vi /etc/ansible/hosts
vi tomcatinstall.yaml 
vi /etc/ansible/hosts
ansible-playbook tomcatinstall.yaml 
cat tomcatinstall.yaml 
history
ls
cd /
ls
cd home/
ls
cd ubuntu/
ls
cd ..
ls
cd b
cd bin/
ls
cd  ..
ls
cd usr/
ls
cd srC
cd src/
ls
cd ../../
ls
cd root/
ls
kubectl
kubectl get pods
kubectl get deployments
kubectl get rs
ls -lart
cd .kube
ls
vi config 
mkdir Kuber
cd kuber
ls
cd Kuber/
vi menifest.yml
LAXMI@Rohit MINGW64 ~
$ cd Desktop/
LAXMI@Rohit MINGW64 ~/Desktop
$ ls
'Educative.io - Grokking the Coding Interview - Patterns for Coding Questions - Shortcut.lnk'*
'Employee Authorisation Form- BGC (1).pdf'
'FE Quiz- WEB-13 - docs.google.com.pdf'
'MK SAHU'/
'New folder'/
'Postman Agent.lnk'*
'PowerShell Assignments.docx'
'RAMMap.exe - Shortcut.lnk'*
'Rohit_kumar _sahu.pdf'
'Seven Habits_Covey.pdf'
'Shell Scripting Assignments.docx'
'This PC.lnk'*
'To-do list'/
'WhatsApp Image 2022-05-23 at 11.28.40 AM.jpeg'
'WhatsApp Image 2022-05-24 at 10.24.17 AM.jpeg'
'WhatsApp Image 2022-05-24 at 10.24.27 AM.jpeg'
'WhatsApp Image 2022-05-24 at 10.26.23 AM.jpeg'
'full stack'/
'new 1.bash'
'our first meet plan.jpg'
'pages ikicksrater'/
'~$LLABUS.docx'
LAXMI@Rohit MINGW64 ~/Desktop
$ ssh -i "devopslabs.pem" ubuntu@ec2-35-171-61-204.compute-1.amazonaws.com
ssh: connect to host ec2-35-171-61-204.compute-1.amazonaws.com port 22: Connection timed out
LAXMI@Rohit MINGW64 ~/Desktop
$ ssh -i "devopslabs.pem" ubuntu@ec2-35-171-61-204.compute-1.amazonaws.com
Welcome to Ubuntu 20.04.4 LTS (GNU/Linux 5.13.0-1025-aws x86_64)
16 updates can be applied immediately.
5 of these updates are standard security updates.
To see these additional updates run: apt list --upgradable
Last login: Mon May 30 10:41:28 2022 from 42.109.238.56
ubuntu@ip-172-31-90-181:~$ ls
Kuberhelm  SonarQubeNodeJS  package-lock.json  rohit
ubuntu@ip-172-31-90-181:~$ cd Kuberhelm/
ubuntu@ip-172-31-90-181:~/Kuberhelm$ ls
Chart.yaml  charts  templates  values.yaml
ubuntu@ip-172-31-90-181:~/Kuberhelm$ cd ..
ubuntu@ip-172-31-90-181:~$ sudo -i
root@ip-172-31-90-181:~# ls
Tomcatinstall.yaml  helm        ncpa-2.4.0.d9.amd64.deb      playbook2.yaml  scripts             tomcatuninstall.yaml
deployment.yml      maven       packages-microsoft-prod.deb  remoteRepo      snap
docker              monitoring  playbook1.yaml               remotegit.yaml  tomcatinstall.yaml
root@ip-172-31-90-181:~# cd /
root@ip-172-31-90-181:/# ls
bin   dev  home  lib32  libx32      media  opt   root   run   snap  store  tmp  var
boot  etc  lib   lib64  lost+found  mnt    proc  rough  sbin  srv   sys    usr
root@ip-172-31-90-181:/# cd home/
root@ip-172-31-90-181:/home# ls
nagios  tomcat  ubuntu
root@ip-172-31-90-181:/home# cd ubuntu/
root@ip-172-31-90-181:/home/ubuntu# ls
Kuberhelm  SonarQubeNodeJS  package-lock.json  rohit
root@ip-172-31-90-181:/home/ubuntu# cd ..
root@ip-172-31-90-181:/home# cd ..
root@ip-172-31-90-181:/# ls
bin   dev  home  lib32  libx32      media  opt   root   run   snap  store  tmp  var
boot  etc  lib   lib64  lost+found  mnt    proc  rough  sbin  srv   sys    usr
root@ip-172-31-90-181:/# cd b
-bash: cd: b: No such file or directory
root@ip-172-31-90-181:/# cd bin/
root@ip-172-31-90-181:/bin# ls
clear
kubectl apply -f menifest.yml

kubctl get services
kubectl get services
kubectl expose deployment kube-aws-deployment --type=NodePort --name=kubernetes
kubectl delete service kubernetes
kubectl expose deployment kube-aws-deployment --type=NodePort --name=kubernetes
kubectl expose deployment kube-aws-deployment --type=NodePort --name=my-app
kubectl get services
curl localhost:31181
vi menifest.yml 
kubectl get services
kubectl delete service my-app
kubectl get services
kubectl delete deployment kube-aws-deployment
kubectl get deployment
kubectl delete deployment kubernetes-bootcamp ais-java
kubectl get deployment
kubectl apply -f menifest.yml
kubectl expose deployment kube-aws-deployment type=LoadBalancer --name=my-service-aws
kubectl expose deployment kube-aws-deployment --type=LoadBalancer --name=my-service-aws
kubectl get services
kubectl delete service my-service-aws
kubectl expose deployment kube-aws-deployment --type=LoadBalancer --name=my-service-aws
kubectl get services
la
cd Kuber/
ls
kubectl get deployment
kubectl delete kube-aws-deployment
kubectl delete deployment kube-aws-deployment
kubectl get deployment
kubectl get services
kubectl delete service my-service-aws
kubectl get services
vi menifest.yml 
kubectl apply -f newdeployment.yaml
kubectl apply -f menifest.yml
vi menifest.yml 
cd 8;2u
cd Docker
ls
cd Kuber/
vi menifest.yml 
clear
kubectl apply -f menifest.yml
clear
vi menifest.yml 
kubectl get deployment
kubectl get all
kubectl apply -f menifest.yml
kubectl get all
clear
kubectl expose deployment kube-aws-deployment --type=LoadBalancer --name=r1
kubectl expose deployment kube-aws-deployment --type=NodePort --name=r2
kubectl get all
curl localhost:31260
cd
ls
cd helm/
ls
helm list
kubectl get pods
kubectl get services
curl localhost:32324/greet/Rohit 
cd helm/
ls
helm install prod kubehemlpro-0.1.0.tgz
helm list
kubectl get pods
cd helm
cd t
ls
cd kubehemlpro/
cd templates/
ls
vi project3.yml 
ls
mkdir helm2
cd helm2
ls
cd ..
ls
cd docker/
ls
cd swarn/
cd..
cd ..
ls
cd SpringBootDocker/
ls
docker build -t springjava
docker build -t springjava .
docker images
docker login
docker tag springjava rohit753/springjava
docker push rohit753/springjava
docker login
docker push rohit753/springjava
helm create springjava
tree
cd springjava/
tree
apt  install tree
tree
cd templates/
ls
vi deployment.yaml 
cd /home
ls
cd ubuntu/
ls
cd /root
ls
cd helm
ls
cd kubehemlpro/
ls
cd templates/
ls
vi project3.yml 
cd ..
ls
cd helm2
ls
cd ..
cd docker/
ls
cd SpringBootDocker/
ls
cd springjava/
ls
cd templates/
ls
rm NOTES.txt _helpers.tpl deployment.yaml hpa.yaml ingress.yaml
ls
cd ..
ls
cd ..
ls
rm -vrf springjava/
ls
helm create spring
cd spring/
ls
cd templates/
ls
rm serviceaccount.yaml service.yaml ingress.yaml hpa.yaml
ls
rm NOTES.txt deployment.yaml
vi project.yml
ls
vi project.yml 
rm project.yml 
vi deploy.yml
ls
cd../../
cd ../../
ls
cd ..
docker images
helm package springjava
ls
cd SpringBootDocker/
helm package springjava
ls
helm package spring
ls
helm install prod spring-0.1.0.tgz
helm install prod1 spring-0.1.0.tgz
clear
heml list
clear
helm list
clear
kubectl get deployments
kubectl expose deployment java-spring --type NodePort
kubectl get services
kubectl delete service r2 r
kubectl get services
curl localhost:32324
curl localhost:8080
kubectl get deployments
kubectl delete deployment ais-java kube-aws-deployment
kubectl get deployments
kubectl get services
curl localhost:8080
curl localhost:32324
curl localhost:32324/greet/rohit
history
sudo history
ls
cd docker/
ls
docker images
ls
cd SpringBootDocker/
ls
cd target/
cd ..
ls
cd spring/
ls
cd templates/
ls
vi deploy.yml 
ls
cd ..
ls
cd docker/
ls
cd SpringBootDocker/
ls
vi Dockerfile 
df -h
clear
ls
cd target/
ls
cd docker/
ls
cd SpringBootDocker/
ls
cd spring/
ls
cd templates/
ls
vi deploy.yml 
