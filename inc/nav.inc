    <nav id="primarynav">
      <h1>COMP 1950</h1>
      <ul class="ddmenu">
        <li><a href="#">Home</a></li>
        <li><a href="#">Lectures</a>
          <ul>
            <li><a href="#">01 | Introduction</a></li>
            <li><a href="#">02 | Tools $Standards</a></li>
            <li><a href="#">03 | HTML 5 & SEO</a></li>
            <li><a href="#">04 | CSS Concepts</a></li>
            <li><a href="#">05 | More CSS</a></li>
            <li><a href="#">06 | CSS and SSIs</a></li>
            <li><a href="#">07 | Template Development</a></li>
            <li><a href="#">09 | Methodology</a></li>
            <li><a href="#">10 | jQuery / Git</a></li>
          </ul>
        </li>
        <li><a href="#">Contact Us</a></li>
        <li><a href="#">Associated</a>
          <ul>
            <li><a href="#">my.bcit</a></li>
            <li><a href="#">BCIT</a></li>
            <li><a href="#">BCIT:Computing</a></li>
            <li><a href="#">alistair.com</a></li>
          </ul>
          </li>
      </ul>
    </nav>

    <nav id="secondarynav">
      <h1>COMP 1950</h1>
      <ul class="ddmenu">
        <li><a href="#">Home</a></li>
        <li><a href="#">Lectures</a>
          <ul>
            <li><a href="#">01 | Introduction</a></li>
            <li><a href="#">02 | Tools $Standards</a></li>
            <li><a href="#">03 | HTML 5 & SEO</a></li>
            <li><a href="#">04 | CSS Concepts</a></li>
            <li><a href="#">05 | More CSS</a></li>
            <li><a href="#">06 | CSS and SSIs</a></li>
            <li><a href="#">07 | Template Development</a></li>
            <li><a href="#">09 | Methodology</a></li>
            <li><a href="#">10 | jQuery / Git</a></li>
          </ul>
        </li>
        <li><a href="#">Contact Us</a></li>
        <li><a href="#">Associated</a>
          <ul>
            <li><a href="#">my.bcit</a></li>
            <li><a href="#">BCIT</a></li>
            <li><a href="#">BCIT:Computing</a></li>
            <li><a href="#">alistair.com</a></li>
          </ul>
          </li>
      </ul>
    </nav>

<script type="text/javascript">

(function($) {
  $(document).ready(function(){

    $(window).scroll(function(){
      if ($(this).scrollTop() > 80) {
        clearTimeout(window.myTimer);
        $('#secondarynav').fadeIn(500);
        window.myTimer = setTimeout(function(){
          $('#secondarynav').fadeOut(500);
        }, 3000);
      }
    });
  $("#secondarynav").on("mouseenter", function(){
    clearTimeout(window.myTimer);
    }).on("mouseleave", function(){
      window.myTimer = setTimeout(function(){
        $('#secondarynav').fadeOut(500);
      }, 3000);
    });
            
  $('a').on('click', function(e){
    e.preventDefault();
  });
    
  $('.ddmenu li').hover(function () {
     clearTimeout($.data(this,'timer'));
     $('ul',this).stop(true,true).slideDown(200);
  }, function () {
    $.data(this,'timer', setTimeout($.proxy(function() {
      $('ul',this).stop(true,true).slideUp(200);
    }, this), 100));
  });

  window.onscroll = function(ev) {
    if ((window.innerHeight + window.scrollY) >= document.body.offsetHeight) {
        $('#backtotop').fadeIn(500);
    } else {
        $('#backtotop').fadeOut(500);
    }
};

});
})(jQuery);
</script>