import React, { Component } from 'react';

class reusable extends Component {
    render() {
        return (
          <>
           <div class="card">
  <img src={this.props.img} height="250px" class="card-img-top"/>
  <div class="card-body">
    <h5 class="card-title">{this.props.title}</h5>
    <p class="card-text">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quidem nesciunt reiciendis dignissimos officia assumenda excepturi!</p>
    <a href="#" class="btn btn-primary">Go somewhere</a>
  </div>
</div>
          </>
        );
    }
}

export default reusable;