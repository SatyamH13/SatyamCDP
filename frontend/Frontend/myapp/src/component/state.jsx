import React, { Component } from 'react';

class state extends Component {
    constructor()
    {
        super();
        this.state={name:"Tops Teach",age:0}
        this.state={movie:'three idiots',Author:'chetan bhagat'}
    }
    btnclk=()=>{
        this.setState({name:"Good morning",age:17})
    }
    render() {
        return (
            <div>
               <div className="container">
                <div className="row mt-5">
                <div className="col">
                    <h1>{this.state.name}</h1>
                    <h2>{this.state.age}</h2>
                    <button className='btn btn-primary' onClick={this.btnclk}>Click me</button>
                    <br/>
                    <h1>Movie Name : {this.state.movie}</h1>
                    <h1>Author Name : {this.state.Author}</h1>
                    <button className='btn btn-success' onClick={()=>{this.setState({movie:"Tow State",Author:"Chetan Patel"})}}>Click me</button>
                </div>
                </div>
               </div>
            </div>
        );
    }
}

export default state;