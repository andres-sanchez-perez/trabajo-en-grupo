/* trabajo  grupal de los estudiantes Gustavo Loaiza, Andr�s S�nchez y Luis Viteri*/
#include<stdio.h>
#include<math.h>/*esta biblioteca incluye funciones como raiz y patencia*/

void ejercicio1()
{
	/******************************************************************************

	1. En una tienda departamental ofrecen descuentos a los clientes en la Navidad, de acuerdo con el 
	monto de su compra. El criterio para establecer el descuento se muestra abajo. Construye el correspondiente 
	programa en C que, al recibir como dato el monto de la compra del cliente, obtenga el precio real que debe pagar 
	luego de aplicar el descuento correspondiente.

	Compra < $800 ⇒ Descuento 0%.                               mayor o igual a 800
	$800  Compra  $1500 ⇒ Descuento 10%.                        mayor o igual a 1500
	$1500 < Compra  $5000 ⇒ Descuento 15%.                      mayor o igual a  5000
	5000 < Compra ⇒ Descuento 20%. *deberia ser mayor          

	nomenclatura
	vc= valor de compra
	d= descuento
	vd= valor de descuento
	vr= valor real (incluido descuento)
	*******************************************************************************/
	float vc, d,vd=0,vr=0;// se asignan las variables
    printf("Tienda xyz\nIngresa Valor de compra:\t");// pedir ingresar valor de compra
    scanf("%f",&vc);// se obtiene valor de compra
    
    // se procede a verificar valor de compra y asignar el descuento
    if(vc<=800)
        d=0;
        else if(vc>5000)
            d=0.20;
            else if(vc<=5000 && vc>1500)
                d=0.15;
                else if(vc<=1500 && vc>800)
                	d=0.10;
    vd= vc*d;   //se calcula descuento
    vr=vc-vd;   // se calcula valor a pagar
    // se imprime resultados
    printf("Valor de compra sin descuento:\t\t%.2f\n",vc);
    printf("Decuento\t\t\t\t%.2f\n",d*100);
    printf("Valor de descuento\t\t\t%.2f\n",vd);
    printf("Valor a pagar \t\t\t\t%.2f\n",vr);
}

void ejercicio2()
{
	/******************************************************************************

	2.Construye el respectivo programa en C que, al recibir como datos tres variables reales que representan 
	los lados de un probable triangulo, determine si esos lados corresponden a un triangulo. En caso de serlo,
	ademas de escribir el area correspondiente compruebe si el mismo es equilatero, isosceles o escaleno.
	Datos: L1, L2 y L3 (variables de tipo real que representan los posibles lados de un triangulo).
	Consideraciones:
	propiedad: Si se cumple la propiedad de que la suma de los dos lados menores es menor a la del lado restante, es un triangulo.
	consejo: El area se obtiene aplicando la formula de heron


	ojo correcion *****la longitud de cada lado tiene que ser menor que la suma de los otros dos lados 
                    para que se un triangulo******* 

        nomenclatura 
        
        l1=lado 1
        l2=lado 2
        l3=lado 3
        s= semiperimetro
        a=area
	*******************************************************************************/
	float l1,l2,l3,s=0,a=0;// declarar variables
    // ingrese los lados
    printf("Ingrese los lados del triangulo\n");
    printf("Lado 1:\t");
    scanf("%f",&l1);
    printf("Lado 2:\t");
    scanf("%f",&l2);
    printf("Lado 3:\t");
    scanf("%f",&l3);
    //comprobar si es triangulo
    if(l1<(l2+l3)&&l2<(l1+l3)&&l3<(l1+l2)){
    
        //comprobar que tipo de triangulo es
        if(l1==l2&&l1==l3&&l2==l3)
            printf("Es un triangulo Equilatero\n");
            else if (l1!=l2&&l1!=l3&&l2!=l3)
            printf("Es un triangulo Escaleno\n");
            else 
            printf("Es un triangulo Isoseles\n");
        //calcular area
        s=(l1+l2+l3)/2;
        a=sqrt(s*(s-l1)*(s-l2)*(s-l3));
        // imprimir area
        printf("El area del triangulo es:\t %.2f",a);
    }
    else
    printf("Los datos proporcionados no corresponden a un triangulo");
}
void ejercicio3()
{
	/******************************************************************************

	3. Escribe un programa en C que obtenga y escriba tanto los términos como la suma de los terminos 
	de la siguiente serie: (SENTENCIA WHILE)

	2, 7, 10, 15, 18, 23, . . ., 2500

	Donde: I es una variable de tipo entero que se utiliza para incrementar el valor de los terminos de la serie.
	SSE es una variable de tipo entero que se utiliza para sumar los terminos.
	CAM es una variable de tipo entero que se utiliza para distinguir el valor a sumar.

	nomenclatura 

	i=incremento
	sse=suma
	cam= distingue que valor sumar
	*******************************************************************************/
	int i=1,sse=2,cam=0;// se declaran variable
    printf("orden de serie  \t # de serie\n");//se ponen titulos
    // se condiciona e imprime la serie  
    while(sse<25000){
        printf("        %d      \t\t      %d   \n",i,sse);
        cam=i%2;
        if(cam==1)
            {sse=sse+5;}
        else
            {sse=sse+3;}
        i++;
    }
}
void ejercicio4()
{
	/******************************************************************************

	4. Los organizadores de un acto electoral solicitaron realizar un programa de computo para manejar el conteo de los votos.
	En la eleccion hay cinco candidatos, los cuales se representan con los valores comprendidos de 1 a 5. 
	Construye un programa en C que permita obtener el número de votos de cada  candidato y el porcentaje que obtuvo respecto al
	total de los votantes. El usuario ingresa los votos de manera desorganizada, tal y como se obtienen en una eleccion, 
	el final de datos se representa por un cero. Observa como ejemplo la siguiente lista: (SENTENCIA DO-WHILE)

	2 5 5 4 3 4 4 5 1 2 4 3 1 2 4 5 0

	Donde: 1 representa un voto para el candidato 1, 3 un voto para el candidato 3, y asi� sucesivamente.
	Datos: VOT1, VOT2,..., 0 (variable de tipo entero que representa el voto a un candidato).

	nomenclatura
	voto
	cont1=votos candidato 1
	cont2=votos candidato 2
	cont3=votos candidato 3
	cont4=votos candidato 4
	cont5=votos candidato 5
	PC1=porcentaje candidato 1
	PC2=porcentaje candidato 2
	PC3=porcentaje candidato 3
	PC4=porcentaje candidato 4
	PC5=porcentaje candidato 5
	acu=total de votos
	*******************************************************************************/
	int voto, cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
    float PC1=0,PC2=0,PC3=0,PC4=0,PC5=0,acu=0;
    do{
        printf("Menu principal\ningrese 1 para el candidato 1.\ningrese 2 para el candidato 2\ningrese 3 para el candidato 3\ningrese 4 para el candidato 4\ningrese 5 para el candidato 5\n");
        printf("ingrese el voto:");
        scanf("%d",&voto);
        if(voto==1)
        {
            cont1++;
        }
        else if(voto==2)
        {
            cont2++;
        }
        else if(voto==3)
        {
            cont3++;
        }
        else if(voto==4)
        {
            cont4++;
        }
        else if(voto==5)
        {
            cont5++;
        }
        acu++;
    } while(voto!=0);
    acu=acu-1;
    PC1=(cont1/acu)*100;
    PC2=(cont2/acu)*100;
    PC3=(cont3/acu)*100;
    PC4=(cont4/acu)*100;
    PC5=(cont5/acu)*100;
    printf("el numero de votos por el candidato 1 es:%d y el porcentaje de votos es:%.2f\n",cont1,PC1);
    printf("el numero de votos por el candidato 2 es:%d y el porcentaje de votos es:%.2f\n",cont2,PC2);
    printf("el numero de votos por el candidato 3 es:%d y el porcentaje de votos es:%.2f\n",cont3,PC3);
    printf("el numero de votos por el candidato 4 es:%d y el porcentaje de votos es:%.2f\n",cont4,PC4);
    printf("el numero de votos por el candidato 5 es:%d y el porcentaje de votos es:%.2f\n",cont5,PC5);
}

void ejercicio5()
{
	/*

	5. A la clase de Estructuras de Datos del profesor Lopez asiste un grupo numeroso de alumnos.
	Construye un programa en C que  imprima la matriula y el promedio de las cinco calificaciones 
	de cada alumno. Ademas, debe obtener la matricula y el promedio tanto del mejor como del peor alumno. (SENTENCIA FOR)

	Datos: MAT1, CAL1,1, CAL1,2, CAL1,3, CAL1,4, CAL1,5
	MAT2, CAL2,1, CAL2,2, CAL2,3, CAL2,4, CAL2,5
	. . .
	0

	Donde: MATi es una variable de tipo entero que representa la matricula del alumno i. El fin de datos esta dado por 0.
	CALi,j es una variable de tipo real que representa la calificacion j del alumno i.

	nomenclatura

	ne=estudiante

	n=nota
	ce=0

	*******************************************************************************

	cal=calificaciones
	c = contador
	r = repetir
	s= suma calificacion
	cala=alta calificaciones
	calb= baja calificacion

	*/
	int cal,c,r,cala=0,calb=10,s=0;
    char alumno[10];
    do{                                                     // empieza loop de estudiante
        printf("ingrese nombre del alumno \t");
        scanf("%s",&alumno);                                //se pide nombre de estudiante
        for(c=1;c<=5;c++){                                  //empiesa loop para calificaciones de estudiante
            printf("ingrese nota %d del estudiante:\t",c);
            scanf("%d",&cal);                               //se pide notas
            if(cal>cala)                                    //se compara nota mayor
                cala=cal;
            if(cal<calb)                                    //se compara nota menor
                calb=cal;
            s=s+cal;                                        // se suman las notas
        }
        printf("el alumno %s tiene:\n",alumno);             // se imprimen resultados
        printf("mejor nota: %d\n",cala);
        printf("Peor nota: %d\n",calb);
        printf("promedio: %.2f\n",(float)s/5);
        s=0;                                                //variables buelven a inicio
        cala=0;
        calb=10;
        printf("si quiere promediar otro alumno precione cualquier numero,caso contrario precione 0\n");
        scanf("%d",&r);                                     //se pregunta si se evalua a otro estudiante
    }while(r!=0);
}

void main()
{
	int opcion;
	do
	{
		printf("Menu principal\ningresar 1 para ir al ejercico 1\ningrese 2 para ir al ejercicio 2\ningrese 3 para ir el ejercicio 3\ningrese 4 para ir al ejercicio 4\ningrese 5 para ir al ejercicio 5\n");
		printf("escoja su opcion:");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;
			case 4:
				ejercicio4();
				break;
			case 5:
				ejercicio5();
				break;
			default:
				printf("seleccione un numero del 1 al 5\n");
				break;	
		}
	}while(opcion>5);
}
