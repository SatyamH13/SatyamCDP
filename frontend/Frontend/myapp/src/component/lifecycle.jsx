import React, { Component } from 'react';
import PropTypes from 'prop-types';

class lifecycle extends Component {
    constructor(props) {
        super(props);
        console.log("constructor called")
        this.state={counter:0}
    }

    // componentWillMount() {
    //      console.log("componentWillMount called");
    // }

    componentDidMount() {
        setTimeout(()=>{
            console.log(" componentDidMount called");
        },2000)
          
    }

    // componentWillReceiveProps(nextProps) {
    //     console.log("componentWillReceiveProps called");

    // }

    shouldComponentUpdate(nextProps, nextState) {
        console.log("shouldComponentUpdate called");
        console.log("nextProps",nextProps);
        console.log("nextState",nextState);
        return true;

    }

    // componentWillUpdate(nextProps, nextState) {
    //     console.log("componentWillUpdate called");
    //     console.log("nextProps",nextProps);
    //     console.log("nextState",nextState);
    // }

    componentDidUpdate(prevProps, prevState) {
        console.log("componentDidUpdate called");
        console.log("prevProps",prevProps);
        console.log("nextState",prevState);
    }

    componentWillUnmount() {
        console.log("componentWillUnmount called");
    }
    btnclick=()=>{
        this.setState({counter:this.state.counter+1})
    }
    btnrev=()=>{
        this.setState({counter:this.state.counter-1})
    }
    btnreset=()=>{
        this.setState({counter:0})
    }

    render() {
        console.log("render called");
        return (
            <div>
                <input type="text"value={this.state.counter} />
                
                <button className="btn btn-primary" onClick={this.btnclick}>Increment</button>&nbsp;&nbsp;&nbsp;
                <button className="btn btn-primary" onClick={this.btnrev}>Decrement</button>&nbsp;&nbsp;&nbsp;
                <button className="btn btn-primary" onClick={this.btnreset}>Reset</button>

            </div>
        );
    }
}

lifecycle.propTypes = {

};

export default lifecycle;