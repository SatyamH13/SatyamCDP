import React, { Component } from 'react'

export default class reuse extends Component {
  render() {
    return (
      <>
      <div className="card">
      <img src={this.props.img} className="card-img-top" height="250px"/>
      <div className="card-body">
      <h5 className="card-title">{this.props.title}</h5>
      <p className="card-text">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quis doloremque ipsam earum? Nemo quas neque possimus praesentium, quasi rem voluptate.</p>
      <a href="#" className="btn btn-primary">Go somewhere</a>
      </div>
      </div>
      </>
    )
  }
}
