import React, { Component } from 'react'

export default class imguse extends Component {
  render() {
    return (
    <>
     <div class="card" >
  <img src={this.props.imgsrc} class="card-img-top" height="250px"/>
  <div class="card-body mx-auto">
    <button className="btn btn-primary" onClick={this.props.click}>Change</button>
  </div>
   </div>
    </>
    )
  }
}
