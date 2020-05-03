

#include <iostream>

#include <string>

#include <fstream>

#include <regex>

#include <iomanip>      

#include <vector>


using namespace std;


struct personas{

  float peso;

  float altura;

  int edad;

  string genero;

};


void pausar_pantalla(){

    

    string empty;

    cout << "\nPresione "ENTER" para continuar \n";

    getline(cin,empty);

};



void ordenar(){


  personas temp;


  vector<personas> registros;



  

  } 



    ofstream db;

    db.open("registro_de_control.txt",ios::out);

    

    for (int i=0; i<registros.size(); i++){

      db << registros[i].peso <<"\t"<< registros[i].altura <<"\t"<< registros[i].edad <<"\t"<< registros[i].genero <<endl;

    }

    db.close();

}


void insert_data_db(){

 

  string genero;


  personas x;


  ofstream db;

 


  cout<<"*** Control de peso, la altura, la edad y el género ***\n*** En las Personas  de Guatemala ***\n";

  

  cout<<"Indique peso de la persona:         "<<endl;

  cin>>x.peso;

  cin.clear(); 

  

  cout<<"Indique altura de la persona:         "<<endl;

  cin>>x.altura;

  cin.clear(); 

  

  cout<<"Indique edad de la persona:         "<<endl;

  cin>>x.edad;


  cin.ignore();

  

  bool validacion=false;

  while (validacion==false) {

    cout<<"Indique genero de la persona (m=Masculino, f=Feminino): "<<endl;

    getline(cin,genero)


    if ((genero=="M") or (genero=="m")) {

      x.genero="M";

      validacion=true;

    } else if ((genero=="F") or (genero=="f")) {

      x.genero="F";

      validacion=true;

    } else {

      cout << "Indico una opción invalida!!! \n Vuelva a intentarlo .... \n";

    }

   

    db << x.peso <<"\t"<< x.altura <<"\t"<< x.edad <<"\t"<< x.genero <<endl;

    


    db.close();

  }


  catch(exception X){

    cout<<"Error en la manipulacion del archivo"<<endl;

    


    cout << "Presione "ENTER" para continuar.... "<< endl;

    

  

  ordenar();

}


  

      prom_edad+=x.edad;

      prom_altura+=x.altura;

      prom_peso+=x.peso;

    } 

    db.close(); 

    

   

    prom_edad=prom_edad/i;

    prom_altura=prom_altura/i;

    prom_peso=prom_peso/i;

    

    cout<<"Promedio de Peso: "<<prom_peso<<endl;

    cout<<"Promedio de Altura: "<<prom_altura<<endl;

    cout<<"Promedio de Edad: "<<prom_edad<<endl;

    cin.ignore();

    pausar_pantalla();

  }

  catch(exception& X){

    cout<<"Error en la manipulacion del archivo"<<endl;

    cout<<"Error: "<<X.what()<<endl;

    pausar_pantalla();

  }

};


void mp(){

  int resp;

  do {


    limpiar_pantalla();

    cout<<"--------------------------"<<"\n";

    cout<<" Menu Principal"<<"\n";

    cout<<"-------------------"<<"\n";

    cout<<" 1 - Ingresar registro "<<"\n";

    cout<<" 2 - Reporte "<<"\n";

    cout<<" 3 - Salir"<<"\n";

    cout<<"--------------------------"<<"\n";

    cout<<" Seleccione su opcion: ";

    cin>>resp;

    if (resp==1){   

        

      limpiar_pantalla();

      insert_data_db();     

    }

    else if (resp==2){    

      leer_data_db();

    }

    else if (resp==3)

      break;

    else 

      break;

    

  } while(resp!=3); 

}




int main(){

  mp();


return 0;

};
