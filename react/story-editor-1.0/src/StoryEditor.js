import  {useEffect, useRef, useState} from "react";

import "./StoryEditor.css";

import plot_strong from "./plot_string.json";

function StoryEditor() {

    const [story, set_story] = useState(plot_strong);

    function didChangeStoryText(story_text) {
    set_story(story_text)
    }

  return (
    <div className="StoryEditor">
        <textarea value={story} onChange={(e) => didChangeStoryText(e.target.value)}></textarea>
    </div>
  );
}

export default StoryEditor;
