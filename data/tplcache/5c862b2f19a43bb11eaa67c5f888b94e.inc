{dede:arclist row='6' orderby='pubdate' orderway='asc'}
        <div class="picture-grid-box">
          <a href="[field:arcurl/]">
            <picture>
              <img src="[field:picname/]" alt="">
            </picture>
          </a>
          <div class="picture-info">
            <p>{dede:field.city /}</p>
            <p>{dede:field.project_name /}</p>
          </div>
        </div>
        {/dede:arclist}