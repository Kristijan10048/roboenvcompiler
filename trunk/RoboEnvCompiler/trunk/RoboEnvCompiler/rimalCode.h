#pragma once
using System::String;

ref class rimalCode
{
public:
	rimalCode(void);

public:
	System::String^ roboToRim(System::String ^robol){
		String^ s = robol;
	int a=1;
			 int j=1;
			 int b=1;
			 String ^zbor="";
			 String ^rimal="";
			 String ^s1="";
			 for(int i=1; i<(s->Length); i++)
			 {
					if(s->Substring(i-1,1) == "\n")
					{
						zbor = "";
						for(int t=j; t<i; t++)
						{
							zbor += s->Substring(t-1,1);
						}
						i++;
						j=i;	
					}
					if(zbor == "процедура оди_x_чекори (Број x)")
					{
						    
						    rimal +="odi_x_cekori:";
							rimal +="\r\n";
							rimal +="data x";
							rimal +="\r\n";

						    zbor="";
					}
					else if(zbor == "Повторувај х пати:")
					{
						    rimal +="\r\n";
						    rimal +="inc";
						    zbor="";
					}
					else if(zbor == "процедура оди_до_x_ознаки (Број x)")
					{
						    rimal +="odi_do_x_oznaki:";
							rimal +="\r\n";
							rimal +="data x";
							rimal +="\r\n";
						    zbor="";
					}
					else if(zbor->Length==19)
					{
						String ^z1=zbor->Substring(16,1);
						String ^z2=zbor->Substring(17,1);
						rimal+="\r\n";
						rimal +="call odi_do_x_oznaki" + "(" + z1 + z2 + ")";
						zbor ="";
					}
					else if(zbor == "почеток")
					{
						if(a>1)
						{
							rimal +="\r\n";
						    rimal +="main:";
						    zbor="";
						}
						if(a<=1)
						{
						a++;
						rimal+="mov regN, x";
						rimal +="\r\n";
						rimal +="start:";
						zbor ="";
						}
					}
				    else if(zbor == "Променлива")
					{
						rimal +="\r\n";
						rimal +="data";

						zbor ="";
					}
					else if(zbor == "Оди")
					{
						rimal +="\r\n";
						rimal +="go";
						rimal +="\r\n";
                        rimal +="cmp regN,x";
						rimal +="\r\n";
						rimal +="jne";
						zbor ="";
					}
					else if(zbor->Length==15)
					{
						String ^z=zbor->Substring(13,1);
					    
						rimal +="\r\n";
						rimal +="call odi_x_cekori" + "(" + z + ")";
						zbor ="";
					}
					else if(zbor->Length==16)
					{
						String ^z2=zbor->Substring(11,1);
						String ^z3=zbor->Substring(14,2);
						
							rimal+="\r\n";
						    rimal += "data" + " " + z2;
							rimal+="\r\n";
						    rimal += "data" + " " + z3;
							zbor ="";
							
					}
					else if(zbor == "к=4")
					{ 
						rimal +="\r\n";
						rimal +="move к,4";
						zbor ="";
					}
					else if(zbor == "бр=0")
					{
						rimal +="\r\n";
						rimal +="move бр, 0";
						zbor ="";
					}
					else if(zbor == "бр=1")
					{
						rimal +="\r\n";
						rimal +="cmp regC,$M";
						rimal +="\r\n";
						rimal +="jne next";
						rimal +="\r\n";
						rimal +="move br, 1";
						rimal +="\r\n";
						rimal +="next:";
						rimal +="\r\n";
						rimal +="move regN,0";
						rimal +="\r\n";
						rimal +="start:";
						zbor ="";
					}
					else if(zbor == "x=x-1")
					{
						rimal +="\r\n";
						rimal +="sub regN, 1";
						rimal +="\r\n";
						rimal +="next:";
						rimal +="\r\n";
						rimal +="cmp regN, 0";
						rimal +="\r\n";
						rimal +="jne";
						zbor ="";
					}
					else if(zbor == "бр=бр+1")
					{
                      rimal +="\r\n";
					  rimal +="push";
					  rimal +="\r\n";
					  rimal +="move regN, br";
					  rimal +="\r\n";
					  rimal +="add regN, 1";
					  rimal +="\r\n";
					  rimal +="move br, regN";
					  rimal +="\r\n";
					  rimal +="pop";
					  rimal +="\r\n";
					  rimal +="next:";
					  rimal +="\r\n";
					  rimal +="cmp regN,k";
					  rimal +="\r\n";
					  rimal +="jne";
					  zbor ="";


					}
					else if(zbor == "Ако ознака")
					{
                      rimal +="\r\n";
					  rimal +="jne next";
					  zbor +="";
					}
					
					else if(zbor == "СвртиДесно")
					{
						rimal +="\r\n";
						rimal +="rr";
						zbor="";
					
					}
					else if(zbor == "СвртиЛево")
					{
						rimal +="\r\n";
						rimal +="rl";
						zbor="";
					}
					else if(zbor == "Крај")
					{
						rimal +="\r\n";
						rimal +="ret";
					    zbor="";
					}
					else if(zbor == "крај")
					{
						rimal +="\r\n";
						rimal +="ret";
					    zbor="";
					}


     
			}	
		
		return rimal;
	};
};
