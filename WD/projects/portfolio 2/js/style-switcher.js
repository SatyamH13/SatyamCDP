const styleSwitcherToggle = document.querySelector(".style-switcher-toggler");
styleSwitcherToggle.addEventListener("click",() =>{
	document.querySelector(".style-switcher").classList.toggle("open");
})


window.addEventListener("scroll", () => {
	if(document.querySelector(".style-switcher").classList.contains("open"))
	{
		document.querySelector(".style-switcher").classList.remove("open");
	}
})


const alternatestyles = document.querySelectorAll(".alternate-style");
console.log(alternatestyles)
function setActiveStyle(color)
{
	alternatestyles.forEach((style)=> {
		if(color === style.getAttribute("title"))
		{
			a=style.removeAttribute("disabled");
			console.log(a)

		}
		else
		{
		    b=style.setAttribute("disabled","true");	
		    console.log(b)

		}
	})
}



const dayNight = document.querySelector(".day-night");
dayNight.addEventListener("click",()=>{
	dayNight.querySelector("i").classList.toggle("fa-sun")
	dayNight.querySelector("i").classList.toggle("fa-moon")
	document.body.classList.toggle("dark");

})
window.addEventListener("load",()=>{
	if(document.body.classList.contains("dark"))
	{
		dayNight.querySelector("i").classList.add("fa-sun")

	}
	else{
		dayNight.querySelector("i").classList.add("fa-moon")
	}
})