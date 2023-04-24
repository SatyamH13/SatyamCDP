import React from 'react';

function Header(props) {

    function show(){
        let ul = document.querySelector(".ul");
            ul.classList.toggle("show");
    }
    return (
         <>
            <div className="container-fluid navigation navd">
            <div className="row">
                <div className="col-3 logo"><img src="img/logo.jpg" height="30px" width="150px" alt="flipboard logo" /></div>
                   
            
                <div className="col-9 buttons">
               <span className='bars'> <i className="fa-solid fa-bars-staggered" onClick={show}></i></span>
                    <ul className='ul'>
                    <span className='news'><a className='newsltr navitem'>Newsletters</a></span>
                    <span className='searchicon navitem'>
                        <i className="fa-solid fa-magnifying-glass"></i>
                        <input type="text" className='search' placeholder='Search Flipboard'/>
                    </span>
                    <button className='navitem sign'>Sign up</button>
                    <button className='navitem log'>Log in</button>
                    </ul>
                </div>
            </div>
         </div>  

         <div className="container-fluid banner">
            <div className="row">
                <div className="col-12">
                    <h1 className='title'>
                        <div className='t-1'>GET INFORMED</div>
                        <div className="t-2"> GET INSPIRED</div>
                        <h2>Stories Curated For You</h2>

                        <button>Sign up</button>
                    </h1>
                   
                
                </div>
            </div>
         </div>
         </>
    );
}

export default Header;