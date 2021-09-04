{dede:arclist row='6' orderby='pubdate' orderway='asc' addfields='city, project_name,picshowhow' channelid='18'}
        <div class="picture-grid-box" data-picshowhow='{dede.field: picshowhow /}'>
          <a href="[field:arcurl/]">
            <picture>
              <img src="[field:picname/]" alt="">
            </picture>
          </a>
          <div class="picture-info">
            <p>[field:city/]</p>
            <p>[field:project_name/]</p>
          </div>
        </div>
        {/dede:arclist}