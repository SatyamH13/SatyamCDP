import React, { Component } from 'react'
import {
  BrowserRouter as Router,
  Routes,
  Route,
  Link
} from "react-router-dom";
import Home from './components/home';
import About from './components/about';
import Action from './components/action';
import Another from './components/another';
import Something from './components/something';
import Res from './components/reusable'


export default class App extends Component {
  render() {
    let data = {'/home':'Home','/about':'About'};
    let op = Object.entries(data).map((res,i)=>{
      
      return <li className="nav-item" key={i}><Link className="nav-link active" aria-current="page" to={res[0]}>{res[1]}</Link></li>
    });
    let drop ={'/action':'Action','/another action':'Another action','/something else here':'Something else here'};
    let dd = Object.entries(drop).map((ff,h)=>{
     
        
      
      
       return<li key={h}><Link className="dropdown-item" to={ff[0]}>{ff[1]}</Link></li>
              
       
       
    })
    return (
      <>
      <Router>
        <nav className="navbar navbar-expand-lg navbar-light bg-light">
  <div className="container-fluid">
    <a className="navbar-brand" href="#">Navbar</a>
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="navbarSupportedContent">
      <ul className="navbar-nav me-auto mb-2 mb-lg-0">
        {op}
        <li className="nav-item dropdown">
          <a className="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
            Dropdown
          </a>
          <ul className="dropdown-menu" aria-labelledby="navbarDropdown">
           {dd}
           {/* <li><hr className="dropdown-divider"/></li> */}
            
          </ul>
        </li>
      </ul>
      <form className="d-flex">
        <input className="form-control me-2" type="search" placeholder="Search" aria-label="Search"/>
        <button className="btn btn-outline-success" type="submit">Search</button>
      </form>
    </div>
  </div>
</nav>
<Routes>
  <Route path='/home' element={<Home/>}/>
  <Route path='/about' element={<About/>}/>
  <Route path='/action' element={<Action/>}/>
  <Route path='/another action' element={<Another/>}/>
  <Route path='/something else here' element={<Something/>}/>
  </Routes>
</Router>
<div className="container">
  <div className="row mt-5">
    <div className="col-12 col-sm-6 col-lg-3">
      <Res img="https://pngimg.com/d/apple_PNG12405.png" title="Apple"/>
    </div>
    <div className='col-12 col-sm-6 col-lg-3'>
    <Res img="https://starpng.com/public/uploads/preview/kiwi-fruit-transparent-background-png-image-101577177630l57ajpq1un.png" title="Kiwi"/>
    </div>
    <div className='col-12 col-sm-6 col-lg-3'>
    <Res img="https://www.freepnglogos.com/uploads/orange-png/orange-png-transparent-images-download-clip-art-4.png" title="Orange"/>
</div>
<div className='col-12 col-sm-6 col-lg-3'>
<Res img="https://static.vecteezy.com/system/resources/previews/015/100/086/original/mango-transparent-background-free-png.png" title="Mango"/>
</div>
   
     
     
  </div>
</div>



      </>
    )
  }
}

