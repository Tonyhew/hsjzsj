{dede:arclist row='6' orderby='id' orderway='asc' addfields='city, project_name,picshowhow,pictype' channelid='18'}
        <div class="picture-grid-box" data-picshowhow='[field:picshowhow/]' data-pictype='[field:pictype/]'>
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