FROM node

RUN npm install -g @angular/cli

RUN ng new myAng-app

WORKDIR /myAng-app

CMD ["ng" , "serve" , "--host=0.0.0.0" , "--disable-host-check"]
 
