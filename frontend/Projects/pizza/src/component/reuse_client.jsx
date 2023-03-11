import React, { Component } from 'react'

export default class reuse_client extends Component {
  render() {
    return (
      <div>
         <div>
       <div className="client">
                        <h1>{this.props.no}</h1>
                        <p>{this.props.name}</p>
                    </div>
    </div>
      </div>
    )
  }
}
