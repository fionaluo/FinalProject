    <nav id="mobilenav">
        <p>
        <a href="#" id="menuButton"><img src="nav_icon.png" width="100%"></a> <div id="mobileheader">COMP1950</div>
        </p>
		
        <div id="menu">
        <ul>
        <li><a href="index.shtml" id="mbabout">ABOUT</a>
            <ul id="aboutcontent">
              <li><a href="http://www.thenet.ca/1950/">SYLLABUS</a></li>
              <li><a href="http://www.bcit.ca/study/courses/comp1950">OUTLINE</a></li>
              <li><a href="contact.shtml">CONTACT</a></li>
            </ul>
        </li>
        <li><a href="#" id="mblecture">LECTURES</a>
          <ul id="lecturecontent">
            <li><a href="lecture1.shtml">WEEK 01</a></li>
            <li><a href="http://www.thenet.ca/1950/week2/">WEEK 02</a></li>
            <li><a href="http://www.thenet.ca/1950/week3/">WEEK 03</a></li>
            <li><a href="http://www.thenet.ca/1950/week4/">WEEK 04</a></li>
            <li><a href="http://www.thenet.ca/1950/week5/">WEEK 05</a></li>
            <li><a href="http://www.thenet.ca/1950/week6/">WEEK 06</a></li>
            <li><a href="http://www.thenet.ca/1950/week7/">WEEK 07</a></li>
            <li><a href="http://www.thenet.ca/1950/week8/">WEEK 08</a></li>
            <li><a href="http://www.thenet.ca/1950/week9/">WEEK 09</a></li>
            <li><a href="http://www.thenet.ca/1950/week10/">WEEK 10</a></li>
          </ul>
        </li>
        <li><a href="project.shtml">PROJECT</a></li>
        </ul>
      </div>
    </nav>
    <script>
        var menustate=1;
        $(document).ready(function() {
        $("#menu").animate({"left": "-150px"}, 1);
        $("#aboutcontent").hide();
        $("#lecturecontent").hide();
    
        $("#menuButton").click(function () {
        if (menustate==0) {
            menustate=1;
            $("#menu").animate({"left": "-150px"}, "fast");
        }
        else if (menustate==1){
            menustate=0;
            $("#menu").animate({"left": "0"}, "fast");
        }
        });
            
        $("#mbabout").click(function () {
            $("#aboutcontent").toggle(500);
        });

        $("#mblecture").click(function () {
            $("#lecturecontent").toggle(500);
        });

        });
    
    
    </script>

    <nav id="primarynav">
      <ul class="ddmenu">
        <li><a href="index.shtml">ABOUT</a>
            <ul>
              <li><a href="http://www.thenet.ca/1950/">SYLLABUS</a></li>
              <li><a href="http://www.bcit.ca/study/courses/comp1950">OUTLINE</a></li>
              <li><a href="contact.shtml">CONTACT</a></li>
            </ul>
        </li>
        <li><a href="lecture1.shtml">LECTURES</a>
          <ul>
            <li><a href="lecture1.shtml">01 | Introduction</a></li>
            <li><a href="http://www.thenet.ca/1950/week2/">02 | Tools & Standards</a></li>
            <li><a href="http://www.thenet.ca/1950/week3/">03 | HTML 5 & SEO</a></li>
            <li><a href="http://www.thenet.ca/1950/week4/">04 | CSS Concepts</a></li>
            <li><a href="http://www.thenet.ca/1950/week5/">05 | More CSS</a></li>
            <li><a href="http://www.thenet.ca/1950/week6/">06 | CSS and SSIs</a></li>
            <li><a href="http://www.thenet.ca/1950/week7/">07 | Template Development</a></li>
            <li><a href="http://www.thenet.ca/1950/week9/">09 | Methodology</a></li>
            <li><a href="http://www.thenet.ca/1950/week10/">10 | jQuery / Git</a></li>
          </ul>
        </li>
        <li><a href="project.shtml">PROJECT</a></li>
      </ul>
    </nav>

    <nav id="secondarynav">
      <ul class="ddmenu">
        <li><a href="index.shtml">ABOUT</a>
            <ul>
              <li><a href="http://www.thenet.ca/1950/">SYLLABUS</a></li>
              <li><a href="http://www.bcit.ca/study/courses/comp1950">OUTLINE</a></li>
              <li><a href="contact.shtml">CONTACT</a></li>
            </ul>
        </li>
        <li><a href="lecture1.shtml">LECTURES</a>
          <ul>
            <li><a href="lecture1.shtml">01 | Introduction</a></li>
            <li><a href="http://www.thenet.ca/1950/week2/">02 | Tools & Standards</a></li>
            <li><a href="http://www.thenet.ca/1950/week3/">03 | HTML 5 & SEO</a></li>
            <li><a href="http://www.thenet.ca/1950/week4/">04 | CSS Concepts</a></li>
            <li><a href="http://www.thenet.ca/1950/week5/">05 | More CSS</a></li>
            <li><a href="http://www.thenet.ca/1950/week6/">06 | CSS and SSIs</a></li>
            <li><a href="http://www.thenet.ca/1950/week7/">07 | Template Development</a></li>
            <li><a href="http://www.thenet.ca/1950/week9/">09 | Methodology</a></li>
            <li><a href="http://www.thenet.ca/1950/week10/">10 | jQuery / Git</a></li>
          </ul>
        </li>
        <li><a href="project.shtml">PROJECT</a></li>
      </ul>
    </nav>

<script type="text/javascript">
var mq = window.matchMedia( "(min-width: 361px)" );
(function($) {
  $(document).ready(function(){
    $(window).scroll(function(){
      if (($(this).scrollTop() > 80)&&mq.matches) {
        clearTimeout(window.myTimer);
        $('#secondarynav').fadeIn(500);
        window.myTimer = setTimeout(function(){
          $('#secondarynav').fadeOut(500);
        }, 3000);
      }
      else
      {
        $('#secondarynav').hide();
      }
    });
  $("#secondarynav").on("mouseenter", function(){
    clearTimeout(window.myTimer);
    }).on("mouseleave", function(){
      window.myTimer = setTimeout(function(){
        $('#secondarynav').fadeOut(500);
      }, 3000);
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
