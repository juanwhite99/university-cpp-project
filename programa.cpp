#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
class acceso
{
		public:
		char nombre[30];
		char contrasena[20];

	void ingresar()
	{
		cout<<"ingresa usuario:\n";
		cin.getline(nombre,30);
		cout<<"ingresa contrasena:\n";
		cin.getline(contrasena,20);
	}
};
class menu
{
		public:
		int opcc,opcs,opi,opc;
		int codigo[5];
		char usu[5] [15];
		int tel [5];
		int id_vu[5];
		int op,x;
		char contra [5][10];
		char nom [5][20];
		char dir [5][20];
		char cadena[15];
		char ori [5][20];
		char des [5][20];
		char dis [5][20];
		char tip [5][20];
		char ape [5][20];
		char correo [5][20];
		int tel_cas [5];
		int tel_cel [5];
		char clv_res[5][20];
		int fec[5];
		int num_bol[5];
		char info_vuelo[5][20];
	void menuprincipal()
	{
		do
		{
			cout<<"MENU ADMINISTRADOR\n";
			cout<<"1.-Registro de Vendedores\n";
			cout<<"2.-Registro de Vuelos\n";
			cout<<"3.-Registro de Clientes\n";
			cout<<"4.-Registro de Reservaciones\n";
			cout<<"0.-Salir\n";
			cout<<"elija una opcion:";
			cin>>opcc;
			clrscr();
		 switch(opcc)
		 {
			case 1:
			vendedores();
			break;
			case 2:
			vuelos();
			break;
			case 3:
			clientes();
			break;
			case 4:
			reservaciones();
			break;
			default:
				cout<<"GRACIAS POR UTILIZAR EL SISTEMA\n";
							if(opcc>4)
							{
							 cout<<"elija una opcion valida";
							}
		}
}
			while(opcc!=0);
}
void menu_vendedores()
{
  do
  {
  cout<<"MENU VENDEDOR\n";
  cout<<"1.- VUELO\n";
  cout<<"2.- CLIENTES\n";
  cout<<"3.- RESERVACION\n";
  cout<<"0.- SALIR\n";
  cout<<"Elija una opcion:\n";
  cin>>opi;
			if(opi>3)
			cout<<"elija una opcion valida";
			clrscr();
		 switch(opi)
		 {
			case 1:
			vuelos();
			break;
			case 2:
			clientes();
			break;
			case 3:
			reservaciones();
			break;
			default:
			 cout<<"GRACIAS POR UTILIZAR EL SISTEMA\n";
		  }
}
		while(opi!=0);
		}
void vendedores()
{
do
{
cout<<"VENDEDORES\n";
cout<<"que deseas hacer?\n";
cout<<"1.- dar de alta un vendedor\n";
cout<<"2.- buscar un vendedor\n";
cout<<"3.- modificar un vendedor\n";
cout<<"4.- eliminar un vendedor\n";
cout<<"0.- regresar al menu\n";
cout<<"elija una opcion:\n";
cin>>opi;
clrscr();
  switch(opi)
  {
	 case 1:
	 agregar();
	 break;
	 case 2:
	 buscar();
	 break;
	 case 3:
	 modificar();
	 break;
	 case 4:
	 eliminar();
	 break;
	 default:
	 cout<<"elija una opcion correcta";
	}
}
		while(opi!=0);
		}
void vuelos()
{
do
{
cout<<"VUELOS\n";
 cout<<"que deseas hacer?\n";
cout<<"1.- dar de alta un vuelo\n";
cout<<"2.- buscar un vuelo\n";
cout<<"3.- modificar un vuelo\n";
cout<<"4.- eliminar un vuelo\n";
cout<<"0.- regresar al menu\n";
cout<<"elija una opcion:\n";
cin>>opi;
clrscr();
    switch(opi)
  {
	 case 1:
	 agregar_vuelo();
	 break;
	 case 2:
	 buscar_vuelo();
	 break;
	 case 3:
	 modificar_vuelo();
	 break;
	 case 4:
	 eliminar_vuelo();
	 break;
	 default:
	 cout<<"elija una opcion correcta";
	}
  }
	 while(opcs!=0);
}
void clientes()
{
do
{
cout<<"CLIENTES\n";
cout<<"que deseas hacer?\n";
cout<<"1.- dar de alta un cliente\n";
cout<<"2.- buscar un cliente\n";
cout<<"3.- modificar un cliente\n";
cout<<"4.- eliminar un cliente\n";
cout<<"0.- regresar al menu\n";
cout<<"elija una opcion:\n";
cin>>opi;
clrscr();
		switch(opi)
  {
	 case 1:
	 agregar_cliente();
	 break;
	 case 2:
	 buscar_cliente();
	 break;
	 case 3:
	 modificar_cliente();
	 break;
	 case 4:
	 eliminar_cliente();
	 break;
	 default:
	 cout<<"elija una opcion correcta";
	}
  }
	 while(opcs!=0);
}
void reservaciones()
{
do
{
cout<<"RESERVACION\n";
cout<<"que deseas hacer?\n";
cout<<"1.- dar de alta una reservacion\n";
cout<<"2.- buscar una reservacion\n";
cout<<"3.- modificar una reservacion\n";
cout<<"4.- eliminar una reservacion\n";
cout<<"0.- regresar al menu\n";
cout<<"elija una opcion:\n";
cin>>opi;
clrscr();
		switch(opi)
  {
	 case 1:
	 agregar_reservaciones();
	 break;
	 case 2:
	 buscar_reservaciones();
	 break;
	 case 3:
	 modificar_reservaciones();
	 break;
	 case 4:
	 eliminar_reservaciones();
	 break;
	 default:
	 cout<<"elija una opcion correcta";
	}
  }
	 while(opcs!=0);
}
void agregar()
{
do
{
cout<<"VENDEDORES\n";
cout<<"ingrese el Codigo de Vendedor\n";
cin>>codigo[x];
cout<<"ingrese el Usuario\n";
fflush(stdin);
scanf("%s",usu[x]);
cout<<"ingrese la Contraseña\n";
fflush(stdin);
scanf("%s",contra[x]);
cout<<"ingrese el Nombre\n";
fflush(stdin);
scanf("%s",nom[x]);
cout<<"ingrese la Direccion\n";
fflush(stdin);
scanf("%s",dir[x]);
cout<<"ingrese el Telefono\n";
cin>>tel[x];
cout<<"DESEAS INGRESAR OTRO DATO? 1.- SI 2.- NO:\n";
cin>>op;
x++;
}while(op==1&&x<5);
clrscr();
if(x==5)
cout<<"registros llenos";
}
void buscar()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,usu[x])==0)
			  {
				 cout<<"\n codigo de vendedor:\n" <<codigo[x];
				 cout<<"\n usuario:\n" <<usu[x];
				 cout<<"\n contraseña:\n" <<contra[x];
				 cout<<"\n nombre:\n" <<nom[x];
				 cout<<"\n direccion:\n" <<dir[x];
				 cout<<"\n telefono:\n" <<tel[x];
				 x=6;
			  }
					if(strcmp(cadena,usu[x])!=0 && x==4)
					{
						cout<<"Usuario no existe";
					}
		  }
}
void modificar()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,usu[x])==0)
			  {
				 cout<<"\n persona encontrada:\n"<<usu[x];
				 cout<<"\n Que deseas modificar?\n";
				 cout<<"\n 1.- Codigo de Vendedor\n";
				 cout<<"\n 2.- Usuario\n";
				 cout<<"\n 3.- Contraseña\n";
				 cout<<"\n 4.- Nombre\n";
				 cout<<"\n 5.- Direccion\n";
				 cout<<"\n 6.- Telefono\n";
				 cout<<"\n elija una opcion:\n";
				 cin>>opc;
				  switch(opc)
					{
					  case 1:
								cout<<"\n ingresa nuevo Codigo\n";
								cin>>codigo[x];
								break;
					  case 2:
								cout<<"\n ingresa nuevo Usuario\n";
								fflush(stdin);
								scanf("%s",usu[x]);
								break;
					  case 3:
								cout<<"\n ingresa nuevo Contraseña\n";
								fflush(stdin);
								scanf("%s",contra[x]);
								break;
					  case 4:
								cout<<"\n ingresa nuevo Nombre\n";
								fflush(stdin);
								scanf("%s",nom[x]);
								break;
					  case 5:
								cout<<"\n ingresa nuevo Direccion\n";
								fflush(stdin);
								scanf("%s",dir[x]);
								break;
					  case 6:
								cout<<"\n ingresa nuevo Telefono\n";
								cin>>tel[x];
								break;
					  default:
								cout<<"\n opcion incorrecta\n";
					}
			  }
	  }
}
void eliminar()
{
	cout<<"\n ingresa  el  usuario  del  registro  a  eliminar:\n";
	fflush(stdin);
	scanf("%s",cadena);
		for( x=0;x<5;x++)
			{
				if(strcmp(cadena,usu[x])==0)
					{
						cout<<"\n estas seguro de eliminar a?:"<<usu[x]<<"1.-si \n 2.-no \n";
						cin>>opc;
							if(opc==1)
								{
									codigo[x]=0;
									strcpy(usu[x],"\0");
									strcpy(contra[x],"\0");
									strcpy(nom[x],"\0");
									strcpy(dir[x],"\0");
									tel[x]=0;
								}
					}
			}
}
void agregar_vuelo()
{
 do
  {
	cout<<"VUELOS\n";
	cout<<"\n ingrese Id de Vuelo\n";
	cin>>id_vu[x];
	cout<<"\n ingrese Origen\n";
	fflush(stdin);
	scanf("%s",ori[x]);
	cout<<"\n ingrese Destino\n";
	fflush(stdin);
	scanf("%s",des[x]);
	cout<<"\n ingrese Distancia\n";
	fflush(stdin);
	scanf("%s",dis[x]);
	cout<<"\n ingrese Tipo De Vuelo\n";
	fflush(stdin);
	scanf("%s",tip[x]);
	cout<<"DESEAS INGRESAR OTRO DATO? 1.- SI 2.- NO:\n";
	cin>>op;
	x++;
  }	while(op==1&&x<5);
clrscr();
if(x==5)
cout<<"registros llenos";
}
void buscar_vuelo()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,ori[x])==0)
			  {
				 cout<<"\n Id Vuelo:\n" <<id_vu[x];
				 cout<<"\n Origen:\n" <<ori[x];
				 cout<<"\n Destino:\n" <<des[x];
				 cout<<"\n Distancia:\n" <<dis[x];
				 cout<<"\n Tipo de Vuelo:\n" <<tip[x];
				 x=6;
			  }
					if(strcmp(cadena,ori[x])!=0 && x==4)
					{
						cout<<"Usuario no existe";
					}
		  }
}
void modificar_vuelo()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,ori[x])==0)
			  {
				 cout<<"\n registro encontrado:\n"<<ori[x];
				 cout<<"\n Que deseas modificar?\n";
				 cout<<"\n 1.- Id Vuelo\n";
				 cout<<"\n 2.- Origen\n";
				 cout<<"\n 3.- Destino\n";
				 cout<<"\n 4.- Distancia\n";
				 cout<<"\n 5.- Tipo de Vuelo\n";
				 cout<<"\n elija una opcion:\n";
				 cin>>opc;
				  switch(opc)
					{
					  case 1:
								cout<<"\n ingresa nuevo Id Vuelo\n";
								cin>>id_vu[x];
								break;
					  case 2:
								cout<<"\n ingresa nuevo Origen\n";
								fflush(stdin);
								scanf("%s",ori[x]);
								break;
					  case 3:
								cout<<"\n ingresa nuevo Destino\n";
								fflush(stdin);
								scanf("%s",des[x]);
								break;
					  case 4:
								cout<<"\n ingresa nueva Distancia\n";
								fflush(stdin);
								scanf("%s",dis[x]);
								break;
					  case 5:
								cout<<"\n ingresa nuevo Tipo de Vuelo\n";
								fflush(stdin);
								scanf("%s",tip[x]);
								break;
					  default:
								cout<<"\n opcion incorrecta\n";
					}
			  }
	  }
}
void eliminar_vuelo()
{
	cout<<"\n ingresa el vuelo a eliminar:\n";
	fflush(stdin);
	scanf("%s",cadena);
		for( x=0;x<5;x++)
			{
				if(strcmp(cadena,ori[x])==0)
					{
						cout<<"\n estas seguro de eliminar a?:"<<ori[x]<<"1.-si \n 2.-no \n";
						cin>>opc;
							if(opc==1)
								{
									id_vu[x]=0;
									strcpy(ori[x],"\0");
									strcpy(des[x],"\0");
									strcpy(dis[x],"\0");
									strcpy(tip[x],"\0");
								}
					}
			}
}
void agregar_cliente()
{
do
{
cout<<"CLIENTES\n";
cout<<"ingrese el Nombre\n";
cin>>nom[x];
cout<<"ingrese el Apellido\n";
fflush(stdin);
scanf("%s",ape[x]);
cout<<"ingrese el Telefono de Casa\n";
cin>>tel_cas[x];
cout<<"ingrese el Telefono Celular\n";
cin>>tel_cel[x];
cout<<"ingrese el Correo Electronico\n";
fflush(stdin);
scanf("%s",correo[x]);
cout<<"DESEAS INGRESAR OTRO DATO? 1.- SI 2.- NO:\n";
cin>>op;
x++;
}while(op==1&&x<5);
clrscr();
if(x==5)
cout<<"registros llenos";
}
void buscar_cliente()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,nom[x])==0)
			  {
				 cout<<"\n Nombre:\n" <<nom[x];
				 cout<<"\n Apellido:\n" <<ape[x];
				 cout<<"\n Telefono de casa:\n" <<tel_cas[x];
				 cout<<"\n Telefono Celular:\n" <<tel_cel[x];
				 cout<<"\n Correo Electronico:\n" <<correo[x];
				 x=6;
			  }
					if(strcmp(cadena,nom[x])!=0 && x==4)
					{
						cout<<"Usuario no existe";
					}
		  }
}
void modificar_cliente()
{
	  cout<<"\n que persona deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,nom[x])==0)
			  {
				 cout<<"\n registro encontrado:\n"<<nom[x];
				 cout<<"\n Que deseas modificar?\n";
				 cout<<"\n 1.- Nombre\n";
				 cout<<"\n 2.- Apellido\n";
				 cout<<"\n 3.- Telefono de Casa\n";
				 cout<<"\n 4.- Telefono Celular\n";
				 cout<<"\n 5.- Correo Electronico\n";
				 cout<<"\n elija una opcion:\n";
				 cin>>opc;
				  switch(opc)
					{
					  case 1:
								cout<<"\n ingresa el nuevo Nombre\n";
								fflush(stdin);
								scanf("%s",nom[x]);
								break;
					  case 2:
								cout<<"\n ingresa nuevo Apellido\n";
								fflush(stdin);
								scanf("%s",ape[x]);
								break;
					  case 3:
								cout<<"\n ingresa el nuevo numero Telefono Casa\n";
								cin>>tel_cas[x];
								break;
					  case 4:
								cout<<"\n ingresa el nuevo numero Telefono Celular\n";
								cin>>tel_cel[x];
								break;
					  case 5:
								cout<<"\n ingresa el nuevo Correo Electronico\n";
								fflush(stdin);
								scanf("%s",correo[x]);
								break;
					  default:
								cout<<"\n opcion incorrecta\n";
					}
			  }
	  }
}
void eliminar_cliente()
{
	cout<<"\n ingresa el cliente a eliminar:\n";
	fflush(stdin);
	scanf("%s",cadena);
		for( x=0;x<5;x++)
			{
				if(strcmp(cadena,nom[x])==0)
					{
						cout<<"\n estas seguro de eliminar a?:"<<nom[x]<<"1.-si \n 2.-no \n";
						cin>>opc;
							if(opc==1)
								{
									strcpy(nom[x],"\0");
									strcpy(ape[x],"\0");
									tel_cas[x]=0;
									tel_cel[x]=0;
									strcpy(correo[x],"\0");
								}
					}
			}
}
void agregar_reservaciones()
{
do
{
cout<<"CLIENTES\n";
cout<<"ingrese la clave de la reservacion\n";
fflush(stdin);
scanf("%s",clv_res[x]);
cout<<"ingrese la fecha de la reservacion\n";
cin>>fec[x];
cout<<"ingrese el numero de boletos\n";
cin>>num_bol[x];
cout<<"ingrese la informacion del vuelo\n";
fflush(stdin);
scanf("%s",info_vuelo[x]);
cout<<"DESEAS INGRESAR OTRO DATO? 1.- SI 2.- NO:\n";
cin>>op;
x++;
}while(op==1&&x<5);
clrscr();
if(x==5)
cout<<"registros llenos";
}
void buscar_reservaciones()
{
	  cout<<"\n que reservacion deseas buscar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,clv_res[x])==0)
			  {
				 cout<<"\n Reservacion:\n" <<clv_res[x];
				 cout<<"\n Fecha:\n" <<fec[x];
				 cout<<"\n Numero de Boletos:\n" <<num_bol[x];
				 cout<<"\n Informacion del Vuelo:\n" <<info_vuelo[x];
				 x=6;
			  }
					if(strcmp(cadena,clv_res[x])!=0 && x==4)
					{
						cout<<"Usuario no existe";
					}
		  }
}
void modificar_reservaciones()
{
	  cout<<"\n que reservacion deseas buscar para modificar?:\n";
	  fflush(stdin);
	  scanf("%s",cadena);
	  for (x=0;x<5;x++)
		 {
			if (strcmp(cadena,clv_res[x])==0)
			  {
				 cout<<"\n registro encontrado:\n"<<clv_res[x];
				 cout<<"\n Que deseas modificar?\n";
				 cout<<"\n 1.- Clave de la Reservacion\n";
				 cout<<"\n 2.- Fecha De La Reservacion\n";
				 cout<<"\n 3.- Numero De Boletos\n";
				 cout<<"\n 4.- Informacion Del Vuelo\n";
				 cout<<"\n elija una opcion:\n";
				 cin>>opc;
				  switch(opc)
					{
					  case 1:
								cout<<"\n ingresa la nueva clave de reservacion\n";
								fflush(stdin);
								scanf("%s",clv_res[x]);
								break;
					  case 2:
								cout<<"\n ingresa la nueva fecha de la reservacion\n";
								cin>>fec[x];
								break;
					  case 3:
								cout<<"\n ingresa el nuevo numero de boletos de la reservacion\n";
								cin>>num_bol[x];
								break;
					  case 4:
								cout<<"\n ingresa la nueva informacion del vuelo de la reservacion\n";
								fflush(stdin);
								scanf("%s",info_vuelo[x]);
								break;
					  default:
								cout<<"\n opcion incorrecta\n";
					}
			  }
	  }
}
void eliminar_reservaciones()
{
	cout<<"\n ingresa la reservacion a eliminar:\n";
	fflush(stdin);
	scanf("%s",cadena);
		for( x=0;x<5;x++)
			{
				if(strcmp(cadena,clv_res[x])==0)
					{
						cout<<"\n estas seguro de eliminar a?:"<<clv_res[x]<<"1.-si \n 2.-no \n";
						cin>>opc;
							if(opc==1)
								{
									strcpy(clv_res[x],"\0");
									fec[x]=0;
									num_bol[x]=0;
									strcpy(info_vuelo[x],"\0");
								}
					}
			}
}

};
void main()
{
int x;
acceso objeto;
for(x=1; x<=3; x++)
{
  objeto.ingresar();
  if((strcmp(objeto.nombre,"omar")==0)&&(strcmp(objeto.contrasena,"12345")==0))
  {
	 clrscr();
		 menu objeto;
		 x=3;
		objeto.menuprincipal();
  }
  else
  {   		  clrscr();
	  menu objeto;
	  x=3;
	  objeto.menu_vendedores();
}
}
if(x==3){

cout<<"usuario bloqueado";
}
}






