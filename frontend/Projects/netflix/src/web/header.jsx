import React from 'react';

function header(props) {
    return (
       <>
       <header>
        <section className="header-section container-fluid">
            <div className="row">
            <div className="navigation">
                <div className="p1 logo">
                    <img src="/img/logo.jpg" alt="" />
                </div>
                <div className="p1 menu">
                    <span className='lan'>
                    <i class="fa-solid fa-globe"></i>
                    <i class="fa-solid fa-caret-down"></i>
                    <select name="" className='form-select' id="">
                        <option value="English">English</option>
                        <option value="Hindi">Hindi</option>
                    </select>
                    </span>
                    <button type="button" className="btn signin">Sign In</button>
                </div>
            </div>
            </div>

            <div className="container banner">
                <div className="row">
                  <h1>Unlimited movies, TV shows and more.</h1>
                  <h3>Watch anywhere. Cancel anytime.</h3>
                  <h4>Ready to watch? Enter your email to create or restart your membership.</h4>

                 <div className="start">
                 <input type="email" class="email" id="exampleInputEmail1" aria-describedby="emailHelp"/>
                  <button type="submit" className="btn signin">Get Started</button>
                 </div>
                 

                 





                </div>
            </div>
           
        </section>
       </header>
       </>
    );
}

export default header;