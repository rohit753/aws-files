installFun(){
echo " "
echo "Installing jenkins"
curl -fsSL https://pkg.jenkins.io/debian-stable/jenkins.io.key | sudo tee \
    /usr/share/keyrings/jenkins-keyring.asc > /dev/null
echo ""
echo "Key added to the system"
echo deb [signed-by=/usr/share/keyrings/jenkins-keyring.asc] \
    https://pkg.jenkins.io/debian-stable binary/ | sudo tee \
    /etc/apt/sources.list.d/jenkins.list > /dev/null
echo ""
echo "Undating system"
  sudo apt-get update
  echo ""
  echo "Installing openjdk"
  sudo apt-get install fontconfig openjdk-11-jre
  echo ""
  echo "installing Jenkins"
  sudo apt-get install jenkins
  echo "Installing Complete"
  read -p "type 'y' followed by and Enter once the step is complete" fg
  
echo ""
echo "Please open browser and go to 'http//:LocalHost:8080' LocalHost is your VM's IP "
read -p "type 'y' followed by and Enter once the step is complete" fg
echo ""
echo "You should be able to see the jenkin interface if not please contact administrator "
echo "The password is given below please copy and paste the same" 
sudo cat /var/lib/jenkins/secrets/initialAdminPassword
echo ""
read -p "type 'y' followed by and Enter once the step is complete" fg
echo "Please select the plugins you want to install or go with the default Plugins by clicking install "  

read -p "type 'y' followed by and Enter once the step is complete" fg
echo ""
echo "installing plugins may take time "
read -p "type 'y' followed by and Enter once the step is complete" fg
echo ""
echo "Please setup your credential for jenkins and you are good to go "
sudo systemctl status jenkins
}


Start_jen(){
echo ""
echo "Please make sure you have already Installed jenkins "
echo "select 'y' if you have already installed otherwise type 'n' to go back and install "

 select var in y n
 do 
    case $var in 
        y)
	   echo "Good Starting your Jenkins service"
	   sudo systemctl start jenkins
	   sudo systemctl status jenkins
		break ;;
		n)
		echo ""
		echo "Taking you Back please install jenkin first"
	    return 
		break ;;
	 *)
	    echo "Invalid"
		#break;;
	esac
  done
		
}

REStart_jen(){
echo ""
echo "Please make sure you have already Installed jenkins "
echo "select 'y' if you have already installed otherwise type 'n' to go back and install "

 select var in y n
 do 
    case $var in 
        y)
	   echo "Good Restarting your Jenkins service"
	   sudo systemctl restart jenkins
	   sudo systemctl status jenkins
		break ;;
		n)
		echo ""
		echo "Taking you Back please install jenkin first"
	    return 
		break ;;
	 *)
	    echo "Invalid"
		#break;;
	esac
  done
		
}

Stop_jen(){
echo ""
echo "Please make sure you have already Installed jenkins "
echo "select 'y' if you have already installed otherwise type 'n' to go back and install "

 select var in y n
 do 
    case $var in 
        y)
	   echo "Good Stopping your Jenkins service"
	   sudo systemctl stop jenkins
	   sudo systemctl status jenkins
		break ;;
		n)
		echo ""
		echo "Taking you Back please install jenkin first"
	    return 
		break ;;
	 *)
	    echo "Invalid"
		#break;;
	esac
  done
		
}

uninstall_jen(){
echo ""
echo "Please make sure you have already Installed jenkins "
echo "select 'y' if you have already installed otherwise type 'n' to go back and install "

 select var in y n
 do 
    case $var in 
        y)
	   echo "Good Unstalling your Jenkins service"
	   sudo systemctl stop jenkins
	   sudo apt-get remove --purge jenkins
		break ;;
		n)
		echo ""
		echo "Taking you Back please install jenkin first"
	    return 
		break ;;
	 *)
	    echo "Invalid"
		#break;;
	esac
  done
		
}

#Script Starts from here
echo ""
echo "hello welcome to jenkin intractive script"
echo ""
xyz=1
while [ $xyz == 1 ]
do
 echo "What would you like to do"
 echo ""
 select var in Install_jenkins Uninstall_jenkins Start_jenkins Stop_jenkins Restart_jenkins Exit
 do 
    case $var in 
        Install_jenkins)
	   installFun 
		break ;;
	 Uninstall_jenkins)
	 uninstall_jen
		break ;;
	   Start_jenkins)
	   Start_jen 
		break ;;
	 Stop_jenkins)
	 Stop_jen
		break ;;
	 Restart_jenkins)
	 REStart_jen
		break ;;
	Exit)
	    xyz=3
		break ;;
	 *)
	    echo "Invalid"
		break;;
	esac
  done
done
echo " "	
echo "Thank You for using the Script bye! :)"
