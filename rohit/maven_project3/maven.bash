mavenCommands(){
abc=1
while [ $abc==1 ]
do
 echo ""
 echo "What maven command would you like to execute "
 select var in Mvn_Install Mvn_Compile Mvn_Test Mvn_Pakage Mvn_Test_Compile Exit
 do 
    case $var in 
	Mvn_Install)
	mvn clean install
	break ;;
	Mvn_Compile)
	mvn clean compile
    break ;;
    Mvn_Test)
    mvn clean test
    break ;;
    Mvn_Pakage)
	mvn clean package 
    break ;;
    Mvn_Test_Compile)
    mvn test-compile 
    break;;
    Exit)
    return 
    abc=63
    echo "in exit ${abc}"
    break ;;
    *)
    echo "invalid try again"
    break;;  
  esac
 done
done 
return 	 
}

existingrepo(){
echo " "
echo "Choose amoung the following dir "
echo " " 
ls -d */
echo " " 
read -p "enter the name - " n
echo " " 
cd $n
pwd
echo " "
mavenCommands
}

gitClone(){
echo " "
read -p "Enter the git repo url that you want to clone " x
echo "You entered ${x}!"
git clone "${x}"
echo "Choose your repo "
echo " " 
ls -d */
echo " " 
read -p "enter the name - " n
echo " " 
cd $n
pwd
mavenCommands
}

installFun(){
sudo apt update
sudo apt install maven
gitClone
}

# Script Starts Here

echo ""
echo "Welcome to Maven Intractive Script"
xyz=1
while [ $xyz == 1 ]
do
 echo "Would you like to install maven ? "
 echo ""
 select var in Yes No_Its_already_installed Go_to_Existing_repo Exit
 do 
    case $var in 
        Yes)
	   installFun 
		break ;;
	 No_Its_already_installed)
	    gitClone
		break ;;
		Go_to_Existing_repo)
		existingrepo
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
