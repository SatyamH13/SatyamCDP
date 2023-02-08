import React from 'react';
import {
  BrowserRouter as Router,
  Routes,
  Route,
  Link
} from "react-router-dom";
import Home from './home';
import About from './about';
import Compo from './compo';
import State from './state';
import Life from './lifecycle'
function header(props) {

  const menu = {'/home':'Home','/about':'About','/compo':'Compo','/state':'State','/lifecycle':'LifeCycle'};
  const data = Object.entries(menu).map((res,i)=>{
      return   <li className="nav-item" key={i}>
      <Link className="nav-link active" to={res[0]} >{res[1]}</Link>
    </li>
  })

    return (
      <>
      <Router>  
     <nav className="navbar navbar-expand-lg navbar-light bg-light">
  <div className="container-fluid">
    <a className="navbar-brand" href="#">Navbar</a> 
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="navbarNav">
      <ul className="navbar-nav">
      
      {data}
       
      </ul>
    </div>
  </div>
</nav>
<Routes>
  <Route path='/home'element={<Home/>}/>
  <Route path='/about'element={<About/>}/>
  <Route path='/compo'element={<Compo/>}/>
  <Route path='/state'element={<State/>}/>
  <Route path='/lifecycle'element={<Life/>}/>
</Routes>
</Router>
      </>
    );
}

export default header;