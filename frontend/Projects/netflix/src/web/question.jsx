import React from 'react';

function question(props) {
     
     const data1=()=>{
        let a = document.querySelector(".plus1");    
           a.classList.toggle("rotate")   
     }
       
     const data2=()=>{
        let b = document.querySelector(".plus2");    
           b.classList.toggle("rotate")   
     }
       
     const data3=()=>{
        let c = document.querySelector(".plus3");    
           c.classList.toggle("rotate")   
     }
     const data4=()=>{
        let d = document.querySelector(".plus4");    
           d.classList.toggle("rotate")   
     }
     const data5=()=>{
        let e = document.querySelector(".plus5");    
           e.classList.toggle("rotate")   
     }
     const data6=()=>{
        let f = document.querySelector(".plus6");    
           f.classList.toggle("rotate")   
     }
       
    
    
    return (
        <>
        <div className="container-fluid question">
            <div className="row text-center asked">
                <h1>Frequently Asked Questions</h1>
            </div>
           <div className="container">
            <div className="row">
            <div className="accordion accordion-flush" id="accordionFlushExample">
  <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingOne">
      <button className="accordion-button bad collapsed clc" onClick={data1} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseOne" aria-expanded="false" aria-controls="flush-collapseOne">
      What is Netflix?<i className="fa-solid fa-plus plus1" onDoubleClick={data1}></i>
      </button>
    </h2>
    <div id="flush-collapseOne" className="accordion-collapse collapse" aria-labelledby="flush-headingOne" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">Netflix is a streaming service that offers a wide variety of award-winning TV shows, movies, anime, documentaries and more – on thousands of internet-connected devices.<br/>

You can watch as much as you want, whenever you want, without a single ad – all for one low monthly price. There's always something new to discover, and new TV shows and movies are added every week!

How much does Netflix cost?</div>
    </div>
  </div>
  <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingTwo">
      <button className="accordion-button bad clc collapsed" onClick={data2} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseTwo" aria-expanded="false" aria-controls="flush-collapseTwo">
      How much does Netflix cost?<i className="fa-solid fa-plus plus2" onDoubleClick={data2}></i>
      </button>
    </h2>
    <div id="flush-collapseTwo" className="accordion-collapse collapse" aria-labelledby="flush-headingTwo" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">Watch Netflix on your smartphone, tablet, Smart TV, laptop, or streaming device, all for one fixed monthly fee. Plans range from ₹ 149 to ₹ 649 a month. No extra costs, no contracts.</div>
    </div>
  </div>
  <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingThree">
      <button className="accordion-button clc collapsed bad" onClick={data3} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseThree" aria-expanded="false" aria-controls="flush-collapseThree">
      Where can I watch?<i className="fa-solid fa-plus plus3" onDoubleClick={data3}></i>
      </button>
    </h2>
    <div id="flush-collapseThree" className="accordion-collapse collapse" aria-labelledby="flush-headingThree" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">Watch anywhere, anytime. Sign in with your Netflix account to watch instantly on the web at netflix.com from your personal computer or on any internet-connected device that offers the Netflix app, including smart TVs, smartphones, tablets, streaming media players and game consoles.<br/>

You can also download your favourite shows with the iOS, Android, or Windows 10 app. Use downloads to watch while you're on the go and without an internet connection. Take Netflix with you anywhere.</div>
    </div>
  </div>

  <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingFour">
      <button className="accordion-button collapsed clc bad" onClick={data4} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseFour" aria-expanded="false" aria-controls="flush-collapseFour">
      How do I cancel?<i className="fa-solid fa-plus plus4" onDoubleClick={data4}></i>
      </button>
    </h2>
    <div id="flush-collapseFour" className="accordion-collapse collapse" aria-labelledby="flush-headingFour" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">Netflix is flexible. There are no annoying contracts and no commitments. You can easily cancel your account online in two clicks. There are no cancellation fees – start or stop your account anytime.
    </div>
  </div>
  </div>

   <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingFive">
      <button className="accordion-button collapsed clc bad" onClick={data5} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseFive" aria-expanded="false" aria-controls="flush-collapseFive">
      What can I watch on Netflix?

<i className="fa-solid fa-plus plus5" onDoubleClick={data5}></i>
      </button>
    </h2>
    <div id="flush-collapseFive" className="accordion-collapse collapse" aria-labelledby="flush-headingFive" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">Netflix has an extensive library of feature films, documentaries, TV shows, anime, award-winning Netflix originals, and more. Watch as much as you want, anytime you want.</div>
    </div>
  </div> 

   <div className="accordion-item main">
    <h2 className="accordion-header" id="flush-headingSix">
      <button className="accordion-button collapsed clc bad" onClick={data6} type="button" data-bs-toggle="collapse" data-bs-target="#flush-collapseSix" aria-expanded="false" aria-controls="flush-collapseSix">
      Is Netflix good for kids?<i className="fa-solid fa-plus plus6" onDoubleClick={data6}></i>
      </button>
    </h2>
    <div id="flush-collapseSix" className="accordion-collapse collapse" aria-labelledby="flush-headingSix" data-bs-parent="#accordionFlushExample">
      <div className="accordion-body">The Netflix Kids experience is included in your membership to give parents control while kids enjoy family-friendly TV shows and films in their own space.<br/>

Kids profiles come with PIN-protected parental controls that let you restrict the maturity rating of content kids can watch and block specific titles you don’t want kids to see.</div>
    </div>
  </div> 

</div>

<div className="row text-center membership">
    <h4>Ready to watch? Enter your email to create or restart your membership.</h4>
</div>
<div className="start last pb-5">
                    <span className='input'>
                        <input type="email" className="em clc" id="exampleInputEmail1" placeholder='' aria-describedby="emailHelp"/>
                        <span className='address'>Email address</span>
                        </span>
                 
                  <button type="submit" className=" clc signin">Get Started<i class="fa-solid fa-arrow-right"></i></button>
                 </div>
            </div>
           </div>
        </div>
        <div className='b1'></div>
        </>
    );
}

export default question;