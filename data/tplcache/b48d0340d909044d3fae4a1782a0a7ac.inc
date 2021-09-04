<!-- <a href="[field:arcurl/]"> -->
          <div class="news-listBox">
            <img src="[field:litpic/]">
            <div class="news_postDate">
              <p>[field:pubdate function="strftime('%b',@me)"/]</p>
              <p>[field:pubdate function="strftime('%d',@me)"/]</p>
            </div>
            <div class="listBox-content">
              <h3 class="listBox-title">[field:fulltitle/]</h3>
              <span class="listBox-post">[field:description function="cn_substr(@me, 80)"/]</span>
            </div>
          </div>
        <!-- </a> -->