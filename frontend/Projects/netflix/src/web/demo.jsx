import React from 'react';
import {useRef, useEffect} from 'react';

function Demo(props) {
    const ref = useRef(null);

  useEffect(() => {
    const handleClick = event => {
      console.log('Button clicked');

      console.log('bobbyhadz.com');
    };
  const btnclck=()=>{
    console.log("remove");
  }
    const element = ref.current;

    element.addEventListener('mouseenter', handleClick);

    return () => {
      element.addEventListener('mouseleave', btnclck);
    };
  }, []);

    return (
        <div>
            <button ref={ref}>Click</button>
        </div>
    );
}

export default Demo;