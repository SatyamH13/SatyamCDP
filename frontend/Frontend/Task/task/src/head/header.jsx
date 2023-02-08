import React, { Component } from 'react'
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link
  } from "react-router-dom";
  import Bf from './bf';
  import Lunch from './lunch';
  import Dinner from './dinner';
  import Reuse from './reuse';
  import Imguse from './imguse';


export default class header extends Component {
  constructor(){
    super();
    this.state={img1:"https://im.rediff.com/cricket/2022/sep/08vk.gif",
    img2:"https://c.ndtvimg.com/2021-10/gjo8hnng_ms-dhoni-ipl_625x300_07_October_21.jpg",
    img3:"https://images.hindustantimes.com/img/2023/02/01/1600x900/pant-bcci-new_1675241630402_1675241640515_1675241640515.jpg",
    img4:"https://images.news18.com/ibnlive/uploads/2022/06/hardik-pandya-india-afp-16558700624x3.jpg"}
  }
  
  img1=()=>{
    this.setState({
      img1:"https://resources.pulse.icc-cricket.com/ICC/photo/2022/12/11/8d534d16-ba75-4304-926f-4b5d85ec46da/Kohli-drought.jpg"
      
    })
  }
  img2=()=>{
    this.setState({
      
      img2:"https://images.hindustantimes.com/img/2023/01/31/550x309/dhoni-getty-2016_1675185205457_1675185211549_1675185211549.jpg"
     
    })
  }
  img3=()=>{
    this.setState({
     
      img3:"https://resources.pulse.icc-cricket.com/photo-resources/2023/01/16/b5a6a938-6682-449c-b40c-5f4f3a44414a/GettyImages-1409326088.jpg?width=640&height=360"
    
    })
  }
  img4=()=>{
    this.setState({
      
      img4:"https://im.rediff.com/cricket/2022/may/11hardik.jpg"
    })
  }

  render() {
    const data = {'/breakfast':'Breakfast','/lunch':'Lunch','/dinner':'Dinner'}
    const lop = Object.entries(data).map((res,i)=>{
        return  <li className="nav-item" key={i}>   
        <Link className="nav-link active" to={res[0]}>{res[1]}</Link>
      </li>
  
    })
    return (
      <>
      <Router>
  <nav className="navbar navbar-expand-lg  navbar-light aa">
<div className="container-fluid">
<a className="navbar-brand" href="#"><img src="https://www.pngall.com/wp-content/uploads/8/Restaurant-Logo-PNG-Photo.png" height="70px" width="70px" alt="" /></a>
<button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
<span className="navbar-toggler-icon"></span> 
</button>
<div className="collapse navbar-collapse" id="navbarNav">   
<ul className="navbar-nav">
 {lop}
 
</ul>
</div>
</div>
</nav>
<div className='photo'>
<Routes>

<Route path='/breakfast' element={<Bf/>}/>
<Route path='/lunch' element={<Lunch/>}/>
<Route path='/dinner' element={<Dinner/>}/>


</Routes> 
</div>

</Router> 
<div className="container">
<div className="row mt-5">
<div className="col-12 col-sm-6 col-lg-3">
  <Reuse img="./img/pizza.jpg" title="Pizza"/>
</div>
<div className="col-12 col-sm-6 col-lg-3">
  <Reuse img="./img/sandwich.jpg" title="Sandwich"/>
</div>
<div className="col-12 col-sm-6 col-lg-3">
  <Reuse img="./img/burger.jpg" title="Burger"/>
</div>
<div className="col-12 col-sm-6 col-lg-3">
  <Reuse img="./img/hotdog.jpg" title="Hotdog"/>
</div>
</div>
</div>

<div className="container">
  <div className="row mt-5">
  <div className='col-lg-3 col-12 col-sm-6'>
   <Imguse imgsrc={this.state.img1} click={this.img1} />
</div>
<div className='col-lg-3 col-12 col-sm-6'>
   <Imguse imgsrc={this.state.img2}  click={this.img2}/>
</div>
<div className='col-lg-3 col-12 col-sm-6'>
   <Imguse imgsrc={this.state.img3}  click={this.img3}/>
</div>
<div className='col-lg-3 col-12 col-sm-6'>
   <Imguse imgsrc={this.state.img4}  click={this.img4}/>
</div>
    
  </div>
</div>

      </>
    )
  }
}
