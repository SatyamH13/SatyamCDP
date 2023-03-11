import React from "react"
import './App.css';
import Header from './component/header';
import About  from './component/about';
import Shop from './component/shop';
import Menu from './component/menu';
import Client from './component/clients';
import Price from './component/price';
function App() {
  return<div>
      <Header/>
      <About/>
      <Shop/>
      <Menu/>
      <Client/>
      <Price/>

    </div>
}

export default App;
