import React,{useState,useLayoutEffect, useEffect, useRef} from 'react';
import { Link } from 'react-router-dom';
import Program1 from './program1';
import Program2 from "./program2";
import Program3 from './program3';
import Program4 from './program4';
import Question from './question';
import Footer from './footer';
import Loading from './loading';




function Header(props) {

    const[loading,setloading]=useState(true);
    const innerref = useRef(null)

    useLayoutEffect(()=>{
        const div = innerref.current;

        setTimeout(()=>{
           setloading(false)
                   
   
        
        },2000)
       
       
      })
  


    
      let c1=document.querySelector(".c1");
      let c2=document.querySelector(".c2");
      
      window.onmousemove = (e)=>{
        c1.style.top = e.pageY + "px";
        c1.style.left = e.pageX + "px";
        c2.style.top = e.pageY + "px";
        c2.style.left = e.pageX + "px";
       
      
      
      let dk = document.querySelectorAll(".clc");
      console.log(dk);
      
         dk.addEventListner("onmouseenter",function(){
             console.log("jytyjf");
             c1.classList.add("hide");
            })

    }
      
    return (     <>
     <div className="c1"></div>
       <div className="c2"></div>
        {loading?<Loading/>:
   <body>
      
         <header>
        <section className="header-section container-fluid">
            <div className="row">
            <div className="navigation">
                <div className="p1 logo">
                    <img src="/img/logo.jpg" className='clc' alt="" />
                </div>
                <div className="p1 menu">
                    <span className='lan clc'>
                    <i className="fa-solid fa-globe"></i>
                    <i className="fa-solid fa-caret-down"></i>
                    <select name="" className='form-select' id="">
                        <option value="English">English</option>
                        <option value="Hindi">Hindi</option>
                    </select>
                    </span>
                    <Link className="btn signin clc" to="/signin">Sign In</Link>
                </div>
            </div>
            </div>

            <div className="container banner">
                <div className="row">
                  <h1>Unlimited movies, TV shows and more.</h1>
                  <h3>Watch anywhere. Cancel anytime.</h3>
                  <h4>Ready to watch? Enter your email to create or restart your membership.</h4>

                 <div className="start">
                    <span className='input'>
                        <input type="email" className="em clc" id="exampleInputEmail1" placeholder='' aria-describedby="emailHelp"/>
                        <span className='address'>Email address</span>
                        </span>
                 
                  <button type="submit" className=" signin clc">Get Started<i class="fa-solid fa-arrow-right"></i></button>
                 </div>
                </div>
            </div>
           
        </section>
       </header>
       
   <Program1/>
   <Program2/>
   <Program3/>
   <Program4/>
   <Question/>
   <Footer/>
   </body> }</>
  );
}

export default Header;
