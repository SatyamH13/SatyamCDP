import React from 'react'

const about = () => {
  return (
  <div className="about">
        <div className="container">
            <div className='row'>
            <div className="col-6 p-25">
            <h3>About Us</h3>
            <h1>WELCOME TO MAESTRD PIZZING</h1>
            <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Repellat, at numquam. Voluptas voluptate numquam fugit, molestias adipisci sit, voluptates quibusdam.</p>
            <div className="about__btn">
                <a href="" className='btn btn-smart'>READ MORE</a>
            </div>
            </div>
            <div className="col-6">
                <div className="about__img">
                <img src="img/pizza.jpg" alt="pizza" />
                </div>
                
            </div>
            </div>
        </div>
      </div>
    
  )
}

export default about
