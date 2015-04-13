//<h4 class='modal-title' id='myModalLabel'>Votre pari sur le match : France <img src='images/flags/Unknown.png' /> - <img src='images/flags/Unknown.png' /> France</h4>
        //            <small><i class='fa fa-calendar'></i>DATE<br><i class='fa fa-map-marker'></i>LIEU</small>
					
function fct_pari_1(){
	alert(mabite);
}			
					

function fct_fenetre_pari() {
alert('coucou');
var titre_h4 = document.getElementbyId('myModalLabel');

titre_h4.innerHTML ='';

// je genere les elements dans le titre_h4
alt_element = document.createTextNode('Votre pari sur le match :');
alt_element_equipe1 = document.createTextNode('equipe1');
alt_element1 = document.createTextNode(' - ');
alt_element_equipe2 = document.createTextNode('equipe2');
image1 = document.createElement('img');
image1.src = drap1;
image2 = document.createElement('img');
image2.src = drap2;

titre_h4.appendChild(alt_element);
titre_h4.appendChild(alt_element_equipe1);
titre_h4.appendChild(image1);
titre_h4.appendChild(alt_element1);
titre_h4.appendChild(image2);
titre_h4.appendChild(alt_element_equipe2);

lol = document.getElementById('lancermodal');
alert(lol);

}