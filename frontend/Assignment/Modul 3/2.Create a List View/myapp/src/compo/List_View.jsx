import React from 'react';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link
  } from "react-router-dom";
  import Home from './home';
  import About from './about';  

function List_View(props) {
     
    let data = {'/home':'Home','/about':'About'};
   const menu= Object.entries(data).map((res,i)=>{
       return <li key={i}><Link to={res[0]} >{res[1]}</Link></li>
    })


    return (
        <>
        <Router>
        <div className='main'>
           
           {menu}
        </div>
        <Routes>
            <Route path='/home' element={<Home/>}/>
            <Route path='/about' element={<About/>}/>
        </Routes>
        </Router>
        </>
    );
}

export default List_View;