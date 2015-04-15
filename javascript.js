<script language="javascript" type="text/javascript">
function GetId(id)
{
return document.getElementById(id);
}
var id_set;

function SetId(id)
{
    id_set = id;
    return id_set;
}


var i=false; // La bulle n'est pas visible par default
 
function move(e) {
    if(i) {  // Si la bulle est visible, on calcul en temps reel sa position ideale
	if(document.documentElement.clientWidth>0) {
	    id_set.style.left=20+event.x+document.documentElement.scrollLeft+"px";
	    id_set.style.top=10+event.y+document.documentElement.scrollTop+"px";
	} else {
	    id_set.style.left=20+event.x+document.body.scrollLeft+"px";
	    id_set.style.top=10+event.y+document.body.scrollTop+"px";
        }
	
    }
}

function montre(text,id) {
  SetId(id);
  if(i==false) {
  id_set.style.visibility="visible"; //On le rend visible
  id_set.innerHTML = text; // On copie le texte (ou le Html) à l'intérieur
  i=true;
  }
}


function cache() {
if(i==true) {
id_set.style.visibility="hidden"; // Si la bulle est visible, on la cache
i=false;
}
}
document.onmousemove=move; // On met à jour la position de la bulle
</script>
