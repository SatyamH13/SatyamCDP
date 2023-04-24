import React, { useState } from 'react';
import Api1 from './api/api1';

function Menu(props) {
    const[data,setdata]=useState(Api1)
    
    const handleScroll =() => {
        console.log("handle scroll worked");
        let a =document.querySelector(".menus")
        if(document.documentElement.scrollTop > 200)
        {
         a.style.position = "fixed";
         a.style.top = "0";
         a.style.height = "50px";
        }
        else{
         a.style.position = "unset";
        }
     
      };
      
    return (
      
    <body >
        
        <div className="container-fluid menus" onScroll={handleScroll}>
            <div className="row">
                <ul className='ul'>
                    {
                 data.map((ele)=>{
                     return(<>
                    <div className="row">
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title1}</li>
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title2}</li>
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title3}</li>
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title4}</li>
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title5}</li>
                    <li className='menu col-xl-2 col-sm-4 col-6'>{ele.title6}</li>
                    </div>
                            </>
                            
                            )
                        })
                    }    
                </ul>
            </div>

        </div>
         
         <div className="container-fluid cards">
            <div className="row">
                <div className="col-4 card">
                    <div className="row">
                        <span className="cardlogo"><img src="img/n-1logo.jpg" alt="" /></span>
                        <span className="title">
                       <a href="">Axios</a> <span className='bottom'>flipped into <a href=""> Axios</a></span></span>
                    </div>
                    <div className="row"><img src="img/n-1.jpg" alt="" /></div>
                </div>
            </div>
         </div>

        </body>
    );
}

export default Menu;