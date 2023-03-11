import React, { Component } from 'react';
import Reuse from './reuse_client'

class clients extends Component {
  render() {
    return (
      <div>
        <div className='clients'>
        <div className="container">
            <div className="row">
                <div className="col-3">
                   <Reuse no="120" name="Awesome Employees"/>
                </div>
                <div className="col-3">
                   <Reuse no="58" name="Pizza Types"/>
                </div>
                <div className="col-3">
                   <Reuse no="1468" name="Satisfied Clients"/>
                </div>
                <div className="col-3">
                   <Reuse no="2031" name="Delivery"/>
                </div>
            </div>
        </div>
    </div>
      </div>
    );
  }
}

export default clients;


