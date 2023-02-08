import React, { Component } from 'react';

class dinner extends Component {
    constructor(){
        super();
        this.state={a1:"",a2:"",a3:"",a4:"",a5:"",a6:"",a7:"",a8:""};
        
     }
  
      gujrati=()=>{
        this.setState({a1:"Daldhokli",a2:"Khichdi",a3:"Kadhi",a4:"Lapsi",a5:"Dhokla",a6:"Sukibhaji",a7:"Papad",a8:"Milk"})

      }
      south=()=>{
        this.setState({a1:"Biriyani",a2:"Puliyodhari",a3:"Korri Gassi",a4:"Gongura",a5:"Mamsam",a6:"Mangloren",a7:"Soup",a8:"Chas"})
        }
      panjabi=()=>{
        this.setState({a1:"Dal tadak",a2:"Makhni",a3:"Pindi channe",a4:"Panjai kadhi",a5:"Maggi",a6:"Lassi",a7:"Soup",a8:"Chas"})
        }
     
    render() {
        return (
          <>
           <div className='box'>
           <h1>Dinner</h1>
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
        );
    }
}

export default dinner;