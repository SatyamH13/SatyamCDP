import React, { Component } from 'react'

export default class bf extends Component {
   constructor(){
      super();
      this.state={a1:"",a2:"",a3:"",a4:"",a5:""};
      
   }

    gujrati=()=>{
      this.setState({a1:"Coffe",a2:"Thepla",a3:"Dhokla",a4:"Fafda",a5:"Jalebi"})
    }
    south=()=>{
        this.setState(
            
            {a1:"Idli",a2:"Sambhar",a3:"Dosa",a4:"Tea",a5:"Uttapam"})
      }
    panjabi=()=>{
        this.setState({a1:"Aloo paratha",a2:"Tea",a3:"Lassi",a4:"Dahi bhalle",a5:"Pakoda"})
      }
   

  render() {
   
    return (   
        <>
        <div className='box'>
            <h1>Breakfast</h1>
         <button className='btn btn-primary'onClick={this.gujrati} >Gujrati</button>
         <button className='btn btn-success' onClick={this.panjabi}>Panjabi</button>
         <button className='btn btn-danger' onClick={this.south}>South indian</button>

         <ul>
        
             
            <li>{this.state.a1}</li>
            <li>{this.state.a2}</li>
            <li>{this.state.a3}</li>
            <li>{this.state.a4}</li>
            <li>{this.state.a5}</li>
           
         </ul>
         </div>
      </>
    )
  }
}
