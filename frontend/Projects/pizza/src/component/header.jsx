import React from 'react'
import Navbar from './navbar'

export const Header = () => {
  return (
    <div className='banner'>
        <Navbar/>
        <div className="banner__content">
            <div className='container'>
                <div className="banner__text">
                <h3>Pizza delivery</h3>
                <h1>MAEAESTRO<br/>PIZINNI</h1>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Corporis quas molestias dolor mollitia nemo odit nobis eius.</p>
                <div className="banner__btn">
                    <a href="" className='btn btn-smart'>Delivery Now</a>
                </div>
                </div>
            </div>
        </div>
    </div>
    
  )
}
export default Header;