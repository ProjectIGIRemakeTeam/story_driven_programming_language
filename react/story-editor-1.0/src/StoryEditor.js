import  {useEffect, useRef, useState} from "react";

import "./StoryEditor.css";



function StoryEditor() {

    const [story, set_story] = useState(
    );

    function didChangeStoryText(story_text) {
    set_story(story_text)
    }

  return (
    <div className="StoryEditor">
        <input value={story} onChange={(e) => didChangeStoryText(e.target.value)}></input>
    </div>
  );
}

export default StoryEditor;
