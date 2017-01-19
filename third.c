import java.io.*;
import java.util.*;

class report{
     
    public static void main(String[] args){
           String path="/home/cbluser27/temp.csv";
           String line="";
           int i,temp,j,k,a;
                i=0;
           String c;
           String splitby=",";
           BufferedReader br=null;
           int total[]={0,0,0,0,0};
           float per[]={0,0,0,0,0};
           String grade[]={"","","","","",""};;
	   String details[];
           String val[]=new String(5);
          
           int m={0,0,0,0,0};
           int p={0,0,0,0,0};
           int e={0,0,0,0,0};
           int c={0,0,0,0,0};
           
             try{
                 
                 
		  br=new BufferedReader(new FileReader(path));
		  line=br.readLine();
                  
                  while((line=br.readLine())!=null){
                    details=line.split(splitby);
                    n[i]=details[0];
                    m[i]=Integer.parseInt(details[1]);
                    p[i]=Integer.parseInt(details[2]);
                    e[i]=Integer.parseInt(details[3]);
                    c[i]=Integer.parseInt(details[4]);
                    
                    total[i]=Integer.parseInt(details[1])+Integer.parseInt(details[2])+Integer.parseInt(details[3])+Integer.parseInt(details[4]);
                    per[i]=(total[i]/400)*100;
                    if(per[i]<30)
                    grade[i]="F";
                    else if(per[i]>=30&&per[i]<50)
                    grade[i]="C";
                    else if(per[i]>=50&&per[i]<70)
                    grade[i]="B";
                    else
                    grade[i]="A";
                 
                }


                     {for(i=0;i<5;i++)
                      {   
                      val[i]="{\n\"Name\": "+n[i]+"\n\"Maths\": "+m[i]+"\n\"Physics\": "+p[i]+"\n\"English\": "+e[i]+"\n\"Chemistry\": "+c[i]+"\n\"Total\": "+total[i]+"\n\"Percentage\": "+per[i]+"\n\"Grade\": "+grade[i]+"\n}";
			for(j=1;j<5;j++){
				 val[j]="{\n\"Name\": "+n[j]+"\n\"Maths\": "+m[j]+"\n\"Physics\": "+p[j]+"\n\"English\": "+e[j]+"\n\"Chemistry\": "+c[j]+"\n\"Total\": "+total[j]+"\n\"Percentage\": "+per[j]+"\n\"Grade\": "+grade[j]+"\n}";
                        if(total[i]<total[j])
                          {c=val[i];
                           val[i]=val[j];
                           val[j]=c;}
                      
		        System.out.println(val[i]);
                       }

                    }                  
                  }catch(Exception e){
                     System.out.println("error");}  
           

}
                }      
