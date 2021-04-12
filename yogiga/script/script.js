$(document).ready(function(){
 
    $("ul.gnb>li").mouseover(function(){
        $("ul.sub, .nav_bg").stop().slideDown();
    });
    
    $("ul.gnb>li").mouseout(function(){
        $("ul.sub, .nav_bg").stop().slideUp();
    });
 
 
    var slide=$(".slide li");
    var sno=0;
    var lastno=slide.length-1;
    
    function playSlide(){
        $(slide[sno]).animate({
            "top":"400px"
        },1000,function(){
            $(this).css({"top":"-400px"});
        });
 
        sno++;
        if(sno>lastno) sno=0;
 
        $(slide[sno]).animate({
            "top":"0"
        },1000);        
    }
 
    setInterval(function(){
        playSlide();
    },3500);
    
    $(".notice_gal h3").click(function(){
        $(".notice_gal h3, .notice_gal ul").removeClass("on");
        $(this).addClass("on");
        $(this).next("ul").addClass("on");
    });
    
    $(".notice li").eq(0).click(function(){
        $(".modal").fadeIn();
    });
 
    $(".btn").click(function(){
        $(".modal").fadeOut();
    });

    $(".notice li").eq(1).click(function(){
        $(".modal2").fadeIn();
    });
 
    $(".btn").click(function(){
        $(".modal2").fadeOut();
    });

    $(".notice li").eq(2).click(function(){
        $(".modal3").fadeIn();
    });
 
    $(".btn").click(function(){
        $(".modal3").fadeOut();
    });

    $(".notice li").eq(3).click(function(){
        $(".modal4").fadeIn();
    });
 
    $(".btn").click(function(){
        $(".modal4").fadeOut();
    });
    
    	$("footer .fam p").click(function(){
		$(this).toggleClass("on");
		$("footer .fam ul").stop().slideToggle();
	});

});
