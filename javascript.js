function GetId(id)
{		return document.getElementById(id);
}				var i=false; 
function move(e) {
    if(i) { 
	if (navigator.appName!="Microsoft Internet Explorer") { // Si on est pas sous IE
	    GetId("fonction").style.left=e.pageX + 5+"px";
	    GetId("fonction").style.top=e.pageY + 10+"px";
	}
	else {
	    if(document.documentElement.clientWidth>0) {
		GetId("fonction").style.left=20+event.x+document.documentElement.scrollLeft+"px";
		GetId("fonction").style.top=10+event.y+document.documentElement.scrollTop+"px";
	    }
	    else {
		GetId("fonction").style.left=20+event.x+document.body.scrollLeft+"px";
		GetId("fonction").style.top=10+event.y+document.body.scrollTop+"px";
	    }
	}
    }
}

function montre(text) {
    if(i==false) {
	GetId("fonction").style.visibility="visible"; 
	GetId("fonction").innerHTML = text;
	i=true;
    }
}
function cache() {
    if(i==true) {
	GetId("fonction").style.visibility="hidden";
	i=false;
    }
}

function ChangeClassMenuHeader()
{
var head = GetId('Header');
if(head.getAttribute('class') == 'fa fa-plus')
{
head.ClassName='fa fa-minus';
}
else
{
head.ClassName='fa fa-plus';
}

}

function ChangeClassMenuSource()
{
var head = GetId('Source');
if(head.getAttribute('class') == 'fa fa-plus')
{
head.ClassName='fa fa-minus';
}
else
{
head.ClassName='fa fa-plus';
}

}

document.onmousemove=move; 

