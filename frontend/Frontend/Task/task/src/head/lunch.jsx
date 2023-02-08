import React, { Component } from 'react'

export default class lunch extends Component {
    

    constructor(){
        super();
        this.state={a1:"",a2:"",a3:"",a4:"",a5:"",a6:"",a7:"",a8:""};
        
     }
  
      gujrati=()=>{
        this.setState({a1:"Gulabjamun",a2:"Undhiyu",a3:"Puri",a4:"Samosa",a5:"Chatni",a6:"Rice",a7:"Dal",a8:"Chas"})
      }
      south=()=>{
        this.setState({a1:"Sambhar",a2:"Kadal curry",a3:"Curd Rice",a4:"Aviyal",a5:"Rotli",a6:"Salad",a7:"Idli",a8:"Coconut oil"})
        }
      panjabi=()=>{
        this.setState({a1:"Kajukatri",a2:"Paneer Angara",a3:"Nan",a4:"papad",a5:"salad",a6:"coldrinks",a7:"Lassi",a8:"Rice"})
        }
     

  render() {
    return (
   <>
      <div className='box'>
         
          
          <h1>Lunch</h1>
         <button className='btn btn-primary'onClick={this.gujrati} >Gujrati</button>
         <button className='btn btn-success' onClick={this.panjabi}>Panjabi</button>
         <button className='btn btn-danger' onClick={this.south}>South indian</button>

          <ul>
        
             
            <li>{this.state.a1}</li>
            <li>{this.state.a2}</li>
            <li>{this.state.a3}</li>
            <li>{this.state.a4}</li>
            <li>{this.state.a5}</li>
            <li>{this.state.a6}</li>
            <li>{this.state.a7}</li>
            <li>{this.state.a8}</li>
           
         </ul> 

          </div>
   </>
    )
  }
}
