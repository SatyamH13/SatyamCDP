import React from 'react';

function signin(props) {
    return (
      <>
       <div className='container-fluid sign'>
        
          <div className="box">
          <h1>Sign In</h1>
          
          <div className="input">
          <input type="email" placeholder='Email' />
          </div>
          <div className="input">
          <input type="password" placeholder='Password' />
          </div>
          <div className='button'> <button>Sign In</button></div>
         
          

          </div>
           
       </div>
      </>
    );
}

export default signin;