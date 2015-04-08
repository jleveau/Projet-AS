function test(a,b) {

alert("L'id du match est " + a + "et toi biatch tu as choisis : " + b);

}

function testmodal(a,b) {


var titre_h4 = document.getElementbyClassName('modal-title');
titre_h4.innertHTML = ("Votre titre sur le match : " + a + " - " + b);
// je genere les elements dans le titre_h4

}



/*	 <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
        <h4 class="modal-title"> Je regarde si ca bouge</h4>
      </div>
      <div class="modal-body">
        <p>One fine body&hellip;</p>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary">Save changes</button>
      </div>
    </div><!-- /.modal-content -->
  </div><!-- /.modal-dialog -->
</div><!-- /.modal -->
		 
		 */