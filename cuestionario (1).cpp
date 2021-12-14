#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");

using namespace std;
main ()
{
	int Opc, idioma;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	int contap=0,contan=0;
	char respuesta;
	for (int i=0; i<2; i++)
		{
			cout <<"\n\n Seleccione un idioma\n\n\n";
			cout<<"1-Español\n";
			cout<<"2-Ingles\n";
			cin>>idioma;	 
			if (idioma==1)
				{ 
				for(int i=0;i<10;i++)
					{
						cout<< "Modulos"<<endl;
						cout<< "1)Manejo de tecnicas de programacion"<<endl;
						cout<< "2)Comunicacion en los ambitos escolar y profesional"<<endl;
						cout<< "3)Interaccion inicial en ingles"<<endl;
						cout<< "4)Aplicacion de matematicas discretas"<<endl;
						cout<< "5)Mantenimiento de equipo de computo basico"<<endl;
						cout<< "6)Representacion simbolica y angular del entorno"<<endl;
						cout<< "7)Identificacion de la biodiversidad"<<endl;
						cout<< "8)Analisis de la materia y la energia"<<endl;
						cout<< "9)Manejo de aplicaciones por medios digitales"<<endl;
						cout<< "10)Desarrollo multiplataforma, diseño y creacion de apps"<<endl;
						cout<< "11)Salir"<<endl;
						cout<<"Dame otra opcion(rango 1-10)"<<endl;
						cin>>Opc;
						switch (Opc) 
							{
								case 10: // Modulo a
								contan=0;
								contap=0;
								cout<<"Desarrollo multiplataforma, diseño y creacion de apps"<<endl; 
								cout<<"1-¿Para que sistemas son diseñadas principalmente la mayoría de aplicaciones en  la actualidad?"<<endl;
								cout<<"a)android"<<endl;
								cout<<"b)windows"<<endl;
								cout<<"c)ios"<<endl;
								cout<<"d)a y c son correctas"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='d')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}	 
								cout<<"2-¿Que lenguaje de programacion es comunmente usado para las aplicaciones moviles?"<<endl;
								cout<<"a)Python"<<endl;
								cout<<"b)java"<<endl;
								cout<<"c)C#"<<endl;
								cout<<"d)PHP"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='b')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}	
									cout<<"3-¿Principalmente para que fueron diseñadas las aplicaciones?"<<endl;
								cout<<"a)Fueron diseñadas para entretener a las personas"<<endl;
								cout<<"b)Fueron diseñadas para controlar el sistema operativo de un equipo de computo"<<endl;
								cout<<"c)Fueron diseñadas para facilitar ciertas tareas complejas y hacer mas sencilla la experiencia informatica de las personas"<<endl;
								cout<<"d)ninguna de las anteriores"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='c')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}	
										cout<<"4-¿Que es una aplicacion movil?"<<endl;
								cout<<"a)Es una aplicacion diseñada para ejecutarse en un dispositivo movil, que puede er un telefono inteligente o tablet"<<endl;
								cout<<"b)Una aplicacion movil es lo mismo que una aplicacion web"<<endl;
								cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
								cout<<"d)ninguna de las anteriores"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='a')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
											cout<<"5-¿Para que es una aplicacion nativa?"<<endl;
								cout<<"a)La aplicación nativa está desarrollada y optimizada específicamente para el sistema operativo determinado y la plataforma de desarrollo del fabricante"<<endl;
								cout<<"b)La aplicación nativa sirve para compartir información con otros sistemas operativos "<<endl;
								cout<<"c)la aplicación nativa sirven para cargar información en el sistema operativo"<<endl;
								cout<<"d)para  cambiar su contenido, manteniendo el mismo diseño y estilo"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='a')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
												cout<<"6-¿las aplicaciones nativas que se usan en celulares se pueden usar en cuantos sistemas operativo?"<<endl;
								cout<<"a)un solo sistema operativo"<<endl;
								cout<<"b)más de 2 sistemas operativos como (Android, iOS y Windows) "<<endl;
								cout<<"c)todos los sistemas operativos."<<endl;
								cout<<"d) la respuesta b y c son correctas."<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='a')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
									cout<<"7-¿Qué tipo de navegador por defecto viene en los dispositivos moviles android?"<<endl;
								cout<<"a)OperaMini"<<endl;
								cout<<"b)Minimo-Mozilla "<<endl;
								cout<<"c)chrome"<<endl;
								cout<<"d)NetFront"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='c')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
									cout<<"8-¿Qué factor incide en el desarrollo de aplicaciones móviles?"<<endl;
								cout<<"a)Plataforma"<<endl;
								cout<<"b)Sistema Operativo "<<endl;
								cout<<"c)Dispositivo Móvil"<<endl;
								cout<<"d)lenguaje de desarrollo"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='a')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
								cout<<"9-¿Cuales son sistemas operativos de moviles?"<<endl;
								cout<<"a)android"<<endl;
								cout<<"b)windows"<<endl;
								cout<<"c)ios"<<endl;
								cout<<"d)a y c son correctas"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='d')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
									cout<<"10-¿En donde se alojan los aplicativos moviles y su cache?"<<endl;
								cout<<"a)En el dispositivo"<<endl;
								cout<<"b)Plicativo en la nuve cache en el dispositivo"<<endl;
								cout<<"c)Unicamente en la nuve"<<endl;
								cout<<"d)Hibridamente mitad nuve, mitad dispositivo"<<endl;
								cin>>respuesta;
		 
							    if(respuesta=='b')
									{
								  		cout<<"la respuesta es correcta"<<endl;
								  		contap=contap+1;
							    	}
								else
									{
										cout<<"La respuesta es incorrecta"<<endl; 
										contan=contan+1;
									}
								system ("pause");
								
								getch();
							}
							cout<<"Las respuestas correctas fueron "<<contap<<endl;
							cout<<"Las respuestas incorrectas fueron "<<contan<<endl;
					}
				}
		}
}
