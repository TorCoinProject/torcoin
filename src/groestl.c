





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">



  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-19e26a1cefb5f1e92203a9468134dbf46b5a5308aeeeee09c96b32fec8c8b044.css" integrity="sha256-GeJqHO+18ekiA6lGgTTb9GtaUwiu7u4JyWsy/sjIsEQ=" media="all" rel="stylesheet" />
  <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-19a419313cd2041eb49fdf3345293a04db2629e516e308aa7dacd4ebd8103736.css" integrity="sha256-GaQZMTzSBB60n98zRSk6BNsmKeUW4wiqfazU69gQNzY=" media="all" rel="stylesheet" />
  
  
  
  

  <meta name="viewport" content="width=device-width">
  
  <title>dash/groestl.c at master · carsenk/dash</title>
  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta content="https://avatars1.githubusercontent.com/u/10162347?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="carsenk/dash" property="og:title" /><meta content="https://github.com/carsenk/dash" property="og:url" /><meta content="dash - Dash - Reinventing Cryptocurrency" property="og:description" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  <link rel="web-socket" href="wss://live.github.com/_sockets/VjI6MTUwNDcyMDU3OmUzNjZhYmViN2QxNDY3ZjI3MzhkOGQ3MjYxYjkxMzg5YWYyY2RhMzg5NWNkNjVlMTNkZmIyOTkwMDY0MzM1YWY=--dc813639047c374c1c82fbe5988ab1ff9c2d9193">
  <meta name="pjax-timeout" content="1000">
  <link rel="sudo-modal" href="/sessions/sudo_modal">
  <meta name="request-id" content="D29A:519B:4627A2:7173A1:58C7637D" data-pjax-transient>
  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="https://collector.githubapp.com/github-external/browser_event" name="octolytics-event-url" /><meta content="D29A:519B:4627A2:7173A1:58C7637D" name="octolytics-dimension-request_id" /><meta content="10162347" name="octolytics-actor-id" /><meta content="carsenk" name="octolytics-actor-login" /><meta content="8a544d291039fe905f2482a8e3f90ec05d35e77e5d2a450f1ad2fc5d1fbd1161" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />




  <meta class="js-ga-set" name="dimension1" content="Logged In">


  
  
      <meta name="hostname" content="github.com">
  <meta name="user-login" content="carsenk">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="MTAxYjAyNjgxYWFjZWVhYWI5YmE1NGViNzA4Mzg1ZGJhMDdmY2YzNTA1ZTIyYzRkYmVkYjBiOWY0NTVlMmYxY3x7InJlbW90ZV9hZGRyZXNzIjoiNjcuNjAuNTcuMzQiLCJyZXF1ZXN0X2lkIjoiRDI5QTo1MTlCOjQ2MjdBMjo3MTczQTE6NThDNzYzN0QiLCJ0aW1lc3RhbXAiOjE0ODk0NjIxNDUsImhvc3QiOiJnaXRodWIuY29tIn0=">


  <meta name="html-safe-nonce" content="65d874c8acd73e445a6dbc85a98fcfa3ad92f054">

  <meta http-equiv="x-pjax-version" content="a92535544f7eba2149f7a198f16545d1">
  

    
  <meta name="description" content="dash - Dash - Reinventing Cryptocurrency">
  <meta name="go-import" content="github.com/carsenk/dash git https://github.com/carsenk/dash.git">

  <meta content="10162347" name="octolytics-dimension-user_id" /><meta content="carsenk" name="octolytics-dimension-user_login" /><meta content="84897523" name="octolytics-dimension-repository_id" /><meta content="carsenk/dash" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="19352450" name="octolytics-dimension-repository_parent_id" /><meta content="dashpay/dash" name="octolytics-dimension-repository_parent_nwo" /><meta content="1181927" name="octolytics-dimension-repository_network_root_id" /><meta content="bitcoin/bitcoin" name="octolytics-dimension-repository_network_root_nwo" />
      <link href="https://github.com/carsenk/dash/commits/master.atom" rel="alternate" title="Recent Commits to dash:master" type="application/atom+xml">


    <link rel="canonical" href="https://github.com/carsenk/dash/blob/master/src/crypto/groestl.c" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">


  <meta name="u2f-support" content="true">

  </head>

  <body class="logged-in env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<div class="header" role="banner">
  <div class="container clearfix">
    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="32" version="1.1" viewBox="0 0 16 16" width="32"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>


        <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/search" class="js-site-search-form" data-scoped-search-url="/carsenk/dash/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
      <div class="header-search-scope">This repository</div>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        autocapitalize="off">
    </label>
</form></div>


      <ul class="header-nav float-left" role="navigation">
        <li class="header-nav-item">
          <a href="/pulls" aria-label="Pull requests you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
            Pull requests
</a>        </li>
        <li class="header-nav-item">
          <a href="/issues" aria-label="Issues you created" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
            Issues
</a>        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
      </ul>

    
<ul class="header-nav user-nav float-right" id="user-links">
  <li class="header-nav-item">
    
    <a href="/notifications" aria-label="You have unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s js-socket-channel js-notification-indicator" data-channel="tenant:1:notification-changed:10162347" data-ga-click="Header, go to notifications, icon:unread" data-hotkey="g n">
        <span class="mail-status unread"></span>
        <svg aria-hidden="true" class="octicon octicon-bell float-left" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"/></svg>
</a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus float-left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"/></svg>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>


<a class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>




      </ul>
    </div>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name tooltipped tooltipped-sw js-menu-target" href="/carsenk"
       aria-label="View profile and more"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@carsenk" class="avatar" src="https://avatars3.githubusercontent.com/u/10162347?v=3&amp;s=40" height="20" width="20">
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu dropdown-menu-sw">
        <div class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">carsenk</strong>
        </div>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/carsenk" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a>
        <a class="dropdown-item" href="/carsenk?tab=stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
          <a class="dropdown-item" href="/integrations" data-ga-click="Header, go to integrations, text:integrations">
            Integrations
          </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ag1Nxz6RMRdo8DC6Bxa6dTGVvn0L1kgcCl+esQRsdeGhVhkSP3ILezy0bSDZToU/tYorb2FnyBC4hV64lT4+Ew==" /></div>
          <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </li>
</ul>


    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/logout" class="sr-only right-0" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="/KWzCAfloLgS0JrrSuClAZhBd1hQPCX7RR3nwDk6u7g3/ufdBgaa1EaUx3GUuJpLHF7iSjqNpff3xyfJqGjwSg==" /></div>
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
        Sign out
      </button>
</form>  </div>
</div>


      

  </div>

  <div id="start-of-content" class="accessibility-aid"></div>

    <div id="js-flash-container">
</div>



  <div role="main">
      <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
        


<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">


    <ul class="pagehead-actions">
  <li>
        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ERcYscmfMaavKQkGuyGq9yeuvWHH3LueYoLbkPtFAjT73Gd1iENUAoZpYqv2c30l6S5XaJA5AghOX3OJp+Hi/g==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="84897523" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/carsenk/dash/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
              <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
              Unwatch
            </span>
          </a>
          <a class="social-count js-social-count"
            href="/carsenk/dash/watchers"
            aria-label="1 user is watching this repository">
            1
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
                      Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"/></svg>
                      Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
      <div class="js-toggler-container js-social-container starring-container ">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/unstar" class="starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="ECovGafAkwxcK0O67vsqL40etgHqowvXtOmc05R/uTa5WvjyShBYFBz3Fxi01kBPxEL8uk8gCIARW4z8Eln/bQ==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar carsenk/dash"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/carsenk/dash/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/star" class="unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="oLLxu2sCfsF7qNKOBOGxwnAgcMqddhb/85H2QwQxSvGBUWQrVe4dS2M2X0FKQxfdi+Qqyb8IKJlHdW2DlNxe0g==" /></div>
      <button
        type="submit"
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star carsenk/dash"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"/></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/carsenk/dash/stargazers"
           aria-label="0 users starred this repository">
          0
        </a>
</form>  </div>

  </li>

  <li>
          <a href="#fork-destination-box" class="btn btn-sm btn-with-count"
              title="Fork your own copy of carsenk/dash to your account"
              aria-label="Fork your own copy of carsenk/dash to your account"
              rel="facebox"
              data-ga-click="Repository, show fork modal, action:blob#show; text:Fork">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            Fork
          </a>

          <div id="fork-destination-box" style="display: none;">
            <h2 class="facebox-header" data-facebox-id="facebox-header">Where should we fork this repository?</h2>
            <include-fragment src=""
                class="js-fork-select-fragment fork-select-fragment"
                data-url="/carsenk/dash/fork?fragment=1">
              <img alt="Loading" height="64" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif" width="64" />
            </include-fragment>
          </div>

    <a href="/carsenk/dash/network" class="social-count"
       aria-label="7564 users forked this repository">
      7,564
    </a>
  </li>
</ul>

    <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
  <span class="author" itemprop="author"><a href="/carsenk" class="url fn" rel="author">carsenk</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/carsenk/dash" data-pjax="#js-repo-pjax-container">dash</a></strong>

    <span class="fork-flag">
      <span class="text">forked from <a href="/dashpay/dash">dashpay/dash</a></span>
    </span>
</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/carsenk/dash" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /carsenk/dash" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/carsenk/dash/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /carsenk/dash/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>

  <a href="/carsenk/dash/projects" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /carsenk/dash/projects">
    <svg aria-hidden="true" class="octicon octicon-project" height="16" version="1.1" viewBox="0 0 15 16" width="15"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
    Projects
    <span class="counter">0</span>
</a>
    <a href="/carsenk/dash/wiki" class="js-selected-navigation-item reponav-item" data-hotkey="g w" data-selected-links="repo_wiki /carsenk/dash/wiki">
      <svg aria-hidden="true" class="octicon octicon-book" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M3 5h4v1H3V5zm0 3h4V7H3v1zm0 2h4V9H3v1zm11-5h-4v1h4V5zm0 2h-4v1h4V7zm0 2h-4v1h4V9zm2-6v9c0 .55-.45 1-1 1H9.5l-1 1-1-1H2c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h5.5l1 1 1-1H15c.55 0 1 .45 1 1zm-8 .5L7.5 3H2v9h6V3.5zm7-.5H9.5l-.5.5V12h6V3z"/></svg>
      Wiki
</a>

  <a href="/carsenk/dash/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /carsenk/dash/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"/></svg>
    Pulse
</a>
  <a href="/carsenk/dash/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /carsenk/dash/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Graphs
</a>
    <a href="/carsenk/dash/settings" class="js-selected-navigation-item reponav-item" data-selected-links="repo_settings repo_branch_settings hooks integration_installations /carsenk/dash/settings">
      <svg aria-hidden="true" class="octicon octicon-gear" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"/></svg>
      Settings
</a>
</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/carsenk/dash/blob/119fe83bb408283c22a8bb3f2acb0a6bed879c8a/src/crypto/groestl.c" class="d-none js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:12c3d2df263685a5e648f882f5657d03 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Find or create a branch…" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Find or create a branch…" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/carsenk/dash/blob/master/src/crypto/groestl.c"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.10.0.x/src/crypto/groestl.c"
               data-name="v0.10.0.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.10.0.x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.11.1.x/src/crypto/groestl.c"
               data-name="v0.11.1.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.11.1.x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.11.2.x/src/crypto/groestl.c"
               data-name="v0.11.2.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.11.2.x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.12.0.x/src/crypto/groestl.c"
               data-name="v0.12.0.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.12.0.x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.12.1.x/src/crypto/groestl.c"
               data-name="v0.12.1.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.12.1.x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/carsenk/dash/blob/v0.12.2.x/src/crypto/groestl.c"
               data-name="v0.12.2.x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                v0.12.2.x
              </span>
            </a>
        </div>

          <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="IKPwnYJdIgM7/aW9ZmlLpIVzxmK7OrFMN/hUaR8YV7Nr15uvhYG8FkTQExz8BXOAUlotVpVKJPdGBPhKurvcCA==" /></div>
          <svg aria-hidden="true" class="octicon octicon-git-branch select-menu-item-icon" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path fill-rule="evenodd" d="M10 5c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v.3c-.02.52-.23.98-.63 1.38-.4.4-.86.61-1.38.63-.83.02-1.48.16-2 .45V4.72a1.993 1.993 0 0 0-1-3.72C.88 1 0 1.89 0 3a2 2 0 0 0 1 1.72v6.56c-.59.35-1 .99-1 1.72 0 1.11.89 2 2 2 1.11 0 2-.89 2-2 0-.53-.2-1-.53-1.36.09-.06.48-.41.59-.47.25-.11.56-.17.94-.17 1.05-.05 1.95-.45 2.75-1.25S8.95 7.77 9 6.73h-.02C9.59 6.37 10 5.73 10 5zM2 1.8c.66 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2C1.35 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2zm0 12.41c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm6-8c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
            <div class="select-menu-item-text">
              <span class="select-menu-item-heading">Create branch: <span class="js-new-item-name"></span></span>
              <span class="description">from ‘master’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="master">
            <input type="hidden" name="path" id="path" value="src/crypto/groestl.c">
</form>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.13.0.0/src/crypto/groestl.c"
              data-name="v0.13.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.13.0.0">
                v0.13.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.1.3/src/crypto/groestl.c"
              data-name="v0.12.1.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.1.3">
                v0.12.1.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.1.2/src/crypto/groestl.c"
              data-name="v0.12.1.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.1.2">
                v0.12.1.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.1.1/src/crypto/groestl.c"
              data-name="v0.12.1.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.1.1">
                v0.12.1.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.1.0/src/crypto/groestl.c"
              data-name="v0.12.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.1.0">
                v0.12.1.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.60/src/crypto/groestl.c"
              data-name="v0.12.0.60"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.60">
                v0.12.0.60
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.59/src/crypto/groestl.c"
              data-name="v0.12.0.59"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.59">
                v0.12.0.59
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.58/src/crypto/groestl.c"
              data-name="v0.12.0.58"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.58">
                v0.12.0.58
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.57/src/crypto/groestl.c"
              data-name="v0.12.0.57"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.57">
                v0.12.0.57
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.56/src/crypto/groestl.c"
              data-name="v0.12.0.56"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.56">
                v0.12.0.56
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.55/src/crypto/groestl.c"
              data-name="v0.12.0.55"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.55">
                v0.12.0.55
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.53/src/crypto/groestl.c"
              data-name="v0.12.0.53"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.53">
                v0.12.0.53
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.52/src/crypto/groestl.c"
              data-name="v0.12.0.52"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.52">
                v0.12.0.52
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.51/src/crypto/groestl.c"
              data-name="v0.12.0.51"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.51">
                v0.12.0.51
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.50/src/crypto/groestl.c"
              data-name="v0.12.0.50"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.50">
                v0.12.0.50
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.49/src/crypto/groestl.c"
              data-name="v0.12.0.49"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.49">
                v0.12.0.49
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.48/src/crypto/groestl.c"
              data-name="v0.12.0.48"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.48">
                v0.12.0.48
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.47/src/crypto/groestl.c"
              data-name="v0.12.0.47"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.47">
                v0.12.0.47
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.46/src/crypto/groestl.c"
              data-name="v0.12.0.46"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.46">
                v0.12.0.46
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.45/src/crypto/groestl.c"
              data-name="v0.12.0.45"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.45">
                v0.12.0.45
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.44/src/crypto/groestl.c"
              data-name="v0.12.0.44"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.44">
                v0.12.0.44
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.12.0.0/src/crypto/groestl.c"
              data-name="v0.12.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.12.0.0">
                v0.12.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.23/src/crypto/groestl.c"
              data-name="v0.11.2.23"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.23">
                v0.11.2.23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.22/src/crypto/groestl.c"
              data-name="v0.11.2.22"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.22">
                v0.11.2.22
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.22-ref/src/crypto/groestl.c"
              data-name="v0.11.2.22-ref"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.22-ref">
                v0.11.2.22-ref
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.21/src/crypto/groestl.c"
              data-name="v0.11.2.21"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.21">
                v0.11.2.21
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.20/src/crypto/groestl.c"
              data-name="v0.11.2.20"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.20">
                v0.11.2.20
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.19/src/crypto/groestl.c"
              data-name="v0.11.2.19"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.19">
                v0.11.2.19
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.18/src/crypto/groestl.c"
              data-name="v0.11.2.18"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.18">
                v0.11.2.18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.18-debug/src/crypto/groestl.c"
              data-name="v0.11.2.18-debug"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.18-debug">
                v0.11.2.18-debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.17/src/crypto/groestl.c"
              data-name="v0.11.2.17"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.17">
                v0.11.2.17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.17-ref/src/crypto/groestl.c"
              data-name="v0.11.2.17-ref"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.17-ref">
                v0.11.2.17-ref
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.16/src/crypto/groestl.c"
              data-name="v0.11.2.16"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.16">
                v0.11.2.16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.15/src/crypto/groestl.c"
              data-name="v0.11.2.15"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.15">
                v0.11.2.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.14/src/crypto/groestl.c"
              data-name="v0.11.2.14"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.14">
                v0.11.2.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.13/src/crypto/groestl.c"
              data-name="v0.11.2.13"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.13">
                v0.11.2.13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.12/src/crypto/groestl.c"
              data-name="v0.11.2.12"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.12">
                v0.11.2.12
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.11/src/crypto/groestl.c"
              data-name="v0.11.2.11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.11">
                v0.11.2.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.10/src/crypto/groestl.c"
              data-name="v0.11.2.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.10">
                v0.11.2.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.9/src/crypto/groestl.c"
              data-name="v0.11.2.9"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.9">
                v0.11.2.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.8/src/crypto/groestl.c"
              data-name="v0.11.2.8"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.8">
                v0.11.2.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.7/src/crypto/groestl.c"
              data-name="v0.11.2.7"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.7">
                v0.11.2.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.6/src/crypto/groestl.c"
              data-name="v0.11.2.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.6">
                v0.11.2.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.5/src/crypto/groestl.c"
              data-name="v0.11.2.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.5">
                v0.11.2.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.4/src/crypto/groestl.c"
              data-name="v0.11.2.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.4">
                v0.11.2.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.3/src/crypto/groestl.c"
              data-name="v0.11.2.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.3">
                v0.11.2.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.2/src/crypto/groestl.c"
              data-name="v0.11.2.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.2">
                v0.11.2.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.1/src/crypto/groestl.c"
              data-name="v0.11.2.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.1">
                v0.11.2.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.2.0/src/crypto/groestl.c"
              data-name="v0.11.2.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.2.0">
                v0.11.2.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.26/src/crypto/groestl.c"
              data-name="v0.11.1.26"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.26">
                v0.11.1.26
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.25/src/crypto/groestl.c"
              data-name="v0.11.1.25"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.25">
                v0.11.1.25
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.25b/src/crypto/groestl.c"
              data-name="v0.11.1.25b"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.25b">
                v0.11.1.25b
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.24/src/crypto/groestl.c"
              data-name="v0.11.1.24"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.24">
                v0.11.1.24
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.23/src/crypto/groestl.c"
              data-name="v0.11.1.23"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.23">
                v0.11.1.23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.22/src/crypto/groestl.c"
              data-name="v0.11.1.22"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.22">
                v0.11.1.22
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.21/src/crypto/groestl.c"
              data-name="v0.11.1.21"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.21">
                v0.11.1.21
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.20/src/crypto/groestl.c"
              data-name="v0.11.1.20"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.20">
                v0.11.1.20
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.19/src/crypto/groestl.c"
              data-name="v0.11.1.19"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.19">
                v0.11.1.19
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.18/src/crypto/groestl.c"
              data-name="v0.11.1.18"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.18">
                v0.11.1.18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.17/src/crypto/groestl.c"
              data-name="v0.11.1.17"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.17">
                v0.11.1.17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.16/src/crypto/groestl.c"
              data-name="v0.11.1.16"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.16">
                v0.11.1.16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.15/src/crypto/groestl.c"
              data-name="v0.11.1.15"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.15">
                v0.11.1.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.14/src/crypto/groestl.c"
              data-name="v0.11.1.14"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.14">
                v0.11.1.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.13/src/crypto/groestl.c"
              data-name="v0.11.1.13"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.13">
                v0.11.1.13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.11/src/crypto/groestl.c"
              data-name="v0.11.1.11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.11">
                v0.11.1.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.10/src/crypto/groestl.c"
              data-name="v0.11.1.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.10">
                v0.11.1.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.9/src/crypto/groestl.c"
              data-name="v0.11.1.9"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.9">
                v0.11.1.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.8/src/crypto/groestl.c"
              data-name="v0.11.1.8"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.8">
                v0.11.1.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.7/src/crypto/groestl.c"
              data-name="v0.11.1.7"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.7">
                v0.11.1.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.6/src/crypto/groestl.c"
              data-name="v0.11.1.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.6">
                v0.11.1.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.5/src/crypto/groestl.c"
              data-name="v0.11.1.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.5">
                v0.11.1.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.4/src/crypto/groestl.c"
              data-name="v0.11.1.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.4">
                v0.11.1.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.3/src/crypto/groestl.c"
              data-name="v0.11.1.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.3">
                v0.11.1.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.2/src/crypto/groestl.c"
              data-name="v0.11.1.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.2">
                v0.11.1.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.1/src/crypto/groestl.c"
              data-name="v0.11.1.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.1">
                v0.11.1.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.1.0/src/crypto/groestl.c"
              data-name="v0.11.1.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.1.0">
                v0.11.1.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.14/src/crypto/groestl.c"
              data-name="v0.11.0.14"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.14">
                v0.11.0.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.14d/src/crypto/groestl.c"
              data-name="v0.11.0.14d"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.14d">
                v0.11.0.14d
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.13/src/crypto/groestl.c"
              data-name="v0.11.0.13"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.13">
                v0.11.0.13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.12/src/crypto/groestl.c"
              data-name="v0.11.0.12"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.12">
                v0.11.0.12
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.11/src/crypto/groestl.c"
              data-name="v0.11.0.11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.11">
                v0.11.0.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.10/src/crypto/groestl.c"
              data-name="v0.11.0.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.10">
                v0.11.0.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.9/src/crypto/groestl.c"
              data-name="v0.11.0.9"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.9">
                v0.11.0.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.8/src/crypto/groestl.c"
              data-name="v0.11.0.8"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.8">
                v0.11.0.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.7/src/crypto/groestl.c"
              data-name="v0.11.0.7"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.7">
                v0.11.0.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.6/src/crypto/groestl.c"
              data-name="v0.11.0.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.6">
                v0.11.0.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.5/src/crypto/groestl.c"
              data-name="v0.11.0.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.5">
                v0.11.0.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.4/src/crypto/groestl.c"
              data-name="v0.11.0.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.4">
                v0.11.0.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.3/src/crypto/groestl.c"
              data-name="v0.11.0.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.3">
                v0.11.0.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.2/src/crypto/groestl.c"
              data-name="v0.11.0.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.2">
                v0.11.0.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.1/src/crypto/groestl.c"
              data-name="v0.11.0.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.1">
                v0.11.0.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.11.0.0/src/crypto/groestl.c"
              data-name="v0.11.0.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.11.0.0">
                v0.11.0.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.99.99/src/crypto/groestl.c"
              data-name="v0.10.99.99"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.99.99">
                v0.10.99.99
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.26/src/crypto/groestl.c"
              data-name="v0.10.17.26"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.26">
                v0.10.17.26
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.24/src/crypto/groestl.c"
              data-name="v0.10.17.24"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.24">
                v0.10.17.24
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.23/src/crypto/groestl.c"
              data-name="v0.10.17.23"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.23">
                v0.10.17.23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.22/src/crypto/groestl.c"
              data-name="v0.10.17.22"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.22">
                v0.10.17.22
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.21/src/crypto/groestl.c"
              data-name="v0.10.17.21"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.21">
                v0.10.17.21
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.20/src/crypto/groestl.c"
              data-name="v0.10.17.20"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.20">
                v0.10.17.20
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/carsenk/dash/tree/v0.10.17.19/src/crypto/groestl.c"
              data-name="v0.10.17.19"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="v0.10.17.19">
                v0.10.17.19
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="BtnGroup float-right">
    <a href="/carsenk/dash/find/master"
          class="js-pjax-capture-input btn btn-sm BtnGroup-item"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm BtnGroup-item tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/carsenk/dash"><span>dash</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/carsenk/dash/tree/master/src"><span>src</span></a></span><span class="separator">/</span><span class="js-path-segment"><a href="/carsenk/dash/tree/master/src/crypto"><span>crypto</span></a></span><span class="separator">/</span><strong class="final-path">groestl.c</strong>
  </div>
</div>

<include-fragment class="commit-tease" src="/carsenk/dash/contributors/master/src/crypto/groestl.c">
  <div>
    Fetching contributors&hellip;
  </div>

  <div class="commit-tease-contributors">
    <img alt="" class="loader-loading float-left" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" />
    <span class="loader-error">Cannot retrieve contributors at this time</span>
  </div>
</include-fragment>

<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a href="/carsenk/dash/raw/master/src/crypto/groestl.c" class="btn btn-sm BtnGroup-item" id="raw-url">Raw</a>
        <a href="/carsenk/dash/blame/master/src/crypto/groestl.c" class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b">Blame</a>
      <a href="/carsenk/dash/commits/master/src/crypto/groestl.c" class="btn btn-sm BtnGroup-item" rel="nofollow">History</a>
    </div>

        <a class="btn-octicon tooltipped tooltipped-nw"
           href="github-windows://openRepo/https://github.com/carsenk/dash?branch=master&amp;filepath=src%2Fcrypto%2Fgroestl.c"
           aria-label="Open this file in GitHub Desktop"
           data-ga-click="Repository, open with desktop, type:windows">
            <svg aria-hidden="true" class="octicon octicon-device-desktop" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"/></svg>
        </a>

        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/edit/master/src/crypto/groestl.c" class="inline-form js-update-url-with-hash" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="AEL0OrTBr7zyGzA4Ie+8yU6oKtlzmSUwK7XplRuZ1553dxHYLHW9MEme8UmHFEfHI+LIQnpLPZJB0sIyVWxqqA==" /></div>
          <button class="btn-octicon tooltipped tooltipped-nw" type="submit"
            aria-label="Edit this file" data-hotkey="e" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
          </button>
</form>        <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="/carsenk/dash/delete/master/src/crypto/groestl.c" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="XTFxMMJAJk21/Syg6raQ0FLUu4MrnVmFQtyTTh7N/4H/hhx7nAxjUPdHf8ZCxfnSkyty3FJ+b/X0nj4Xhx2Tnw==" /></div>
          <button class="btn-octicon btn-octicon-danger tooltipped tooltipped-nw" type="submit"
            aria-label="Delete this file" data-disable-with>
            <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
          </button>
</form>  </div>

  <div class="file-info">
      3124 lines (2965 sloc)
      <span class="file-info-divider"></span>
    130 KB
  </div>
</div>

  

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> $Id: groestl.c 260 2011-07-21 01:02:38Z tp $ <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Groestl implementation.</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * ==========================(LICENSE BEGIN)============================</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Copyright (c) 2007-2010  Projet RNRT SAPHIR</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * </span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Permission is hereby granted, free of charge, to any person obtaining</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * a copy of this software and associated documentation files (the</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * &quot;Software&quot;), to deal in the Software without restriction, including</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * without limitation the rights to use, copy, modify, merge, publish,</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * distribute, sublicense, and/or sell copies of the Software, and to</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * permit persons to whom the Software is furnished to do so, subject to</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * the following conditions:</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * </span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * The above copyright notice and this permission notice shall be</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * included in all copies or substantial portions of the Software.</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * </span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND,</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * ===========================(LICENSE END)=============================</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * @author   Thomas Pornin &lt;thomas.pornin@cryptolog.com&gt;</span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>stddef.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>string.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>sph_groestl.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> __cplusplus</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line"><span class="pl-k">extern</span> <span class="pl-s"><span class="pl-pds">&quot;</span>C<span class="pl-pds">&quot;</span></span>{</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">#endif</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT &amp;&amp; !defined SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SPH_SMALL_FOOTPRINT_GROESTL</span>   <span class="pl-c1">1</span></td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Apparently, the 32-bit-only version is not faster than the 64-bit</span></td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * version unless using the &quot;small footprint&quot; code on a 32-bit machine.</span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !defined SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL &amp;&amp; !SPH_64_TRUE</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SPH_GROESTL_64</span>   <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SPH_GROESTL_64</span>   <span class="pl-c1">1</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !SPH_64</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> _MSC_VER</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">pragma</span> warning (disable: 4146)</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * The internal representation may use either big-endian or</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * little-endian. Using the platform default representation speeds up</span></td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * encoding and decoding between bytes and the matrix columns.</span></td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_LITTLE_ENDIAN</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">USE_LE</span>   <span class="pl-c1">1</span></td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">elif</span> SPH_GROESTL_BIG_ENDIAN</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">USE_LE</span>   <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">elif</span> SPH_LITTLE_ENDIAN</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">USE_LE</span>   <span class="pl-c1">1</span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">C32e</span>(<span class="pl-v">x</span>)     ((SPH_C32(x) &gt;&gt; <span class="pl-c1">24</span>) \</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C32</span>(x) &gt;&gt;  <span class="pl-c1">8</span>) &amp; <span class="pl-c1">SPH_C32</span>(0x0000FF00)) \</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C32</span>(x) &lt;&lt;  <span class="pl-c1">8</span>) &amp; <span class="pl-c1">SPH_C32</span>(0x00FF0000)) \</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C32</span>(x) &lt;&lt; <span class="pl-c1">24</span>) &amp; <span class="pl-c1">SPH_C32</span>(0xFF000000)))</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">dec32e_aligned</span>   sph_dec32le_aligned</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">enc32e</span>           sph_enc32le</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_0</span>(<span class="pl-v">x</span>)    ((x) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_1</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">8</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_2</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">16</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_3</span>(<span class="pl-v">x</span>)    ((x) &gt;&gt; <span class="pl-c1">24</span>)</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R32u</span>(<span class="pl-v">u, d</span>)   SPH_T32(((u) &lt;&lt; <span class="pl-c1">16</span>) | ((d) &gt;&gt; <span class="pl-c1">16</span>))</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R32d</span>(<span class="pl-v">u, d</span>)   SPH_T32(((u) &gt;&gt; <span class="pl-c1">16</span>) | ((d) &lt;&lt; <span class="pl-c1">16</span>))</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC32up</span>(<span class="pl-v">j, r</span>)   ((sph_u32)((j) + (r)))</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC32dn</span>(<span class="pl-v">j, r</span>)   <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC32up</span>(<span class="pl-v">j, r</span>)   SPH_C32(0xFFFFFFFF)</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC32dn</span>(<span class="pl-v">j, r</span>)   (((sph_u32)(r) &lt;&lt; <span class="pl-c1">24</span>) ^ SPH_T32(~((sph_u32)(j) &lt;&lt; <span class="pl-c1">24</span>)))</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">C64e</span>(<span class="pl-v">x</span>)     ((SPH_C64(x) &gt;&gt; <span class="pl-c1">56</span>) \</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &gt;&gt; <span class="pl-c1">40</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x000000000000FF00)) \</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &gt;&gt; <span class="pl-c1">24</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x0000000000FF0000)) \</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &gt;&gt;  <span class="pl-c1">8</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x00000000FF000000)) \</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &lt;&lt;  <span class="pl-c1">8</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x000000FF00000000)) \</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &lt;&lt; <span class="pl-c1">24</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x0000FF0000000000)) \</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &lt;&lt; <span class="pl-c1">40</span>) &amp; <span class="pl-c1">SPH_C64</span>(0x00FF000000000000)) \</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">                    | ((<span class="pl-c1">SPH_C64</span>(x) &lt;&lt; <span class="pl-c1">56</span>) &amp; <span class="pl-c1">SPH_C64</span>(0xFF00000000000000)))</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">dec64e_aligned</span>   sph_dec64le_aligned</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">enc64e</span>           sph_enc64le</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_0</span>(<span class="pl-v">x</span>)    ((x) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_1</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">8</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_2</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">16</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_3</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">24</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_4</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">32</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_5</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">40</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_6</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">48</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_7</span>(<span class="pl-v">x</span>)    ((x) &gt;&gt; <span class="pl-c1">56</span>)</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R64</span>         SPH_ROTL64</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC64</span>(<span class="pl-v">j, r</span>)  ((sph_u64)((j) + (r)))</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC64</span>(<span class="pl-v">j, r</span>)  (((sph_u64)(r) &lt;&lt; <span class="pl-c1">56</span>) ^ SPH_T64(~((sph_u64)(j) &lt;&lt; <span class="pl-c1">56</span>)))</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">C32e</span>(<span class="pl-v">x</span>)     SPH_C32(x)</td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">dec32e_aligned</span>   sph_dec32be_aligned</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">enc32e</span>           sph_enc32be</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_0</span>(<span class="pl-v">x</span>)    ((x) &gt;&gt; <span class="pl-c1">24</span>)</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_1</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">16</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_2</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">8</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B32_3</span>(<span class="pl-v">x</span>)    ((x) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R32u</span>(<span class="pl-v">u, d</span>)   SPH_T32(((u) &gt;&gt; <span class="pl-c1">16</span>) | ((d) &lt;&lt; <span class="pl-c1">16</span>))</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R32d</span>(<span class="pl-v">u, d</span>)   SPH_T32(((u) &lt;&lt; <span class="pl-c1">16</span>) | ((d) &gt;&gt; <span class="pl-c1">16</span>))</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC32up</span>(<span class="pl-v">j, r</span>)   ((sph_u32)((j) + (r)) &lt;&lt; <span class="pl-c1">24</span>)</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC32dn</span>(<span class="pl-v">j, r</span>)   <span class="pl-c1">0</span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC32up</span>(<span class="pl-v">j, r</span>)   SPH_C32(0xFFFFFFFF)</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC32dn</span>(<span class="pl-v">j, r</span>)   ((sph_u32)(r) ^ SPH_T32(~(sph_u32)(j)))</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">C64e</span>(<span class="pl-v">x</span>)     SPH_C64(x)</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">dec64e_aligned</span>   sph_dec64be_aligned</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">enc64e</span>           sph_enc64be</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_0</span>(<span class="pl-v">x</span>)    ((x) &gt;&gt; <span class="pl-c1">56</span>)</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_1</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">48</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_2</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">40</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_3</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">32</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_4</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">24</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_5</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">16</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_6</span>(<span class="pl-v">x</span>)    (((x) &gt;&gt; <span class="pl-c1">8</span>) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">B64_7</span>(<span class="pl-v">x</span>)    ((x) &amp; 0xFF)</td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">R64</span>         SPH_ROTR64</td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PC64</span>(<span class="pl-v">j, r</span>)  ((sph_u64)((j) + (r)) &lt;&lt; <span class="pl-c1">56</span>)</td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">QC64</span>(<span class="pl-v">j, r</span>)  ((sph_u64)(r) ^ SPH_T64(~(sph_u64)(j)))</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T0[] = {</td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc632f4a5f497a5c6), <span class="pl-c1">C64e</span>(0xf86f978497eb84f8),</td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xee5eb099b0c799ee), <span class="pl-c1">C64e</span>(0xf67a8c8d8cf78df6),</td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xffe8170d17e50dff), <span class="pl-c1">C64e</span>(0xd60adcbddcb7bdd6),</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xde16c8b1c8a7b1de), <span class="pl-c1">C64e</span>(0x916dfc54fc395491),</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6090f050f0c05060), <span class="pl-c1">C64e</span>(0x0207050305040302),</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xce2ee0a9e087a9ce), <span class="pl-c1">C64e</span>(0x56d1877d87ac7d56),</td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe7cc2b192bd519e7), <span class="pl-c1">C64e</span>(0xb513a662a67162b5),</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4d7c31e6319ae64d), <span class="pl-c1">C64e</span>(0xec59b59ab5c39aec),</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f40cf45cf05458f), <span class="pl-c1">C64e</span>(0x1fa3bc9dbc3e9d1f),</td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8949c040c0094089), <span class="pl-c1">C64e</span>(0xfa68928792ef87fa),</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xefd03f153fc515ef), <span class="pl-c1">C64e</span>(0xb29426eb267febb2),</td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8ece40c94007c98e), <span class="pl-c1">C64e</span>(0xfbe61d0b1ded0bfb),</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x416e2fec2f82ec41), <span class="pl-c1">C64e</span>(0xb31aa967a97d67b3),</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5f431cfd1cbefd5f), <span class="pl-c1">C64e</span>(0x456025ea258aea45),</td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x23f9dabfda46bf23), <span class="pl-c1">C64e</span>(0x535102f702a6f753),</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe445a196a1d396e4), <span class="pl-c1">C64e</span>(0x9b76ed5bed2d5b9b),</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x75285dc25deac275), <span class="pl-c1">C64e</span>(0xe1c5241c24d91ce1),</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3dd4e9aee97aae3d), <span class="pl-c1">C64e</span>(0x4cf2be6abe986a4c),</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c82ee5aeed85a6c), <span class="pl-c1">C64e</span>(0x7ebdc341c3fc417e),</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf5f3060206f102f5), <span class="pl-c1">C64e</span>(0x8352d14fd11d4f83),</td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x688ce45ce4d05c68), <span class="pl-c1">C64e</span>(0x515607f407a2f451),</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd18d5c345cb934d1), <span class="pl-c1">C64e</span>(0xf9e1180818e908f9),</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe24cae93aedf93e2), <span class="pl-c1">C64e</span>(0xab3e9573954d73ab),</td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6297f553f5c45362), <span class="pl-c1">C64e</span>(0x2a6b413f41543f2a),</td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x081c140c14100c08), <span class="pl-c1">C64e</span>(0x9563f652f6315295),</td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x46e9af65af8c6546), <span class="pl-c1">C64e</span>(0x9d7fe25ee2215e9d),</td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3048782878602830), <span class="pl-c1">C64e</span>(0x37cff8a1f86ea137),</td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0a1b110f11140f0a), <span class="pl-c1">C64e</span>(0x2febc4b5c45eb52f),</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e151b091b1c090e), <span class="pl-c1">C64e</span>(0x247e5a365a483624),</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1badb69bb6369b1b), <span class="pl-c1">C64e</span>(0xdf98473d47a53ddf),</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcda76a266a8126cd), <span class="pl-c1">C64e</span>(0x4ef5bb69bb9c694e),</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7f334ccd4cfecd7f), <span class="pl-c1">C64e</span>(0xea50ba9fbacf9fea),</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x123f2d1b2d241b12), <span class="pl-c1">C64e</span>(0x1da4b99eb93a9e1d),</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x58c49c749cb07458), <span class="pl-c1">C64e</span>(0x3446722e72682e34),</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3641772d776c2d36), <span class="pl-c1">C64e</span>(0xdc11cdb2cda3b2dc),</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb49d29ee2973eeb4), <span class="pl-c1">C64e</span>(0x5b4d16fb16b6fb5b),</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa4a501f60153f6a4), <span class="pl-c1">C64e</span>(0x76a1d74dd7ec4d76),</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb714a361a37561b7), <span class="pl-c1">C64e</span>(0x7d3449ce49face7d),</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x52df8d7b8da47b52), <span class="pl-c1">C64e</span>(0xdd9f423e42a13edd),</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ecd937193bc715e), <span class="pl-c1">C64e</span>(0x13b1a297a2269713),</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa6a204f50457f5a6), <span class="pl-c1">C64e</span>(0xb901b868b86968b9),</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0xc1b5742c74992cc1),</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x40e0a060a0806040), <span class="pl-c1">C64e</span>(0xe3c2211f21dd1fe3),</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x793a43c843f2c879), <span class="pl-c1">C64e</span>(0xb69a2ced2c77edb6),</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd40dd9bed9b3bed4), <span class="pl-c1">C64e</span>(0x8d47ca46ca01468d),</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x671770d970ced967), <span class="pl-c1">C64e</span>(0x72afdd4bdde44b72),</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x94ed79de7933de94), <span class="pl-c1">C64e</span>(0x98ff67d4672bd498),</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb09323e8237be8b0), <span class="pl-c1">C64e</span>(0x855bde4ade114a85),</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbb06bd6bbd6d6bbb), <span class="pl-c1">C64e</span>(0xc5bb7e2a7e912ac5),</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4f7b34e5349ee54f), <span class="pl-c1">C64e</span>(0xedd73a163ac116ed),</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x86d254c55417c586), <span class="pl-c1">C64e</span>(0x9af862d7622fd79a),</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6699ff55ffcc5566), <span class="pl-c1">C64e</span>(0x11b6a794a7229411),</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8ac04acf4a0fcf8a), <span class="pl-c1">C64e</span>(0xe9d9301030c910e9),</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x040e0a060a080604), <span class="pl-c1">C64e</span>(0xfe66988198e781fe),</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa0ab0bf00b5bf0a0), <span class="pl-c1">C64e</span>(0x78b4cc44ccf04478),</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x25f0d5bad54aba25), <span class="pl-c1">C64e</span>(0x4b753ee33e96e34b),</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa2ac0ef30e5ff3a2), <span class="pl-c1">C64e</span>(0x5d4419fe19bafe5d),</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x80db5bc05b1bc080), <span class="pl-c1">C64e</span>(0x0580858a850a8a05),</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3fd3ecadec7ead3f), <span class="pl-c1">C64e</span>(0x21fedfbcdf42bc21),</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x70a8d848d8e04870), <span class="pl-c1">C64e</span>(0xf1fd0c040cf904f1),</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x63197adf7ac6df63), <span class="pl-c1">C64e</span>(0x772f58c158eec177),</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaf309f759f4575af), <span class="pl-c1">C64e</span>(0x42e7a563a5846342),</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2070503050403020), <span class="pl-c1">C64e</span>(0xe5cb2e1a2ed11ae5),</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfdef120e12e10efd), <span class="pl-c1">C64e</span>(0xbf08b76db7656dbf),</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8155d44cd4194c81), <span class="pl-c1">C64e</span>(0x18243c143c301418),</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x26795f355f4c3526), <span class="pl-c1">C64e</span>(0xc3b2712f719d2fc3),</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbe8638e13867e1be), <span class="pl-c1">C64e</span>(0x35c8fda2fd6aa235),</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x88c74fcc4f0bcc88), <span class="pl-c1">C64e</span>(0x2e654b394b5c392e),</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x936af957f93d5793), <span class="pl-c1">C64e</span>(0x55580df20daaf255),</td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfc619d829de382fc), <span class="pl-c1">C64e</span>(0x7ab3c947c9f4477a),</td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc827efacef8bacc8), <span class="pl-c1">C64e</span>(0xba8832e7326fe7ba),</td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x324f7d2b7d642b32), <span class="pl-c1">C64e</span>(0xe642a495a4d795e6),</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc03bfba0fb9ba0c0), <span class="pl-c1">C64e</span>(0x19aab398b3329819),</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9ef668d16827d19e), <span class="pl-c1">C64e</span>(0xa322817f815d7fa3),</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x44eeaa66aa886644), <span class="pl-c1">C64e</span>(0x54d6827e82a87e54),</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3bdde6abe676ab3b), <span class="pl-c1">C64e</span>(0x0b959e839e16830b),</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8cc945ca4503ca8c), <span class="pl-c1">C64e</span>(0xc7bc7b297b9529c7),</td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6b056ed36ed6d36b), <span class="pl-c1">C64e</span>(0x286c443c44503c28),</td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa72c8b798b5579a7), <span class="pl-c1">C64e</span>(0xbc813de23d63e2bc),</td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1631271d272c1d16), <span class="pl-c1">C64e</span>(0xad379a769a4176ad),</td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb964d3b4dad3bdb), <span class="pl-c1">C64e</span>(0x649efa56fac85664),</td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x74a6d24ed2e84e74), <span class="pl-c1">C64e</span>(0x1436221e22281e14),</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x92e476db763fdb92), <span class="pl-c1">C64e</span>(0x0c121e0a1e180a0c),</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x48fcb46cb4906c48), <span class="pl-c1">C64e</span>(0xb88f37e4376be4b8),</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9f78e75de7255d9f), <span class="pl-c1">C64e</span>(0xbd0fb26eb2616ebd),</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x43692aef2a86ef43), <span class="pl-c1">C64e</span>(0xc435f1a6f193a6c4),</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x39dae3a8e372a839), <span class="pl-c1">C64e</span>(0x31c6f7a4f762a431),</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd38a593759bd37d3), <span class="pl-c1">C64e</span>(0xf274868b86ff8bf2),</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd583563256b132d5), <span class="pl-c1">C64e</span>(0x8b4ec543c50d438b),</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6e85eb59ebdc596e), <span class="pl-c1">C64e</span>(0xda18c2b7c2afb7da),</td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x018e8f8c8f028c01), <span class="pl-c1">C64e</span>(0xb11dac64ac7964b1),</td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9cf16dd26d23d29c), <span class="pl-c1">C64e</span>(0x49723be03b92e049),</td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd81fc7b4c7abb4d8), <span class="pl-c1">C64e</span>(0xacb915fa1543faac),</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf3fa090709fd07f3), <span class="pl-c1">C64e</span>(0xcfa06f256f8525cf),</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xca20eaafea8fafca), <span class="pl-c1">C64e</span>(0xf47d898e89f38ef4),</td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x476720e9208ee947), <span class="pl-c1">C64e</span>(0x1038281828201810),</td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6f0b64d564ded56f), <span class="pl-c1">C64e</span>(0xf073838883fb88f0),</td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4afbb16fb1946f4a), <span class="pl-c1">C64e</span>(0x5cca967296b8725c),</td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x38546c246c702438), <span class="pl-c1">C64e</span>(0x575f08f108aef157),</td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x732152c752e6c773), <span class="pl-c1">C64e</span>(0x9764f351f3355197),</td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcbae6523658d23cb), <span class="pl-c1">C64e</span>(0xa125847c84597ca1),</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe857bf9cbfcb9ce8), <span class="pl-c1">C64e</span>(0x3e5d6321637c213e),</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x96ea7cdd7c37dd96), <span class="pl-c1">C64e</span>(0x611e7fdc7fc2dc61),</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0d9c9186911a860d), <span class="pl-c1">C64e</span>(0x0f9b9485941e850f),</td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe04bab90abdb90e0), <span class="pl-c1">C64e</span>(0x7cbac642c6f8427c),</td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x712657c457e2c471), <span class="pl-c1">C64e</span>(0xcc29e5aae583aacc),</td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x90e373d8733bd890), <span class="pl-c1">C64e</span>(0x06090f050f0c0506),</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf7f4030103f501f7), <span class="pl-c1">C64e</span>(0x1c2a36123638121c),</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc23cfea3fe9fa3c2), <span class="pl-c1">C64e</span>(0x6a8be15fe1d45f6a),</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaebe10f91047f9ae), <span class="pl-c1">C64e</span>(0x69026bd06bd2d069),</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x17bfa891a82e9117), <span class="pl-c1">C64e</span>(0x9971e858e8295899),</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3a5369276974273a), <span class="pl-c1">C64e</span>(0x27f7d0b9d04eb927),</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd991483848a938d9), <span class="pl-c1">C64e</span>(0xebde351335cd13eb),</td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2be5ceb3ce56b32b), <span class="pl-c1">C64e</span>(0x2277553355443322),</td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd204d6bbd6bfbbd2), <span class="pl-c1">C64e</span>(0xa9399070904970a9),</td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x07878089800e8907), <span class="pl-c1">C64e</span>(0x33c1f2a7f266a733),</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2decc1b6c15ab62d), <span class="pl-c1">C64e</span>(0x3c5a66226678223c),</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x15b8ad92ad2a9215), <span class="pl-c1">C64e</span>(0xc9a96020608920c9),</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x875cdb49db154987), <span class="pl-c1">C64e</span>(0xaab01aff1a4fffaa),</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x50d8887888a07850), <span class="pl-c1">C64e</span>(0xa52b8e7a8e517aa5),</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x03898a8f8a068f03), <span class="pl-c1">C64e</span>(0x594a13f813b2f859),</td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x09929b809b128009), <span class="pl-c1">C64e</span>(0x1a2339173934171a),</td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x651075da75cada65), <span class="pl-c1">C64e</span>(0xd784533153b531d7),</td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x84d551c65113c684), <span class="pl-c1">C64e</span>(0xd003d3b8d3bbb8d0),</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x82dc5ec35e1fc382), <span class="pl-c1">C64e</span>(0x29e2cbb0cb52b029),</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ac3997799b4775a), <span class="pl-c1">C64e</span>(0x1e2d3311333c111e),</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7b3d46cb46f6cb7b), <span class="pl-c1">C64e</span>(0xa8b71ffc1f4bfca8),</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6d0c61d661dad66d), <span class="pl-c1">C64e</span>(0x2c624e3a4e583a2c)</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T1[] = {</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc6c632f4a5f497a5), <span class="pl-c1">C64e</span>(0xf8f86f978497eb84),</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeeee5eb099b0c799), <span class="pl-c1">C64e</span>(0xf6f67a8c8d8cf78d),</td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xffffe8170d17e50d), <span class="pl-c1">C64e</span>(0xd6d60adcbddcb7bd),</td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdede16c8b1c8a7b1), <span class="pl-c1">C64e</span>(0x91916dfc54fc3954),</td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x606090f050f0c050), <span class="pl-c1">C64e</span>(0x0202070503050403),</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcece2ee0a9e087a9), <span class="pl-c1">C64e</span>(0x5656d1877d87ac7d),</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe7e7cc2b192bd519), <span class="pl-c1">C64e</span>(0xb5b513a662a67162),</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4d4d7c31e6319ae6), <span class="pl-c1">C64e</span>(0xecec59b59ab5c39a),</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f8f40cf45cf0545), <span class="pl-c1">C64e</span>(0x1f1fa3bc9dbc3e9d),</td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x898949c040c00940), <span class="pl-c1">C64e</span>(0xfafa68928792ef87),</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xefefd03f153fc515), <span class="pl-c1">C64e</span>(0xb2b29426eb267feb),</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8e8ece40c94007c9), <span class="pl-c1">C64e</span>(0xfbfbe61d0b1ded0b),</td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x41416e2fec2f82ec), <span class="pl-c1">C64e</span>(0xb3b31aa967a97d67),</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5f5f431cfd1cbefd), <span class="pl-c1">C64e</span>(0x45456025ea258aea),</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2323f9dabfda46bf), <span class="pl-c1">C64e</span>(0x53535102f702a6f7),</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe4e445a196a1d396), <span class="pl-c1">C64e</span>(0x9b9b76ed5bed2d5b),</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7575285dc25deac2), <span class="pl-c1">C64e</span>(0xe1e1c5241c24d91c),</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3d3dd4e9aee97aae), <span class="pl-c1">C64e</span>(0x4c4cf2be6abe986a),</td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c6c82ee5aeed85a), <span class="pl-c1">C64e</span>(0x7e7ebdc341c3fc41),</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf5f5f3060206f102), <span class="pl-c1">C64e</span>(0x838352d14fd11d4f),</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x68688ce45ce4d05c), <span class="pl-c1">C64e</span>(0x51515607f407a2f4),</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd1d18d5c345cb934), <span class="pl-c1">C64e</span>(0xf9f9e1180818e908),</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe2e24cae93aedf93), <span class="pl-c1">C64e</span>(0xabab3e9573954d73),</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x626297f553f5c453), <span class="pl-c1">C64e</span>(0x2a2a6b413f41543f),</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x08081c140c14100c), <span class="pl-c1">C64e</span>(0x959563f652f63152),</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4646e9af65af8c65), <span class="pl-c1">C64e</span>(0x9d9d7fe25ee2215e),</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3030487828786028), <span class="pl-c1">C64e</span>(0x3737cff8a1f86ea1),</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0a0a1b110f11140f), <span class="pl-c1">C64e</span>(0x2f2febc4b5c45eb5),</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e0e151b091b1c09), <span class="pl-c1">C64e</span>(0x24247e5a365a4836),</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b1badb69bb6369b), <span class="pl-c1">C64e</span>(0xdfdf98473d47a53d),</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcdcda76a266a8126), <span class="pl-c1">C64e</span>(0x4e4ef5bb69bb9c69),</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7f7f334ccd4cfecd), <span class="pl-c1">C64e</span>(0xeaea50ba9fbacf9f),</td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x12123f2d1b2d241b), <span class="pl-c1">C64e</span>(0x1d1da4b99eb93a9e),</td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5858c49c749cb074), <span class="pl-c1">C64e</span>(0x343446722e72682e),</td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x363641772d776c2d), <span class="pl-c1">C64e</span>(0xdcdc11cdb2cda3b2),</td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb4b49d29ee2973ee), <span class="pl-c1">C64e</span>(0x5b5b4d16fb16b6fb),</td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa4a4a501f60153f6), <span class="pl-c1">C64e</span>(0x7676a1d74dd7ec4d),</td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb7b714a361a37561), <span class="pl-c1">C64e</span>(0x7d7d3449ce49face),</td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5252df8d7b8da47b), <span class="pl-c1">C64e</span>(0xdddd9f423e42a13e),</td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5e5ecd937193bc71), <span class="pl-c1">C64e</span>(0x1313b1a297a22697),</td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa6a6a204f50457f5), <span class="pl-c1">C64e</span>(0xb9b901b868b86968),</td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0xc1c1b5742c74992c),</td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4040e0a060a08060), <span class="pl-c1">C64e</span>(0xe3e3c2211f21dd1f),</td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x79793a43c843f2c8), <span class="pl-c1">C64e</span>(0xb6b69a2ced2c77ed),</td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd4d40dd9bed9b3be), <span class="pl-c1">C64e</span>(0x8d8d47ca46ca0146),</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x67671770d970ced9), <span class="pl-c1">C64e</span>(0x7272afdd4bdde44b),</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9494ed79de7933de), <span class="pl-c1">C64e</span>(0x9898ff67d4672bd4),</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb0b09323e8237be8), <span class="pl-c1">C64e</span>(0x85855bde4ade114a),</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbbbb06bd6bbd6d6b), <span class="pl-c1">C64e</span>(0xc5c5bb7e2a7e912a),</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4f4f7b34e5349ee5), <span class="pl-c1">C64e</span>(0xededd73a163ac116),</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8686d254c55417c5), <span class="pl-c1">C64e</span>(0x9a9af862d7622fd7),</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x666699ff55ffcc55), <span class="pl-c1">C64e</span>(0x1111b6a794a72294),</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8a8ac04acf4a0fcf), <span class="pl-c1">C64e</span>(0xe9e9d9301030c910),</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x04040e0a060a0806), <span class="pl-c1">C64e</span>(0xfefe66988198e781),</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa0a0ab0bf00b5bf0), <span class="pl-c1">C64e</span>(0x7878b4cc44ccf044),</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2525f0d5bad54aba), <span class="pl-c1">C64e</span>(0x4b4b753ee33e96e3),</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa2a2ac0ef30e5ff3), <span class="pl-c1">C64e</span>(0x5d5d4419fe19bafe),</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8080db5bc05b1bc0), <span class="pl-c1">C64e</span>(0x050580858a850a8a),</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3f3fd3ecadec7ead), <span class="pl-c1">C64e</span>(0x2121fedfbcdf42bc),</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7070a8d848d8e048), <span class="pl-c1">C64e</span>(0xf1f1fd0c040cf904),</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6363197adf7ac6df), <span class="pl-c1">C64e</span>(0x77772f58c158eec1),</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xafaf309f759f4575), <span class="pl-c1">C64e</span>(0x4242e7a563a58463),</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2020705030504030), <span class="pl-c1">C64e</span>(0xe5e5cb2e1a2ed11a),</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfdfdef120e12e10e), <span class="pl-c1">C64e</span>(0xbfbf08b76db7656d),</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x818155d44cd4194c), <span class="pl-c1">C64e</span>(0x1818243c143c3014),</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2626795f355f4c35), <span class="pl-c1">C64e</span>(0xc3c3b2712f719d2f),</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbebe8638e13867e1), <span class="pl-c1">C64e</span>(0x3535c8fda2fd6aa2),</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8888c74fcc4f0bcc), <span class="pl-c1">C64e</span>(0x2e2e654b394b5c39),</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x93936af957f93d57), <span class="pl-c1">C64e</span>(0x5555580df20daaf2),</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfcfc619d829de382), <span class="pl-c1">C64e</span>(0x7a7ab3c947c9f447),</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc8c827efacef8bac), <span class="pl-c1">C64e</span>(0xbaba8832e7326fe7),</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x32324f7d2b7d642b), <span class="pl-c1">C64e</span>(0xe6e642a495a4d795),</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc0c03bfba0fb9ba0), <span class="pl-c1">C64e</span>(0x1919aab398b33298),</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9e9ef668d16827d1), <span class="pl-c1">C64e</span>(0xa3a322817f815d7f),</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4444eeaa66aa8866), <span class="pl-c1">C64e</span>(0x5454d6827e82a87e),</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3b3bdde6abe676ab), <span class="pl-c1">C64e</span>(0x0b0b959e839e1683),</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8c8cc945ca4503ca), <span class="pl-c1">C64e</span>(0xc7c7bc7b297b9529),</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6b6b056ed36ed6d3), <span class="pl-c1">C64e</span>(0x28286c443c44503c),</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa7a72c8b798b5579), <span class="pl-c1">C64e</span>(0xbcbc813de23d63e2),</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x161631271d272c1d), <span class="pl-c1">C64e</span>(0xadad379a769a4176),</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdbdb964d3b4dad3b), <span class="pl-c1">C64e</span>(0x64649efa56fac856),</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7474a6d24ed2e84e), <span class="pl-c1">C64e</span>(0x141436221e22281e),</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9292e476db763fdb), <span class="pl-c1">C64e</span>(0x0c0c121e0a1e180a),</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4848fcb46cb4906c), <span class="pl-c1">C64e</span>(0xb8b88f37e4376be4),</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9f9f78e75de7255d), <span class="pl-c1">C64e</span>(0xbdbd0fb26eb2616e),</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4343692aef2a86ef), <span class="pl-c1">C64e</span>(0xc4c435f1a6f193a6),</td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3939dae3a8e372a8), <span class="pl-c1">C64e</span>(0x3131c6f7a4f762a4),</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd3d38a593759bd37), <span class="pl-c1">C64e</span>(0xf2f274868b86ff8b),</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd5d583563256b132), <span class="pl-c1">C64e</span>(0x8b8b4ec543c50d43),</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6e6e85eb59ebdc59), <span class="pl-c1">C64e</span>(0xdada18c2b7c2afb7),</td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x01018e8f8c8f028c), <span class="pl-c1">C64e</span>(0xb1b11dac64ac7964),</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9c9cf16dd26d23d2), <span class="pl-c1">C64e</span>(0x4949723be03b92e0),</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd8d81fc7b4c7abb4), <span class="pl-c1">C64e</span>(0xacacb915fa1543fa),</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf3f3fa090709fd07), <span class="pl-c1">C64e</span>(0xcfcfa06f256f8525),</td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcaca20eaafea8faf), <span class="pl-c1">C64e</span>(0xf4f47d898e89f38e),</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x47476720e9208ee9), <span class="pl-c1">C64e</span>(0x1010382818282018),</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6f6f0b64d564ded5), <span class="pl-c1">C64e</span>(0xf0f073838883fb88),</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4a4afbb16fb1946f), <span class="pl-c1">C64e</span>(0x5c5cca967296b872),</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3838546c246c7024), <span class="pl-c1">C64e</span>(0x57575f08f108aef1),</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x73732152c752e6c7), <span class="pl-c1">C64e</span>(0x979764f351f33551),</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcbcbae6523658d23), <span class="pl-c1">C64e</span>(0xa1a125847c84597c),</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe8e857bf9cbfcb9c), <span class="pl-c1">C64e</span>(0x3e3e5d6321637c21),</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9696ea7cdd7c37dd), <span class="pl-c1">C64e</span>(0x61611e7fdc7fc2dc),</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0d0d9c9186911a86), <span class="pl-c1">C64e</span>(0x0f0f9b9485941e85),</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe0e04bab90abdb90), <span class="pl-c1">C64e</span>(0x7c7cbac642c6f842),</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x71712657c457e2c4), <span class="pl-c1">C64e</span>(0xcccc29e5aae583aa),</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9090e373d8733bd8), <span class="pl-c1">C64e</span>(0x0606090f050f0c05),</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf7f7f4030103f501), <span class="pl-c1">C64e</span>(0x1c1c2a3612363812),</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc2c23cfea3fe9fa3), <span class="pl-c1">C64e</span>(0x6a6a8be15fe1d45f),</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaeaebe10f91047f9), <span class="pl-c1">C64e</span>(0x6969026bd06bd2d0),</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1717bfa891a82e91), <span class="pl-c1">C64e</span>(0x999971e858e82958),</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3a3a536927697427), <span class="pl-c1">C64e</span>(0x2727f7d0b9d04eb9),</td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd9d991483848a938), <span class="pl-c1">C64e</span>(0xebebde351335cd13),</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2b2be5ceb3ce56b3), <span class="pl-c1">C64e</span>(0x2222775533554433),</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd2d204d6bbd6bfbb), <span class="pl-c1">C64e</span>(0xa9a9399070904970),</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0707878089800e89), <span class="pl-c1">C64e</span>(0x3333c1f2a7f266a7),</td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2d2decc1b6c15ab6), <span class="pl-c1">C64e</span>(0x3c3c5a6622667822),</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1515b8ad92ad2a92), <span class="pl-c1">C64e</span>(0xc9c9a96020608920),</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x87875cdb49db1549), <span class="pl-c1">C64e</span>(0xaaaab01aff1a4fff),</td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5050d8887888a078), <span class="pl-c1">C64e</span>(0xa5a52b8e7a8e517a),</td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0303898a8f8a068f), <span class="pl-c1">C64e</span>(0x59594a13f813b2f8),</td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0909929b809b1280), <span class="pl-c1">C64e</span>(0x1a1a233917393417),</td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x65651075da75cada), <span class="pl-c1">C64e</span>(0xd7d784533153b531),</td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8484d551c65113c6), <span class="pl-c1">C64e</span>(0xd0d003d3b8d3bbb8),</td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8282dc5ec35e1fc3), <span class="pl-c1">C64e</span>(0x2929e2cbb0cb52b0),</td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5a5ac3997799b477), <span class="pl-c1">C64e</span>(0x1e1e2d3311333c11),</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7b7b3d46cb46f6cb), <span class="pl-c1">C64e</span>(0xa8a8b71ffc1f4bfc),</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6d6d0c61d661dad6), <span class="pl-c1">C64e</span>(0x2c2c624e3a4e583a)</td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T2[] = {</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa5c6c632f4a5f497), <span class="pl-c1">C64e</span>(0x84f8f86f978497eb),</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x99eeee5eb099b0c7), <span class="pl-c1">C64e</span>(0x8df6f67a8c8d8cf7),</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0dffffe8170d17e5), <span class="pl-c1">C64e</span>(0xbdd6d60adcbddcb7),</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb1dede16c8b1c8a7), <span class="pl-c1">C64e</span>(0x5491916dfc54fc39),</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x50606090f050f0c0), <span class="pl-c1">C64e</span>(0x0302020705030504),</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa9cece2ee0a9e087), <span class="pl-c1">C64e</span>(0x7d5656d1877d87ac),</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x19e7e7cc2b192bd5), <span class="pl-c1">C64e</span>(0x62b5b513a662a671),</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe64d4d7c31e6319a), <span class="pl-c1">C64e</span>(0x9aecec59b59ab5c3),</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x458f8f40cf45cf05), <span class="pl-c1">C64e</span>(0x9d1f1fa3bc9dbc3e),</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x40898949c040c009), <span class="pl-c1">C64e</span>(0x87fafa68928792ef),</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x15efefd03f153fc5), <span class="pl-c1">C64e</span>(0xebb2b29426eb267f),</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc98e8ece40c94007), <span class="pl-c1">C64e</span>(0x0bfbfbe61d0b1ded),</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xec41416e2fec2f82), <span class="pl-c1">C64e</span>(0x67b3b31aa967a97d),</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfd5f5f431cfd1cbe), <span class="pl-c1">C64e</span>(0xea45456025ea258a),</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbf2323f9dabfda46), <span class="pl-c1">C64e</span>(0xf753535102f702a6),</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x96e4e445a196a1d3), <span class="pl-c1">C64e</span>(0x5b9b9b76ed5bed2d),</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc27575285dc25dea), <span class="pl-c1">C64e</span>(0x1ce1e1c5241c24d9),</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xae3d3dd4e9aee97a), <span class="pl-c1">C64e</span>(0x6a4c4cf2be6abe98),</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5a6c6c82ee5aeed8), <span class="pl-c1">C64e</span>(0x417e7ebdc341c3fc),</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x02f5f5f3060206f1), <span class="pl-c1">C64e</span>(0x4f838352d14fd11d),</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5c68688ce45ce4d0), <span class="pl-c1">C64e</span>(0xf451515607f407a2),</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x34d1d18d5c345cb9), <span class="pl-c1">C64e</span>(0x08f9f9e1180818e9),</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x93e2e24cae93aedf), <span class="pl-c1">C64e</span>(0x73abab3e9573954d),</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x53626297f553f5c4), <span class="pl-c1">C64e</span>(0x3f2a2a6b413f4154),</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0c08081c140c1410), <span class="pl-c1">C64e</span>(0x52959563f652f631),</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x654646e9af65af8c), <span class="pl-c1">C64e</span>(0x5e9d9d7fe25ee221),</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2830304878287860), <span class="pl-c1">C64e</span>(0xa13737cff8a1f86e),</td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0f0a0a1b110f1114), <span class="pl-c1">C64e</span>(0xb52f2febc4b5c45e),</td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x090e0e151b091b1c), <span class="pl-c1">C64e</span>(0x3624247e5a365a48),</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9b1b1badb69bb636), <span class="pl-c1">C64e</span>(0x3ddfdf98473d47a5),</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x26cdcda76a266a81), <span class="pl-c1">C64e</span>(0x694e4ef5bb69bb9c),</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcd7f7f334ccd4cfe), <span class="pl-c1">C64e</span>(0x9feaea50ba9fbacf),</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b12123f2d1b2d24), <span class="pl-c1">C64e</span>(0x9e1d1da4b99eb93a),</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x745858c49c749cb0), <span class="pl-c1">C64e</span>(0x2e343446722e7268),</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2d363641772d776c), <span class="pl-c1">C64e</span>(0xb2dcdc11cdb2cda3),</td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeeb4b49d29ee2973), <span class="pl-c1">C64e</span>(0xfb5b5b4d16fb16b6),</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf6a4a4a501f60153), <span class="pl-c1">C64e</span>(0x4d7676a1d74dd7ec),</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x61b7b714a361a375), <span class="pl-c1">C64e</span>(0xce7d7d3449ce49fa),</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7b5252df8d7b8da4), <span class="pl-c1">C64e</span>(0x3edddd9f423e42a1),</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x715e5ecd937193bc), <span class="pl-c1">C64e</span>(0x971313b1a297a226),</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf5a6a6a204f50457), <span class="pl-c1">C64e</span>(0x68b9b901b868b869),</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0x2cc1c1b5742c7499),</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x604040e0a060a080), <span class="pl-c1">C64e</span>(0x1fe3e3c2211f21dd),</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc879793a43c843f2), <span class="pl-c1">C64e</span>(0xedb6b69a2ced2c77),</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbed4d40dd9bed9b3), <span class="pl-c1">C64e</span>(0x468d8d47ca46ca01),</td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd967671770d970ce), <span class="pl-c1">C64e</span>(0x4b7272afdd4bdde4),</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xde9494ed79de7933), <span class="pl-c1">C64e</span>(0xd49898ff67d4672b),</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe8b0b09323e8237b), <span class="pl-c1">C64e</span>(0x4a85855bde4ade11),</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6bbbbb06bd6bbd6d), <span class="pl-c1">C64e</span>(0x2ac5c5bb7e2a7e91),</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe54f4f7b34e5349e), <span class="pl-c1">C64e</span>(0x16ededd73a163ac1),</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc58686d254c55417), <span class="pl-c1">C64e</span>(0xd79a9af862d7622f),</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x55666699ff55ffcc), <span class="pl-c1">C64e</span>(0x941111b6a794a722),</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcf8a8ac04acf4a0f), <span class="pl-c1">C64e</span>(0x10e9e9d9301030c9),</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0604040e0a060a08), <span class="pl-c1">C64e</span>(0x81fefe66988198e7),</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf0a0a0ab0bf00b5b), <span class="pl-c1">C64e</span>(0x447878b4cc44ccf0),</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xba2525f0d5bad54a), <span class="pl-c1">C64e</span>(0xe34b4b753ee33e96),</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf3a2a2ac0ef30e5f), <span class="pl-c1">C64e</span>(0xfe5d5d4419fe19ba),</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc08080db5bc05b1b), <span class="pl-c1">C64e</span>(0x8a050580858a850a),</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xad3f3fd3ecadec7e), <span class="pl-c1">C64e</span>(0xbc2121fedfbcdf42),</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x487070a8d848d8e0), <span class="pl-c1">C64e</span>(0x04f1f1fd0c040cf9),</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdf6363197adf7ac6), <span class="pl-c1">C64e</span>(0xc177772f58c158ee),</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x75afaf309f759f45), <span class="pl-c1">C64e</span>(0x634242e7a563a584),</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3020207050305040), <span class="pl-c1">C64e</span>(0x1ae5e5cb2e1a2ed1),</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0efdfdef120e12e1), <span class="pl-c1">C64e</span>(0x6dbfbf08b76db765),</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4c818155d44cd419), <span class="pl-c1">C64e</span>(0x141818243c143c30),</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x352626795f355f4c), <span class="pl-c1">C64e</span>(0x2fc3c3b2712f719d),</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe1bebe8638e13867), <span class="pl-c1">C64e</span>(0xa23535c8fda2fd6a),</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcc8888c74fcc4f0b), <span class="pl-c1">C64e</span>(0x392e2e654b394b5c),</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5793936af957f93d), <span class="pl-c1">C64e</span>(0xf25555580df20daa),</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x82fcfc619d829de3), <span class="pl-c1">C64e</span>(0x477a7ab3c947c9f4),</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xacc8c827efacef8b), <span class="pl-c1">C64e</span>(0xe7baba8832e7326f),</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2b32324f7d2b7d64), <span class="pl-c1">C64e</span>(0x95e6e642a495a4d7),</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa0c0c03bfba0fb9b), <span class="pl-c1">C64e</span>(0x981919aab398b332),</td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd19e9ef668d16827), <span class="pl-c1">C64e</span>(0x7fa3a322817f815d),</td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x664444eeaa66aa88), <span class="pl-c1">C64e</span>(0x7e5454d6827e82a8),</td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xab3b3bdde6abe676), <span class="pl-c1">C64e</span>(0x830b0b959e839e16),</td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xca8c8cc945ca4503), <span class="pl-c1">C64e</span>(0x29c7c7bc7b297b95),</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd36b6b056ed36ed6), <span class="pl-c1">C64e</span>(0x3c28286c443c4450),</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x79a7a72c8b798b55), <span class="pl-c1">C64e</span>(0xe2bcbc813de23d63),</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1d161631271d272c), <span class="pl-c1">C64e</span>(0x76adad379a769a41),</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3bdbdb964d3b4dad), <span class="pl-c1">C64e</span>(0x5664649efa56fac8),</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4e7474a6d24ed2e8), <span class="pl-c1">C64e</span>(0x1e141436221e2228),</td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb9292e476db763f), <span class="pl-c1">C64e</span>(0x0a0c0c121e0a1e18),</td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c4848fcb46cb490), <span class="pl-c1">C64e</span>(0xe4b8b88f37e4376b),</td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5d9f9f78e75de725), <span class="pl-c1">C64e</span>(0x6ebdbd0fb26eb261),</td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xef4343692aef2a86), <span class="pl-c1">C64e</span>(0xa6c4c435f1a6f193),</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa83939dae3a8e372), <span class="pl-c1">C64e</span>(0xa43131c6f7a4f762),</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x37d3d38a593759bd), <span class="pl-c1">C64e</span>(0x8bf2f274868b86ff),</td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x32d5d583563256b1), <span class="pl-c1">C64e</span>(0x438b8b4ec543c50d),</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x596e6e85eb59ebdc), <span class="pl-c1">C64e</span>(0xb7dada18c2b7c2af),</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8c01018e8f8c8f02), <span class="pl-c1">C64e</span>(0x64b1b11dac64ac79),</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd29c9cf16dd26d23), <span class="pl-c1">C64e</span>(0xe04949723be03b92),</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb4d8d81fc7b4c7ab), <span class="pl-c1">C64e</span>(0xfaacacb915fa1543),</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x07f3f3fa090709fd), <span class="pl-c1">C64e</span>(0x25cfcfa06f256f85),</td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xafcaca20eaafea8f), <span class="pl-c1">C64e</span>(0x8ef4f47d898e89f3),</td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe947476720e9208e), <span class="pl-c1">C64e</span>(0x1810103828182820),</td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd56f6f0b64d564de), <span class="pl-c1">C64e</span>(0x88f0f073838883fb),</td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6f4a4afbb16fb194), <span class="pl-c1">C64e</span>(0x725c5cca967296b8),</td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x243838546c246c70), <span class="pl-c1">C64e</span>(0xf157575f08f108ae),</td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc773732152c752e6), <span class="pl-c1">C64e</span>(0x51979764f351f335),</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x23cbcbae6523658d), <span class="pl-c1">C64e</span>(0x7ca1a125847c8459),</td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9ce8e857bf9cbfcb), <span class="pl-c1">C64e</span>(0x213e3e5d6321637c),</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdd9696ea7cdd7c37), <span class="pl-c1">C64e</span>(0xdc61611e7fdc7fc2),</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x860d0d9c9186911a), <span class="pl-c1">C64e</span>(0x850f0f9b9485941e),</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x90e0e04bab90abdb), <span class="pl-c1">C64e</span>(0x427c7cbac642c6f8),</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc471712657c457e2), <span class="pl-c1">C64e</span>(0xaacccc29e5aae583),</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd89090e373d8733b), <span class="pl-c1">C64e</span>(0x050606090f050f0c),</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x01f7f7f4030103f5), <span class="pl-c1">C64e</span>(0x121c1c2a36123638),</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa3c2c23cfea3fe9f), <span class="pl-c1">C64e</span>(0x5f6a6a8be15fe1d4),</td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf9aeaebe10f91047), <span class="pl-c1">C64e</span>(0xd06969026bd06bd2),</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x911717bfa891a82e), <span class="pl-c1">C64e</span>(0x58999971e858e829),</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x273a3a5369276974), <span class="pl-c1">C64e</span>(0xb92727f7d0b9d04e),</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x38d9d991483848a9), <span class="pl-c1">C64e</span>(0x13ebebde351335cd),</td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb32b2be5ceb3ce56), <span class="pl-c1">C64e</span>(0x3322227755335544),</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbbd2d204d6bbd6bf), <span class="pl-c1">C64e</span>(0x70a9a93990709049),</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x890707878089800e), <span class="pl-c1">C64e</span>(0xa73333c1f2a7f266),</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb62d2decc1b6c15a), <span class="pl-c1">C64e</span>(0x223c3c5a66226678),</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x921515b8ad92ad2a), <span class="pl-c1">C64e</span>(0x20c9c9a960206089),</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4987875cdb49db15), <span class="pl-c1">C64e</span>(0xffaaaab01aff1a4f),</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x785050d8887888a0), <span class="pl-c1">C64e</span>(0x7aa5a52b8e7a8e51),</td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f0303898a8f8a06), <span class="pl-c1">C64e</span>(0xf859594a13f813b2),</td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x800909929b809b12), <span class="pl-c1">C64e</span>(0x171a1a2339173934),</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xda65651075da75ca), <span class="pl-c1">C64e</span>(0x31d7d784533153b5),</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc68484d551c65113), <span class="pl-c1">C64e</span>(0xb8d0d003d3b8d3bb),</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc38282dc5ec35e1f), <span class="pl-c1">C64e</span>(0xb02929e2cbb0cb52),</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x775a5ac3997799b4), <span class="pl-c1">C64e</span>(0x111e1e2d3311333c),</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcb7b7b3d46cb46f6), <span class="pl-c1">C64e</span>(0xfca8a8b71ffc1f4b),</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd66d6d0c61d661da), <span class="pl-c1">C64e</span>(0x3a2c2c624e3a4e58)</td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T3[] = {</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x97a5c6c632f4a5f4), <span class="pl-c1">C64e</span>(0xeb84f8f86f978497),</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc799eeee5eb099b0), <span class="pl-c1">C64e</span>(0xf78df6f67a8c8d8c),</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe50dffffe8170d17), <span class="pl-c1">C64e</span>(0xb7bdd6d60adcbddc),</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa7b1dede16c8b1c8), <span class="pl-c1">C64e</span>(0x395491916dfc54fc),</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc050606090f050f0), <span class="pl-c1">C64e</span>(0x0403020207050305),</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x87a9cece2ee0a9e0), <span class="pl-c1">C64e</span>(0xac7d5656d1877d87),</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd519e7e7cc2b192b), <span class="pl-c1">C64e</span>(0x7162b5b513a662a6),</td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9ae64d4d7c31e631), <span class="pl-c1">C64e</span>(0xc39aecec59b59ab5),</td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x05458f8f40cf45cf), <span class="pl-c1">C64e</span>(0x3e9d1f1fa3bc9dbc),</td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0940898949c040c0), <span class="pl-c1">C64e</span>(0xef87fafa68928792),</td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc515efefd03f153f), <span class="pl-c1">C64e</span>(0x7febb2b29426eb26),</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x07c98e8ece40c940), <span class="pl-c1">C64e</span>(0xed0bfbfbe61d0b1d),</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x82ec41416e2fec2f), <span class="pl-c1">C64e</span>(0x7d67b3b31aa967a9),</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbefd5f5f431cfd1c), <span class="pl-c1">C64e</span>(0x8aea45456025ea25),</td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x46bf2323f9dabfda), <span class="pl-c1">C64e</span>(0xa6f753535102f702),</td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd396e4e445a196a1), <span class="pl-c1">C64e</span>(0x2d5b9b9b76ed5bed),</td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeac27575285dc25d), <span class="pl-c1">C64e</span>(0xd91ce1e1c5241c24),</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7aae3d3dd4e9aee9), <span class="pl-c1">C64e</span>(0x986a4c4cf2be6abe),</td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd85a6c6c82ee5aee), <span class="pl-c1">C64e</span>(0xfc417e7ebdc341c3),</td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf102f5f5f3060206), <span class="pl-c1">C64e</span>(0x1d4f838352d14fd1),</td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd05c68688ce45ce4), <span class="pl-c1">C64e</span>(0xa2f451515607f407),</td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb934d1d18d5c345c), <span class="pl-c1">C64e</span>(0xe908f9f9e1180818),</td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdf93e2e24cae93ae), <span class="pl-c1">C64e</span>(0x4d73abab3e957395),</td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc453626297f553f5), <span class="pl-c1">C64e</span>(0x543f2a2a6b413f41),</td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x100c08081c140c14), <span class="pl-c1">C64e</span>(0x3152959563f652f6),</td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8c654646e9af65af), <span class="pl-c1">C64e</span>(0x215e9d9d7fe25ee2),</td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6028303048782878), <span class="pl-c1">C64e</span>(0x6ea13737cff8a1f8),</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x140f0a0a1b110f11), <span class="pl-c1">C64e</span>(0x5eb52f2febc4b5c4),</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1c090e0e151b091b), <span class="pl-c1">C64e</span>(0x483624247e5a365a),</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x369b1b1badb69bb6), <span class="pl-c1">C64e</span>(0xa53ddfdf98473d47),</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8126cdcda76a266a), <span class="pl-c1">C64e</span>(0x9c694e4ef5bb69bb),</td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfecd7f7f334ccd4c), <span class="pl-c1">C64e</span>(0xcf9feaea50ba9fba),</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x241b12123f2d1b2d), <span class="pl-c1">C64e</span>(0x3a9e1d1da4b99eb9),</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb0745858c49c749c), <span class="pl-c1">C64e</span>(0x682e343446722e72),</td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c2d363641772d77), <span class="pl-c1">C64e</span>(0xa3b2dcdc11cdb2cd),</td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x73eeb4b49d29ee29), <span class="pl-c1">C64e</span>(0xb6fb5b5b4d16fb16),</td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x53f6a4a4a501f601), <span class="pl-c1">C64e</span>(0xec4d7676a1d74dd7),</td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7561b7b714a361a3), <span class="pl-c1">C64e</span>(0xface7d7d3449ce49),</td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa47b5252df8d7b8d), <span class="pl-c1">C64e</span>(0xa13edddd9f423e42),</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbc715e5ecd937193), <span class="pl-c1">C64e</span>(0x26971313b1a297a2),</td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x57f5a6a6a204f504), <span class="pl-c1">C64e</span>(0x6968b9b901b868b8),</td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0x992cc1c1b5742c74),</td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x80604040e0a060a0), <span class="pl-c1">C64e</span>(0xdd1fe3e3c2211f21),</td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf2c879793a43c843), <span class="pl-c1">C64e</span>(0x77edb6b69a2ced2c),</td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb3bed4d40dd9bed9), <span class="pl-c1">C64e</span>(0x01468d8d47ca46ca),</td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xced967671770d970), <span class="pl-c1">C64e</span>(0xe44b7272afdd4bdd),</td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x33de9494ed79de79), <span class="pl-c1">C64e</span>(0x2bd49898ff67d467),</td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7be8b0b09323e823), <span class="pl-c1">C64e</span>(0x114a85855bde4ade),</td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6d6bbbbb06bd6bbd), <span class="pl-c1">C64e</span>(0x912ac5c5bb7e2a7e),</td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9ee54f4f7b34e534), <span class="pl-c1">C64e</span>(0xc116ededd73a163a),</td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x17c58686d254c554), <span class="pl-c1">C64e</span>(0x2fd79a9af862d762),</td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcc55666699ff55ff), <span class="pl-c1">C64e</span>(0x22941111b6a794a7),</td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0fcf8a8ac04acf4a), <span class="pl-c1">C64e</span>(0xc910e9e9d9301030),</td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x080604040e0a060a), <span class="pl-c1">C64e</span>(0xe781fefe66988198),</td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5bf0a0a0ab0bf00b), <span class="pl-c1">C64e</span>(0xf0447878b4cc44cc),</td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4aba2525f0d5bad5), <span class="pl-c1">C64e</span>(0x96e34b4b753ee33e),</td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ff3a2a2ac0ef30e), <span class="pl-c1">C64e</span>(0xbafe5d5d4419fe19),</td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1bc08080db5bc05b), <span class="pl-c1">C64e</span>(0x0a8a050580858a85),</td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7ead3f3fd3ecadec), <span class="pl-c1">C64e</span>(0x42bc2121fedfbcdf),</td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe0487070a8d848d8), <span class="pl-c1">C64e</span>(0xf904f1f1fd0c040c),</td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc6df6363197adf7a), <span class="pl-c1">C64e</span>(0xeec177772f58c158),</td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4575afaf309f759f), <span class="pl-c1">C64e</span>(0x84634242e7a563a5),</td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4030202070503050), <span class="pl-c1">C64e</span>(0xd11ae5e5cb2e1a2e),</td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe10efdfdef120e12), <span class="pl-c1">C64e</span>(0x656dbfbf08b76db7),</td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x194c818155d44cd4), <span class="pl-c1">C64e</span>(0x30141818243c143c),</td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4c352626795f355f), <span class="pl-c1">C64e</span>(0x9d2fc3c3b2712f71),</td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x67e1bebe8638e138), <span class="pl-c1">C64e</span>(0x6aa23535c8fda2fd),</td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0bcc8888c74fcc4f), <span class="pl-c1">C64e</span>(0x5c392e2e654b394b),</td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3d5793936af957f9), <span class="pl-c1">C64e</span>(0xaaf25555580df20d),</td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe382fcfc619d829d), <span class="pl-c1">C64e</span>(0xf4477a7ab3c947c9),</td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8bacc8c827efacef), <span class="pl-c1">C64e</span>(0x6fe7baba8832e732),</td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x642b32324f7d2b7d), <span class="pl-c1">C64e</span>(0xd795e6e642a495a4),</td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9ba0c0c03bfba0fb), <span class="pl-c1">C64e</span>(0x32981919aab398b3),</td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x27d19e9ef668d168), <span class="pl-c1">C64e</span>(0x5d7fa3a322817f81),</td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x88664444eeaa66aa), <span class="pl-c1">C64e</span>(0xa87e5454d6827e82),</td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x76ab3b3bdde6abe6), <span class="pl-c1">C64e</span>(0x16830b0b959e839e),</td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x03ca8c8cc945ca45), <span class="pl-c1">C64e</span>(0x9529c7c7bc7b297b),</td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd6d36b6b056ed36e), <span class="pl-c1">C64e</span>(0x503c28286c443c44),</td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5579a7a72c8b798b), <span class="pl-c1">C64e</span>(0x63e2bcbc813de23d),</td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2c1d161631271d27), <span class="pl-c1">C64e</span>(0x4176adad379a769a),</td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xad3bdbdb964d3b4d), <span class="pl-c1">C64e</span>(0xc85664649efa56fa),</td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe84e7474a6d24ed2), <span class="pl-c1">C64e</span>(0x281e141436221e22),</td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3fdb9292e476db76), <span class="pl-c1">C64e</span>(0x180a0c0c121e0a1e),</td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x906c4848fcb46cb4), <span class="pl-c1">C64e</span>(0x6be4b8b88f37e437),</td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x255d9f9f78e75de7), <span class="pl-c1">C64e</span>(0x616ebdbd0fb26eb2),</td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x86ef4343692aef2a), <span class="pl-c1">C64e</span>(0x93a6c4c435f1a6f1),</td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x72a83939dae3a8e3), <span class="pl-c1">C64e</span>(0x62a43131c6f7a4f7),</td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbd37d3d38a593759), <span class="pl-c1">C64e</span>(0xff8bf2f274868b86),</td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb132d5d583563256), <span class="pl-c1">C64e</span>(0x0d438b8b4ec543c5),</td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdc596e6e85eb59eb), <span class="pl-c1">C64e</span>(0xafb7dada18c2b7c2),</td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x028c01018e8f8c8f), <span class="pl-c1">C64e</span>(0x7964b1b11dac64ac),</td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x23d29c9cf16dd26d), <span class="pl-c1">C64e</span>(0x92e04949723be03b),</td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xabb4d8d81fc7b4c7), <span class="pl-c1">C64e</span>(0x43faacacb915fa15),</td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfd07f3f3fa090709), <span class="pl-c1">C64e</span>(0x8525cfcfa06f256f),</td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8fafcaca20eaafea), <span class="pl-c1">C64e</span>(0xf38ef4f47d898e89),</td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8ee947476720e920), <span class="pl-c1">C64e</span>(0x2018101038281828),</td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xded56f6f0b64d564), <span class="pl-c1">C64e</span>(0xfb88f0f073838883),</td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x946f4a4afbb16fb1), <span class="pl-c1">C64e</span>(0xb8725c5cca967296),</td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x70243838546c246c), <span class="pl-c1">C64e</span>(0xaef157575f08f108),</td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe6c773732152c752), <span class="pl-c1">C64e</span>(0x3551979764f351f3),</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8d23cbcbae652365), <span class="pl-c1">C64e</span>(0x597ca1a125847c84),</td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcb9ce8e857bf9cbf), <span class="pl-c1">C64e</span>(0x7c213e3e5d632163),</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x37dd9696ea7cdd7c), <span class="pl-c1">C64e</span>(0xc2dc61611e7fdc7f),</td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1a860d0d9c918691), <span class="pl-c1">C64e</span>(0x1e850f0f9b948594),</td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb90e0e04bab90ab), <span class="pl-c1">C64e</span>(0xf8427c7cbac642c6),</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe2c471712657c457), <span class="pl-c1">C64e</span>(0x83aacccc29e5aae5),</td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3bd89090e373d873), <span class="pl-c1">C64e</span>(0x0c050606090f050f),</td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf501f7f7f4030103), <span class="pl-c1">C64e</span>(0x38121c1c2a361236),</td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9fa3c2c23cfea3fe), <span class="pl-c1">C64e</span>(0xd45f6a6a8be15fe1),</td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x47f9aeaebe10f910), <span class="pl-c1">C64e</span>(0xd2d06969026bd06b),</td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2e911717bfa891a8), <span class="pl-c1">C64e</span>(0x2958999971e858e8),</td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x74273a3a53692769), <span class="pl-c1">C64e</span>(0x4eb92727f7d0b9d0),</td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa938d9d991483848), <span class="pl-c1">C64e</span>(0xcd13ebebde351335),</td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x56b32b2be5ceb3ce), <span class="pl-c1">C64e</span>(0x4433222277553355),</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbfbbd2d204d6bbd6), <span class="pl-c1">C64e</span>(0x4970a9a939907090),</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e89070787808980), <span class="pl-c1">C64e</span>(0x66a73333c1f2a7f2),</td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ab62d2decc1b6c1), <span class="pl-c1">C64e</span>(0x78223c3c5a662266),</td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2a921515b8ad92ad), <span class="pl-c1">C64e</span>(0x8920c9c9a9602060),</td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x154987875cdb49db), <span class="pl-c1">C64e</span>(0x4fffaaaab01aff1a),</td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa0785050d8887888), <span class="pl-c1">C64e</span>(0x517aa5a52b8e7a8e),</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x068f0303898a8f8a), <span class="pl-c1">C64e</span>(0xb2f859594a13f813),</td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x12800909929b809b), <span class="pl-c1">C64e</span>(0x34171a1a23391739),</td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcada65651075da75), <span class="pl-c1">C64e</span>(0xb531d7d784533153),</td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x13c68484d551c651), <span class="pl-c1">C64e</span>(0xbbb8d0d003d3b8d3),</td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1fc38282dc5ec35e), <span class="pl-c1">C64e</span>(0x52b02929e2cbb0cb),</td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb4775a5ac3997799), <span class="pl-c1">C64e</span>(0x3c111e1e2d331133),</td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf6cb7b7b3d46cb46), <span class="pl-c1">C64e</span>(0x4bfca8a8b71ffc1f),</td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdad66d6d0c61d661), <span class="pl-c1">C64e</span>(0x583a2c2c624e3a4e)</td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T4[] = {</td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf497a5c6c632f4a5), <span class="pl-c1">C64e</span>(0x97eb84f8f86f9784),</td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb0c799eeee5eb099), <span class="pl-c1">C64e</span>(0x8cf78df6f67a8c8d),</td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x17e50dffffe8170d), <span class="pl-c1">C64e</span>(0xdcb7bdd6d60adcbd),</td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc8a7b1dede16c8b1), <span class="pl-c1">C64e</span>(0xfc395491916dfc54),</td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf0c050606090f050), <span class="pl-c1">C64e</span>(0x0504030202070503),</td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe087a9cece2ee0a9), <span class="pl-c1">C64e</span>(0x87ac7d5656d1877d),</td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2bd519e7e7cc2b19), <span class="pl-c1">C64e</span>(0xa67162b5b513a662),</td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x319ae64d4d7c31e6), <span class="pl-c1">C64e</span>(0xb5c39aecec59b59a),</td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcf05458f8f40cf45), <span class="pl-c1">C64e</span>(0xbc3e9d1f1fa3bc9d),</td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc00940898949c040), <span class="pl-c1">C64e</span>(0x92ef87fafa689287),</td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3fc515efefd03f15), <span class="pl-c1">C64e</span>(0x267febb2b29426eb),</td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4007c98e8ece40c9), <span class="pl-c1">C64e</span>(0x1ded0bfbfbe61d0b),</td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2f82ec41416e2fec), <span class="pl-c1">C64e</span>(0xa97d67b3b31aa967),</td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1cbefd5f5f431cfd), <span class="pl-c1">C64e</span>(0x258aea45456025ea),</td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xda46bf2323f9dabf), <span class="pl-c1">C64e</span>(0x02a6f753535102f7),</td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa1d396e4e445a196), <span class="pl-c1">C64e</span>(0xed2d5b9b9b76ed5b),</td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5deac27575285dc2), <span class="pl-c1">C64e</span>(0x24d91ce1e1c5241c),</td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe97aae3d3dd4e9ae), <span class="pl-c1">C64e</span>(0xbe986a4c4cf2be6a),</td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeed85a6c6c82ee5a), <span class="pl-c1">C64e</span>(0xc3fc417e7ebdc341),</td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x06f102f5f5f30602), <span class="pl-c1">C64e</span>(0xd11d4f838352d14f),</td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe4d05c68688ce45c), <span class="pl-c1">C64e</span>(0x07a2f451515607f4),</td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5cb934d1d18d5c34), <span class="pl-c1">C64e</span>(0x18e908f9f9e11808),</td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaedf93e2e24cae93), <span class="pl-c1">C64e</span>(0x954d73abab3e9573),</td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf5c453626297f553), <span class="pl-c1">C64e</span>(0x41543f2a2a6b413f),</td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x14100c08081c140c), <span class="pl-c1">C64e</span>(0xf63152959563f652),</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaf8c654646e9af65), <span class="pl-c1">C64e</span>(0xe2215e9d9d7fe25e),</td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7860283030487828), <span class="pl-c1">C64e</span>(0xf86ea13737cff8a1),</td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x11140f0a0a1b110f), <span class="pl-c1">C64e</span>(0xc45eb52f2febc4b5),</td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b1c090e0e151b09), <span class="pl-c1">C64e</span>(0x5a483624247e5a36),</td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb6369b1b1badb69b), <span class="pl-c1">C64e</span>(0x47a53ddfdf98473d),</td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6a8126cdcda76a26), <span class="pl-c1">C64e</span>(0xbb9c694e4ef5bb69),</td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4cfecd7f7f334ccd), <span class="pl-c1">C64e</span>(0xbacf9feaea50ba9f),</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2d241b12123f2d1b), <span class="pl-c1">C64e</span>(0xb93a9e1d1da4b99e),</td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9cb0745858c49c74), <span class="pl-c1">C64e</span>(0x72682e343446722e),</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x776c2d363641772d), <span class="pl-c1">C64e</span>(0xcda3b2dcdc11cdb2),</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2973eeb4b49d29ee), <span class="pl-c1">C64e</span>(0x16b6fb5b5b4d16fb),</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0153f6a4a4a501f6), <span class="pl-c1">C64e</span>(0xd7ec4d7676a1d74d),</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa37561b7b714a361), <span class="pl-c1">C64e</span>(0x49face7d7d3449ce),</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8da47b5252df8d7b), <span class="pl-c1">C64e</span>(0x42a13edddd9f423e),</td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x93bc715e5ecd9371), <span class="pl-c1">C64e</span>(0xa226971313b1a297),</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0457f5a6a6a204f5), <span class="pl-c1">C64e</span>(0xb86968b9b901b868),</td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0x74992cc1c1b5742c),</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa080604040e0a060), <span class="pl-c1">C64e</span>(0x21dd1fe3e3c2211f),</td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x43f2c879793a43c8), <span class="pl-c1">C64e</span>(0x2c77edb6b69a2ced),</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd9b3bed4d40dd9be), <span class="pl-c1">C64e</span>(0xca01468d8d47ca46),</td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x70ced967671770d9), <span class="pl-c1">C64e</span>(0xdde44b7272afdd4b),</td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7933de9494ed79de), <span class="pl-c1">C64e</span>(0x672bd49898ff67d4),</td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x237be8b0b09323e8), <span class="pl-c1">C64e</span>(0xde114a85855bde4a),</td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbd6d6bbbbb06bd6b), <span class="pl-c1">C64e</span>(0x7e912ac5c5bb7e2a),</td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x349ee54f4f7b34e5), <span class="pl-c1">C64e</span>(0x3ac116ededd73a16),</td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5417c58686d254c5), <span class="pl-c1">C64e</span>(0x622fd79a9af862d7),</td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xffcc55666699ff55), <span class="pl-c1">C64e</span>(0xa722941111b6a794),</td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4a0fcf8a8ac04acf), <span class="pl-c1">C64e</span>(0x30c910e9e9d93010),</td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0a080604040e0a06), <span class="pl-c1">C64e</span>(0x98e781fefe669881),</td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0b5bf0a0a0ab0bf0), <span class="pl-c1">C64e</span>(0xccf0447878b4cc44),</td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd54aba2525f0d5ba), <span class="pl-c1">C64e</span>(0x3e96e34b4b753ee3),</td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e5ff3a2a2ac0ef3), <span class="pl-c1">C64e</span>(0x19bafe5d5d4419fe),</td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5b1bc08080db5bc0), <span class="pl-c1">C64e</span>(0x850a8a050580858a),</td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xec7ead3f3fd3ecad), <span class="pl-c1">C64e</span>(0xdf42bc2121fedfbc),</td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd8e0487070a8d848), <span class="pl-c1">C64e</span>(0x0cf904f1f1fd0c04),</td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7ac6df6363197adf), <span class="pl-c1">C64e</span>(0x58eec177772f58c1),</td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9f4575afaf309f75), <span class="pl-c1">C64e</span>(0xa584634242e7a563),</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5040302020705030), <span class="pl-c1">C64e</span>(0x2ed11ae5e5cb2e1a),</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x12e10efdfdef120e), <span class="pl-c1">C64e</span>(0xb7656dbfbf08b76d),</td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd4194c818155d44c), <span class="pl-c1">C64e</span>(0x3c30141818243c14),</td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5f4c352626795f35), <span class="pl-c1">C64e</span>(0x719d2fc3c3b2712f),</td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3867e1bebe8638e1), <span class="pl-c1">C64e</span>(0xfd6aa23535c8fda2),</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4f0bcc8888c74fcc), <span class="pl-c1">C64e</span>(0x4b5c392e2e654b39),</td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf93d5793936af957), <span class="pl-c1">C64e</span>(0x0daaf25555580df2),</td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9de382fcfc619d82), <span class="pl-c1">C64e</span>(0xc9f4477a7ab3c947),</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xef8bacc8c827efac), <span class="pl-c1">C64e</span>(0x326fe7baba8832e7),</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7d642b32324f7d2b), <span class="pl-c1">C64e</span>(0xa4d795e6e642a495),</td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfb9ba0c0c03bfba0), <span class="pl-c1">C64e</span>(0xb332981919aab398),</td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6827d19e9ef668d1), <span class="pl-c1">C64e</span>(0x815d7fa3a322817f),</td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaa88664444eeaa66), <span class="pl-c1">C64e</span>(0x82a87e5454d6827e),</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe676ab3b3bdde6ab), <span class="pl-c1">C64e</span>(0x9e16830b0b959e83),</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4503ca8c8cc945ca), <span class="pl-c1">C64e</span>(0x7b9529c7c7bc7b29),</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6ed6d36b6b056ed3), <span class="pl-c1">C64e</span>(0x44503c28286c443c),</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8b5579a7a72c8b79), <span class="pl-c1">C64e</span>(0x3d63e2bcbc813de2),</td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x272c1d161631271d), <span class="pl-c1">C64e</span>(0x9a4176adad379a76),</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4dad3bdbdb964d3b), <span class="pl-c1">C64e</span>(0xfac85664649efa56),</td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd2e84e7474a6d24e), <span class="pl-c1">C64e</span>(0x22281e141436221e),</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x763fdb9292e476db), <span class="pl-c1">C64e</span>(0x1e180a0c0c121e0a),</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb4906c4848fcb46c), <span class="pl-c1">C64e</span>(0x376be4b8b88f37e4),</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe7255d9f9f78e75d), <span class="pl-c1">C64e</span>(0xb2616ebdbd0fb26e),</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2a86ef4343692aef), <span class="pl-c1">C64e</span>(0xf193a6c4c435f1a6),</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe372a83939dae3a8), <span class="pl-c1">C64e</span>(0xf762a43131c6f7a4),</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x59bd37d3d38a5937), <span class="pl-c1">C64e</span>(0x86ff8bf2f274868b),</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x56b132d5d5835632), <span class="pl-c1">C64e</span>(0xc50d438b8b4ec543),</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xebdc596e6e85eb59), <span class="pl-c1">C64e</span>(0xc2afb7dada18c2b7),</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f028c01018e8f8c), <span class="pl-c1">C64e</span>(0xac7964b1b11dac64),</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6d23d29c9cf16dd2), <span class="pl-c1">C64e</span>(0x3b92e04949723be0),</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc7abb4d8d81fc7b4), <span class="pl-c1">C64e</span>(0x1543faacacb915fa),</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x09fd07f3f3fa0907), <span class="pl-c1">C64e</span>(0x6f8525cfcfa06f25),</td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xea8fafcaca20eaaf), <span class="pl-c1">C64e</span>(0x89f38ef4f47d898e),</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x208ee947476720e9), <span class="pl-c1">C64e</span>(0x2820181010382818),</td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x64ded56f6f0b64d5), <span class="pl-c1">C64e</span>(0x83fb88f0f0738388),</td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb1946f4a4afbb16f), <span class="pl-c1">C64e</span>(0x96b8725c5cca9672),</td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c70243838546c24), <span class="pl-c1">C64e</span>(0x08aef157575f08f1),</td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x52e6c773732152c7), <span class="pl-c1">C64e</span>(0xf33551979764f351),</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x658d23cbcbae6523), <span class="pl-c1">C64e</span>(0x84597ca1a125847c),</td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbfcb9ce8e857bf9c), <span class="pl-c1">C64e</span>(0x637c213e3e5d6321),</td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7c37dd9696ea7cdd), <span class="pl-c1">C64e</span>(0x7fc2dc61611e7fdc),</td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x911a860d0d9c9186), <span class="pl-c1">C64e</span>(0x941e850f0f9b9485),</td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xabdb90e0e04bab90), <span class="pl-c1">C64e</span>(0xc6f8427c7cbac642),</td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x57e2c471712657c4), <span class="pl-c1">C64e</span>(0xe583aacccc29e5aa),</td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x733bd89090e373d8), <span class="pl-c1">C64e</span>(0x0f0c050606090f05),</td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x03f501f7f7f40301), <span class="pl-c1">C64e</span>(0x3638121c1c2a3612),</td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfe9fa3c2c23cfea3), <span class="pl-c1">C64e</span>(0xe1d45f6a6a8be15f),</td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1047f9aeaebe10f9), <span class="pl-c1">C64e</span>(0x6bd2d06969026bd0),</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa82e911717bfa891), <span class="pl-c1">C64e</span>(0xe82958999971e858),</td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6974273a3a536927), <span class="pl-c1">C64e</span>(0xd04eb92727f7d0b9),</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x48a938d9d9914838), <span class="pl-c1">C64e</span>(0x35cd13ebebde3513),</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xce56b32b2be5ceb3), <span class="pl-c1">C64e</span>(0x5544332222775533),</td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd6bfbbd2d204d6bb), <span class="pl-c1">C64e</span>(0x904970a9a9399070),</td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x800e890707878089), <span class="pl-c1">C64e</span>(0xf266a73333c1f2a7),</td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc15ab62d2decc1b6), <span class="pl-c1">C64e</span>(0x6678223c3c5a6622),</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xad2a921515b8ad92), <span class="pl-c1">C64e</span>(0x608920c9c9a96020),</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb154987875cdb49), <span class="pl-c1">C64e</span>(0x1a4fffaaaab01aff),</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x88a0785050d88878), <span class="pl-c1">C64e</span>(0x8e517aa5a52b8e7a),</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8a068f0303898a8f), <span class="pl-c1">C64e</span>(0x13b2f859594a13f8),</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9b12800909929b80), <span class="pl-c1">C64e</span>(0x3934171a1a233917),</td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x75cada65651075da), <span class="pl-c1">C64e</span>(0x53b531d7d7845331),</td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5113c68484d551c6), <span class="pl-c1">C64e</span>(0xd3bbb8d0d003d3b8),</td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5e1fc38282dc5ec3), <span class="pl-c1">C64e</span>(0xcb52b02929e2cbb0),</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x99b4775a5ac39977), <span class="pl-c1">C64e</span>(0x333c111e1e2d3311),</td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x46f6cb7b7b3d46cb), <span class="pl-c1">C64e</span>(0x1f4bfca8a8b71ffc),</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x61dad66d6d0c61d6), <span class="pl-c1">C64e</span>(0x4e583a2c2c624e3a)</td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> !SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T5[] = {</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa5f497a5c6c632f4), <span class="pl-c1">C64e</span>(0x8497eb84f8f86f97),</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x99b0c799eeee5eb0), <span class="pl-c1">C64e</span>(0x8d8cf78df6f67a8c),</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0d17e50dffffe817), <span class="pl-c1">C64e</span>(0xbddcb7bdd6d60adc),</td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb1c8a7b1dede16c8), <span class="pl-c1">C64e</span>(0x54fc395491916dfc),</td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x50f0c050606090f0), <span class="pl-c1">C64e</span>(0x0305040302020705),</td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa9e087a9cece2ee0), <span class="pl-c1">C64e</span>(0x7d87ac7d5656d187),</td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x192bd519e7e7cc2b), <span class="pl-c1">C64e</span>(0x62a67162b5b513a6),</td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe6319ae64d4d7c31), <span class="pl-c1">C64e</span>(0x9ab5c39aecec59b5),</td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x45cf05458f8f40cf), <span class="pl-c1">C64e</span>(0x9dbc3e9d1f1fa3bc),</td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x40c00940898949c0), <span class="pl-c1">C64e</span>(0x8792ef87fafa6892),</td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x153fc515efefd03f), <span class="pl-c1">C64e</span>(0xeb267febb2b29426),</td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc94007c98e8ece40), <span class="pl-c1">C64e</span>(0x0b1ded0bfbfbe61d),</td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xec2f82ec41416e2f), <span class="pl-c1">C64e</span>(0x67a97d67b3b31aa9),</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfd1cbefd5f5f431c), <span class="pl-c1">C64e</span>(0xea258aea45456025),</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbfda46bf2323f9da), <span class="pl-c1">C64e</span>(0xf702a6f753535102),</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x96a1d396e4e445a1), <span class="pl-c1">C64e</span>(0x5bed2d5b9b9b76ed),</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc25deac27575285d), <span class="pl-c1">C64e</span>(0x1c24d91ce1e1c524),</td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaee97aae3d3dd4e9), <span class="pl-c1">C64e</span>(0x6abe986a4c4cf2be),</td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5aeed85a6c6c82ee), <span class="pl-c1">C64e</span>(0x41c3fc417e7ebdc3),</td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0206f102f5f5f306), <span class="pl-c1">C64e</span>(0x4fd11d4f838352d1),</td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ce4d05c68688ce4), <span class="pl-c1">C64e</span>(0xf407a2f451515607),</td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x345cb934d1d18d5c), <span class="pl-c1">C64e</span>(0x0818e908f9f9e118),</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x93aedf93e2e24cae), <span class="pl-c1">C64e</span>(0x73954d73abab3e95),</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x53f5c453626297f5), <span class="pl-c1">C64e</span>(0x3f41543f2a2a6b41),</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0c14100c08081c14), <span class="pl-c1">C64e</span>(0x52f63152959563f6),</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x65af8c654646e9af), <span class="pl-c1">C64e</span>(0x5ee2215e9d9d7fe2),</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2878602830304878), <span class="pl-c1">C64e</span>(0xa1f86ea13737cff8),</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0f11140f0a0a1b11), <span class="pl-c1">C64e</span>(0xb5c45eb52f2febc4),</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x091b1c090e0e151b), <span class="pl-c1">C64e</span>(0x365a483624247e5a),</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9bb6369b1b1badb6), <span class="pl-c1">C64e</span>(0x3d47a53ddfdf9847),</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x266a8126cdcda76a), <span class="pl-c1">C64e</span>(0x69bb9c694e4ef5bb),</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcd4cfecd7f7f334c), <span class="pl-c1">C64e</span>(0x9fbacf9feaea50ba),</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b2d241b12123f2d), <span class="pl-c1">C64e</span>(0x9eb93a9e1d1da4b9),</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x749cb0745858c49c), <span class="pl-c1">C64e</span>(0x2e72682e34344672),</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2d776c2d36364177), <span class="pl-c1">C64e</span>(0xb2cda3b2dcdc11cd),</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xee2973eeb4b49d29), <span class="pl-c1">C64e</span>(0xfb16b6fb5b5b4d16),</td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf60153f6a4a4a501), <span class="pl-c1">C64e</span>(0x4dd7ec4d7676a1d7),</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x61a37561b7b714a3), <span class="pl-c1">C64e</span>(0xce49face7d7d3449),</td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7b8da47b5252df8d), <span class="pl-c1">C64e</span>(0x3e42a13edddd9f42),</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7193bc715e5ecd93), <span class="pl-c1">C64e</span>(0x97a226971313b1a2),</td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf50457f5a6a6a204), <span class="pl-c1">C64e</span>(0x68b86968b9b901b8),</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0x2c74992cc1c1b574),</td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x60a080604040e0a0), <span class="pl-c1">C64e</span>(0x1f21dd1fe3e3c221),</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc843f2c879793a43), <span class="pl-c1">C64e</span>(0xed2c77edb6b69a2c),</td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbed9b3bed4d40dd9), <span class="pl-c1">C64e</span>(0x46ca01468d8d47ca),</td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd970ced967671770), <span class="pl-c1">C64e</span>(0x4bdde44b7272afdd),</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xde7933de9494ed79), <span class="pl-c1">C64e</span>(0xd4672bd49898ff67),</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe8237be8b0b09323), <span class="pl-c1">C64e</span>(0x4ade114a85855bde),</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6bbd6d6bbbbb06bd), <span class="pl-c1">C64e</span>(0x2a7e912ac5c5bb7e),</td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe5349ee54f4f7b34), <span class="pl-c1">C64e</span>(0x163ac116ededd73a),</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc55417c58686d254), <span class="pl-c1">C64e</span>(0xd7622fd79a9af862),</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x55ffcc55666699ff), <span class="pl-c1">C64e</span>(0x94a722941111b6a7),</td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcf4a0fcf8a8ac04a), <span class="pl-c1">C64e</span>(0x1030c910e9e9d930),</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x060a080604040e0a), <span class="pl-c1">C64e</span>(0x8198e781fefe6698),</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf00b5bf0a0a0ab0b), <span class="pl-c1">C64e</span>(0x44ccf0447878b4cc),</td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbad54aba2525f0d5), <span class="pl-c1">C64e</span>(0xe33e96e34b4b753e),</td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf30e5ff3a2a2ac0e), <span class="pl-c1">C64e</span>(0xfe19bafe5d5d4419),</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc05b1bc08080db5b), <span class="pl-c1">C64e</span>(0x8a850a8a05058085),</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xadec7ead3f3fd3ec), <span class="pl-c1">C64e</span>(0xbcdf42bc2121fedf),</td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x48d8e0487070a8d8), <span class="pl-c1">C64e</span>(0x040cf904f1f1fd0c),</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdf7ac6df6363197a), <span class="pl-c1">C64e</span>(0xc158eec177772f58),</td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x759f4575afaf309f), <span class="pl-c1">C64e</span>(0x63a584634242e7a5),</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3050403020207050), <span class="pl-c1">C64e</span>(0x1a2ed11ae5e5cb2e),</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e12e10efdfdef12), <span class="pl-c1">C64e</span>(0x6db7656dbfbf08b7),</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4cd4194c818155d4), <span class="pl-c1">C64e</span>(0x143c30141818243c),</td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x355f4c352626795f), <span class="pl-c1">C64e</span>(0x2f719d2fc3c3b271),</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe13867e1bebe8638), <span class="pl-c1">C64e</span>(0xa2fd6aa23535c8fd),</td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcc4f0bcc8888c74f), <span class="pl-c1">C64e</span>(0x394b5c392e2e654b),</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x57f93d5793936af9), <span class="pl-c1">C64e</span>(0xf20daaf25555580d),</td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x829de382fcfc619d), <span class="pl-c1">C64e</span>(0x47c9f4477a7ab3c9),</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xacef8bacc8c827ef), <span class="pl-c1">C64e</span>(0xe7326fe7baba8832),</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2b7d642b32324f7d), <span class="pl-c1">C64e</span>(0x95a4d795e6e642a4),</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa0fb9ba0c0c03bfb), <span class="pl-c1">C64e</span>(0x98b332981919aab3),</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd16827d19e9ef668), <span class="pl-c1">C64e</span>(0x7f815d7fa3a32281),</td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x66aa88664444eeaa), <span class="pl-c1">C64e</span>(0x7e82a87e5454d682),</td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xabe676ab3b3bdde6), <span class="pl-c1">C64e</span>(0x839e16830b0b959e),</td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xca4503ca8c8cc945), <span class="pl-c1">C64e</span>(0x297b9529c7c7bc7b),</td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd36ed6d36b6b056e), <span class="pl-c1">C64e</span>(0x3c44503c28286c44),</td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x798b5579a7a72c8b), <span class="pl-c1">C64e</span>(0xe23d63e2bcbc813d),</td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1d272c1d16163127), <span class="pl-c1">C64e</span>(0x769a4176adad379a),</td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3b4dad3bdbdb964d), <span class="pl-c1">C64e</span>(0x56fac85664649efa),</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4ed2e84e7474a6d2), <span class="pl-c1">C64e</span>(0x1e22281e14143622),</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb763fdb9292e476), <span class="pl-c1">C64e</span>(0x0a1e180a0c0c121e),</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6cb4906c4848fcb4), <span class="pl-c1">C64e</span>(0xe4376be4b8b88f37),</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5de7255d9f9f78e7), <span class="pl-c1">C64e</span>(0x6eb2616ebdbd0fb2),</td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xef2a86ef4343692a), <span class="pl-c1">C64e</span>(0xa6f193a6c4c435f1),</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa8e372a83939dae3), <span class="pl-c1">C64e</span>(0xa4f762a43131c6f7),</td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3759bd37d3d38a59), <span class="pl-c1">C64e</span>(0x8b86ff8bf2f27486),</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3256b132d5d58356), <span class="pl-c1">C64e</span>(0x43c50d438b8b4ec5),</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x59ebdc596e6e85eb), <span class="pl-c1">C64e</span>(0xb7c2afb7dada18c2),</td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8c8f028c01018e8f), <span class="pl-c1">C64e</span>(0x64ac7964b1b11dac),</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd26d23d29c9cf16d), <span class="pl-c1">C64e</span>(0xe03b92e04949723b),</td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb4c7abb4d8d81fc7), <span class="pl-c1">C64e</span>(0xfa1543faacacb915),</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0709fd07f3f3fa09), <span class="pl-c1">C64e</span>(0x256f8525cfcfa06f),</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xafea8fafcaca20ea), <span class="pl-c1">C64e</span>(0x8e89f38ef4f47d89),</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe9208ee947476720), <span class="pl-c1">C64e</span>(0x1828201810103828),</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd564ded56f6f0b64), <span class="pl-c1">C64e</span>(0x8883fb88f0f07383),</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6fb1946f4a4afbb1), <span class="pl-c1">C64e</span>(0x7296b8725c5cca96),</td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x246c70243838546c), <span class="pl-c1">C64e</span>(0xf108aef157575f08),</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc752e6c773732152), <span class="pl-c1">C64e</span>(0x51f33551979764f3),</td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x23658d23cbcbae65), <span class="pl-c1">C64e</span>(0x7c84597ca1a12584),</td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9cbfcb9ce8e857bf), <span class="pl-c1">C64e</span>(0x21637c213e3e5d63),</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdd7c37dd9696ea7c), <span class="pl-c1">C64e</span>(0xdc7fc2dc61611e7f),</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x86911a860d0d9c91), <span class="pl-c1">C64e</span>(0x85941e850f0f9b94),</td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x90abdb90e0e04bab), <span class="pl-c1">C64e</span>(0x42c6f8427c7cbac6),</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc457e2c471712657), <span class="pl-c1">C64e</span>(0xaae583aacccc29e5),</td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd8733bd89090e373), <span class="pl-c1">C64e</span>(0x050f0c050606090f),</td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0103f501f7f7f403), <span class="pl-c1">C64e</span>(0x123638121c1c2a36),</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa3fe9fa3c2c23cfe), <span class="pl-c1">C64e</span>(0x5fe1d45f6a6a8be1),</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf91047f9aeaebe10), <span class="pl-c1">C64e</span>(0xd06bd2d06969026b),</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x91a82e911717bfa8), <span class="pl-c1">C64e</span>(0x58e82958999971e8),</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x276974273a3a5369), <span class="pl-c1">C64e</span>(0xb9d04eb92727f7d0),</td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3848a938d9d99148), <span class="pl-c1">C64e</span>(0x1335cd13ebebde35),</td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb3ce56b32b2be5ce), <span class="pl-c1">C64e</span>(0x3355443322227755),</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbbd6bfbbd2d204d6), <span class="pl-c1">C64e</span>(0x70904970a9a93990),</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x89800e8907078780), <span class="pl-c1">C64e</span>(0xa7f266a73333c1f2),</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb6c15ab62d2decc1), <span class="pl-c1">C64e</span>(0x226678223c3c5a66),</td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x92ad2a921515b8ad), <span class="pl-c1">C64e</span>(0x20608920c9c9a960),</td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x49db154987875cdb), <span class="pl-c1">C64e</span>(0xff1a4fffaaaab01a),</td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7888a0785050d888), <span class="pl-c1">C64e</span>(0x7a8e517aa5a52b8e),</td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f8a068f0303898a), <span class="pl-c1">C64e</span>(0xf813b2f859594a13),</td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x809b12800909929b), <span class="pl-c1">C64e</span>(0x173934171a1a2339),</td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xda75cada65651075), <span class="pl-c1">C64e</span>(0x3153b531d7d78453),</td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc65113c68484d551), <span class="pl-c1">C64e</span>(0xb8d3bbb8d0d003d3),</td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc35e1fc38282dc5e), <span class="pl-c1">C64e</span>(0xb0cb52b02929e2cb),</td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7799b4775a5ac399), <span class="pl-c1">C64e</span>(0x11333c111e1e2d33),</td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcb46f6cb7b7b3d46), <span class="pl-c1">C64e</span>(0xfc1f4bfca8a8b71f),</td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd661dad66d6d0c61), <span class="pl-c1">C64e</span>(0x3a4e583a2c2c624e)</td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T6[] = {</td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf4a5f497a5c6c632), <span class="pl-c1">C64e</span>(0x978497eb84f8f86f),</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb099b0c799eeee5e), <span class="pl-c1">C64e</span>(0x8c8d8cf78df6f67a),</td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x170d17e50dffffe8), <span class="pl-c1">C64e</span>(0xdcbddcb7bdd6d60a),</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc8b1c8a7b1dede16), <span class="pl-c1">C64e</span>(0xfc54fc395491916d),</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf050f0c050606090), <span class="pl-c1">C64e</span>(0x0503050403020207),</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe0a9e087a9cece2e), <span class="pl-c1">C64e</span>(0x877d87ac7d5656d1),</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2b192bd519e7e7cc), <span class="pl-c1">C64e</span>(0xa662a67162b5b513),</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x31e6319ae64d4d7c), <span class="pl-c1">C64e</span>(0xb59ab5c39aecec59),</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcf45cf05458f8f40), <span class="pl-c1">C64e</span>(0xbc9dbc3e9d1f1fa3),</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc040c00940898949), <span class="pl-c1">C64e</span>(0x928792ef87fafa68),</td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3f153fc515efefd0), <span class="pl-c1">C64e</span>(0x26eb267febb2b294),</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x40c94007c98e8ece), <span class="pl-c1">C64e</span>(0x1d0b1ded0bfbfbe6),</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2fec2f82ec41416e), <span class="pl-c1">C64e</span>(0xa967a97d67b3b31a),</td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1cfd1cbefd5f5f43), <span class="pl-c1">C64e</span>(0x25ea258aea454560),</td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdabfda46bf2323f9), <span class="pl-c1">C64e</span>(0x02f702a6f7535351),</td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa196a1d396e4e445), <span class="pl-c1">C64e</span>(0xed5bed2d5b9b9b76),</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5dc25deac2757528), <span class="pl-c1">C64e</span>(0x241c24d91ce1e1c5),</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe9aee97aae3d3dd4), <span class="pl-c1">C64e</span>(0xbe6abe986a4c4cf2),</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xee5aeed85a6c6c82), <span class="pl-c1">C64e</span>(0xc341c3fc417e7ebd),</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x060206f102f5f5f3), <span class="pl-c1">C64e</span>(0xd14fd11d4f838352),</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe45ce4d05c68688c), <span class="pl-c1">C64e</span>(0x07f407a2f4515156),</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5c345cb934d1d18d), <span class="pl-c1">C64e</span>(0x180818e908f9f9e1),</td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xae93aedf93e2e24c), <span class="pl-c1">C64e</span>(0x9573954d73abab3e),</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf553f5c453626297), <span class="pl-c1">C64e</span>(0x413f41543f2a2a6b),</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x140c14100c08081c), <span class="pl-c1">C64e</span>(0xf652f63152959563),</td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaf65af8c654646e9), <span class="pl-c1">C64e</span>(0xe25ee2215e9d9d7f),</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7828786028303048), <span class="pl-c1">C64e</span>(0xf8a1f86ea13737cf),</td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x110f11140f0a0a1b), <span class="pl-c1">C64e</span>(0xc4b5c45eb52f2feb),</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b091b1c090e0e15), <span class="pl-c1">C64e</span>(0x5a365a483624247e),</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb69bb6369b1b1bad), <span class="pl-c1">C64e</span>(0x473d47a53ddfdf98),</td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6a266a8126cdcda7), <span class="pl-c1">C64e</span>(0xbb69bb9c694e4ef5),</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4ccd4cfecd7f7f33), <span class="pl-c1">C64e</span>(0xba9fbacf9feaea50),</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2d1b2d241b12123f), <span class="pl-c1">C64e</span>(0xb99eb93a9e1d1da4),</td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9c749cb0745858c4), <span class="pl-c1">C64e</span>(0x722e72682e343446),</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x772d776c2d363641), <span class="pl-c1">C64e</span>(0xcdb2cda3b2dcdc11),</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x29ee2973eeb4b49d), <span class="pl-c1">C64e</span>(0x16fb16b6fb5b5b4d),</td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x01f60153f6a4a4a5), <span class="pl-c1">C64e</span>(0xd74dd7ec4d7676a1),</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa361a37561b7b714), <span class="pl-c1">C64e</span>(0x49ce49face7d7d34),</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8d7b8da47b5252df), <span class="pl-c1">C64e</span>(0x423e42a13edddd9f),</td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x937193bc715e5ecd), <span class="pl-c1">C64e</span>(0xa297a226971313b1),</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x04f50457f5a6a6a2), <span class="pl-c1">C64e</span>(0xb868b86968b9b901),</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0x742c74992cc1c1b5),</td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa060a080604040e0), <span class="pl-c1">C64e</span>(0x211f21dd1fe3e3c2),</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x43c843f2c879793a), <span class="pl-c1">C64e</span>(0x2ced2c77edb6b69a),</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd9bed9b3bed4d40d), <span class="pl-c1">C64e</span>(0xca46ca01468d8d47),</td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x70d970ced9676717), <span class="pl-c1">C64e</span>(0xdd4bdde44b7272af),</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x79de7933de9494ed), <span class="pl-c1">C64e</span>(0x67d4672bd49898ff),</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x23e8237be8b0b093), <span class="pl-c1">C64e</span>(0xde4ade114a85855b),</td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbd6bbd6d6bbbbb06), <span class="pl-c1">C64e</span>(0x7e2a7e912ac5c5bb),</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x34e5349ee54f4f7b), <span class="pl-c1">C64e</span>(0x3a163ac116ededd7),</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x54c55417c58686d2), <span class="pl-c1">C64e</span>(0x62d7622fd79a9af8),</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xff55ffcc55666699), <span class="pl-c1">C64e</span>(0xa794a722941111b6),</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4acf4a0fcf8a8ac0), <span class="pl-c1">C64e</span>(0x301030c910e9e9d9),</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0a060a080604040e), <span class="pl-c1">C64e</span>(0x988198e781fefe66),</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0bf00b5bf0a0a0ab), <span class="pl-c1">C64e</span>(0xcc44ccf0447878b4),</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd5bad54aba2525f0), <span class="pl-c1">C64e</span>(0x3ee33e96e34b4b75),</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0ef30e5ff3a2a2ac), <span class="pl-c1">C64e</span>(0x19fe19bafe5d5d44),</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5bc05b1bc08080db), <span class="pl-c1">C64e</span>(0x858a850a8a050580),</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xecadec7ead3f3fd3), <span class="pl-c1">C64e</span>(0xdfbcdf42bc2121fe),</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd848d8e0487070a8), <span class="pl-c1">C64e</span>(0x0c040cf904f1f1fd),</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7adf7ac6df636319), <span class="pl-c1">C64e</span>(0x58c158eec177772f),</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9f759f4575afaf30), <span class="pl-c1">C64e</span>(0xa563a584634242e7),</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5030504030202070), <span class="pl-c1">C64e</span>(0x2e1a2ed11ae5e5cb),</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x120e12e10efdfdef), <span class="pl-c1">C64e</span>(0xb76db7656dbfbf08),</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd44cd4194c818155), <span class="pl-c1">C64e</span>(0x3c143c3014181824),</td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5f355f4c35262679), <span class="pl-c1">C64e</span>(0x712f719d2fc3c3b2),</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x38e13867e1bebe86), <span class="pl-c1">C64e</span>(0xfda2fd6aa23535c8),</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4fcc4f0bcc8888c7), <span class="pl-c1">C64e</span>(0x4b394b5c392e2e65),</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf957f93d5793936a), <span class="pl-c1">C64e</span>(0x0df20daaf2555558),</td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9d829de382fcfc61), <span class="pl-c1">C64e</span>(0xc947c9f4477a7ab3),</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xefacef8bacc8c827), <span class="pl-c1">C64e</span>(0x32e7326fe7baba88),</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7d2b7d642b32324f), <span class="pl-c1">C64e</span>(0xa495a4d795e6e642),</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfba0fb9ba0c0c03b), <span class="pl-c1">C64e</span>(0xb398b332981919aa),</td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x68d16827d19e9ef6), <span class="pl-c1">C64e</span>(0x817f815d7fa3a322),</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xaa66aa88664444ee), <span class="pl-c1">C64e</span>(0x827e82a87e5454d6),</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe6abe676ab3b3bdd), <span class="pl-c1">C64e</span>(0x9e839e16830b0b95),</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x45ca4503ca8c8cc9), <span class="pl-c1">C64e</span>(0x7b297b9529c7c7bc),</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6ed36ed6d36b6b05), <span class="pl-c1">C64e</span>(0x443c44503c28286c),</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8b798b5579a7a72c), <span class="pl-c1">C64e</span>(0x3de23d63e2bcbc81),</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x271d272c1d161631), <span class="pl-c1">C64e</span>(0x9a769a4176adad37),</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4d3b4dad3bdbdb96), <span class="pl-c1">C64e</span>(0xfa56fac85664649e),</td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd24ed2e84e7474a6), <span class="pl-c1">C64e</span>(0x221e22281e141436),</td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x76db763fdb9292e4), <span class="pl-c1">C64e</span>(0x1e0a1e180a0c0c12),</td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb46cb4906c4848fc), <span class="pl-c1">C64e</span>(0x37e4376be4b8b88f),</td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe75de7255d9f9f78), <span class="pl-c1">C64e</span>(0xb26eb2616ebdbd0f),</td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2aef2a86ef434369), <span class="pl-c1">C64e</span>(0xf1a6f193a6c4c435),</td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe3a8e372a83939da), <span class="pl-c1">C64e</span>(0xf7a4f762a43131c6),</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x593759bd37d3d38a), <span class="pl-c1">C64e</span>(0x868b86ff8bf2f274),</td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x563256b132d5d583), <span class="pl-c1">C64e</span>(0xc543c50d438b8b4e),</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeb59ebdc596e6e85), <span class="pl-c1">C64e</span>(0xc2b7c2afb7dada18),</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8f8c8f028c01018e), <span class="pl-c1">C64e</span>(0xac64ac7964b1b11d),</td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6dd26d23d29c9cf1), <span class="pl-c1">C64e</span>(0x3be03b92e0494972),</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc7b4c7abb4d8d81f), <span class="pl-c1">C64e</span>(0x15fa1543faacacb9),</td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x090709fd07f3f3fa), <span class="pl-c1">C64e</span>(0x6f256f8525cfcfa0),</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeaafea8fafcaca20), <span class="pl-c1">C64e</span>(0x898e89f38ef4f47d),</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x20e9208ee9474767), <span class="pl-c1">C64e</span>(0x2818282018101038),</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x64d564ded56f6f0b), <span class="pl-c1">C64e</span>(0x838883fb88f0f073),</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb16fb1946f4a4afb), <span class="pl-c1">C64e</span>(0x967296b8725c5cca),</td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6c246c7024383854), <span class="pl-c1">C64e</span>(0x08f108aef157575f),</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x52c752e6c7737321), <span class="pl-c1">C64e</span>(0xf351f33551979764),</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6523658d23cbcbae), <span class="pl-c1">C64e</span>(0x847c84597ca1a125),</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbf9cbfcb9ce8e857), <span class="pl-c1">C64e</span>(0x6321637c213e3e5d),</td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7cdd7c37dd9696ea), <span class="pl-c1">C64e</span>(0x7fdc7fc2dc61611e),</td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9186911a860d0d9c), <span class="pl-c1">C64e</span>(0x9485941e850f0f9b),</td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xab90abdb90e0e04b), <span class="pl-c1">C64e</span>(0xc642c6f8427c7cba),</td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x57c457e2c4717126), <span class="pl-c1">C64e</span>(0xe5aae583aacccc29),</td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x73d8733bd89090e3), <span class="pl-c1">C64e</span>(0x0f050f0c05060609),</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x030103f501f7f7f4), <span class="pl-c1">C64e</span>(0x36123638121c1c2a),</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfea3fe9fa3c2c23c), <span class="pl-c1">C64e</span>(0xe15fe1d45f6a6a8b),</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x10f91047f9aeaebe), <span class="pl-c1">C64e</span>(0x6bd06bd2d0696902),</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa891a82e911717bf), <span class="pl-c1">C64e</span>(0xe858e82958999971),</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x69276974273a3a53), <span class="pl-c1">C64e</span>(0xd0b9d04eb92727f7),</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x483848a938d9d991), <span class="pl-c1">C64e</span>(0x351335cd13ebebde),</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xceb3ce56b32b2be5), <span class="pl-c1">C64e</span>(0x5533554433222277),</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd6bbd6bfbbd2d204), <span class="pl-c1">C64e</span>(0x9070904970a9a939),</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8089800e89070787), <span class="pl-c1">C64e</span>(0xf2a7f266a73333c1),</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc1b6c15ab62d2dec), <span class="pl-c1">C64e</span>(0x66226678223c3c5a),</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xad92ad2a921515b8), <span class="pl-c1">C64e</span>(0x6020608920c9c9a9),</td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb49db154987875c), <span class="pl-c1">C64e</span>(0x1aff1a4fffaaaab0),</td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x887888a0785050d8), <span class="pl-c1">C64e</span>(0x8e7a8e517aa5a52b),</td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8a8f8a068f030389), <span class="pl-c1">C64e</span>(0x13f813b2f859594a),</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9b809b1280090992), <span class="pl-c1">C64e</span>(0x39173934171a1a23),</td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x75da75cada656510), <span class="pl-c1">C64e</span>(0x533153b531d7d784),</td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x51c65113c68484d5), <span class="pl-c1">C64e</span>(0xd3b8d3bbb8d0d003),</td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5ec35e1fc38282dc), <span class="pl-c1">C64e</span>(0xcbb0cb52b02929e2),</td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x997799b4775a5ac3), <span class="pl-c1">C64e</span>(0x3311333c111e1e2d),</td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x46cb46f6cb7b7b3d), <span class="pl-c1">C64e</span>(0x1ffc1f4bfca8a8b7),</td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x61d661dad66d6d0c), <span class="pl-c1">C64e</span>(0x4e3a4e583a2c2c62)</td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u64 T7[] = {</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x32f4a5f497a5c6c6), <span class="pl-c1">C64e</span>(0x6f978497eb84f8f8),</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5eb099b0c799eeee), <span class="pl-c1">C64e</span>(0x7a8c8d8cf78df6f6),</td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe8170d17e50dffff), <span class="pl-c1">C64e</span>(0x0adcbddcb7bdd6d6),</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x16c8b1c8a7b1dede), <span class="pl-c1">C64e</span>(0x6dfc54fc39549191),</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x90f050f0c0506060), <span class="pl-c1">C64e</span>(0x0705030504030202),</td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2ee0a9e087a9cece), <span class="pl-c1">C64e</span>(0xd1877d87ac7d5656),</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcc2b192bd519e7e7), <span class="pl-c1">C64e</span>(0x13a662a67162b5b5),</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7c31e6319ae64d4d), <span class="pl-c1">C64e</span>(0x59b59ab5c39aecec),</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x40cf45cf05458f8f), <span class="pl-c1">C64e</span>(0xa3bc9dbc3e9d1f1f),</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x49c040c009408989), <span class="pl-c1">C64e</span>(0x68928792ef87fafa),</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd03f153fc515efef), <span class="pl-c1">C64e</span>(0x9426eb267febb2b2),</td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xce40c94007c98e8e), <span class="pl-c1">C64e</span>(0xe61d0b1ded0bfbfb),</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6e2fec2f82ec4141), <span class="pl-c1">C64e</span>(0x1aa967a97d67b3b3),</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x431cfd1cbefd5f5f), <span class="pl-c1">C64e</span>(0x6025ea258aea4545),</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf9dabfda46bf2323), <span class="pl-c1">C64e</span>(0x5102f702a6f75353),</td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x45a196a1d396e4e4), <span class="pl-c1">C64e</span>(0x76ed5bed2d5b9b9b),</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x285dc25deac27575), <span class="pl-c1">C64e</span>(0xc5241c24d91ce1e1),</td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd4e9aee97aae3d3d), <span class="pl-c1">C64e</span>(0xf2be6abe986a4c4c),</td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x82ee5aeed85a6c6c), <span class="pl-c1">C64e</span>(0xbdc341c3fc417e7e),</td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf3060206f102f5f5), <span class="pl-c1">C64e</span>(0x52d14fd11d4f8383),</td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8ce45ce4d05c6868), <span class="pl-c1">C64e</span>(0x5607f407a2f45151),</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8d5c345cb934d1d1), <span class="pl-c1">C64e</span>(0xe1180818e908f9f9),</td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4cae93aedf93e2e2), <span class="pl-c1">C64e</span>(0x3e9573954d73abab),</td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x97f553f5c4536262), <span class="pl-c1">C64e</span>(0x6b413f41543f2a2a),</td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1c140c14100c0808), <span class="pl-c1">C64e</span>(0x63f652f631529595),</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe9af65af8c654646), <span class="pl-c1">C64e</span>(0x7fe25ee2215e9d9d),</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4878287860283030), <span class="pl-c1">C64e</span>(0xcff8a1f86ea13737),</td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1b110f11140f0a0a), <span class="pl-c1">C64e</span>(0xebc4b5c45eb52f2f),</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x151b091b1c090e0e), <span class="pl-c1">C64e</span>(0x7e5a365a48362424),</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xadb69bb6369b1b1b), <span class="pl-c1">C64e</span>(0x98473d47a53ddfdf),</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa76a266a8126cdcd), <span class="pl-c1">C64e</span>(0xf5bb69bb9c694e4e),</td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x334ccd4cfecd7f7f), <span class="pl-c1">C64e</span>(0x50ba9fbacf9feaea),</td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3f2d1b2d241b1212), <span class="pl-c1">C64e</span>(0xa4b99eb93a9e1d1d),</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc49c749cb0745858), <span class="pl-c1">C64e</span>(0x46722e72682e3434),</td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x41772d776c2d3636), <span class="pl-c1">C64e</span>(0x11cdb2cda3b2dcdc),</td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9d29ee2973eeb4b4), <span class="pl-c1">C64e</span>(0x4d16fb16b6fb5b5b),</td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa501f60153f6a4a4), <span class="pl-c1">C64e</span>(0xa1d74dd7ec4d7676),</td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x14a361a37561b7b7), <span class="pl-c1">C64e</span>(0x3449ce49face7d7d),</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdf8d7b8da47b5252), <span class="pl-c1">C64e</span>(0x9f423e42a13edddd),</td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xcd937193bc715e5e), <span class="pl-c1">C64e</span>(0xb1a297a226971313),</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa204f50457f5a6a6), <span class="pl-c1">C64e</span>(0x01b868b86968b9b9),</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0000000000000000), <span class="pl-c1">C64e</span>(0xb5742c74992cc1c1),</td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe0a060a080604040), <span class="pl-c1">C64e</span>(0xc2211f21dd1fe3e3),</td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3a43c843f2c87979), <span class="pl-c1">C64e</span>(0x9a2ced2c77edb6b6),</td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0dd9bed9b3bed4d4), <span class="pl-c1">C64e</span>(0x47ca46ca01468d8d),</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1770d970ced96767), <span class="pl-c1">C64e</span>(0xafdd4bdde44b7272),</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xed79de7933de9494), <span class="pl-c1">C64e</span>(0xff67d4672bd49898),</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9323e8237be8b0b0), <span class="pl-c1">C64e</span>(0x5bde4ade114a8585),</td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x06bd6bbd6d6bbbbb), <span class="pl-c1">C64e</span>(0xbb7e2a7e912ac5c5),</td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7b34e5349ee54f4f), <span class="pl-c1">C64e</span>(0xd73a163ac116eded),</td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd254c55417c58686), <span class="pl-c1">C64e</span>(0xf862d7622fd79a9a),</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x99ff55ffcc556666), <span class="pl-c1">C64e</span>(0xb6a794a722941111),</td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc04acf4a0fcf8a8a), <span class="pl-c1">C64e</span>(0xd9301030c910e9e9),</td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0e0a060a08060404), <span class="pl-c1">C64e</span>(0x66988198e781fefe),</td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xab0bf00b5bf0a0a0), <span class="pl-c1">C64e</span>(0xb4cc44ccf0447878),</td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf0d5bad54aba2525), <span class="pl-c1">C64e</span>(0x753ee33e96e34b4b),</td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xac0ef30e5ff3a2a2), <span class="pl-c1">C64e</span>(0x4419fe19bafe5d5d),</td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdb5bc05b1bc08080), <span class="pl-c1">C64e</span>(0x80858a850a8a0505),</td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd3ecadec7ead3f3f), <span class="pl-c1">C64e</span>(0xfedfbcdf42bc2121),</td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa8d848d8e0487070), <span class="pl-c1">C64e</span>(0xfd0c040cf904f1f1),</td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x197adf7ac6df6363), <span class="pl-c1">C64e</span>(0x2f58c158eec17777),</td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x309f759f4575afaf), <span class="pl-c1">C64e</span>(0xe7a563a584634242),</td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x7050305040302020), <span class="pl-c1">C64e</span>(0xcb2e1a2ed11ae5e5),</td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xef120e12e10efdfd), <span class="pl-c1">C64e</span>(0x08b76db7656dbfbf),</td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x55d44cd4194c8181), <span class="pl-c1">C64e</span>(0x243c143c30141818),</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x795f355f4c352626), <span class="pl-c1">C64e</span>(0xb2712f719d2fc3c3),</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8638e13867e1bebe), <span class="pl-c1">C64e</span>(0xc8fda2fd6aa23535),</td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc74fcc4f0bcc8888), <span class="pl-c1">C64e</span>(0x654b394b5c392e2e),</td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6af957f93d579393), <span class="pl-c1">C64e</span>(0x580df20daaf25555),</td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x619d829de382fcfc), <span class="pl-c1">C64e</span>(0xb3c947c9f4477a7a),</td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x27efacef8bacc8c8), <span class="pl-c1">C64e</span>(0x8832e7326fe7baba),</td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4f7d2b7d642b3232), <span class="pl-c1">C64e</span>(0x42a495a4d795e6e6),</td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3bfba0fb9ba0c0c0), <span class="pl-c1">C64e</span>(0xaab398b332981919),</td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf668d16827d19e9e), <span class="pl-c1">C64e</span>(0x22817f815d7fa3a3),</td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xeeaa66aa88664444), <span class="pl-c1">C64e</span>(0xd6827e82a87e5454),</td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdde6abe676ab3b3b), <span class="pl-c1">C64e</span>(0x959e839e16830b0b),</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc945ca4503ca8c8c), <span class="pl-c1">C64e</span>(0xbc7b297b9529c7c7),</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x056ed36ed6d36b6b), <span class="pl-c1">C64e</span>(0x6c443c44503c2828),</td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2c8b798b5579a7a7), <span class="pl-c1">C64e</span>(0x813de23d63e2bcbc),</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x31271d272c1d1616), <span class="pl-c1">C64e</span>(0x379a769a4176adad),</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x964d3b4dad3bdbdb), <span class="pl-c1">C64e</span>(0x9efa56fac8566464),</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xa6d24ed2e84e7474), <span class="pl-c1">C64e</span>(0x36221e22281e1414),</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe476db763fdb9292), <span class="pl-c1">C64e</span>(0x121e0a1e180a0c0c),</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfcb46cb4906c4848), <span class="pl-c1">C64e</span>(0x8f37e4376be4b8b8),</td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x78e75de7255d9f9f), <span class="pl-c1">C64e</span>(0x0fb26eb2616ebdbd),</td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x692aef2a86ef4343), <span class="pl-c1">C64e</span>(0x35f1a6f193a6c4c4),</td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdae3a8e372a83939), <span class="pl-c1">C64e</span>(0xc6f7a4f762a43131),</td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8a593759bd37d3d3), <span class="pl-c1">C64e</span>(0x74868b86ff8bf2f2),</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x83563256b132d5d5), <span class="pl-c1">C64e</span>(0x4ec543c50d438b8b),</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x85eb59ebdc596e6e), <span class="pl-c1">C64e</span>(0x18c2b7c2afb7dada),</td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x8e8f8c8f028c0101), <span class="pl-c1">C64e</span>(0x1dac64ac7964b1b1),</td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf16dd26d23d29c9c), <span class="pl-c1">C64e</span>(0x723be03b92e04949),</td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1fc7b4c7abb4d8d8), <span class="pl-c1">C64e</span>(0xb915fa1543faacac),</td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfa090709fd07f3f3), <span class="pl-c1">C64e</span>(0xa06f256f8525cfcf),</td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x20eaafea8fafcaca), <span class="pl-c1">C64e</span>(0x7d898e89f38ef4f4),</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x6720e9208ee94747), <span class="pl-c1">C64e</span>(0x3828182820181010),</td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0b64d564ded56f6f), <span class="pl-c1">C64e</span>(0x73838883fb88f0f0),</td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xfbb16fb1946f4a4a), <span class="pl-c1">C64e</span>(0xca967296b8725c5c),</td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x546c246c70243838), <span class="pl-c1">C64e</span>(0x5f08f108aef15757),</td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2152c752e6c77373), <span class="pl-c1">C64e</span>(0x64f351f335519797),</td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xae6523658d23cbcb), <span class="pl-c1">C64e</span>(0x25847c84597ca1a1),</td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x57bf9cbfcb9ce8e8), <span class="pl-c1">C64e</span>(0x5d6321637c213e3e),</td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xea7cdd7c37dd9696), <span class="pl-c1">C64e</span>(0x1e7fdc7fc2dc6161),</td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x9c9186911a860d0d), <span class="pl-c1">C64e</span>(0x9b9485941e850f0f),</td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x4bab90abdb90e0e0), <span class="pl-c1">C64e</span>(0xbac642c6f8427c7c),</td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x2657c457e2c47171), <span class="pl-c1">C64e</span>(0x29e5aae583aacccc),</td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe373d8733bd89090), <span class="pl-c1">C64e</span>(0x090f050f0c050606),</td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xf4030103f501f7f7), <span class="pl-c1">C64e</span>(0x2a36123638121c1c),</td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3cfea3fe9fa3c2c2), <span class="pl-c1">C64e</span>(0x8be15fe1d45f6a6a),</td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbe10f91047f9aeae), <span class="pl-c1">C64e</span>(0x026bd06bd2d06969),</td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xbfa891a82e911717), <span class="pl-c1">C64e</span>(0x71e858e829589999),</td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5369276974273a3a), <span class="pl-c1">C64e</span>(0xf7d0b9d04eb92727),</td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x91483848a938d9d9), <span class="pl-c1">C64e</span>(0xde351335cd13ebeb),</td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xe5ceb3ce56b32b2b), <span class="pl-c1">C64e</span>(0x7755335544332222),</td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x04d6bbd6bfbbd2d2), <span class="pl-c1">C64e</span>(0x399070904970a9a9),</td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x878089800e890707), <span class="pl-c1">C64e</span>(0xc1f2a7f266a73333),</td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xecc1b6c15ab62d2d), <span class="pl-c1">C64e</span>(0x5a66226678223c3c),</td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xb8ad92ad2a921515), <span class="pl-c1">C64e</span>(0xa96020608920c9c9),</td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x5cdb49db15498787), <span class="pl-c1">C64e</span>(0xb01aff1a4fffaaaa),</td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd8887888a0785050), <span class="pl-c1">C64e</span>(0x2b8e7a8e517aa5a5),</td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x898a8f8a068f0303), <span class="pl-c1">C64e</span>(0x4a13f813b2f85959),</td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x929b809b12800909), <span class="pl-c1">C64e</span>(0x2339173934171a1a),</td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x1075da75cada6565), <span class="pl-c1">C64e</span>(0x84533153b531d7d7),</td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xd551c65113c68484), <span class="pl-c1">C64e</span>(0x03d3b8d3bbb8d0d0),</td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xdc5ec35e1fc38282), <span class="pl-c1">C64e</span>(0xe2cbb0cb52b02929),</td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0xc3997799b4775a5a), <span class="pl-c1">C64e</span>(0x2d3311333c111e1e),</td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x3d46cb46f6cb7b7b), <span class="pl-c1">C64e</span>(0xb71ffc1f4bfca8a8),</td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C64e</span>(0x0c61d661dad66d6d), <span class="pl-c1">C64e</span>(0x624e3a4e583a2c2c)</td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">DECL_STATE_SMALL</span> \</td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">	sph_u64 H[<span class="pl-c1">8</span>];</td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">READ_STATE_SMALL</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(H, (sc)-&gt;state.<span class="pl-smi">wide</span>, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">WRITE_STATE_SMALL</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>((sc)-&gt;state.<span class="pl-smi">wide</span>, H, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RSTT</span>(<span class="pl-v">d, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line">		t[d] = T0[<span class="pl-c1">B64_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_1</span>(a[b1])],  <span class="pl-c1">8</span>) \</td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_2</span>(a[b2])], <span class="pl-c1">16</span>) \</td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_3</span>(a[b3])], <span class="pl-c1">24</span>) \</td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line">			^ T4[<span class="pl-c1">B64_4</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_5</span>(a[b5])],  <span class="pl-c1">8</span>) \</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_6</span>(a[b6])], <span class="pl-c1">16</span>) \</td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_7</span>(a[b7])], <span class="pl-c1">24</span>); \</td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RSTT</span>(<span class="pl-v">d, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line">		t[d] = T0[<span class="pl-c1">B64_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line">			^ T1[<span class="pl-c1">B64_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line">			^ T2[<span class="pl-c1">B64_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line">			^ T3[<span class="pl-c1">B64_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line">			^ T4[<span class="pl-c1">B64_4</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line">			^ T5[<span class="pl-c1">B64_5</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line">			^ T6[<span class="pl-c1">B64_6</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line">			^ T7[<span class="pl-c1">B64_7</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_SMALL_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">8</span>]; \</td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0</span>] ^= <span class="pl-c1">PC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">1</span>] ^= <span class="pl-c1">PC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">2</span>] ^= <span class="pl-c1">PC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">3</span>] ^= <span class="pl-c1">PC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">4</span>] ^= <span class="pl-c1">PC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">5</span>] ^= <span class="pl-c1">PC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">6</span>] ^= <span class="pl-c1">PC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">7</span>] ^= <span class="pl-c1">PC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">0</span>, a, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>); \</td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">1</span>, a, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">2</span>, a, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">3</span>, a, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>); \</td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">4</span>, a, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>); \</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">5</span>, a, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>); \</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">6</span>, a, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>); \</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">7</span>, a, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>); \</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0</span>] = t[<span class="pl-c1">0</span>]; \</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">1</span>] = t[<span class="pl-c1">1</span>]; \</td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">2</span>] = t[<span class="pl-c1">2</span>]; \</td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">3</span>] = t[<span class="pl-c1">3</span>]; \</td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">4</span>] = t[<span class="pl-c1">4</span>]; \</td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">5</span>] = t[<span class="pl-c1">5</span>]; \</td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">6</span>] = t[<span class="pl-c1">6</span>]; \</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">7</span>] = t[<span class="pl-c1">7</span>]; \</td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_SMALL_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">8</span>]; \</td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0</span>] ^= <span class="pl-c1">QC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">1</span>] ^= <span class="pl-c1">QC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">2</span>] ^= <span class="pl-c1">QC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">3</span>] ^= <span class="pl-c1">QC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">4</span>] ^= <span class="pl-c1">QC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">5</span>] ^= <span class="pl-c1">QC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">6</span>] ^= <span class="pl-c1">QC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">7</span>] ^= <span class="pl-c1">QC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">0</span>, a, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>); \</td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">1</span>, a, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>); \</td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">2</span>, a, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">3</span>, a, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">4</span>, a, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>); \</td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">5</span>, a, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>, <span class="pl-c1">5</span>, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>); \</td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">6</span>, a, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>, <span class="pl-c1">6</span>, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>); \</td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(<span class="pl-c1">7</span>, a, <span class="pl-c1">0</span>, <span class="pl-c1">2</span>, <span class="pl-c1">4</span>, <span class="pl-c1">6</span>, <span class="pl-c1">7</span>, <span class="pl-c1">1</span>, <span class="pl-c1">3</span>, <span class="pl-c1">5</span>); \</td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0</span>] = t[<span class="pl-c1">0</span>]; \</td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">1</span>] = t[<span class="pl-c1">1</span>]; \</td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">2</span>] = t[<span class="pl-c1">2</span>]; \</td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">3</span>] = t[<span class="pl-c1">3</span>]; \</td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">4</span>] = t[<span class="pl-c1">4</span>]; \</td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">5</span>] = t[<span class="pl-c1">5</span>]; \</td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">6</span>] = t[<span class="pl-c1">6</span>]; \</td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">7</span>] = t[<span class="pl-c1">7</span>]; \</td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Apparently, unrolling more than that confuses GCC, resulting in</span></td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * lower performance, even though L1 cache would be no problem.</span></td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">COMPRESS_SMALL</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line">		sph_u64 g[<span class="pl-c1">8</span>], m[<span class="pl-c1">8</span>]; \</td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">8</span>; u ++) { \</td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line">			m[u] = <span class="pl-c1">dec64e_aligned</span>(buf + (u &lt;&lt; <span class="pl-c1">3</span>)); \</td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line">			g[u] = m[u] ^ H[u]; \</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_P</span>(g); \</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_Q</span>(m); \</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">8</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">			H[u] ^= g[u] ^ m[u]; \</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">FINAL_SMALL</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line">		sph_u64 x[<span class="pl-c1">8</span>]; \</td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(x, H, <span class="pl-k">sizeof</span> x); \</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_P</span>(x); \</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">8</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">			H[u] ^= x[u]; \</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">DECL_STATE_BIG</span> \</td>
      </tr>
      <tr>
        <td id="L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="LC1377" class="blob-code blob-code-inner js-file-line">	sph_u64 H[<span class="pl-c1">16</span>];</td>
      </tr>
      <tr>
        <td id="L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="LC1378" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="LC1379" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">READ_STATE_BIG</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="LC1380" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(H, (sc)-&gt;state.<span class="pl-smi">wide</span>, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="LC1381" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="LC1382" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="LC1383" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">WRITE_STATE_BIG</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="LC1384" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>((sc)-&gt;state.<span class="pl-smi">wide</span>, H, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="LC1385" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="LC1386" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="LC1387" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="LC1388" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="LC1389" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RBTT</span>(<span class="pl-v">d, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="LC1390" class="blob-code blob-code-inner js-file-line">		t[d] = T0[<span class="pl-c1">B64_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="LC1391" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_1</span>(a[b1])],  <span class="pl-c1">8</span>) \</td>
      </tr>
      <tr>
        <td id="L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="LC1392" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_2</span>(a[b2])], <span class="pl-c1">16</span>) \</td>
      </tr>
      <tr>
        <td id="L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="LC1393" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T0[<span class="pl-c1">B64_3</span>(a[b3])], <span class="pl-c1">24</span>) \</td>
      </tr>
      <tr>
        <td id="L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="LC1394" class="blob-code blob-code-inner js-file-line">			^ T4[<span class="pl-c1">B64_4</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="LC1395" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_5</span>(a[b5])],  <span class="pl-c1">8</span>) \</td>
      </tr>
      <tr>
        <td id="L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="LC1396" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_6</span>(a[b6])], <span class="pl-c1">16</span>) \</td>
      </tr>
      <tr>
        <td id="L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="LC1397" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R64</span>(T4[<span class="pl-c1">B64_7</span>(a[b7])], <span class="pl-c1">24</span>); \</td>
      </tr>
      <tr>
        <td id="L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="LC1398" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="LC1399" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="LC1400" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="LC1401" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="LC1402" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RBTT</span>(<span class="pl-v">d, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="LC1403" class="blob-code blob-code-inner js-file-line">		t[d] = T0[<span class="pl-c1">B64_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="LC1404" class="blob-code blob-code-inner js-file-line">			^ T1[<span class="pl-c1">B64_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="LC1405" class="blob-code blob-code-inner js-file-line">			^ T2[<span class="pl-c1">B64_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="LC1406" class="blob-code blob-code-inner js-file-line">			^ T3[<span class="pl-c1">B64_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="LC1407" class="blob-code blob-code-inner js-file-line">			^ T4[<span class="pl-c1">B64_4</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="LC1408" class="blob-code blob-code-inner js-file-line">			^ T5[<span class="pl-c1">B64_5</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="LC1409" class="blob-code blob-code-inner js-file-line">			^ T6[<span class="pl-c1">B64_6</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="LC1410" class="blob-code blob-code-inner js-file-line">			^ T7[<span class="pl-c1">B64_7</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="LC1411" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="LC1412" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="LC1413" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="LC1414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="LC1415" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="LC1416" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="LC1417" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="LC1418" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="LC1419" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="LC1420" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">PC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="LC1421" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">PC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="LC1422" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">PC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="LC1423" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">PC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="LC1424" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">PC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="LC1425" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">PC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="LC1426" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">PC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="LC1427" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">PC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="LC1428" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">PC64</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="LC1429" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">PC64</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="LC1430" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">PC64</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="LC1431" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">PC64</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="LC1432" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">PC64</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="LC1433" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">PC64</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="LC1434" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">PC64</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="LC1435" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">PC64</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="LC1436" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u += <span class="pl-c1">4</span>) { \</td>
      </tr>
      <tr>
        <td id="L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="LC1437" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">0</span>, a, u + <span class="pl-c1">0</span>, (u + <span class="pl-c1">1</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="LC1438" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">2</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="LC1439" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">11</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="LC1440" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">1</span>, a, u + <span class="pl-c1">1</span>, (u + <span class="pl-c1">2</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="LC1441" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="LC1442" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">12</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="LC1443" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">2</span>, a, u + <span class="pl-c1">2</span>, (u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="LC1444" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="LC1445" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">8</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">13</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="LC1446" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">3</span>, a, u + <span class="pl-c1">3</span>, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="LC1447" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="LC1448" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">8</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">9</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">14</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="LC1449" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="LC1450" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="LC1451" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="LC1452" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="LC1453" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="LC1454" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="LC1455" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="LC1456" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">QC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="LC1457" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">QC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="LC1458" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">QC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="LC1459" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">QC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="LC1460" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">QC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="LC1461" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">QC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="LC1462" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">QC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="LC1463" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">QC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="LC1464" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">QC64</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="LC1465" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">QC64</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="LC1466" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">QC64</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="LC1467" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">QC64</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="LC1468" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">QC64</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="LC1469" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">QC64</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="LC1470" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">QC64</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="LC1471" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">QC64</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="LC1472" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u += <span class="pl-c1">4</span>) { \</td>
      </tr>
      <tr>
        <td id="L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="LC1473" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">0</span>, a, (u + <span class="pl-c1">1</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="LC1474" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">11</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">0</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="LC1475" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">2</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="LC1476" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">1</span>, a, (u + <span class="pl-c1">2</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="LC1477" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">12</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">1</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="LC1478" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="LC1479" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">2</span>, a, (u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="LC1480" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">13</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">2</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="LC1481" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">8</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="LC1482" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + <span class="pl-c1">3</span>, a, (u + <span class="pl-c1">4</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">6</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="LC1483" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">8</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">14</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">3</span>) &amp; <span class="pl-c1">0xF</span>, \</td>
      </tr>
      <tr>
        <td id="L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="LC1484" class="blob-code blob-code-inner js-file-line">				(u + <span class="pl-c1">5</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">7</span>) &amp; <span class="pl-c1">0xF</span>, (u + <span class="pl-c1">9</span>) &amp; <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="LC1485" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="LC1486" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="LC1487" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="LC1488" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="LC1489" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="LC1490" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="LC1491" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="LC1492" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="LC1493" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">PC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="LC1494" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">PC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="LC1495" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">PC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="LC1496" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">PC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="LC1497" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">PC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="LC1498" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">PC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="LC1499" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">PC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="LC1500" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">PC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="LC1501" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">PC64</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="LC1502" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">PC64</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="LC1503" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">PC64</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="LC1504" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">PC64</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="LC1505" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">PC64</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="LC1506" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">PC64</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="LC1507" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">PC64</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="LC1508" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">PC64</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="LC1509" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0, a, 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0xB); \</td>
      </tr>
      <tr>
        <td id="L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="LC1510" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1, a, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0xC); \</td>
      </tr>
      <tr>
        <td id="L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="LC1511" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x2, a, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0xD); \</td>
      </tr>
      <tr>
        <td id="L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="LC1512" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x3, a, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xE); \</td>
      </tr>
      <tr>
        <td id="L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="LC1513" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x4, a, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="LC1514" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x5, a, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0x0); \</td>
      </tr>
      <tr>
        <td id="L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="LC1515" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x6, a, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0x1); \</td>
      </tr>
      <tr>
        <td id="L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="LC1516" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x7, a, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0x2); \</td>
      </tr>
      <tr>
        <td id="L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="LC1517" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x8, a, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0x3); \</td>
      </tr>
      <tr>
        <td id="L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="LC1518" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x9, a, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, <span class="pl-c1">0xF</span>, 0x4); \</td>
      </tr>
      <tr>
        <td id="L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="LC1519" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xA, a, 0xA, 0xB, 0xC, 0xD, 0xE, <span class="pl-c1">0xF</span>, 0x0, 0x5); \</td>
      </tr>
      <tr>
        <td id="L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="LC1520" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xB, a, 0xB, 0xC, 0xD, 0xE, <span class="pl-c1">0xF</span>, 0x0, 0x1, 0x6); \</td>
      </tr>
      <tr>
        <td id="L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="LC1521" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xC, a, 0xC, 0xD, 0xE, <span class="pl-c1">0xF</span>, 0x0, 0x1, 0x2, 0x7); \</td>
      </tr>
      <tr>
        <td id="L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="LC1522" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xD, a, 0xD, 0xE, <span class="pl-c1">0xF</span>, 0x0, 0x1, 0x2, 0x3, 0x8); \</td>
      </tr>
      <tr>
        <td id="L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="LC1523" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xE, a, 0xE, <span class="pl-c1">0xF</span>, 0x0, 0x1, 0x2, 0x3, 0x4, 0x9); \</td>
      </tr>
      <tr>
        <td id="L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="LC1524" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(<span class="pl-c1">0xF</span>, a, <span class="pl-c1">0xF</span>, 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xA); \</td>
      </tr>
      <tr>
        <td id="L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="LC1525" class="blob-code blob-code-inner js-file-line">		a[0x0] = t[0x0]; \</td>
      </tr>
      <tr>
        <td id="L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="LC1526" class="blob-code blob-code-inner js-file-line">		a[0x1] = t[0x1]; \</td>
      </tr>
      <tr>
        <td id="L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="LC1527" class="blob-code blob-code-inner js-file-line">		a[0x2] = t[0x2]; \</td>
      </tr>
      <tr>
        <td id="L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="LC1528" class="blob-code blob-code-inner js-file-line">		a[0x3] = t[0x3]; \</td>
      </tr>
      <tr>
        <td id="L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="LC1529" class="blob-code blob-code-inner js-file-line">		a[0x4] = t[0x4]; \</td>
      </tr>
      <tr>
        <td id="L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="LC1530" class="blob-code blob-code-inner js-file-line">		a[0x5] = t[0x5]; \</td>
      </tr>
      <tr>
        <td id="L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="LC1531" class="blob-code blob-code-inner js-file-line">		a[0x6] = t[0x6]; \</td>
      </tr>
      <tr>
        <td id="L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="LC1532" class="blob-code blob-code-inner js-file-line">		a[0x7] = t[0x7]; \</td>
      </tr>
      <tr>
        <td id="L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="LC1533" class="blob-code blob-code-inner js-file-line">		a[0x8] = t[0x8]; \</td>
      </tr>
      <tr>
        <td id="L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="LC1534" class="blob-code blob-code-inner js-file-line">		a[0x9] = t[0x9]; \</td>
      </tr>
      <tr>
        <td id="L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="LC1535" class="blob-code blob-code-inner js-file-line">		a[0xA] = t[0xA]; \</td>
      </tr>
      <tr>
        <td id="L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="LC1536" class="blob-code blob-code-inner js-file-line">		a[0xB] = t[0xB]; \</td>
      </tr>
      <tr>
        <td id="L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="LC1537" class="blob-code blob-code-inner js-file-line">		a[0xC] = t[0xC]; \</td>
      </tr>
      <tr>
        <td id="L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="LC1538" class="blob-code blob-code-inner js-file-line">		a[0xD] = t[0xD]; \</td>
      </tr>
      <tr>
        <td id="L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="LC1539" class="blob-code blob-code-inner js-file-line">		a[0xE] = t[0xE]; \</td>
      </tr>
      <tr>
        <td id="L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="LC1540" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] = t[<span class="pl-c1">0xF</span>]; \</td>
      </tr>
      <tr>
        <td id="L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="LC1541" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="LC1542" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="LC1543" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="LC1544" class="blob-code blob-code-inner js-file-line">		sph_u64 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="LC1545" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">QC64</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="LC1546" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">QC64</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="LC1547" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">QC64</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="LC1548" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">QC64</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="LC1549" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">QC64</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="LC1550" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">QC64</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="LC1551" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">QC64</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="LC1552" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">QC64</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="LC1553" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">QC64</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="LC1554" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">QC64</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="LC1555" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">QC64</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="LC1556" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">QC64</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="LC1557" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">QC64</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="LC1558" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">QC64</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="LC1559" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">QC64</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="LC1560" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">QC64</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="LC1561" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0, a, 0x1, 0x3, 0x5, 0xB, 0x0, 0x2, 0x4, 0x6); \</td>
      </tr>
      <tr>
        <td id="L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="LC1562" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1, a, 0x2, 0x4, 0x6, 0xC, 0x1, 0x3, 0x5, 0x7); \</td>
      </tr>
      <tr>
        <td id="L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="LC1563" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x2, a, 0x3, 0x5, 0x7, 0xD, 0x2, 0x4, 0x6, 0x8); \</td>
      </tr>
      <tr>
        <td id="L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="LC1564" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x3, a, 0x4, 0x6, 0x8, 0xE, 0x3, 0x5, 0x7, 0x9); \</td>
      </tr>
      <tr>
        <td id="L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="LC1565" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x4, a, 0x5, 0x7, 0x9, <span class="pl-c1">0xF</span>, 0x4, 0x6, 0x8, 0xA); \</td>
      </tr>
      <tr>
        <td id="L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="LC1566" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x5, a, 0x6, 0x8, 0xA, 0x0, 0x5, 0x7, 0x9, 0xB); \</td>
      </tr>
      <tr>
        <td id="L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="LC1567" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x6, a, 0x7, 0x9, 0xB, 0x1, 0x6, 0x8, 0xA, 0xC); \</td>
      </tr>
      <tr>
        <td id="L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="LC1568" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x7, a, 0x8, 0xA, 0xC, 0x2, 0x7, 0x9, 0xB, 0xD); \</td>
      </tr>
      <tr>
        <td id="L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="LC1569" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x8, a, 0x9, 0xB, 0xD, 0x3, 0x8, 0xA, 0xC, 0xE); \</td>
      </tr>
      <tr>
        <td id="L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="LC1570" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x9, a, 0xA, 0xC, 0xE, 0x4, 0x9, 0xB, 0xD, <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="LC1571" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xA, a, 0xB, 0xD, <span class="pl-c1">0xF</span>, 0x5, 0xA, 0xC, 0xE, 0x0); \</td>
      </tr>
      <tr>
        <td id="L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="LC1572" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xB, a, 0xC, 0xE, 0x0, 0x6, 0xB, 0xD, <span class="pl-c1">0xF</span>, 0x1); \</td>
      </tr>
      <tr>
        <td id="L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="LC1573" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xC, a, 0xD, <span class="pl-c1">0xF</span>, 0x1, 0x7, 0xC, 0xE, 0x0, 0x2); \</td>
      </tr>
      <tr>
        <td id="L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="LC1574" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xD, a, 0xE, 0x0, 0x2, 0x8, 0xD, <span class="pl-c1">0xF</span>, 0x1, 0x3); \</td>
      </tr>
      <tr>
        <td id="L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="LC1575" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0xE, a, <span class="pl-c1">0xF</span>, 0x1, 0x3, 0x9, 0xE, 0x0, 0x2, 0x4); \</td>
      </tr>
      <tr>
        <td id="L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="LC1576" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(<span class="pl-c1">0xF</span>, a, 0x0, 0x2, 0x4, 0xA, <span class="pl-c1">0xF</span>, 0x1, 0x3, 0x5); \</td>
      </tr>
      <tr>
        <td id="L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="LC1577" class="blob-code blob-code-inner js-file-line">		a[0x0] = t[0x0]; \</td>
      </tr>
      <tr>
        <td id="L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="LC1578" class="blob-code blob-code-inner js-file-line">		a[0x1] = t[0x1]; \</td>
      </tr>
      <tr>
        <td id="L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="LC1579" class="blob-code blob-code-inner js-file-line">		a[0x2] = t[0x2]; \</td>
      </tr>
      <tr>
        <td id="L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="LC1580" class="blob-code blob-code-inner js-file-line">		a[0x3] = t[0x3]; \</td>
      </tr>
      <tr>
        <td id="L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="LC1581" class="blob-code blob-code-inner js-file-line">		a[0x4] = t[0x4]; \</td>
      </tr>
      <tr>
        <td id="L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="LC1582" class="blob-code blob-code-inner js-file-line">		a[0x5] = t[0x5]; \</td>
      </tr>
      <tr>
        <td id="L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="LC1583" class="blob-code blob-code-inner js-file-line">		a[0x6] = t[0x6]; \</td>
      </tr>
      <tr>
        <td id="L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="LC1584" class="blob-code blob-code-inner js-file-line">		a[0x7] = t[0x7]; \</td>
      </tr>
      <tr>
        <td id="L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="LC1585" class="blob-code blob-code-inner js-file-line">		a[0x8] = t[0x8]; \</td>
      </tr>
      <tr>
        <td id="L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="LC1586" class="blob-code blob-code-inner js-file-line">		a[0x9] = t[0x9]; \</td>
      </tr>
      <tr>
        <td id="L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="LC1587" class="blob-code blob-code-inner js-file-line">		a[0xA] = t[0xA]; \</td>
      </tr>
      <tr>
        <td id="L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="LC1588" class="blob-code blob-code-inner js-file-line">		a[0xB] = t[0xB]; \</td>
      </tr>
      <tr>
        <td id="L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="LC1589" class="blob-code blob-code-inner js-file-line">		a[0xC] = t[0xC]; \</td>
      </tr>
      <tr>
        <td id="L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="LC1590" class="blob-code blob-code-inner js-file-line">		a[0xD] = t[0xD]; \</td>
      </tr>
      <tr>
        <td id="L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="LC1591" class="blob-code blob-code-inner js-file-line">		a[0xE] = t[0xE]; \</td>
      </tr>
      <tr>
        <td id="L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="LC1592" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] = t[<span class="pl-c1">0xF</span>]; \</td>
      </tr>
      <tr>
        <td id="L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="LC1593" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="LC1594" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="LC1595" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="LC1596" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="LC1597" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="LC1598" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="LC1599" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="LC1600" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_P</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="LC1601" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_P</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="LC1602" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="LC1603" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="LC1604" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="LC1605" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="LC1606" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="LC1607" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="LC1608" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_Q</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="LC1609" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_Q</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="LC1610" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="LC1611" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="LC1612" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="LC1613" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> obsolete</span></td>
      </tr>
      <tr>
        <td id="L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="LC1614" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#if SPH_SMALL_FOOTPRINT_GROESTL</span></td>
      </tr>
      <tr>
        <td id="L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="LC1615" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="LC1616" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#define COMPRESS_BIG   do { \</span></td>
      </tr>
      <tr>
        <td id="L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="LC1617" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		sph_u64 g[16], m[16], *ya; \</span></td>
      </tr>
      <tr>
        <td id="L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="LC1618" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		const sph_u64 *yc; \</span></td>
      </tr>
      <tr>
        <td id="L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="LC1619" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		size_t u; \</span></td>
      </tr>
      <tr>
        <td id="L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="LC1620" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		int i; \</span></td>
      </tr>
      <tr>
        <td id="L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="LC1621" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		for (u = 0; u &lt; 16; u ++) { \</span></td>
      </tr>
      <tr>
        <td id="L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="LC1622" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			m[u] = dec64e_aligned(buf + (u &lt;&lt; 3)); \</span></td>
      </tr>
      <tr>
        <td id="L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="LC1623" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			g[u] = m[u] ^ H[u]; \</span></td>
      </tr>
      <tr>
        <td id="L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="LC1624" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		} \</span></td>
      </tr>
      <tr>
        <td id="L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="LC1625" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		ya = g; \</span></td>
      </tr>
      <tr>
        <td id="L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="LC1626" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		yc = CP; \</span></td>
      </tr>
      <tr>
        <td id="L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="LC1627" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		for (i = 0; i &lt; 2; i ++) { \</span></td>
      </tr>
      <tr>
        <td id="L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="LC1628" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			PERM_BIG(ya, yc); \</span></td>
      </tr>
      <tr>
        <td id="L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="LC1629" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			ya = m; \</span></td>
      </tr>
      <tr>
        <td id="L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="LC1630" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			yc = CQ; \</span></td>
      </tr>
      <tr>
        <td id="L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="LC1631" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		} \</span></td>
      </tr>
      <tr>
        <td id="L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="LC1632" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		for (u = 0; u &lt; 16; u ++) { \</span></td>
      </tr>
      <tr>
        <td id="L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="LC1633" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			H[u] ^= g[u] ^ m[u]; \</span></td>
      </tr>
      <tr>
        <td id="L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="LC1634" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		} \</span></td>
      </tr>
      <tr>
        <td id="L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="LC1635" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	} while (0)</span></td>
      </tr>
      <tr>
        <td id="L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="LC1636" class="blob-code blob-code-inner js-file-line"><span class="pl-c"></span></td>
      </tr>
      <tr>
        <td id="L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="LC1637" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#else</span></td>
      </tr>
      <tr>
        <td id="L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="LC1638" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="LC1639" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="LC1640" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">COMPRESS_BIG</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="LC1641" class="blob-code blob-code-inner js-file-line">		sph_u64 g[<span class="pl-c1">16</span>], m[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="LC1642" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="LC1643" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) { \</td>
      </tr>
      <tr>
        <td id="L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="LC1644" class="blob-code blob-code-inner js-file-line">			m[u] = <span class="pl-c1">dec64e_aligned</span>(buf + (u &lt;&lt; <span class="pl-c1">3</span>)); \</td>
      </tr>
      <tr>
        <td id="L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="LC1645" class="blob-code blob-code-inner js-file-line">			g[u] = m[u] ^ H[u]; \</td>
      </tr>
      <tr>
        <td id="L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="LC1646" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="LC1647" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_P</span>(g); \</td>
      </tr>
      <tr>
        <td id="L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="LC1648" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_Q</span>(m); \</td>
      </tr>
      <tr>
        <td id="L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="LC1649" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) { \</td>
      </tr>
      <tr>
        <td id="L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="LC1650" class="blob-code blob-code-inner js-file-line">			H[u] ^= g[u] ^ m[u]; \</td>
      </tr>
      <tr>
        <td id="L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="LC1651" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="LC1652" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="LC1653" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="LC1654" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> obsolete</span></td>
      </tr>
      <tr>
        <td id="L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="LC1655" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#endif</span></td>
      </tr>
      <tr>
        <td id="L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="LC1656" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="LC1657" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="LC1658" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">FINAL_BIG</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="LC1659" class="blob-code blob-code-inner js-file-line">		sph_u64 x[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="LC1660" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="LC1661" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(x, H, <span class="pl-k">sizeof</span> x); \</td>
      </tr>
      <tr>
        <td id="L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="LC1662" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_P</span>(x); \</td>
      </tr>
      <tr>
        <td id="L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="LC1663" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="LC1664" class="blob-code blob-code-inner js-file-line">			H[u] ^= x[u]; \</td>
      </tr>
      <tr>
        <td id="L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="LC1665" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="LC1666" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="LC1667" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="LC1668" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="LC1669" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T0up[] = {</td>
      </tr>
      <tr>
        <td id="L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="LC1670" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc632f4a5), <span class="pl-c1">C32e</span>(0xf86f9784), <span class="pl-c1">C32e</span>(0xee5eb099), <span class="pl-c1">C32e</span>(0xf67a8c8d),</td>
      </tr>
      <tr>
        <td id="L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="LC1671" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xffe8170d), <span class="pl-c1">C32e</span>(0xd60adcbd), <span class="pl-c1">C32e</span>(0xde16c8b1), <span class="pl-c1">C32e</span>(0x916dfc54),</td>
      </tr>
      <tr>
        <td id="L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="LC1672" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6090f050), <span class="pl-c1">C32e</span>(0x02070503), <span class="pl-c1">C32e</span>(0xce2ee0a9), <span class="pl-c1">C32e</span>(0x56d1877d),</td>
      </tr>
      <tr>
        <td id="L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="LC1673" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe7cc2b19), <span class="pl-c1">C32e</span>(0xb513a662), <span class="pl-c1">C32e</span>(0x4d7c31e6), <span class="pl-c1">C32e</span>(0xec59b59a),</td>
      </tr>
      <tr>
        <td id="L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="LC1674" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f40cf45), <span class="pl-c1">C32e</span>(0x1fa3bc9d), <span class="pl-c1">C32e</span>(0x8949c040), <span class="pl-c1">C32e</span>(0xfa689287),</td>
      </tr>
      <tr>
        <td id="L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="LC1675" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xefd03f15), <span class="pl-c1">C32e</span>(0xb29426eb), <span class="pl-c1">C32e</span>(0x8ece40c9), <span class="pl-c1">C32e</span>(0xfbe61d0b),</td>
      </tr>
      <tr>
        <td id="L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="LC1676" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x416e2fec), <span class="pl-c1">C32e</span>(0xb31aa967), <span class="pl-c1">C32e</span>(0x5f431cfd), <span class="pl-c1">C32e</span>(0x456025ea),</td>
      </tr>
      <tr>
        <td id="L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="LC1677" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x23f9dabf), <span class="pl-c1">C32e</span>(0x535102f7), <span class="pl-c1">C32e</span>(0xe445a196), <span class="pl-c1">C32e</span>(0x9b76ed5b),</td>
      </tr>
      <tr>
        <td id="L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="LC1678" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x75285dc2), <span class="pl-c1">C32e</span>(0xe1c5241c), <span class="pl-c1">C32e</span>(0x3dd4e9ae), <span class="pl-c1">C32e</span>(0x4cf2be6a),</td>
      </tr>
      <tr>
        <td id="L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="LC1679" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6c82ee5a), <span class="pl-c1">C32e</span>(0x7ebdc341), <span class="pl-c1">C32e</span>(0xf5f30602), <span class="pl-c1">C32e</span>(0x8352d14f),</td>
      </tr>
      <tr>
        <td id="L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="LC1680" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x688ce45c), <span class="pl-c1">C32e</span>(0x515607f4), <span class="pl-c1">C32e</span>(0xd18d5c34), <span class="pl-c1">C32e</span>(0xf9e11808),</td>
      </tr>
      <tr>
        <td id="L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="LC1681" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe24cae93), <span class="pl-c1">C32e</span>(0xab3e9573), <span class="pl-c1">C32e</span>(0x6297f553), <span class="pl-c1">C32e</span>(0x2a6b413f),</td>
      </tr>
      <tr>
        <td id="L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="LC1682" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x081c140c), <span class="pl-c1">C32e</span>(0x9563f652), <span class="pl-c1">C32e</span>(0x46e9af65), <span class="pl-c1">C32e</span>(0x9d7fe25e),</td>
      </tr>
      <tr>
        <td id="L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="LC1683" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x30487828), <span class="pl-c1">C32e</span>(0x37cff8a1), <span class="pl-c1">C32e</span>(0x0a1b110f), <span class="pl-c1">C32e</span>(0x2febc4b5),</td>
      </tr>
      <tr>
        <td id="L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="LC1684" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0e151b09), <span class="pl-c1">C32e</span>(0x247e5a36), <span class="pl-c1">C32e</span>(0x1badb69b), <span class="pl-c1">C32e</span>(0xdf98473d),</td>
      </tr>
      <tr>
        <td id="L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="LC1685" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcda76a26), <span class="pl-c1">C32e</span>(0x4ef5bb69), <span class="pl-c1">C32e</span>(0x7f334ccd), <span class="pl-c1">C32e</span>(0xea50ba9f),</td>
      </tr>
      <tr>
        <td id="L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="LC1686" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x123f2d1b), <span class="pl-c1">C32e</span>(0x1da4b99e), <span class="pl-c1">C32e</span>(0x58c49c74), <span class="pl-c1">C32e</span>(0x3446722e),</td>
      </tr>
      <tr>
        <td id="L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="LC1687" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3641772d), <span class="pl-c1">C32e</span>(0xdc11cdb2), <span class="pl-c1">C32e</span>(0xb49d29ee), <span class="pl-c1">C32e</span>(0x5b4d16fb),</td>
      </tr>
      <tr>
        <td id="L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="LC1688" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa4a501f6), <span class="pl-c1">C32e</span>(0x76a1d74d), <span class="pl-c1">C32e</span>(0xb714a361), <span class="pl-c1">C32e</span>(0x7d3449ce),</td>
      </tr>
      <tr>
        <td id="L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="LC1689" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x52df8d7b), <span class="pl-c1">C32e</span>(0xdd9f423e), <span class="pl-c1">C32e</span>(0x5ecd9371), <span class="pl-c1">C32e</span>(0x13b1a297),</td>
      </tr>
      <tr>
        <td id="L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="LC1690" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa6a204f5), <span class="pl-c1">C32e</span>(0xb901b868), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0xc1b5742c),</td>
      </tr>
      <tr>
        <td id="L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="LC1691" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x40e0a060), <span class="pl-c1">C32e</span>(0xe3c2211f), <span class="pl-c1">C32e</span>(0x793a43c8), <span class="pl-c1">C32e</span>(0xb69a2ced),</td>
      </tr>
      <tr>
        <td id="L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="LC1692" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd40dd9be), <span class="pl-c1">C32e</span>(0x8d47ca46), <span class="pl-c1">C32e</span>(0x671770d9), <span class="pl-c1">C32e</span>(0x72afdd4b),</td>
      </tr>
      <tr>
        <td id="L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="LC1693" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x94ed79de), <span class="pl-c1">C32e</span>(0x98ff67d4), <span class="pl-c1">C32e</span>(0xb09323e8), <span class="pl-c1">C32e</span>(0x855bde4a),</td>
      </tr>
      <tr>
        <td id="L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="LC1694" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbb06bd6b), <span class="pl-c1">C32e</span>(0xc5bb7e2a), <span class="pl-c1">C32e</span>(0x4f7b34e5), <span class="pl-c1">C32e</span>(0xedd73a16),</td>
      </tr>
      <tr>
        <td id="L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="LC1695" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x86d254c5), <span class="pl-c1">C32e</span>(0x9af862d7), <span class="pl-c1">C32e</span>(0x6699ff55), <span class="pl-c1">C32e</span>(0x11b6a794),</td>
      </tr>
      <tr>
        <td id="L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="LC1696" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8ac04acf), <span class="pl-c1">C32e</span>(0xe9d93010), <span class="pl-c1">C32e</span>(0x040e0a06), <span class="pl-c1">C32e</span>(0xfe669881),</td>
      </tr>
      <tr>
        <td id="L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="LC1697" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa0ab0bf0), <span class="pl-c1">C32e</span>(0x78b4cc44), <span class="pl-c1">C32e</span>(0x25f0d5ba), <span class="pl-c1">C32e</span>(0x4b753ee3),</td>
      </tr>
      <tr>
        <td id="L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="LC1698" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa2ac0ef3), <span class="pl-c1">C32e</span>(0x5d4419fe), <span class="pl-c1">C32e</span>(0x80db5bc0), <span class="pl-c1">C32e</span>(0x0580858a),</td>
      </tr>
      <tr>
        <td id="L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="LC1699" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3fd3ecad), <span class="pl-c1">C32e</span>(0x21fedfbc), <span class="pl-c1">C32e</span>(0x70a8d848), <span class="pl-c1">C32e</span>(0xf1fd0c04),</td>
      </tr>
      <tr>
        <td id="L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="LC1700" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x63197adf), <span class="pl-c1">C32e</span>(0x772f58c1), <span class="pl-c1">C32e</span>(0xaf309f75), <span class="pl-c1">C32e</span>(0x42e7a563),</td>
      </tr>
      <tr>
        <td id="L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="LC1701" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x20705030), <span class="pl-c1">C32e</span>(0xe5cb2e1a), <span class="pl-c1">C32e</span>(0xfdef120e), <span class="pl-c1">C32e</span>(0xbf08b76d),</td>
      </tr>
      <tr>
        <td id="L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="LC1702" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8155d44c), <span class="pl-c1">C32e</span>(0x18243c14), <span class="pl-c1">C32e</span>(0x26795f35), <span class="pl-c1">C32e</span>(0xc3b2712f),</td>
      </tr>
      <tr>
        <td id="L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="LC1703" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbe8638e1), <span class="pl-c1">C32e</span>(0x35c8fda2), <span class="pl-c1">C32e</span>(0x88c74fcc), <span class="pl-c1">C32e</span>(0x2e654b39),</td>
      </tr>
      <tr>
        <td id="L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="LC1704" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x936af957), <span class="pl-c1">C32e</span>(0x55580df2), <span class="pl-c1">C32e</span>(0xfc619d82), <span class="pl-c1">C32e</span>(0x7ab3c947),</td>
      </tr>
      <tr>
        <td id="L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="LC1705" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc827efac), <span class="pl-c1">C32e</span>(0xba8832e7), <span class="pl-c1">C32e</span>(0x324f7d2b), <span class="pl-c1">C32e</span>(0xe642a495),</td>
      </tr>
      <tr>
        <td id="L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="LC1706" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc03bfba0), <span class="pl-c1">C32e</span>(0x19aab398), <span class="pl-c1">C32e</span>(0x9ef668d1), <span class="pl-c1">C32e</span>(0xa322817f),</td>
      </tr>
      <tr>
        <td id="L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="LC1707" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x44eeaa66), <span class="pl-c1">C32e</span>(0x54d6827e), <span class="pl-c1">C32e</span>(0x3bdde6ab), <span class="pl-c1">C32e</span>(0x0b959e83),</td>
      </tr>
      <tr>
        <td id="L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="LC1708" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8cc945ca), <span class="pl-c1">C32e</span>(0xc7bc7b29), <span class="pl-c1">C32e</span>(0x6b056ed3), <span class="pl-c1">C32e</span>(0x286c443c),</td>
      </tr>
      <tr>
        <td id="L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="LC1709" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa72c8b79), <span class="pl-c1">C32e</span>(0xbc813de2), <span class="pl-c1">C32e</span>(0x1631271d), <span class="pl-c1">C32e</span>(0xad379a76),</td>
      </tr>
      <tr>
        <td id="L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="LC1710" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb964d3b), <span class="pl-c1">C32e</span>(0x649efa56), <span class="pl-c1">C32e</span>(0x74a6d24e), <span class="pl-c1">C32e</span>(0x1436221e),</td>
      </tr>
      <tr>
        <td id="L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="LC1711" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x92e476db), <span class="pl-c1">C32e</span>(0x0c121e0a), <span class="pl-c1">C32e</span>(0x48fcb46c), <span class="pl-c1">C32e</span>(0xb88f37e4),</td>
      </tr>
      <tr>
        <td id="L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="LC1712" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9f78e75d), <span class="pl-c1">C32e</span>(0xbd0fb26e), <span class="pl-c1">C32e</span>(0x43692aef), <span class="pl-c1">C32e</span>(0xc435f1a6),</td>
      </tr>
      <tr>
        <td id="L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="LC1713" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x39dae3a8), <span class="pl-c1">C32e</span>(0x31c6f7a4), <span class="pl-c1">C32e</span>(0xd38a5937), <span class="pl-c1">C32e</span>(0xf274868b),</td>
      </tr>
      <tr>
        <td id="L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="LC1714" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd5835632), <span class="pl-c1">C32e</span>(0x8b4ec543), <span class="pl-c1">C32e</span>(0x6e85eb59), <span class="pl-c1">C32e</span>(0xda18c2b7),</td>
      </tr>
      <tr>
        <td id="L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="LC1715" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x018e8f8c), <span class="pl-c1">C32e</span>(0xb11dac64), <span class="pl-c1">C32e</span>(0x9cf16dd2), <span class="pl-c1">C32e</span>(0x49723be0),</td>
      </tr>
      <tr>
        <td id="L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="LC1716" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd81fc7b4), <span class="pl-c1">C32e</span>(0xacb915fa), <span class="pl-c1">C32e</span>(0xf3fa0907), <span class="pl-c1">C32e</span>(0xcfa06f25),</td>
      </tr>
      <tr>
        <td id="L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="LC1717" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xca20eaaf), <span class="pl-c1">C32e</span>(0xf47d898e), <span class="pl-c1">C32e</span>(0x476720e9), <span class="pl-c1">C32e</span>(0x10382818),</td>
      </tr>
      <tr>
        <td id="L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="LC1718" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6f0b64d5), <span class="pl-c1">C32e</span>(0xf0738388), <span class="pl-c1">C32e</span>(0x4afbb16f), <span class="pl-c1">C32e</span>(0x5cca9672),</td>
      </tr>
      <tr>
        <td id="L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="LC1719" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x38546c24), <span class="pl-c1">C32e</span>(0x575f08f1), <span class="pl-c1">C32e</span>(0x732152c7), <span class="pl-c1">C32e</span>(0x9764f351),</td>
      </tr>
      <tr>
        <td id="L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="LC1720" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcbae6523), <span class="pl-c1">C32e</span>(0xa125847c), <span class="pl-c1">C32e</span>(0xe857bf9c), <span class="pl-c1">C32e</span>(0x3e5d6321),</td>
      </tr>
      <tr>
        <td id="L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="LC1721" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x96ea7cdd), <span class="pl-c1">C32e</span>(0x611e7fdc), <span class="pl-c1">C32e</span>(0x0d9c9186), <span class="pl-c1">C32e</span>(0x0f9b9485),</td>
      </tr>
      <tr>
        <td id="L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="LC1722" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe04bab90), <span class="pl-c1">C32e</span>(0x7cbac642), <span class="pl-c1">C32e</span>(0x712657c4), <span class="pl-c1">C32e</span>(0xcc29e5aa),</td>
      </tr>
      <tr>
        <td id="L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="LC1723" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x90e373d8), <span class="pl-c1">C32e</span>(0x06090f05), <span class="pl-c1">C32e</span>(0xf7f40301), <span class="pl-c1">C32e</span>(0x1c2a3612),</td>
      </tr>
      <tr>
        <td id="L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="LC1724" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc23cfea3), <span class="pl-c1">C32e</span>(0x6a8be15f), <span class="pl-c1">C32e</span>(0xaebe10f9), <span class="pl-c1">C32e</span>(0x69026bd0),</td>
      </tr>
      <tr>
        <td id="L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="LC1725" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x17bfa891), <span class="pl-c1">C32e</span>(0x9971e858), <span class="pl-c1">C32e</span>(0x3a536927), <span class="pl-c1">C32e</span>(0x27f7d0b9),</td>
      </tr>
      <tr>
        <td id="L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="LC1726" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd9914838), <span class="pl-c1">C32e</span>(0xebde3513), <span class="pl-c1">C32e</span>(0x2be5ceb3), <span class="pl-c1">C32e</span>(0x22775533),</td>
      </tr>
      <tr>
        <td id="L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="LC1727" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd204d6bb), <span class="pl-c1">C32e</span>(0xa9399070), <span class="pl-c1">C32e</span>(0x07878089), <span class="pl-c1">C32e</span>(0x33c1f2a7),</td>
      </tr>
      <tr>
        <td id="L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="LC1728" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2decc1b6), <span class="pl-c1">C32e</span>(0x3c5a6622), <span class="pl-c1">C32e</span>(0x15b8ad92), <span class="pl-c1">C32e</span>(0xc9a96020),</td>
      </tr>
      <tr>
        <td id="L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="LC1729" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x875cdb49), <span class="pl-c1">C32e</span>(0xaab01aff), <span class="pl-c1">C32e</span>(0x50d88878), <span class="pl-c1">C32e</span>(0xa52b8e7a),</td>
      </tr>
      <tr>
        <td id="L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="LC1730" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x03898a8f), <span class="pl-c1">C32e</span>(0x594a13f8), <span class="pl-c1">C32e</span>(0x09929b80), <span class="pl-c1">C32e</span>(0x1a233917),</td>
      </tr>
      <tr>
        <td id="L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="LC1731" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x651075da), <span class="pl-c1">C32e</span>(0xd7845331), <span class="pl-c1">C32e</span>(0x84d551c6), <span class="pl-c1">C32e</span>(0xd003d3b8),</td>
      </tr>
      <tr>
        <td id="L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="LC1732" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x82dc5ec3), <span class="pl-c1">C32e</span>(0x29e2cbb0), <span class="pl-c1">C32e</span>(0x5ac39977), <span class="pl-c1">C32e</span>(0x1e2d3311),</td>
      </tr>
      <tr>
        <td id="L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="LC1733" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7b3d46cb), <span class="pl-c1">C32e</span>(0xa8b71ffc), <span class="pl-c1">C32e</span>(0x6d0c61d6), <span class="pl-c1">C32e</span>(0x2c624e3a)</td>
      </tr>
      <tr>
        <td id="L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="LC1734" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="LC1735" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="LC1736" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T0dn[] = {</td>
      </tr>
      <tr>
        <td id="L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="LC1737" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf497a5c6), <span class="pl-c1">C32e</span>(0x97eb84f8), <span class="pl-c1">C32e</span>(0xb0c799ee), <span class="pl-c1">C32e</span>(0x8cf78df6),</td>
      </tr>
      <tr>
        <td id="L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="LC1738" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x17e50dff), <span class="pl-c1">C32e</span>(0xdcb7bdd6), <span class="pl-c1">C32e</span>(0xc8a7b1de), <span class="pl-c1">C32e</span>(0xfc395491),</td>
      </tr>
      <tr>
        <td id="L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="LC1739" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf0c05060), <span class="pl-c1">C32e</span>(0x05040302), <span class="pl-c1">C32e</span>(0xe087a9ce), <span class="pl-c1">C32e</span>(0x87ac7d56),</td>
      </tr>
      <tr>
        <td id="L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="LC1740" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2bd519e7), <span class="pl-c1">C32e</span>(0xa67162b5), <span class="pl-c1">C32e</span>(0x319ae64d), <span class="pl-c1">C32e</span>(0xb5c39aec),</td>
      </tr>
      <tr>
        <td id="L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="LC1741" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcf05458f), <span class="pl-c1">C32e</span>(0xbc3e9d1f), <span class="pl-c1">C32e</span>(0xc0094089), <span class="pl-c1">C32e</span>(0x92ef87fa),</td>
      </tr>
      <tr>
        <td id="L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="LC1742" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3fc515ef), <span class="pl-c1">C32e</span>(0x267febb2), <span class="pl-c1">C32e</span>(0x4007c98e), <span class="pl-c1">C32e</span>(0x1ded0bfb),</td>
      </tr>
      <tr>
        <td id="L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="LC1743" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2f82ec41), <span class="pl-c1">C32e</span>(0xa97d67b3), <span class="pl-c1">C32e</span>(0x1cbefd5f), <span class="pl-c1">C32e</span>(0x258aea45),</td>
      </tr>
      <tr>
        <td id="L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="LC1744" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xda46bf23), <span class="pl-c1">C32e</span>(0x02a6f753), <span class="pl-c1">C32e</span>(0xa1d396e4), <span class="pl-c1">C32e</span>(0xed2d5b9b),</td>
      </tr>
      <tr>
        <td id="L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="LC1745" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5deac275), <span class="pl-c1">C32e</span>(0x24d91ce1), <span class="pl-c1">C32e</span>(0xe97aae3d), <span class="pl-c1">C32e</span>(0xbe986a4c),</td>
      </tr>
      <tr>
        <td id="L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="LC1746" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xeed85a6c), <span class="pl-c1">C32e</span>(0xc3fc417e), <span class="pl-c1">C32e</span>(0x06f102f5), <span class="pl-c1">C32e</span>(0xd11d4f83),</td>
      </tr>
      <tr>
        <td id="L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="LC1747" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe4d05c68), <span class="pl-c1">C32e</span>(0x07a2f451), <span class="pl-c1">C32e</span>(0x5cb934d1), <span class="pl-c1">C32e</span>(0x18e908f9),</td>
      </tr>
      <tr>
        <td id="L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="LC1748" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xaedf93e2), <span class="pl-c1">C32e</span>(0x954d73ab), <span class="pl-c1">C32e</span>(0xf5c45362), <span class="pl-c1">C32e</span>(0x41543f2a),</td>
      </tr>
      <tr>
        <td id="L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="LC1749" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x14100c08), <span class="pl-c1">C32e</span>(0xf6315295), <span class="pl-c1">C32e</span>(0xaf8c6546), <span class="pl-c1">C32e</span>(0xe2215e9d),</td>
      </tr>
      <tr>
        <td id="L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="LC1750" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x78602830), <span class="pl-c1">C32e</span>(0xf86ea137), <span class="pl-c1">C32e</span>(0x11140f0a), <span class="pl-c1">C32e</span>(0xc45eb52f),</td>
      </tr>
      <tr>
        <td id="L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="LC1751" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1b1c090e), <span class="pl-c1">C32e</span>(0x5a483624), <span class="pl-c1">C32e</span>(0xb6369b1b), <span class="pl-c1">C32e</span>(0x47a53ddf),</td>
      </tr>
      <tr>
        <td id="L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="LC1752" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6a8126cd), <span class="pl-c1">C32e</span>(0xbb9c694e), <span class="pl-c1">C32e</span>(0x4cfecd7f), <span class="pl-c1">C32e</span>(0xbacf9fea),</td>
      </tr>
      <tr>
        <td id="L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="LC1753" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2d241b12), <span class="pl-c1">C32e</span>(0xb93a9e1d), <span class="pl-c1">C32e</span>(0x9cb07458), <span class="pl-c1">C32e</span>(0x72682e34),</td>
      </tr>
      <tr>
        <td id="L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="LC1754" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x776c2d36), <span class="pl-c1">C32e</span>(0xcda3b2dc), <span class="pl-c1">C32e</span>(0x2973eeb4), <span class="pl-c1">C32e</span>(0x16b6fb5b),</td>
      </tr>
      <tr>
        <td id="L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="LC1755" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0153f6a4), <span class="pl-c1">C32e</span>(0xd7ec4d76), <span class="pl-c1">C32e</span>(0xa37561b7), <span class="pl-c1">C32e</span>(0x49face7d),</td>
      </tr>
      <tr>
        <td id="L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="LC1756" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8da47b52), <span class="pl-c1">C32e</span>(0x42a13edd), <span class="pl-c1">C32e</span>(0x93bc715e), <span class="pl-c1">C32e</span>(0xa2269713),</td>
      </tr>
      <tr>
        <td id="L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="LC1757" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0457f5a6), <span class="pl-c1">C32e</span>(0xb86968b9), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0x74992cc1),</td>
      </tr>
      <tr>
        <td id="L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="LC1758" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa0806040), <span class="pl-c1">C32e</span>(0x21dd1fe3), <span class="pl-c1">C32e</span>(0x43f2c879), <span class="pl-c1">C32e</span>(0x2c77edb6),</td>
      </tr>
      <tr>
        <td id="L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="LC1759" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd9b3bed4), <span class="pl-c1">C32e</span>(0xca01468d), <span class="pl-c1">C32e</span>(0x70ced967), <span class="pl-c1">C32e</span>(0xdde44b72),</td>
      </tr>
      <tr>
        <td id="L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="LC1760" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7933de94), <span class="pl-c1">C32e</span>(0x672bd498), <span class="pl-c1">C32e</span>(0x237be8b0), <span class="pl-c1">C32e</span>(0xde114a85),</td>
      </tr>
      <tr>
        <td id="L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="LC1761" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbd6d6bbb), <span class="pl-c1">C32e</span>(0x7e912ac5), <span class="pl-c1">C32e</span>(0x349ee54f), <span class="pl-c1">C32e</span>(0x3ac116ed),</td>
      </tr>
      <tr>
        <td id="L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="LC1762" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5417c586), <span class="pl-c1">C32e</span>(0x622fd79a), <span class="pl-c1">C32e</span>(0xffcc5566), <span class="pl-c1">C32e</span>(0xa7229411),</td>
      </tr>
      <tr>
        <td id="L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="LC1763" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4a0fcf8a), <span class="pl-c1">C32e</span>(0x30c910e9), <span class="pl-c1">C32e</span>(0x0a080604), <span class="pl-c1">C32e</span>(0x98e781fe),</td>
      </tr>
      <tr>
        <td id="L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="LC1764" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0b5bf0a0), <span class="pl-c1">C32e</span>(0xccf04478), <span class="pl-c1">C32e</span>(0xd54aba25), <span class="pl-c1">C32e</span>(0x3e96e34b),</td>
      </tr>
      <tr>
        <td id="L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="LC1765" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0e5ff3a2), <span class="pl-c1">C32e</span>(0x19bafe5d), <span class="pl-c1">C32e</span>(0x5b1bc080), <span class="pl-c1">C32e</span>(0x850a8a05),</td>
      </tr>
      <tr>
        <td id="L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="LC1766" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xec7ead3f), <span class="pl-c1">C32e</span>(0xdf42bc21), <span class="pl-c1">C32e</span>(0xd8e04870), <span class="pl-c1">C32e</span>(0x0cf904f1),</td>
      </tr>
      <tr>
        <td id="L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="LC1767" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7ac6df63), <span class="pl-c1">C32e</span>(0x58eec177), <span class="pl-c1">C32e</span>(0x9f4575af), <span class="pl-c1">C32e</span>(0xa5846342),</td>
      </tr>
      <tr>
        <td id="L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="LC1768" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x50403020), <span class="pl-c1">C32e</span>(0x2ed11ae5), <span class="pl-c1">C32e</span>(0x12e10efd), <span class="pl-c1">C32e</span>(0xb7656dbf),</td>
      </tr>
      <tr>
        <td id="L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="LC1769" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd4194c81), <span class="pl-c1">C32e</span>(0x3c301418), <span class="pl-c1">C32e</span>(0x5f4c3526), <span class="pl-c1">C32e</span>(0x719d2fc3),</td>
      </tr>
      <tr>
        <td id="L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="LC1770" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3867e1be), <span class="pl-c1">C32e</span>(0xfd6aa235), <span class="pl-c1">C32e</span>(0x4f0bcc88), <span class="pl-c1">C32e</span>(0x4b5c392e),</td>
      </tr>
      <tr>
        <td id="L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="LC1771" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf93d5793), <span class="pl-c1">C32e</span>(0x0daaf255), <span class="pl-c1">C32e</span>(0x9de382fc), <span class="pl-c1">C32e</span>(0xc9f4477a),</td>
      </tr>
      <tr>
        <td id="L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="LC1772" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xef8bacc8), <span class="pl-c1">C32e</span>(0x326fe7ba), <span class="pl-c1">C32e</span>(0x7d642b32), <span class="pl-c1">C32e</span>(0xa4d795e6),</td>
      </tr>
      <tr>
        <td id="L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="LC1773" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xfb9ba0c0), <span class="pl-c1">C32e</span>(0xb3329819), <span class="pl-c1">C32e</span>(0x6827d19e), <span class="pl-c1">C32e</span>(0x815d7fa3),</td>
      </tr>
      <tr>
        <td id="L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="LC1774" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xaa886644), <span class="pl-c1">C32e</span>(0x82a87e54), <span class="pl-c1">C32e</span>(0xe676ab3b), <span class="pl-c1">C32e</span>(0x9e16830b),</td>
      </tr>
      <tr>
        <td id="L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="LC1775" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4503ca8c), <span class="pl-c1">C32e</span>(0x7b9529c7), <span class="pl-c1">C32e</span>(0x6ed6d36b), <span class="pl-c1">C32e</span>(0x44503c28),</td>
      </tr>
      <tr>
        <td id="L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="LC1776" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8b5579a7), <span class="pl-c1">C32e</span>(0x3d63e2bc), <span class="pl-c1">C32e</span>(0x272c1d16), <span class="pl-c1">C32e</span>(0x9a4176ad),</td>
      </tr>
      <tr>
        <td id="L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="LC1777" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4dad3bdb), <span class="pl-c1">C32e</span>(0xfac85664), <span class="pl-c1">C32e</span>(0xd2e84e74), <span class="pl-c1">C32e</span>(0x22281e14),</td>
      </tr>
      <tr>
        <td id="L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="LC1778" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x763fdb92), <span class="pl-c1">C32e</span>(0x1e180a0c), <span class="pl-c1">C32e</span>(0xb4906c48), <span class="pl-c1">C32e</span>(0x376be4b8),</td>
      </tr>
      <tr>
        <td id="L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="LC1779" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe7255d9f), <span class="pl-c1">C32e</span>(0xb2616ebd), <span class="pl-c1">C32e</span>(0x2a86ef43), <span class="pl-c1">C32e</span>(0xf193a6c4),</td>
      </tr>
      <tr>
        <td id="L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="LC1780" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe372a839), <span class="pl-c1">C32e</span>(0xf762a431), <span class="pl-c1">C32e</span>(0x59bd37d3), <span class="pl-c1">C32e</span>(0x86ff8bf2),</td>
      </tr>
      <tr>
        <td id="L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="LC1781" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x56b132d5), <span class="pl-c1">C32e</span>(0xc50d438b), <span class="pl-c1">C32e</span>(0xebdc596e), <span class="pl-c1">C32e</span>(0xc2afb7da),</td>
      </tr>
      <tr>
        <td id="L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="LC1782" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f028c01), <span class="pl-c1">C32e</span>(0xac7964b1), <span class="pl-c1">C32e</span>(0x6d23d29c), <span class="pl-c1">C32e</span>(0x3b92e049),</td>
      </tr>
      <tr>
        <td id="L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="LC1783" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc7abb4d8), <span class="pl-c1">C32e</span>(0x1543faac), <span class="pl-c1">C32e</span>(0x09fd07f3), <span class="pl-c1">C32e</span>(0x6f8525cf),</td>
      </tr>
      <tr>
        <td id="L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="LC1784" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xea8fafca), <span class="pl-c1">C32e</span>(0x89f38ef4), <span class="pl-c1">C32e</span>(0x208ee947), <span class="pl-c1">C32e</span>(0x28201810),</td>
      </tr>
      <tr>
        <td id="L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="LC1785" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x64ded56f), <span class="pl-c1">C32e</span>(0x83fb88f0), <span class="pl-c1">C32e</span>(0xb1946f4a), <span class="pl-c1">C32e</span>(0x96b8725c),</td>
      </tr>
      <tr>
        <td id="L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="LC1786" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6c702438), <span class="pl-c1">C32e</span>(0x08aef157), <span class="pl-c1">C32e</span>(0x52e6c773), <span class="pl-c1">C32e</span>(0xf3355197),</td>
      </tr>
      <tr>
        <td id="L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="LC1787" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x658d23cb), <span class="pl-c1">C32e</span>(0x84597ca1), <span class="pl-c1">C32e</span>(0xbfcb9ce8), <span class="pl-c1">C32e</span>(0x637c213e),</td>
      </tr>
      <tr>
        <td id="L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="LC1788" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7c37dd96), <span class="pl-c1">C32e</span>(0x7fc2dc61), <span class="pl-c1">C32e</span>(0x911a860d), <span class="pl-c1">C32e</span>(0x941e850f),</td>
      </tr>
      <tr>
        <td id="L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="LC1789" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xabdb90e0), <span class="pl-c1">C32e</span>(0xc6f8427c), <span class="pl-c1">C32e</span>(0x57e2c471), <span class="pl-c1">C32e</span>(0xe583aacc),</td>
      </tr>
      <tr>
        <td id="L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="LC1790" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x733bd890), <span class="pl-c1">C32e</span>(0x0f0c0506), <span class="pl-c1">C32e</span>(0x03f501f7), <span class="pl-c1">C32e</span>(0x3638121c),</td>
      </tr>
      <tr>
        <td id="L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="LC1791" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xfe9fa3c2), <span class="pl-c1">C32e</span>(0xe1d45f6a), <span class="pl-c1">C32e</span>(0x1047f9ae), <span class="pl-c1">C32e</span>(0x6bd2d069),</td>
      </tr>
      <tr>
        <td id="L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="LC1792" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa82e9117), <span class="pl-c1">C32e</span>(0xe8295899), <span class="pl-c1">C32e</span>(0x6974273a), <span class="pl-c1">C32e</span>(0xd04eb927),</td>
      </tr>
      <tr>
        <td id="L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="LC1793" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x48a938d9), <span class="pl-c1">C32e</span>(0x35cd13eb), <span class="pl-c1">C32e</span>(0xce56b32b), <span class="pl-c1">C32e</span>(0x55443322),</td>
      </tr>
      <tr>
        <td id="L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="LC1794" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd6bfbbd2), <span class="pl-c1">C32e</span>(0x904970a9), <span class="pl-c1">C32e</span>(0x800e8907), <span class="pl-c1">C32e</span>(0xf266a733),</td>
      </tr>
      <tr>
        <td id="L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="LC1795" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc15ab62d), <span class="pl-c1">C32e</span>(0x6678223c), <span class="pl-c1">C32e</span>(0xad2a9215), <span class="pl-c1">C32e</span>(0x608920c9),</td>
      </tr>
      <tr>
        <td id="L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="LC1796" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb154987), <span class="pl-c1">C32e</span>(0x1a4fffaa), <span class="pl-c1">C32e</span>(0x88a07850), <span class="pl-c1">C32e</span>(0x8e517aa5),</td>
      </tr>
      <tr>
        <td id="L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="LC1797" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8a068f03), <span class="pl-c1">C32e</span>(0x13b2f859), <span class="pl-c1">C32e</span>(0x9b128009), <span class="pl-c1">C32e</span>(0x3934171a),</td>
      </tr>
      <tr>
        <td id="L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="LC1798" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x75cada65), <span class="pl-c1">C32e</span>(0x53b531d7), <span class="pl-c1">C32e</span>(0x5113c684), <span class="pl-c1">C32e</span>(0xd3bbb8d0),</td>
      </tr>
      <tr>
        <td id="L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="LC1799" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5e1fc382), <span class="pl-c1">C32e</span>(0xcb52b029), <span class="pl-c1">C32e</span>(0x99b4775a), <span class="pl-c1">C32e</span>(0x333c111e),</td>
      </tr>
      <tr>
        <td id="L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="LC1800" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x46f6cb7b), <span class="pl-c1">C32e</span>(0x1f4bfca8), <span class="pl-c1">C32e</span>(0x61dad66d), <span class="pl-c1">C32e</span>(0x4e583a2c)</td>
      </tr>
      <tr>
        <td id="L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="LC1801" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="LC1802" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="LC1803" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T1up[] = {</td>
      </tr>
      <tr>
        <td id="L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="LC1804" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc6c632f4), <span class="pl-c1">C32e</span>(0xf8f86f97), <span class="pl-c1">C32e</span>(0xeeee5eb0), <span class="pl-c1">C32e</span>(0xf6f67a8c),</td>
      </tr>
      <tr>
        <td id="L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="LC1805" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xffffe817), <span class="pl-c1">C32e</span>(0xd6d60adc), <span class="pl-c1">C32e</span>(0xdede16c8), <span class="pl-c1">C32e</span>(0x91916dfc),</td>
      </tr>
      <tr>
        <td id="L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="LC1806" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x606090f0), <span class="pl-c1">C32e</span>(0x02020705), <span class="pl-c1">C32e</span>(0xcece2ee0), <span class="pl-c1">C32e</span>(0x5656d187),</td>
      </tr>
      <tr>
        <td id="L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="LC1807" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe7e7cc2b), <span class="pl-c1">C32e</span>(0xb5b513a6), <span class="pl-c1">C32e</span>(0x4d4d7c31), <span class="pl-c1">C32e</span>(0xecec59b5),</td>
      </tr>
      <tr>
        <td id="L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="LC1808" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f8f40cf), <span class="pl-c1">C32e</span>(0x1f1fa3bc), <span class="pl-c1">C32e</span>(0x898949c0), <span class="pl-c1">C32e</span>(0xfafa6892),</td>
      </tr>
      <tr>
        <td id="L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="LC1809" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xefefd03f), <span class="pl-c1">C32e</span>(0xb2b29426), <span class="pl-c1">C32e</span>(0x8e8ece40), <span class="pl-c1">C32e</span>(0xfbfbe61d),</td>
      </tr>
      <tr>
        <td id="L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="LC1810" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x41416e2f), <span class="pl-c1">C32e</span>(0xb3b31aa9), <span class="pl-c1">C32e</span>(0x5f5f431c), <span class="pl-c1">C32e</span>(0x45456025),</td>
      </tr>
      <tr>
        <td id="L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="LC1811" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2323f9da), <span class="pl-c1">C32e</span>(0x53535102), <span class="pl-c1">C32e</span>(0xe4e445a1), <span class="pl-c1">C32e</span>(0x9b9b76ed),</td>
      </tr>
      <tr>
        <td id="L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="LC1812" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7575285d), <span class="pl-c1">C32e</span>(0xe1e1c524), <span class="pl-c1">C32e</span>(0x3d3dd4e9), <span class="pl-c1">C32e</span>(0x4c4cf2be),</td>
      </tr>
      <tr>
        <td id="L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="LC1813" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6c6c82ee), <span class="pl-c1">C32e</span>(0x7e7ebdc3), <span class="pl-c1">C32e</span>(0xf5f5f306), <span class="pl-c1">C32e</span>(0x838352d1),</td>
      </tr>
      <tr>
        <td id="L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="LC1814" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x68688ce4), <span class="pl-c1">C32e</span>(0x51515607), <span class="pl-c1">C32e</span>(0xd1d18d5c), <span class="pl-c1">C32e</span>(0xf9f9e118),</td>
      </tr>
      <tr>
        <td id="L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="LC1815" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe2e24cae), <span class="pl-c1">C32e</span>(0xabab3e95), <span class="pl-c1">C32e</span>(0x626297f5), <span class="pl-c1">C32e</span>(0x2a2a6b41),</td>
      </tr>
      <tr>
        <td id="L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="LC1816" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x08081c14), <span class="pl-c1">C32e</span>(0x959563f6), <span class="pl-c1">C32e</span>(0x4646e9af), <span class="pl-c1">C32e</span>(0x9d9d7fe2),</td>
      </tr>
      <tr>
        <td id="L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="LC1817" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x30304878), <span class="pl-c1">C32e</span>(0x3737cff8), <span class="pl-c1">C32e</span>(0x0a0a1b11), <span class="pl-c1">C32e</span>(0x2f2febc4),</td>
      </tr>
      <tr>
        <td id="L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="LC1818" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0e0e151b), <span class="pl-c1">C32e</span>(0x24247e5a), <span class="pl-c1">C32e</span>(0x1b1badb6), <span class="pl-c1">C32e</span>(0xdfdf9847),</td>
      </tr>
      <tr>
        <td id="L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="LC1819" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcdcda76a), <span class="pl-c1">C32e</span>(0x4e4ef5bb), <span class="pl-c1">C32e</span>(0x7f7f334c), <span class="pl-c1">C32e</span>(0xeaea50ba),</td>
      </tr>
      <tr>
        <td id="L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="LC1820" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x12123f2d), <span class="pl-c1">C32e</span>(0x1d1da4b9), <span class="pl-c1">C32e</span>(0x5858c49c), <span class="pl-c1">C32e</span>(0x34344672),</td>
      </tr>
      <tr>
        <td id="L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="LC1821" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x36364177), <span class="pl-c1">C32e</span>(0xdcdc11cd), <span class="pl-c1">C32e</span>(0xb4b49d29), <span class="pl-c1">C32e</span>(0x5b5b4d16),</td>
      </tr>
      <tr>
        <td id="L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="LC1822" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa4a4a501), <span class="pl-c1">C32e</span>(0x7676a1d7), <span class="pl-c1">C32e</span>(0xb7b714a3), <span class="pl-c1">C32e</span>(0x7d7d3449),</td>
      </tr>
      <tr>
        <td id="L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="LC1823" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5252df8d), <span class="pl-c1">C32e</span>(0xdddd9f42), <span class="pl-c1">C32e</span>(0x5e5ecd93), <span class="pl-c1">C32e</span>(0x1313b1a2),</td>
      </tr>
      <tr>
        <td id="L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="LC1824" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa6a6a204), <span class="pl-c1">C32e</span>(0xb9b901b8), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0xc1c1b574),</td>
      </tr>
      <tr>
        <td id="L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="LC1825" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4040e0a0), <span class="pl-c1">C32e</span>(0xe3e3c221), <span class="pl-c1">C32e</span>(0x79793a43), <span class="pl-c1">C32e</span>(0xb6b69a2c),</td>
      </tr>
      <tr>
        <td id="L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="LC1826" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd4d40dd9), <span class="pl-c1">C32e</span>(0x8d8d47ca), <span class="pl-c1">C32e</span>(0x67671770), <span class="pl-c1">C32e</span>(0x7272afdd),</td>
      </tr>
      <tr>
        <td id="L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="LC1827" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9494ed79), <span class="pl-c1">C32e</span>(0x9898ff67), <span class="pl-c1">C32e</span>(0xb0b09323), <span class="pl-c1">C32e</span>(0x85855bde),</td>
      </tr>
      <tr>
        <td id="L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="LC1828" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbbbb06bd), <span class="pl-c1">C32e</span>(0xc5c5bb7e), <span class="pl-c1">C32e</span>(0x4f4f7b34), <span class="pl-c1">C32e</span>(0xededd73a),</td>
      </tr>
      <tr>
        <td id="L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="LC1829" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8686d254), <span class="pl-c1">C32e</span>(0x9a9af862), <span class="pl-c1">C32e</span>(0x666699ff), <span class="pl-c1">C32e</span>(0x1111b6a7),</td>
      </tr>
      <tr>
        <td id="L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="LC1830" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8a8ac04a), <span class="pl-c1">C32e</span>(0xe9e9d930), <span class="pl-c1">C32e</span>(0x04040e0a), <span class="pl-c1">C32e</span>(0xfefe6698),</td>
      </tr>
      <tr>
        <td id="L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="LC1831" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa0a0ab0b), <span class="pl-c1">C32e</span>(0x7878b4cc), <span class="pl-c1">C32e</span>(0x2525f0d5), <span class="pl-c1">C32e</span>(0x4b4b753e),</td>
      </tr>
      <tr>
        <td id="L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="LC1832" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa2a2ac0e), <span class="pl-c1">C32e</span>(0x5d5d4419), <span class="pl-c1">C32e</span>(0x8080db5b), <span class="pl-c1">C32e</span>(0x05058085),</td>
      </tr>
      <tr>
        <td id="L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="LC1833" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3f3fd3ec), <span class="pl-c1">C32e</span>(0x2121fedf), <span class="pl-c1">C32e</span>(0x7070a8d8), <span class="pl-c1">C32e</span>(0xf1f1fd0c),</td>
      </tr>
      <tr>
        <td id="L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="LC1834" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6363197a), <span class="pl-c1">C32e</span>(0x77772f58), <span class="pl-c1">C32e</span>(0xafaf309f), <span class="pl-c1">C32e</span>(0x4242e7a5),</td>
      </tr>
      <tr>
        <td id="L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="LC1835" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x20207050), <span class="pl-c1">C32e</span>(0xe5e5cb2e), <span class="pl-c1">C32e</span>(0xfdfdef12), <span class="pl-c1">C32e</span>(0xbfbf08b7),</td>
      </tr>
      <tr>
        <td id="L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="LC1836" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x818155d4), <span class="pl-c1">C32e</span>(0x1818243c), <span class="pl-c1">C32e</span>(0x2626795f), <span class="pl-c1">C32e</span>(0xc3c3b271),</td>
      </tr>
      <tr>
        <td id="L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="LC1837" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbebe8638), <span class="pl-c1">C32e</span>(0x3535c8fd), <span class="pl-c1">C32e</span>(0x8888c74f), <span class="pl-c1">C32e</span>(0x2e2e654b),</td>
      </tr>
      <tr>
        <td id="L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="LC1838" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x93936af9), <span class="pl-c1">C32e</span>(0x5555580d), <span class="pl-c1">C32e</span>(0xfcfc619d), <span class="pl-c1">C32e</span>(0x7a7ab3c9),</td>
      </tr>
      <tr>
        <td id="L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="LC1839" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc8c827ef), <span class="pl-c1">C32e</span>(0xbaba8832), <span class="pl-c1">C32e</span>(0x32324f7d), <span class="pl-c1">C32e</span>(0xe6e642a4),</td>
      </tr>
      <tr>
        <td id="L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="LC1840" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc0c03bfb), <span class="pl-c1">C32e</span>(0x1919aab3), <span class="pl-c1">C32e</span>(0x9e9ef668), <span class="pl-c1">C32e</span>(0xa3a32281),</td>
      </tr>
      <tr>
        <td id="L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="LC1841" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4444eeaa), <span class="pl-c1">C32e</span>(0x5454d682), <span class="pl-c1">C32e</span>(0x3b3bdde6), <span class="pl-c1">C32e</span>(0x0b0b959e),</td>
      </tr>
      <tr>
        <td id="L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="LC1842" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8c8cc945), <span class="pl-c1">C32e</span>(0xc7c7bc7b), <span class="pl-c1">C32e</span>(0x6b6b056e), <span class="pl-c1">C32e</span>(0x28286c44),</td>
      </tr>
      <tr>
        <td id="L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="LC1843" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa7a72c8b), <span class="pl-c1">C32e</span>(0xbcbc813d), <span class="pl-c1">C32e</span>(0x16163127), <span class="pl-c1">C32e</span>(0xadad379a),</td>
      </tr>
      <tr>
        <td id="L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="LC1844" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdbdb964d), <span class="pl-c1">C32e</span>(0x64649efa), <span class="pl-c1">C32e</span>(0x7474a6d2), <span class="pl-c1">C32e</span>(0x14143622),</td>
      </tr>
      <tr>
        <td id="L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="LC1845" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9292e476), <span class="pl-c1">C32e</span>(0x0c0c121e), <span class="pl-c1">C32e</span>(0x4848fcb4), <span class="pl-c1">C32e</span>(0xb8b88f37),</td>
      </tr>
      <tr>
        <td id="L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="LC1846" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9f9f78e7), <span class="pl-c1">C32e</span>(0xbdbd0fb2), <span class="pl-c1">C32e</span>(0x4343692a), <span class="pl-c1">C32e</span>(0xc4c435f1),</td>
      </tr>
      <tr>
        <td id="L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="LC1847" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3939dae3), <span class="pl-c1">C32e</span>(0x3131c6f7), <span class="pl-c1">C32e</span>(0xd3d38a59), <span class="pl-c1">C32e</span>(0xf2f27486),</td>
      </tr>
      <tr>
        <td id="L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="LC1848" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd5d58356), <span class="pl-c1">C32e</span>(0x8b8b4ec5), <span class="pl-c1">C32e</span>(0x6e6e85eb), <span class="pl-c1">C32e</span>(0xdada18c2),</td>
      </tr>
      <tr>
        <td id="L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="LC1849" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x01018e8f), <span class="pl-c1">C32e</span>(0xb1b11dac), <span class="pl-c1">C32e</span>(0x9c9cf16d), <span class="pl-c1">C32e</span>(0x4949723b),</td>
      </tr>
      <tr>
        <td id="L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="LC1850" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd8d81fc7), <span class="pl-c1">C32e</span>(0xacacb915), <span class="pl-c1">C32e</span>(0xf3f3fa09), <span class="pl-c1">C32e</span>(0xcfcfa06f),</td>
      </tr>
      <tr>
        <td id="L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="LC1851" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcaca20ea), <span class="pl-c1">C32e</span>(0xf4f47d89), <span class="pl-c1">C32e</span>(0x47476720), <span class="pl-c1">C32e</span>(0x10103828),</td>
      </tr>
      <tr>
        <td id="L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="LC1852" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6f6f0b64), <span class="pl-c1">C32e</span>(0xf0f07383), <span class="pl-c1">C32e</span>(0x4a4afbb1), <span class="pl-c1">C32e</span>(0x5c5cca96),</td>
      </tr>
      <tr>
        <td id="L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="LC1853" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3838546c), <span class="pl-c1">C32e</span>(0x57575f08), <span class="pl-c1">C32e</span>(0x73732152), <span class="pl-c1">C32e</span>(0x979764f3),</td>
      </tr>
      <tr>
        <td id="L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="LC1854" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcbcbae65), <span class="pl-c1">C32e</span>(0xa1a12584), <span class="pl-c1">C32e</span>(0xe8e857bf), <span class="pl-c1">C32e</span>(0x3e3e5d63),</td>
      </tr>
      <tr>
        <td id="L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="LC1855" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9696ea7c), <span class="pl-c1">C32e</span>(0x61611e7f), <span class="pl-c1">C32e</span>(0x0d0d9c91), <span class="pl-c1">C32e</span>(0x0f0f9b94),</td>
      </tr>
      <tr>
        <td id="L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="LC1856" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe0e04bab), <span class="pl-c1">C32e</span>(0x7c7cbac6), <span class="pl-c1">C32e</span>(0x71712657), <span class="pl-c1">C32e</span>(0xcccc29e5),</td>
      </tr>
      <tr>
        <td id="L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="LC1857" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9090e373), <span class="pl-c1">C32e</span>(0x0606090f), <span class="pl-c1">C32e</span>(0xf7f7f403), <span class="pl-c1">C32e</span>(0x1c1c2a36),</td>
      </tr>
      <tr>
        <td id="L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="LC1858" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc2c23cfe), <span class="pl-c1">C32e</span>(0x6a6a8be1), <span class="pl-c1">C32e</span>(0xaeaebe10), <span class="pl-c1">C32e</span>(0x6969026b),</td>
      </tr>
      <tr>
        <td id="L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="LC1859" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1717bfa8), <span class="pl-c1">C32e</span>(0x999971e8), <span class="pl-c1">C32e</span>(0x3a3a5369), <span class="pl-c1">C32e</span>(0x2727f7d0),</td>
      </tr>
      <tr>
        <td id="L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="LC1860" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd9d99148), <span class="pl-c1">C32e</span>(0xebebde35), <span class="pl-c1">C32e</span>(0x2b2be5ce), <span class="pl-c1">C32e</span>(0x22227755),</td>
      </tr>
      <tr>
        <td id="L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="LC1861" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd2d204d6), <span class="pl-c1">C32e</span>(0xa9a93990), <span class="pl-c1">C32e</span>(0x07078780), <span class="pl-c1">C32e</span>(0x3333c1f2),</td>
      </tr>
      <tr>
        <td id="L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="LC1862" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2d2decc1), <span class="pl-c1">C32e</span>(0x3c3c5a66), <span class="pl-c1">C32e</span>(0x1515b8ad), <span class="pl-c1">C32e</span>(0xc9c9a960),</td>
      </tr>
      <tr>
        <td id="L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="LC1863" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x87875cdb), <span class="pl-c1">C32e</span>(0xaaaab01a), <span class="pl-c1">C32e</span>(0x5050d888), <span class="pl-c1">C32e</span>(0xa5a52b8e),</td>
      </tr>
      <tr>
        <td id="L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="LC1864" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0303898a), <span class="pl-c1">C32e</span>(0x59594a13), <span class="pl-c1">C32e</span>(0x0909929b), <span class="pl-c1">C32e</span>(0x1a1a2339),</td>
      </tr>
      <tr>
        <td id="L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="LC1865" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x65651075), <span class="pl-c1">C32e</span>(0xd7d78453), <span class="pl-c1">C32e</span>(0x8484d551), <span class="pl-c1">C32e</span>(0xd0d003d3),</td>
      </tr>
      <tr>
        <td id="L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="LC1866" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8282dc5e), <span class="pl-c1">C32e</span>(0x2929e2cb), <span class="pl-c1">C32e</span>(0x5a5ac399), <span class="pl-c1">C32e</span>(0x1e1e2d33),</td>
      </tr>
      <tr>
        <td id="L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="LC1867" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7b7b3d46), <span class="pl-c1">C32e</span>(0xa8a8b71f), <span class="pl-c1">C32e</span>(0x6d6d0c61), <span class="pl-c1">C32e</span>(0x2c2c624e)</td>
      </tr>
      <tr>
        <td id="L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="LC1868" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="LC1869" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="LC1870" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T1dn[] = {</td>
      </tr>
      <tr>
        <td id="L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="LC1871" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa5f497a5), <span class="pl-c1">C32e</span>(0x8497eb84), <span class="pl-c1">C32e</span>(0x99b0c799), <span class="pl-c1">C32e</span>(0x8d8cf78d),</td>
      </tr>
      <tr>
        <td id="L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="LC1872" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0d17e50d), <span class="pl-c1">C32e</span>(0xbddcb7bd), <span class="pl-c1">C32e</span>(0xb1c8a7b1), <span class="pl-c1">C32e</span>(0x54fc3954),</td>
      </tr>
      <tr>
        <td id="L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="LC1873" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x50f0c050), <span class="pl-c1">C32e</span>(0x03050403), <span class="pl-c1">C32e</span>(0xa9e087a9), <span class="pl-c1">C32e</span>(0x7d87ac7d),</td>
      </tr>
      <tr>
        <td id="L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="LC1874" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x192bd519), <span class="pl-c1">C32e</span>(0x62a67162), <span class="pl-c1">C32e</span>(0xe6319ae6), <span class="pl-c1">C32e</span>(0x9ab5c39a),</td>
      </tr>
      <tr>
        <td id="L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="LC1875" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x45cf0545), <span class="pl-c1">C32e</span>(0x9dbc3e9d), <span class="pl-c1">C32e</span>(0x40c00940), <span class="pl-c1">C32e</span>(0x8792ef87),</td>
      </tr>
      <tr>
        <td id="L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="LC1876" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x153fc515), <span class="pl-c1">C32e</span>(0xeb267feb), <span class="pl-c1">C32e</span>(0xc94007c9), <span class="pl-c1">C32e</span>(0x0b1ded0b),</td>
      </tr>
      <tr>
        <td id="L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="LC1877" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xec2f82ec), <span class="pl-c1">C32e</span>(0x67a97d67), <span class="pl-c1">C32e</span>(0xfd1cbefd), <span class="pl-c1">C32e</span>(0xea258aea),</td>
      </tr>
      <tr>
        <td id="L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="LC1878" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbfda46bf), <span class="pl-c1">C32e</span>(0xf702a6f7), <span class="pl-c1">C32e</span>(0x96a1d396), <span class="pl-c1">C32e</span>(0x5bed2d5b),</td>
      </tr>
      <tr>
        <td id="L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="LC1879" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc25deac2), <span class="pl-c1">C32e</span>(0x1c24d91c), <span class="pl-c1">C32e</span>(0xaee97aae), <span class="pl-c1">C32e</span>(0x6abe986a),</td>
      </tr>
      <tr>
        <td id="L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="LC1880" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5aeed85a), <span class="pl-c1">C32e</span>(0x41c3fc41), <span class="pl-c1">C32e</span>(0x0206f102), <span class="pl-c1">C32e</span>(0x4fd11d4f),</td>
      </tr>
      <tr>
        <td id="L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="LC1881" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5ce4d05c), <span class="pl-c1">C32e</span>(0xf407a2f4), <span class="pl-c1">C32e</span>(0x345cb934), <span class="pl-c1">C32e</span>(0x0818e908),</td>
      </tr>
      <tr>
        <td id="L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="LC1882" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x93aedf93), <span class="pl-c1">C32e</span>(0x73954d73), <span class="pl-c1">C32e</span>(0x53f5c453), <span class="pl-c1">C32e</span>(0x3f41543f),</td>
      </tr>
      <tr>
        <td id="L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="LC1883" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0c14100c), <span class="pl-c1">C32e</span>(0x52f63152), <span class="pl-c1">C32e</span>(0x65af8c65), <span class="pl-c1">C32e</span>(0x5ee2215e),</td>
      </tr>
      <tr>
        <td id="L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="LC1884" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x28786028), <span class="pl-c1">C32e</span>(0xa1f86ea1), <span class="pl-c1">C32e</span>(0x0f11140f), <span class="pl-c1">C32e</span>(0xb5c45eb5),</td>
      </tr>
      <tr>
        <td id="L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="LC1885" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x091b1c09), <span class="pl-c1">C32e</span>(0x365a4836), <span class="pl-c1">C32e</span>(0x9bb6369b), <span class="pl-c1">C32e</span>(0x3d47a53d),</td>
      </tr>
      <tr>
        <td id="L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="LC1886" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x266a8126), <span class="pl-c1">C32e</span>(0x69bb9c69), <span class="pl-c1">C32e</span>(0xcd4cfecd), <span class="pl-c1">C32e</span>(0x9fbacf9f),</td>
      </tr>
      <tr>
        <td id="L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="LC1887" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1b2d241b), <span class="pl-c1">C32e</span>(0x9eb93a9e), <span class="pl-c1">C32e</span>(0x749cb074), <span class="pl-c1">C32e</span>(0x2e72682e),</td>
      </tr>
      <tr>
        <td id="L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="LC1888" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2d776c2d), <span class="pl-c1">C32e</span>(0xb2cda3b2), <span class="pl-c1">C32e</span>(0xee2973ee), <span class="pl-c1">C32e</span>(0xfb16b6fb),</td>
      </tr>
      <tr>
        <td id="L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="LC1889" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf60153f6), <span class="pl-c1">C32e</span>(0x4dd7ec4d), <span class="pl-c1">C32e</span>(0x61a37561), <span class="pl-c1">C32e</span>(0xce49face),</td>
      </tr>
      <tr>
        <td id="L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="LC1890" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7b8da47b), <span class="pl-c1">C32e</span>(0x3e42a13e), <span class="pl-c1">C32e</span>(0x7193bc71), <span class="pl-c1">C32e</span>(0x97a22697),</td>
      </tr>
      <tr>
        <td id="L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="LC1891" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf50457f5), <span class="pl-c1">C32e</span>(0x68b86968), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0x2c74992c),</td>
      </tr>
      <tr>
        <td id="L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="LC1892" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x60a08060), <span class="pl-c1">C32e</span>(0x1f21dd1f), <span class="pl-c1">C32e</span>(0xc843f2c8), <span class="pl-c1">C32e</span>(0xed2c77ed),</td>
      </tr>
      <tr>
        <td id="L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="LC1893" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbed9b3be), <span class="pl-c1">C32e</span>(0x46ca0146), <span class="pl-c1">C32e</span>(0xd970ced9), <span class="pl-c1">C32e</span>(0x4bdde44b),</td>
      </tr>
      <tr>
        <td id="L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="LC1894" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xde7933de), <span class="pl-c1">C32e</span>(0xd4672bd4), <span class="pl-c1">C32e</span>(0xe8237be8), <span class="pl-c1">C32e</span>(0x4ade114a),</td>
      </tr>
      <tr>
        <td id="L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="LC1895" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6bbd6d6b), <span class="pl-c1">C32e</span>(0x2a7e912a), <span class="pl-c1">C32e</span>(0xe5349ee5), <span class="pl-c1">C32e</span>(0x163ac116),</td>
      </tr>
      <tr>
        <td id="L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="LC1896" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc55417c5), <span class="pl-c1">C32e</span>(0xd7622fd7), <span class="pl-c1">C32e</span>(0x55ffcc55), <span class="pl-c1">C32e</span>(0x94a72294),</td>
      </tr>
      <tr>
        <td id="L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="LC1897" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcf4a0fcf), <span class="pl-c1">C32e</span>(0x1030c910), <span class="pl-c1">C32e</span>(0x060a0806), <span class="pl-c1">C32e</span>(0x8198e781),</td>
      </tr>
      <tr>
        <td id="L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="LC1898" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf00b5bf0), <span class="pl-c1">C32e</span>(0x44ccf044), <span class="pl-c1">C32e</span>(0xbad54aba), <span class="pl-c1">C32e</span>(0xe33e96e3),</td>
      </tr>
      <tr>
        <td id="L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="LC1899" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf30e5ff3), <span class="pl-c1">C32e</span>(0xfe19bafe), <span class="pl-c1">C32e</span>(0xc05b1bc0), <span class="pl-c1">C32e</span>(0x8a850a8a),</td>
      </tr>
      <tr>
        <td id="L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="LC1900" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xadec7ead), <span class="pl-c1">C32e</span>(0xbcdf42bc), <span class="pl-c1">C32e</span>(0x48d8e048), <span class="pl-c1">C32e</span>(0x040cf904),</td>
      </tr>
      <tr>
        <td id="L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="LC1901" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdf7ac6df), <span class="pl-c1">C32e</span>(0xc158eec1), <span class="pl-c1">C32e</span>(0x759f4575), <span class="pl-c1">C32e</span>(0x63a58463),</td>
      </tr>
      <tr>
        <td id="L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="LC1902" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x30504030), <span class="pl-c1">C32e</span>(0x1a2ed11a), <span class="pl-c1">C32e</span>(0x0e12e10e), <span class="pl-c1">C32e</span>(0x6db7656d),</td>
      </tr>
      <tr>
        <td id="L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="LC1903" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4cd4194c), <span class="pl-c1">C32e</span>(0x143c3014), <span class="pl-c1">C32e</span>(0x355f4c35), <span class="pl-c1">C32e</span>(0x2f719d2f),</td>
      </tr>
      <tr>
        <td id="L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="LC1904" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe13867e1), <span class="pl-c1">C32e</span>(0xa2fd6aa2), <span class="pl-c1">C32e</span>(0xcc4f0bcc), <span class="pl-c1">C32e</span>(0x394b5c39),</td>
      </tr>
      <tr>
        <td id="L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="LC1905" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x57f93d57), <span class="pl-c1">C32e</span>(0xf20daaf2), <span class="pl-c1">C32e</span>(0x829de382), <span class="pl-c1">C32e</span>(0x47c9f447),</td>
      </tr>
      <tr>
        <td id="L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="LC1906" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xacef8bac), <span class="pl-c1">C32e</span>(0xe7326fe7), <span class="pl-c1">C32e</span>(0x2b7d642b), <span class="pl-c1">C32e</span>(0x95a4d795),</td>
      </tr>
      <tr>
        <td id="L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="LC1907" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa0fb9ba0), <span class="pl-c1">C32e</span>(0x98b33298), <span class="pl-c1">C32e</span>(0xd16827d1), <span class="pl-c1">C32e</span>(0x7f815d7f),</td>
      </tr>
      <tr>
        <td id="L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="LC1908" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x66aa8866), <span class="pl-c1">C32e</span>(0x7e82a87e), <span class="pl-c1">C32e</span>(0xabe676ab), <span class="pl-c1">C32e</span>(0x839e1683),</td>
      </tr>
      <tr>
        <td id="L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="LC1909" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xca4503ca), <span class="pl-c1">C32e</span>(0x297b9529), <span class="pl-c1">C32e</span>(0xd36ed6d3), <span class="pl-c1">C32e</span>(0x3c44503c),</td>
      </tr>
      <tr>
        <td id="L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="LC1910" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x798b5579), <span class="pl-c1">C32e</span>(0xe23d63e2), <span class="pl-c1">C32e</span>(0x1d272c1d), <span class="pl-c1">C32e</span>(0x769a4176),</td>
      </tr>
      <tr>
        <td id="L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="LC1911" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3b4dad3b), <span class="pl-c1">C32e</span>(0x56fac856), <span class="pl-c1">C32e</span>(0x4ed2e84e), <span class="pl-c1">C32e</span>(0x1e22281e),</td>
      </tr>
      <tr>
        <td id="L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="LC1912" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb763fdb), <span class="pl-c1">C32e</span>(0x0a1e180a), <span class="pl-c1">C32e</span>(0x6cb4906c), <span class="pl-c1">C32e</span>(0xe4376be4),</td>
      </tr>
      <tr>
        <td id="L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="LC1913" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5de7255d), <span class="pl-c1">C32e</span>(0x6eb2616e), <span class="pl-c1">C32e</span>(0xef2a86ef), <span class="pl-c1">C32e</span>(0xa6f193a6),</td>
      </tr>
      <tr>
        <td id="L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="LC1914" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa8e372a8), <span class="pl-c1">C32e</span>(0xa4f762a4), <span class="pl-c1">C32e</span>(0x3759bd37), <span class="pl-c1">C32e</span>(0x8b86ff8b),</td>
      </tr>
      <tr>
        <td id="L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="LC1915" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3256b132), <span class="pl-c1">C32e</span>(0x43c50d43), <span class="pl-c1">C32e</span>(0x59ebdc59), <span class="pl-c1">C32e</span>(0xb7c2afb7),</td>
      </tr>
      <tr>
        <td id="L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="LC1916" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8c8f028c), <span class="pl-c1">C32e</span>(0x64ac7964), <span class="pl-c1">C32e</span>(0xd26d23d2), <span class="pl-c1">C32e</span>(0xe03b92e0),</td>
      </tr>
      <tr>
        <td id="L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="LC1917" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb4c7abb4), <span class="pl-c1">C32e</span>(0xfa1543fa), <span class="pl-c1">C32e</span>(0x0709fd07), <span class="pl-c1">C32e</span>(0x256f8525),</td>
      </tr>
      <tr>
        <td id="L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="LC1918" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xafea8faf), <span class="pl-c1">C32e</span>(0x8e89f38e), <span class="pl-c1">C32e</span>(0xe9208ee9), <span class="pl-c1">C32e</span>(0x18282018),</td>
      </tr>
      <tr>
        <td id="L1919" class="blob-num js-line-number" data-line-number="1919"></td>
        <td id="LC1919" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd564ded5), <span class="pl-c1">C32e</span>(0x8883fb88), <span class="pl-c1">C32e</span>(0x6fb1946f), <span class="pl-c1">C32e</span>(0x7296b872),</td>
      </tr>
      <tr>
        <td id="L1920" class="blob-num js-line-number" data-line-number="1920"></td>
        <td id="LC1920" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x246c7024), <span class="pl-c1">C32e</span>(0xf108aef1), <span class="pl-c1">C32e</span>(0xc752e6c7), <span class="pl-c1">C32e</span>(0x51f33551),</td>
      </tr>
      <tr>
        <td id="L1921" class="blob-num js-line-number" data-line-number="1921"></td>
        <td id="LC1921" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x23658d23), <span class="pl-c1">C32e</span>(0x7c84597c), <span class="pl-c1">C32e</span>(0x9cbfcb9c), <span class="pl-c1">C32e</span>(0x21637c21),</td>
      </tr>
      <tr>
        <td id="L1922" class="blob-num js-line-number" data-line-number="1922"></td>
        <td id="LC1922" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdd7c37dd), <span class="pl-c1">C32e</span>(0xdc7fc2dc), <span class="pl-c1">C32e</span>(0x86911a86), <span class="pl-c1">C32e</span>(0x85941e85),</td>
      </tr>
      <tr>
        <td id="L1923" class="blob-num js-line-number" data-line-number="1923"></td>
        <td id="LC1923" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x90abdb90), <span class="pl-c1">C32e</span>(0x42c6f842), <span class="pl-c1">C32e</span>(0xc457e2c4), <span class="pl-c1">C32e</span>(0xaae583aa),</td>
      </tr>
      <tr>
        <td id="L1924" class="blob-num js-line-number" data-line-number="1924"></td>
        <td id="LC1924" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd8733bd8), <span class="pl-c1">C32e</span>(0x050f0c05), <span class="pl-c1">C32e</span>(0x0103f501), <span class="pl-c1">C32e</span>(0x12363812),</td>
      </tr>
      <tr>
        <td id="L1925" class="blob-num js-line-number" data-line-number="1925"></td>
        <td id="LC1925" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa3fe9fa3), <span class="pl-c1">C32e</span>(0x5fe1d45f), <span class="pl-c1">C32e</span>(0xf91047f9), <span class="pl-c1">C32e</span>(0xd06bd2d0),</td>
      </tr>
      <tr>
        <td id="L1926" class="blob-num js-line-number" data-line-number="1926"></td>
        <td id="LC1926" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x91a82e91), <span class="pl-c1">C32e</span>(0x58e82958), <span class="pl-c1">C32e</span>(0x27697427), <span class="pl-c1">C32e</span>(0xb9d04eb9),</td>
      </tr>
      <tr>
        <td id="L1927" class="blob-num js-line-number" data-line-number="1927"></td>
        <td id="LC1927" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3848a938), <span class="pl-c1">C32e</span>(0x1335cd13), <span class="pl-c1">C32e</span>(0xb3ce56b3), <span class="pl-c1">C32e</span>(0x33554433),</td>
      </tr>
      <tr>
        <td id="L1928" class="blob-num js-line-number" data-line-number="1928"></td>
        <td id="LC1928" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbbd6bfbb), <span class="pl-c1">C32e</span>(0x70904970), <span class="pl-c1">C32e</span>(0x89800e89), <span class="pl-c1">C32e</span>(0xa7f266a7),</td>
      </tr>
      <tr>
        <td id="L1929" class="blob-num js-line-number" data-line-number="1929"></td>
        <td id="LC1929" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb6c15ab6), <span class="pl-c1">C32e</span>(0x22667822), <span class="pl-c1">C32e</span>(0x92ad2a92), <span class="pl-c1">C32e</span>(0x20608920),</td>
      </tr>
      <tr>
        <td id="L1930" class="blob-num js-line-number" data-line-number="1930"></td>
        <td id="LC1930" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x49db1549), <span class="pl-c1">C32e</span>(0xff1a4fff), <span class="pl-c1">C32e</span>(0x7888a078), <span class="pl-c1">C32e</span>(0x7a8e517a),</td>
      </tr>
      <tr>
        <td id="L1931" class="blob-num js-line-number" data-line-number="1931"></td>
        <td id="LC1931" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f8a068f), <span class="pl-c1">C32e</span>(0xf813b2f8), <span class="pl-c1">C32e</span>(0x809b1280), <span class="pl-c1">C32e</span>(0x17393417),</td>
      </tr>
      <tr>
        <td id="L1932" class="blob-num js-line-number" data-line-number="1932"></td>
        <td id="LC1932" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xda75cada), <span class="pl-c1">C32e</span>(0x3153b531), <span class="pl-c1">C32e</span>(0xc65113c6), <span class="pl-c1">C32e</span>(0xb8d3bbb8),</td>
      </tr>
      <tr>
        <td id="L1933" class="blob-num js-line-number" data-line-number="1933"></td>
        <td id="LC1933" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc35e1fc3), <span class="pl-c1">C32e</span>(0xb0cb52b0), <span class="pl-c1">C32e</span>(0x7799b477), <span class="pl-c1">C32e</span>(0x11333c11),</td>
      </tr>
      <tr>
        <td id="L1934" class="blob-num js-line-number" data-line-number="1934"></td>
        <td id="LC1934" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcb46f6cb), <span class="pl-c1">C32e</span>(0xfc1f4bfc), <span class="pl-c1">C32e</span>(0xd661dad6), <span class="pl-c1">C32e</span>(0x3a4e583a)</td>
      </tr>
      <tr>
        <td id="L1935" class="blob-num js-line-number" data-line-number="1935"></td>
        <td id="LC1935" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L1936" class="blob-num js-line-number" data-line-number="1936"></td>
        <td id="LC1936" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1937" class="blob-num js-line-number" data-line-number="1937"></td>
        <td id="LC1937" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T2up[] = {</td>
      </tr>
      <tr>
        <td id="L1938" class="blob-num js-line-number" data-line-number="1938"></td>
        <td id="LC1938" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa5c6c632), <span class="pl-c1">C32e</span>(0x84f8f86f), <span class="pl-c1">C32e</span>(0x99eeee5e), <span class="pl-c1">C32e</span>(0x8df6f67a),</td>
      </tr>
      <tr>
        <td id="L1939" class="blob-num js-line-number" data-line-number="1939"></td>
        <td id="LC1939" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0dffffe8), <span class="pl-c1">C32e</span>(0xbdd6d60a), <span class="pl-c1">C32e</span>(0xb1dede16), <span class="pl-c1">C32e</span>(0x5491916d),</td>
      </tr>
      <tr>
        <td id="L1940" class="blob-num js-line-number" data-line-number="1940"></td>
        <td id="LC1940" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x50606090), <span class="pl-c1">C32e</span>(0x03020207), <span class="pl-c1">C32e</span>(0xa9cece2e), <span class="pl-c1">C32e</span>(0x7d5656d1),</td>
      </tr>
      <tr>
        <td id="L1941" class="blob-num js-line-number" data-line-number="1941"></td>
        <td id="LC1941" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x19e7e7cc), <span class="pl-c1">C32e</span>(0x62b5b513), <span class="pl-c1">C32e</span>(0xe64d4d7c), <span class="pl-c1">C32e</span>(0x9aecec59),</td>
      </tr>
      <tr>
        <td id="L1942" class="blob-num js-line-number" data-line-number="1942"></td>
        <td id="LC1942" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x458f8f40), <span class="pl-c1">C32e</span>(0x9d1f1fa3), <span class="pl-c1">C32e</span>(0x40898949), <span class="pl-c1">C32e</span>(0x87fafa68),</td>
      </tr>
      <tr>
        <td id="L1943" class="blob-num js-line-number" data-line-number="1943"></td>
        <td id="LC1943" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x15efefd0), <span class="pl-c1">C32e</span>(0xebb2b294), <span class="pl-c1">C32e</span>(0xc98e8ece), <span class="pl-c1">C32e</span>(0x0bfbfbe6),</td>
      </tr>
      <tr>
        <td id="L1944" class="blob-num js-line-number" data-line-number="1944"></td>
        <td id="LC1944" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xec41416e), <span class="pl-c1">C32e</span>(0x67b3b31a), <span class="pl-c1">C32e</span>(0xfd5f5f43), <span class="pl-c1">C32e</span>(0xea454560),</td>
      </tr>
      <tr>
        <td id="L1945" class="blob-num js-line-number" data-line-number="1945"></td>
        <td id="LC1945" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbf2323f9), <span class="pl-c1">C32e</span>(0xf7535351), <span class="pl-c1">C32e</span>(0x96e4e445), <span class="pl-c1">C32e</span>(0x5b9b9b76),</td>
      </tr>
      <tr>
        <td id="L1946" class="blob-num js-line-number" data-line-number="1946"></td>
        <td id="LC1946" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc2757528), <span class="pl-c1">C32e</span>(0x1ce1e1c5), <span class="pl-c1">C32e</span>(0xae3d3dd4), <span class="pl-c1">C32e</span>(0x6a4c4cf2),</td>
      </tr>
      <tr>
        <td id="L1947" class="blob-num js-line-number" data-line-number="1947"></td>
        <td id="LC1947" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5a6c6c82), <span class="pl-c1">C32e</span>(0x417e7ebd), <span class="pl-c1">C32e</span>(0x02f5f5f3), <span class="pl-c1">C32e</span>(0x4f838352),</td>
      </tr>
      <tr>
        <td id="L1948" class="blob-num js-line-number" data-line-number="1948"></td>
        <td id="LC1948" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5c68688c), <span class="pl-c1">C32e</span>(0xf4515156), <span class="pl-c1">C32e</span>(0x34d1d18d), <span class="pl-c1">C32e</span>(0x08f9f9e1),</td>
      </tr>
      <tr>
        <td id="L1949" class="blob-num js-line-number" data-line-number="1949"></td>
        <td id="LC1949" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x93e2e24c), <span class="pl-c1">C32e</span>(0x73abab3e), <span class="pl-c1">C32e</span>(0x53626297), <span class="pl-c1">C32e</span>(0x3f2a2a6b),</td>
      </tr>
      <tr>
        <td id="L1950" class="blob-num js-line-number" data-line-number="1950"></td>
        <td id="LC1950" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0c08081c), <span class="pl-c1">C32e</span>(0x52959563), <span class="pl-c1">C32e</span>(0x654646e9), <span class="pl-c1">C32e</span>(0x5e9d9d7f),</td>
      </tr>
      <tr>
        <td id="L1951" class="blob-num js-line-number" data-line-number="1951"></td>
        <td id="LC1951" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x28303048), <span class="pl-c1">C32e</span>(0xa13737cf), <span class="pl-c1">C32e</span>(0x0f0a0a1b), <span class="pl-c1">C32e</span>(0xb52f2feb),</td>
      </tr>
      <tr>
        <td id="L1952" class="blob-num js-line-number" data-line-number="1952"></td>
        <td id="LC1952" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x090e0e15), <span class="pl-c1">C32e</span>(0x3624247e), <span class="pl-c1">C32e</span>(0x9b1b1bad), <span class="pl-c1">C32e</span>(0x3ddfdf98),</td>
      </tr>
      <tr>
        <td id="L1953" class="blob-num js-line-number" data-line-number="1953"></td>
        <td id="LC1953" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x26cdcda7), <span class="pl-c1">C32e</span>(0x694e4ef5), <span class="pl-c1">C32e</span>(0xcd7f7f33), <span class="pl-c1">C32e</span>(0x9feaea50),</td>
      </tr>
      <tr>
        <td id="L1954" class="blob-num js-line-number" data-line-number="1954"></td>
        <td id="LC1954" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1b12123f), <span class="pl-c1">C32e</span>(0x9e1d1da4), <span class="pl-c1">C32e</span>(0x745858c4), <span class="pl-c1">C32e</span>(0x2e343446),</td>
      </tr>
      <tr>
        <td id="L1955" class="blob-num js-line-number" data-line-number="1955"></td>
        <td id="LC1955" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2d363641), <span class="pl-c1">C32e</span>(0xb2dcdc11), <span class="pl-c1">C32e</span>(0xeeb4b49d), <span class="pl-c1">C32e</span>(0xfb5b5b4d),</td>
      </tr>
      <tr>
        <td id="L1956" class="blob-num js-line-number" data-line-number="1956"></td>
        <td id="LC1956" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf6a4a4a5), <span class="pl-c1">C32e</span>(0x4d7676a1), <span class="pl-c1">C32e</span>(0x61b7b714), <span class="pl-c1">C32e</span>(0xce7d7d34),</td>
      </tr>
      <tr>
        <td id="L1957" class="blob-num js-line-number" data-line-number="1957"></td>
        <td id="LC1957" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7b5252df), <span class="pl-c1">C32e</span>(0x3edddd9f), <span class="pl-c1">C32e</span>(0x715e5ecd), <span class="pl-c1">C32e</span>(0x971313b1),</td>
      </tr>
      <tr>
        <td id="L1958" class="blob-num js-line-number" data-line-number="1958"></td>
        <td id="LC1958" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf5a6a6a2), <span class="pl-c1">C32e</span>(0x68b9b901), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0x2cc1c1b5),</td>
      </tr>
      <tr>
        <td id="L1959" class="blob-num js-line-number" data-line-number="1959"></td>
        <td id="LC1959" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x604040e0), <span class="pl-c1">C32e</span>(0x1fe3e3c2), <span class="pl-c1">C32e</span>(0xc879793a), <span class="pl-c1">C32e</span>(0xedb6b69a),</td>
      </tr>
      <tr>
        <td id="L1960" class="blob-num js-line-number" data-line-number="1960"></td>
        <td id="LC1960" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbed4d40d), <span class="pl-c1">C32e</span>(0x468d8d47), <span class="pl-c1">C32e</span>(0xd9676717), <span class="pl-c1">C32e</span>(0x4b7272af),</td>
      </tr>
      <tr>
        <td id="L1961" class="blob-num js-line-number" data-line-number="1961"></td>
        <td id="LC1961" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xde9494ed), <span class="pl-c1">C32e</span>(0xd49898ff), <span class="pl-c1">C32e</span>(0xe8b0b093), <span class="pl-c1">C32e</span>(0x4a85855b),</td>
      </tr>
      <tr>
        <td id="L1962" class="blob-num js-line-number" data-line-number="1962"></td>
        <td id="LC1962" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6bbbbb06), <span class="pl-c1">C32e</span>(0x2ac5c5bb), <span class="pl-c1">C32e</span>(0xe54f4f7b), <span class="pl-c1">C32e</span>(0x16ededd7),</td>
      </tr>
      <tr>
        <td id="L1963" class="blob-num js-line-number" data-line-number="1963"></td>
        <td id="LC1963" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc58686d2), <span class="pl-c1">C32e</span>(0xd79a9af8), <span class="pl-c1">C32e</span>(0x55666699), <span class="pl-c1">C32e</span>(0x941111b6),</td>
      </tr>
      <tr>
        <td id="L1964" class="blob-num js-line-number" data-line-number="1964"></td>
        <td id="LC1964" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcf8a8ac0), <span class="pl-c1">C32e</span>(0x10e9e9d9), <span class="pl-c1">C32e</span>(0x0604040e), <span class="pl-c1">C32e</span>(0x81fefe66),</td>
      </tr>
      <tr>
        <td id="L1965" class="blob-num js-line-number" data-line-number="1965"></td>
        <td id="LC1965" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf0a0a0ab), <span class="pl-c1">C32e</span>(0x447878b4), <span class="pl-c1">C32e</span>(0xba2525f0), <span class="pl-c1">C32e</span>(0xe34b4b75),</td>
      </tr>
      <tr>
        <td id="L1966" class="blob-num js-line-number" data-line-number="1966"></td>
        <td id="LC1966" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf3a2a2ac), <span class="pl-c1">C32e</span>(0xfe5d5d44), <span class="pl-c1">C32e</span>(0xc08080db), <span class="pl-c1">C32e</span>(0x8a050580),</td>
      </tr>
      <tr>
        <td id="L1967" class="blob-num js-line-number" data-line-number="1967"></td>
        <td id="LC1967" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xad3f3fd3), <span class="pl-c1">C32e</span>(0xbc2121fe), <span class="pl-c1">C32e</span>(0x487070a8), <span class="pl-c1">C32e</span>(0x04f1f1fd),</td>
      </tr>
      <tr>
        <td id="L1968" class="blob-num js-line-number" data-line-number="1968"></td>
        <td id="LC1968" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdf636319), <span class="pl-c1">C32e</span>(0xc177772f), <span class="pl-c1">C32e</span>(0x75afaf30), <span class="pl-c1">C32e</span>(0x634242e7),</td>
      </tr>
      <tr>
        <td id="L1969" class="blob-num js-line-number" data-line-number="1969"></td>
        <td id="LC1969" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x30202070), <span class="pl-c1">C32e</span>(0x1ae5e5cb), <span class="pl-c1">C32e</span>(0x0efdfdef), <span class="pl-c1">C32e</span>(0x6dbfbf08),</td>
      </tr>
      <tr>
        <td id="L1970" class="blob-num js-line-number" data-line-number="1970"></td>
        <td id="LC1970" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4c818155), <span class="pl-c1">C32e</span>(0x14181824), <span class="pl-c1">C32e</span>(0x35262679), <span class="pl-c1">C32e</span>(0x2fc3c3b2),</td>
      </tr>
      <tr>
        <td id="L1971" class="blob-num js-line-number" data-line-number="1971"></td>
        <td id="LC1971" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe1bebe86), <span class="pl-c1">C32e</span>(0xa23535c8), <span class="pl-c1">C32e</span>(0xcc8888c7), <span class="pl-c1">C32e</span>(0x392e2e65),</td>
      </tr>
      <tr>
        <td id="L1972" class="blob-num js-line-number" data-line-number="1972"></td>
        <td id="LC1972" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5793936a), <span class="pl-c1">C32e</span>(0xf2555558), <span class="pl-c1">C32e</span>(0x82fcfc61), <span class="pl-c1">C32e</span>(0x477a7ab3),</td>
      </tr>
      <tr>
        <td id="L1973" class="blob-num js-line-number" data-line-number="1973"></td>
        <td id="LC1973" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xacc8c827), <span class="pl-c1">C32e</span>(0xe7baba88), <span class="pl-c1">C32e</span>(0x2b32324f), <span class="pl-c1">C32e</span>(0x95e6e642),</td>
      </tr>
      <tr>
        <td id="L1974" class="blob-num js-line-number" data-line-number="1974"></td>
        <td id="LC1974" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa0c0c03b), <span class="pl-c1">C32e</span>(0x981919aa), <span class="pl-c1">C32e</span>(0xd19e9ef6), <span class="pl-c1">C32e</span>(0x7fa3a322),</td>
      </tr>
      <tr>
        <td id="L1975" class="blob-num js-line-number" data-line-number="1975"></td>
        <td id="LC1975" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x664444ee), <span class="pl-c1">C32e</span>(0x7e5454d6), <span class="pl-c1">C32e</span>(0xab3b3bdd), <span class="pl-c1">C32e</span>(0x830b0b95),</td>
      </tr>
      <tr>
        <td id="L1976" class="blob-num js-line-number" data-line-number="1976"></td>
        <td id="LC1976" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xca8c8cc9), <span class="pl-c1">C32e</span>(0x29c7c7bc), <span class="pl-c1">C32e</span>(0xd36b6b05), <span class="pl-c1">C32e</span>(0x3c28286c),</td>
      </tr>
      <tr>
        <td id="L1977" class="blob-num js-line-number" data-line-number="1977"></td>
        <td id="LC1977" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x79a7a72c), <span class="pl-c1">C32e</span>(0xe2bcbc81), <span class="pl-c1">C32e</span>(0x1d161631), <span class="pl-c1">C32e</span>(0x76adad37),</td>
      </tr>
      <tr>
        <td id="L1978" class="blob-num js-line-number" data-line-number="1978"></td>
        <td id="LC1978" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3bdbdb96), <span class="pl-c1">C32e</span>(0x5664649e), <span class="pl-c1">C32e</span>(0x4e7474a6), <span class="pl-c1">C32e</span>(0x1e141436),</td>
      </tr>
      <tr>
        <td id="L1979" class="blob-num js-line-number" data-line-number="1979"></td>
        <td id="LC1979" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb9292e4), <span class="pl-c1">C32e</span>(0x0a0c0c12), <span class="pl-c1">C32e</span>(0x6c4848fc), <span class="pl-c1">C32e</span>(0xe4b8b88f),</td>
      </tr>
      <tr>
        <td id="L1980" class="blob-num js-line-number" data-line-number="1980"></td>
        <td id="LC1980" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5d9f9f78), <span class="pl-c1">C32e</span>(0x6ebdbd0f), <span class="pl-c1">C32e</span>(0xef434369), <span class="pl-c1">C32e</span>(0xa6c4c435),</td>
      </tr>
      <tr>
        <td id="L1981" class="blob-num js-line-number" data-line-number="1981"></td>
        <td id="LC1981" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa83939da), <span class="pl-c1">C32e</span>(0xa43131c6), <span class="pl-c1">C32e</span>(0x37d3d38a), <span class="pl-c1">C32e</span>(0x8bf2f274),</td>
      </tr>
      <tr>
        <td id="L1982" class="blob-num js-line-number" data-line-number="1982"></td>
        <td id="LC1982" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x32d5d583), <span class="pl-c1">C32e</span>(0x438b8b4e), <span class="pl-c1">C32e</span>(0x596e6e85), <span class="pl-c1">C32e</span>(0xb7dada18),</td>
      </tr>
      <tr>
        <td id="L1983" class="blob-num js-line-number" data-line-number="1983"></td>
        <td id="LC1983" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8c01018e), <span class="pl-c1">C32e</span>(0x64b1b11d), <span class="pl-c1">C32e</span>(0xd29c9cf1), <span class="pl-c1">C32e</span>(0xe0494972),</td>
      </tr>
      <tr>
        <td id="L1984" class="blob-num js-line-number" data-line-number="1984"></td>
        <td id="LC1984" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb4d8d81f), <span class="pl-c1">C32e</span>(0xfaacacb9), <span class="pl-c1">C32e</span>(0x07f3f3fa), <span class="pl-c1">C32e</span>(0x25cfcfa0),</td>
      </tr>
      <tr>
        <td id="L1985" class="blob-num js-line-number" data-line-number="1985"></td>
        <td id="LC1985" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xafcaca20), <span class="pl-c1">C32e</span>(0x8ef4f47d), <span class="pl-c1">C32e</span>(0xe9474767), <span class="pl-c1">C32e</span>(0x18101038),</td>
      </tr>
      <tr>
        <td id="L1986" class="blob-num js-line-number" data-line-number="1986"></td>
        <td id="LC1986" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd56f6f0b), <span class="pl-c1">C32e</span>(0x88f0f073), <span class="pl-c1">C32e</span>(0x6f4a4afb), <span class="pl-c1">C32e</span>(0x725c5cca),</td>
      </tr>
      <tr>
        <td id="L1987" class="blob-num js-line-number" data-line-number="1987"></td>
        <td id="LC1987" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x24383854), <span class="pl-c1">C32e</span>(0xf157575f), <span class="pl-c1">C32e</span>(0xc7737321), <span class="pl-c1">C32e</span>(0x51979764),</td>
      </tr>
      <tr>
        <td id="L1988" class="blob-num js-line-number" data-line-number="1988"></td>
        <td id="LC1988" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x23cbcbae), <span class="pl-c1">C32e</span>(0x7ca1a125), <span class="pl-c1">C32e</span>(0x9ce8e857), <span class="pl-c1">C32e</span>(0x213e3e5d),</td>
      </tr>
      <tr>
        <td id="L1989" class="blob-num js-line-number" data-line-number="1989"></td>
        <td id="LC1989" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdd9696ea), <span class="pl-c1">C32e</span>(0xdc61611e), <span class="pl-c1">C32e</span>(0x860d0d9c), <span class="pl-c1">C32e</span>(0x850f0f9b),</td>
      </tr>
      <tr>
        <td id="L1990" class="blob-num js-line-number" data-line-number="1990"></td>
        <td id="LC1990" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x90e0e04b), <span class="pl-c1">C32e</span>(0x427c7cba), <span class="pl-c1">C32e</span>(0xc4717126), <span class="pl-c1">C32e</span>(0xaacccc29),</td>
      </tr>
      <tr>
        <td id="L1991" class="blob-num js-line-number" data-line-number="1991"></td>
        <td id="LC1991" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd89090e3), <span class="pl-c1">C32e</span>(0x05060609), <span class="pl-c1">C32e</span>(0x01f7f7f4), <span class="pl-c1">C32e</span>(0x121c1c2a),</td>
      </tr>
      <tr>
        <td id="L1992" class="blob-num js-line-number" data-line-number="1992"></td>
        <td id="LC1992" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa3c2c23c), <span class="pl-c1">C32e</span>(0x5f6a6a8b), <span class="pl-c1">C32e</span>(0xf9aeaebe), <span class="pl-c1">C32e</span>(0xd0696902),</td>
      </tr>
      <tr>
        <td id="L1993" class="blob-num js-line-number" data-line-number="1993"></td>
        <td id="LC1993" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x911717bf), <span class="pl-c1">C32e</span>(0x58999971), <span class="pl-c1">C32e</span>(0x273a3a53), <span class="pl-c1">C32e</span>(0xb92727f7),</td>
      </tr>
      <tr>
        <td id="L1994" class="blob-num js-line-number" data-line-number="1994"></td>
        <td id="LC1994" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x38d9d991), <span class="pl-c1">C32e</span>(0x13ebebde), <span class="pl-c1">C32e</span>(0xb32b2be5), <span class="pl-c1">C32e</span>(0x33222277),</td>
      </tr>
      <tr>
        <td id="L1995" class="blob-num js-line-number" data-line-number="1995"></td>
        <td id="LC1995" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbbd2d204), <span class="pl-c1">C32e</span>(0x70a9a939), <span class="pl-c1">C32e</span>(0x89070787), <span class="pl-c1">C32e</span>(0xa73333c1),</td>
      </tr>
      <tr>
        <td id="L1996" class="blob-num js-line-number" data-line-number="1996"></td>
        <td id="LC1996" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb62d2dec), <span class="pl-c1">C32e</span>(0x223c3c5a), <span class="pl-c1">C32e</span>(0x921515b8), <span class="pl-c1">C32e</span>(0x20c9c9a9),</td>
      </tr>
      <tr>
        <td id="L1997" class="blob-num js-line-number" data-line-number="1997"></td>
        <td id="LC1997" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4987875c), <span class="pl-c1">C32e</span>(0xffaaaab0), <span class="pl-c1">C32e</span>(0x785050d8), <span class="pl-c1">C32e</span>(0x7aa5a52b),</td>
      </tr>
      <tr>
        <td id="L1998" class="blob-num js-line-number" data-line-number="1998"></td>
        <td id="LC1998" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f030389), <span class="pl-c1">C32e</span>(0xf859594a), <span class="pl-c1">C32e</span>(0x80090992), <span class="pl-c1">C32e</span>(0x171a1a23),</td>
      </tr>
      <tr>
        <td id="L1999" class="blob-num js-line-number" data-line-number="1999"></td>
        <td id="LC1999" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xda656510), <span class="pl-c1">C32e</span>(0x31d7d784), <span class="pl-c1">C32e</span>(0xc68484d5), <span class="pl-c1">C32e</span>(0xb8d0d003),</td>
      </tr>
      <tr>
        <td id="L2000" class="blob-num js-line-number" data-line-number="2000"></td>
        <td id="LC2000" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc38282dc), <span class="pl-c1">C32e</span>(0xb02929e2), <span class="pl-c1">C32e</span>(0x775a5ac3), <span class="pl-c1">C32e</span>(0x111e1e2d),</td>
      </tr>
      <tr>
        <td id="L2001" class="blob-num js-line-number" data-line-number="2001"></td>
        <td id="LC2001" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcb7b7b3d), <span class="pl-c1">C32e</span>(0xfca8a8b7), <span class="pl-c1">C32e</span>(0xd66d6d0c), <span class="pl-c1">C32e</span>(0x3a2c2c62)</td>
      </tr>
      <tr>
        <td id="L2002" class="blob-num js-line-number" data-line-number="2002"></td>
        <td id="LC2002" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2003" class="blob-num js-line-number" data-line-number="2003"></td>
        <td id="LC2003" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2004" class="blob-num js-line-number" data-line-number="2004"></td>
        <td id="LC2004" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T2dn[] = {</td>
      </tr>
      <tr>
        <td id="L2005" class="blob-num js-line-number" data-line-number="2005"></td>
        <td id="LC2005" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf4a5f497), <span class="pl-c1">C32e</span>(0x978497eb), <span class="pl-c1">C32e</span>(0xb099b0c7), <span class="pl-c1">C32e</span>(0x8c8d8cf7),</td>
      </tr>
      <tr>
        <td id="L2006" class="blob-num js-line-number" data-line-number="2006"></td>
        <td id="LC2006" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x170d17e5), <span class="pl-c1">C32e</span>(0xdcbddcb7), <span class="pl-c1">C32e</span>(0xc8b1c8a7), <span class="pl-c1">C32e</span>(0xfc54fc39),</td>
      </tr>
      <tr>
        <td id="L2007" class="blob-num js-line-number" data-line-number="2007"></td>
        <td id="LC2007" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf050f0c0), <span class="pl-c1">C32e</span>(0x05030504), <span class="pl-c1">C32e</span>(0xe0a9e087), <span class="pl-c1">C32e</span>(0x877d87ac),</td>
      </tr>
      <tr>
        <td id="L2008" class="blob-num js-line-number" data-line-number="2008"></td>
        <td id="LC2008" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2b192bd5), <span class="pl-c1">C32e</span>(0xa662a671), <span class="pl-c1">C32e</span>(0x31e6319a), <span class="pl-c1">C32e</span>(0xb59ab5c3),</td>
      </tr>
      <tr>
        <td id="L2009" class="blob-num js-line-number" data-line-number="2009"></td>
        <td id="LC2009" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcf45cf05), <span class="pl-c1">C32e</span>(0xbc9dbc3e), <span class="pl-c1">C32e</span>(0xc040c009), <span class="pl-c1">C32e</span>(0x928792ef),</td>
      </tr>
      <tr>
        <td id="L2010" class="blob-num js-line-number" data-line-number="2010"></td>
        <td id="LC2010" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3f153fc5), <span class="pl-c1">C32e</span>(0x26eb267f), <span class="pl-c1">C32e</span>(0x40c94007), <span class="pl-c1">C32e</span>(0x1d0b1ded),</td>
      </tr>
      <tr>
        <td id="L2011" class="blob-num js-line-number" data-line-number="2011"></td>
        <td id="LC2011" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2fec2f82), <span class="pl-c1">C32e</span>(0xa967a97d), <span class="pl-c1">C32e</span>(0x1cfd1cbe), <span class="pl-c1">C32e</span>(0x25ea258a),</td>
      </tr>
      <tr>
        <td id="L2012" class="blob-num js-line-number" data-line-number="2012"></td>
        <td id="LC2012" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdabfda46), <span class="pl-c1">C32e</span>(0x02f702a6), <span class="pl-c1">C32e</span>(0xa196a1d3), <span class="pl-c1">C32e</span>(0xed5bed2d),</td>
      </tr>
      <tr>
        <td id="L2013" class="blob-num js-line-number" data-line-number="2013"></td>
        <td id="LC2013" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5dc25dea), <span class="pl-c1">C32e</span>(0x241c24d9), <span class="pl-c1">C32e</span>(0xe9aee97a), <span class="pl-c1">C32e</span>(0xbe6abe98),</td>
      </tr>
      <tr>
        <td id="L2014" class="blob-num js-line-number" data-line-number="2014"></td>
        <td id="LC2014" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xee5aeed8), <span class="pl-c1">C32e</span>(0xc341c3fc), <span class="pl-c1">C32e</span>(0x060206f1), <span class="pl-c1">C32e</span>(0xd14fd11d),</td>
      </tr>
      <tr>
        <td id="L2015" class="blob-num js-line-number" data-line-number="2015"></td>
        <td id="LC2015" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe45ce4d0), <span class="pl-c1">C32e</span>(0x07f407a2), <span class="pl-c1">C32e</span>(0x5c345cb9), <span class="pl-c1">C32e</span>(0x180818e9),</td>
      </tr>
      <tr>
        <td id="L2016" class="blob-num js-line-number" data-line-number="2016"></td>
        <td id="LC2016" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xae93aedf), <span class="pl-c1">C32e</span>(0x9573954d), <span class="pl-c1">C32e</span>(0xf553f5c4), <span class="pl-c1">C32e</span>(0x413f4154),</td>
      </tr>
      <tr>
        <td id="L2017" class="blob-num js-line-number" data-line-number="2017"></td>
        <td id="LC2017" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x140c1410), <span class="pl-c1">C32e</span>(0xf652f631), <span class="pl-c1">C32e</span>(0xaf65af8c), <span class="pl-c1">C32e</span>(0xe25ee221),</td>
      </tr>
      <tr>
        <td id="L2018" class="blob-num js-line-number" data-line-number="2018"></td>
        <td id="LC2018" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x78287860), <span class="pl-c1">C32e</span>(0xf8a1f86e), <span class="pl-c1">C32e</span>(0x110f1114), <span class="pl-c1">C32e</span>(0xc4b5c45e),</td>
      </tr>
      <tr>
        <td id="L2019" class="blob-num js-line-number" data-line-number="2019"></td>
        <td id="LC2019" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1b091b1c), <span class="pl-c1">C32e</span>(0x5a365a48), <span class="pl-c1">C32e</span>(0xb69bb636), <span class="pl-c1">C32e</span>(0x473d47a5),</td>
      </tr>
      <tr>
        <td id="L2020" class="blob-num js-line-number" data-line-number="2020"></td>
        <td id="LC2020" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6a266a81), <span class="pl-c1">C32e</span>(0xbb69bb9c), <span class="pl-c1">C32e</span>(0x4ccd4cfe), <span class="pl-c1">C32e</span>(0xba9fbacf),</td>
      </tr>
      <tr>
        <td id="L2021" class="blob-num js-line-number" data-line-number="2021"></td>
        <td id="LC2021" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2d1b2d24), <span class="pl-c1">C32e</span>(0xb99eb93a), <span class="pl-c1">C32e</span>(0x9c749cb0), <span class="pl-c1">C32e</span>(0x722e7268),</td>
      </tr>
      <tr>
        <td id="L2022" class="blob-num js-line-number" data-line-number="2022"></td>
        <td id="LC2022" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x772d776c), <span class="pl-c1">C32e</span>(0xcdb2cda3), <span class="pl-c1">C32e</span>(0x29ee2973), <span class="pl-c1">C32e</span>(0x16fb16b6),</td>
      </tr>
      <tr>
        <td id="L2023" class="blob-num js-line-number" data-line-number="2023"></td>
        <td id="LC2023" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x01f60153), <span class="pl-c1">C32e</span>(0xd74dd7ec), <span class="pl-c1">C32e</span>(0xa361a375), <span class="pl-c1">C32e</span>(0x49ce49fa),</td>
      </tr>
      <tr>
        <td id="L2024" class="blob-num js-line-number" data-line-number="2024"></td>
        <td id="LC2024" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8d7b8da4), <span class="pl-c1">C32e</span>(0x423e42a1), <span class="pl-c1">C32e</span>(0x937193bc), <span class="pl-c1">C32e</span>(0xa297a226),</td>
      </tr>
      <tr>
        <td id="L2025" class="blob-num js-line-number" data-line-number="2025"></td>
        <td id="LC2025" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x04f50457), <span class="pl-c1">C32e</span>(0xb868b869), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0x742c7499),</td>
      </tr>
      <tr>
        <td id="L2026" class="blob-num js-line-number" data-line-number="2026"></td>
        <td id="LC2026" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa060a080), <span class="pl-c1">C32e</span>(0x211f21dd), <span class="pl-c1">C32e</span>(0x43c843f2), <span class="pl-c1">C32e</span>(0x2ced2c77),</td>
      </tr>
      <tr>
        <td id="L2027" class="blob-num js-line-number" data-line-number="2027"></td>
        <td id="LC2027" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd9bed9b3), <span class="pl-c1">C32e</span>(0xca46ca01), <span class="pl-c1">C32e</span>(0x70d970ce), <span class="pl-c1">C32e</span>(0xdd4bdde4),</td>
      </tr>
      <tr>
        <td id="L2028" class="blob-num js-line-number" data-line-number="2028"></td>
        <td id="LC2028" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x79de7933), <span class="pl-c1">C32e</span>(0x67d4672b), <span class="pl-c1">C32e</span>(0x23e8237b), <span class="pl-c1">C32e</span>(0xde4ade11),</td>
      </tr>
      <tr>
        <td id="L2029" class="blob-num js-line-number" data-line-number="2029"></td>
        <td id="LC2029" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbd6bbd6d), <span class="pl-c1">C32e</span>(0x7e2a7e91), <span class="pl-c1">C32e</span>(0x34e5349e), <span class="pl-c1">C32e</span>(0x3a163ac1),</td>
      </tr>
      <tr>
        <td id="L2030" class="blob-num js-line-number" data-line-number="2030"></td>
        <td id="LC2030" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x54c55417), <span class="pl-c1">C32e</span>(0x62d7622f), <span class="pl-c1">C32e</span>(0xff55ffcc), <span class="pl-c1">C32e</span>(0xa794a722),</td>
      </tr>
      <tr>
        <td id="L2031" class="blob-num js-line-number" data-line-number="2031"></td>
        <td id="LC2031" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4acf4a0f), <span class="pl-c1">C32e</span>(0x301030c9), <span class="pl-c1">C32e</span>(0x0a060a08), <span class="pl-c1">C32e</span>(0x988198e7),</td>
      </tr>
      <tr>
        <td id="L2032" class="blob-num js-line-number" data-line-number="2032"></td>
        <td id="LC2032" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0bf00b5b), <span class="pl-c1">C32e</span>(0xcc44ccf0), <span class="pl-c1">C32e</span>(0xd5bad54a), <span class="pl-c1">C32e</span>(0x3ee33e96),</td>
      </tr>
      <tr>
        <td id="L2033" class="blob-num js-line-number" data-line-number="2033"></td>
        <td id="LC2033" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0ef30e5f), <span class="pl-c1">C32e</span>(0x19fe19ba), <span class="pl-c1">C32e</span>(0x5bc05b1b), <span class="pl-c1">C32e</span>(0x858a850a),</td>
      </tr>
      <tr>
        <td id="L2034" class="blob-num js-line-number" data-line-number="2034"></td>
        <td id="LC2034" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xecadec7e), <span class="pl-c1">C32e</span>(0xdfbcdf42), <span class="pl-c1">C32e</span>(0xd848d8e0), <span class="pl-c1">C32e</span>(0x0c040cf9),</td>
      </tr>
      <tr>
        <td id="L2035" class="blob-num js-line-number" data-line-number="2035"></td>
        <td id="LC2035" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7adf7ac6), <span class="pl-c1">C32e</span>(0x58c158ee), <span class="pl-c1">C32e</span>(0x9f759f45), <span class="pl-c1">C32e</span>(0xa563a584),</td>
      </tr>
      <tr>
        <td id="L2036" class="blob-num js-line-number" data-line-number="2036"></td>
        <td id="LC2036" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x50305040), <span class="pl-c1">C32e</span>(0x2e1a2ed1), <span class="pl-c1">C32e</span>(0x120e12e1), <span class="pl-c1">C32e</span>(0xb76db765),</td>
      </tr>
      <tr>
        <td id="L2037" class="blob-num js-line-number" data-line-number="2037"></td>
        <td id="LC2037" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd44cd419), <span class="pl-c1">C32e</span>(0x3c143c30), <span class="pl-c1">C32e</span>(0x5f355f4c), <span class="pl-c1">C32e</span>(0x712f719d),</td>
      </tr>
      <tr>
        <td id="L2038" class="blob-num js-line-number" data-line-number="2038"></td>
        <td id="LC2038" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x38e13867), <span class="pl-c1">C32e</span>(0xfda2fd6a), <span class="pl-c1">C32e</span>(0x4fcc4f0b), <span class="pl-c1">C32e</span>(0x4b394b5c),</td>
      </tr>
      <tr>
        <td id="L2039" class="blob-num js-line-number" data-line-number="2039"></td>
        <td id="LC2039" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf957f93d), <span class="pl-c1">C32e</span>(0x0df20daa), <span class="pl-c1">C32e</span>(0x9d829de3), <span class="pl-c1">C32e</span>(0xc947c9f4),</td>
      </tr>
      <tr>
        <td id="L2040" class="blob-num js-line-number" data-line-number="2040"></td>
        <td id="LC2040" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xefacef8b), <span class="pl-c1">C32e</span>(0x32e7326f), <span class="pl-c1">C32e</span>(0x7d2b7d64), <span class="pl-c1">C32e</span>(0xa495a4d7),</td>
      </tr>
      <tr>
        <td id="L2041" class="blob-num js-line-number" data-line-number="2041"></td>
        <td id="LC2041" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xfba0fb9b), <span class="pl-c1">C32e</span>(0xb398b332), <span class="pl-c1">C32e</span>(0x68d16827), <span class="pl-c1">C32e</span>(0x817f815d),</td>
      </tr>
      <tr>
        <td id="L2042" class="blob-num js-line-number" data-line-number="2042"></td>
        <td id="LC2042" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xaa66aa88), <span class="pl-c1">C32e</span>(0x827e82a8), <span class="pl-c1">C32e</span>(0xe6abe676), <span class="pl-c1">C32e</span>(0x9e839e16),</td>
      </tr>
      <tr>
        <td id="L2043" class="blob-num js-line-number" data-line-number="2043"></td>
        <td id="LC2043" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x45ca4503), <span class="pl-c1">C32e</span>(0x7b297b95), <span class="pl-c1">C32e</span>(0x6ed36ed6), <span class="pl-c1">C32e</span>(0x443c4450),</td>
      </tr>
      <tr>
        <td id="L2044" class="blob-num js-line-number" data-line-number="2044"></td>
        <td id="LC2044" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8b798b55), <span class="pl-c1">C32e</span>(0x3de23d63), <span class="pl-c1">C32e</span>(0x271d272c), <span class="pl-c1">C32e</span>(0x9a769a41),</td>
      </tr>
      <tr>
        <td id="L2045" class="blob-num js-line-number" data-line-number="2045"></td>
        <td id="LC2045" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4d3b4dad), <span class="pl-c1">C32e</span>(0xfa56fac8), <span class="pl-c1">C32e</span>(0xd24ed2e8), <span class="pl-c1">C32e</span>(0x221e2228),</td>
      </tr>
      <tr>
        <td id="L2046" class="blob-num js-line-number" data-line-number="2046"></td>
        <td id="LC2046" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x76db763f), <span class="pl-c1">C32e</span>(0x1e0a1e18), <span class="pl-c1">C32e</span>(0xb46cb490), <span class="pl-c1">C32e</span>(0x37e4376b),</td>
      </tr>
      <tr>
        <td id="L2047" class="blob-num js-line-number" data-line-number="2047"></td>
        <td id="LC2047" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe75de725), <span class="pl-c1">C32e</span>(0xb26eb261), <span class="pl-c1">C32e</span>(0x2aef2a86), <span class="pl-c1">C32e</span>(0xf1a6f193),</td>
      </tr>
      <tr>
        <td id="L2048" class="blob-num js-line-number" data-line-number="2048"></td>
        <td id="LC2048" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe3a8e372), <span class="pl-c1">C32e</span>(0xf7a4f762), <span class="pl-c1">C32e</span>(0x593759bd), <span class="pl-c1">C32e</span>(0x868b86ff),</td>
      </tr>
      <tr>
        <td id="L2049" class="blob-num js-line-number" data-line-number="2049"></td>
        <td id="LC2049" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x563256b1), <span class="pl-c1">C32e</span>(0xc543c50d), <span class="pl-c1">C32e</span>(0xeb59ebdc), <span class="pl-c1">C32e</span>(0xc2b7c2af),</td>
      </tr>
      <tr>
        <td id="L2050" class="blob-num js-line-number" data-line-number="2050"></td>
        <td id="LC2050" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8f8c8f02), <span class="pl-c1">C32e</span>(0xac64ac79), <span class="pl-c1">C32e</span>(0x6dd26d23), <span class="pl-c1">C32e</span>(0x3be03b92),</td>
      </tr>
      <tr>
        <td id="L2051" class="blob-num js-line-number" data-line-number="2051"></td>
        <td id="LC2051" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc7b4c7ab), <span class="pl-c1">C32e</span>(0x15fa1543), <span class="pl-c1">C32e</span>(0x090709fd), <span class="pl-c1">C32e</span>(0x6f256f85),</td>
      </tr>
      <tr>
        <td id="L2052" class="blob-num js-line-number" data-line-number="2052"></td>
        <td id="LC2052" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xeaafea8f), <span class="pl-c1">C32e</span>(0x898e89f3), <span class="pl-c1">C32e</span>(0x20e9208e), <span class="pl-c1">C32e</span>(0x28182820),</td>
      </tr>
      <tr>
        <td id="L2053" class="blob-num js-line-number" data-line-number="2053"></td>
        <td id="LC2053" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x64d564de), <span class="pl-c1">C32e</span>(0x838883fb), <span class="pl-c1">C32e</span>(0xb16fb194), <span class="pl-c1">C32e</span>(0x967296b8),</td>
      </tr>
      <tr>
        <td id="L2054" class="blob-num js-line-number" data-line-number="2054"></td>
        <td id="LC2054" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6c246c70), <span class="pl-c1">C32e</span>(0x08f108ae), <span class="pl-c1">C32e</span>(0x52c752e6), <span class="pl-c1">C32e</span>(0xf351f335),</td>
      </tr>
      <tr>
        <td id="L2055" class="blob-num js-line-number" data-line-number="2055"></td>
        <td id="LC2055" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6523658d), <span class="pl-c1">C32e</span>(0x847c8459), <span class="pl-c1">C32e</span>(0xbf9cbfcb), <span class="pl-c1">C32e</span>(0x6321637c),</td>
      </tr>
      <tr>
        <td id="L2056" class="blob-num js-line-number" data-line-number="2056"></td>
        <td id="LC2056" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7cdd7c37), <span class="pl-c1">C32e</span>(0x7fdc7fc2), <span class="pl-c1">C32e</span>(0x9186911a), <span class="pl-c1">C32e</span>(0x9485941e),</td>
      </tr>
      <tr>
        <td id="L2057" class="blob-num js-line-number" data-line-number="2057"></td>
        <td id="LC2057" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xab90abdb), <span class="pl-c1">C32e</span>(0xc642c6f8), <span class="pl-c1">C32e</span>(0x57c457e2), <span class="pl-c1">C32e</span>(0xe5aae583),</td>
      </tr>
      <tr>
        <td id="L2058" class="blob-num js-line-number" data-line-number="2058"></td>
        <td id="LC2058" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x73d8733b), <span class="pl-c1">C32e</span>(0x0f050f0c), <span class="pl-c1">C32e</span>(0x030103f5), <span class="pl-c1">C32e</span>(0x36123638),</td>
      </tr>
      <tr>
        <td id="L2059" class="blob-num js-line-number" data-line-number="2059"></td>
        <td id="LC2059" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xfea3fe9f), <span class="pl-c1">C32e</span>(0xe15fe1d4), <span class="pl-c1">C32e</span>(0x10f91047), <span class="pl-c1">C32e</span>(0x6bd06bd2),</td>
      </tr>
      <tr>
        <td id="L2060" class="blob-num js-line-number" data-line-number="2060"></td>
        <td id="LC2060" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa891a82e), <span class="pl-c1">C32e</span>(0xe858e829), <span class="pl-c1">C32e</span>(0x69276974), <span class="pl-c1">C32e</span>(0xd0b9d04e),</td>
      </tr>
      <tr>
        <td id="L2061" class="blob-num js-line-number" data-line-number="2061"></td>
        <td id="LC2061" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x483848a9), <span class="pl-c1">C32e</span>(0x351335cd), <span class="pl-c1">C32e</span>(0xceb3ce56), <span class="pl-c1">C32e</span>(0x55335544),</td>
      </tr>
      <tr>
        <td id="L2062" class="blob-num js-line-number" data-line-number="2062"></td>
        <td id="LC2062" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd6bbd6bf), <span class="pl-c1">C32e</span>(0x90709049), <span class="pl-c1">C32e</span>(0x8089800e), <span class="pl-c1">C32e</span>(0xf2a7f266),</td>
      </tr>
      <tr>
        <td id="L2063" class="blob-num js-line-number" data-line-number="2063"></td>
        <td id="LC2063" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc1b6c15a), <span class="pl-c1">C32e</span>(0x66226678), <span class="pl-c1">C32e</span>(0xad92ad2a), <span class="pl-c1">C32e</span>(0x60206089),</td>
      </tr>
      <tr>
        <td id="L2064" class="blob-num js-line-number" data-line-number="2064"></td>
        <td id="LC2064" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb49db15), <span class="pl-c1">C32e</span>(0x1aff1a4f), <span class="pl-c1">C32e</span>(0x887888a0), <span class="pl-c1">C32e</span>(0x8e7a8e51),</td>
      </tr>
      <tr>
        <td id="L2065" class="blob-num js-line-number" data-line-number="2065"></td>
        <td id="LC2065" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8a8f8a06), <span class="pl-c1">C32e</span>(0x13f813b2), <span class="pl-c1">C32e</span>(0x9b809b12), <span class="pl-c1">C32e</span>(0x39173934),</td>
      </tr>
      <tr>
        <td id="L2066" class="blob-num js-line-number" data-line-number="2066"></td>
        <td id="LC2066" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x75da75ca), <span class="pl-c1">C32e</span>(0x533153b5), <span class="pl-c1">C32e</span>(0x51c65113), <span class="pl-c1">C32e</span>(0xd3b8d3bb),</td>
      </tr>
      <tr>
        <td id="L2067" class="blob-num js-line-number" data-line-number="2067"></td>
        <td id="LC2067" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5ec35e1f), <span class="pl-c1">C32e</span>(0xcbb0cb52), <span class="pl-c1">C32e</span>(0x997799b4), <span class="pl-c1">C32e</span>(0x3311333c),</td>
      </tr>
      <tr>
        <td id="L2068" class="blob-num js-line-number" data-line-number="2068"></td>
        <td id="LC2068" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x46cb46f6), <span class="pl-c1">C32e</span>(0x1ffc1f4b), <span class="pl-c1">C32e</span>(0x61d661da), <span class="pl-c1">C32e</span>(0x4e3a4e58)</td>
      </tr>
      <tr>
        <td id="L2069" class="blob-num js-line-number" data-line-number="2069"></td>
        <td id="LC2069" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2070" class="blob-num js-line-number" data-line-number="2070"></td>
        <td id="LC2070" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2071" class="blob-num js-line-number" data-line-number="2071"></td>
        <td id="LC2071" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T3up[] = {</td>
      </tr>
      <tr>
        <td id="L2072" class="blob-num js-line-number" data-line-number="2072"></td>
        <td id="LC2072" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x97a5c6c6), <span class="pl-c1">C32e</span>(0xeb84f8f8), <span class="pl-c1">C32e</span>(0xc799eeee), <span class="pl-c1">C32e</span>(0xf78df6f6),</td>
      </tr>
      <tr>
        <td id="L2073" class="blob-num js-line-number" data-line-number="2073"></td>
        <td id="LC2073" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe50dffff), <span class="pl-c1">C32e</span>(0xb7bdd6d6), <span class="pl-c1">C32e</span>(0xa7b1dede), <span class="pl-c1">C32e</span>(0x39549191),</td>
      </tr>
      <tr>
        <td id="L2074" class="blob-num js-line-number" data-line-number="2074"></td>
        <td id="LC2074" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc0506060), <span class="pl-c1">C32e</span>(0x04030202), <span class="pl-c1">C32e</span>(0x87a9cece), <span class="pl-c1">C32e</span>(0xac7d5656),</td>
      </tr>
      <tr>
        <td id="L2075" class="blob-num js-line-number" data-line-number="2075"></td>
        <td id="LC2075" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd519e7e7), <span class="pl-c1">C32e</span>(0x7162b5b5), <span class="pl-c1">C32e</span>(0x9ae64d4d), <span class="pl-c1">C32e</span>(0xc39aecec),</td>
      </tr>
      <tr>
        <td id="L2076" class="blob-num js-line-number" data-line-number="2076"></td>
        <td id="LC2076" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x05458f8f), <span class="pl-c1">C32e</span>(0x3e9d1f1f), <span class="pl-c1">C32e</span>(0x09408989), <span class="pl-c1">C32e</span>(0xef87fafa),</td>
      </tr>
      <tr>
        <td id="L2077" class="blob-num js-line-number" data-line-number="2077"></td>
        <td id="LC2077" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc515efef), <span class="pl-c1">C32e</span>(0x7febb2b2), <span class="pl-c1">C32e</span>(0x07c98e8e), <span class="pl-c1">C32e</span>(0xed0bfbfb),</td>
      </tr>
      <tr>
        <td id="L2078" class="blob-num js-line-number" data-line-number="2078"></td>
        <td id="LC2078" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x82ec4141), <span class="pl-c1">C32e</span>(0x7d67b3b3), <span class="pl-c1">C32e</span>(0xbefd5f5f), <span class="pl-c1">C32e</span>(0x8aea4545),</td>
      </tr>
      <tr>
        <td id="L2079" class="blob-num js-line-number" data-line-number="2079"></td>
        <td id="LC2079" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x46bf2323), <span class="pl-c1">C32e</span>(0xa6f75353), <span class="pl-c1">C32e</span>(0xd396e4e4), <span class="pl-c1">C32e</span>(0x2d5b9b9b),</td>
      </tr>
      <tr>
        <td id="L2080" class="blob-num js-line-number" data-line-number="2080"></td>
        <td id="LC2080" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xeac27575), <span class="pl-c1">C32e</span>(0xd91ce1e1), <span class="pl-c1">C32e</span>(0x7aae3d3d), <span class="pl-c1">C32e</span>(0x986a4c4c),</td>
      </tr>
      <tr>
        <td id="L2081" class="blob-num js-line-number" data-line-number="2081"></td>
        <td id="LC2081" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd85a6c6c), <span class="pl-c1">C32e</span>(0xfc417e7e), <span class="pl-c1">C32e</span>(0xf102f5f5), <span class="pl-c1">C32e</span>(0x1d4f8383),</td>
      </tr>
      <tr>
        <td id="L2082" class="blob-num js-line-number" data-line-number="2082"></td>
        <td id="LC2082" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd05c6868), <span class="pl-c1">C32e</span>(0xa2f45151), <span class="pl-c1">C32e</span>(0xb934d1d1), <span class="pl-c1">C32e</span>(0xe908f9f9),</td>
      </tr>
      <tr>
        <td id="L2083" class="blob-num js-line-number" data-line-number="2083"></td>
        <td id="LC2083" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdf93e2e2), <span class="pl-c1">C32e</span>(0x4d73abab), <span class="pl-c1">C32e</span>(0xc4536262), <span class="pl-c1">C32e</span>(0x543f2a2a),</td>
      </tr>
      <tr>
        <td id="L2084" class="blob-num js-line-number" data-line-number="2084"></td>
        <td id="LC2084" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x100c0808), <span class="pl-c1">C32e</span>(0x31529595), <span class="pl-c1">C32e</span>(0x8c654646), <span class="pl-c1">C32e</span>(0x215e9d9d),</td>
      </tr>
      <tr>
        <td id="L2085" class="blob-num js-line-number" data-line-number="2085"></td>
        <td id="LC2085" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x60283030), <span class="pl-c1">C32e</span>(0x6ea13737), <span class="pl-c1">C32e</span>(0x140f0a0a), <span class="pl-c1">C32e</span>(0x5eb52f2f),</td>
      </tr>
      <tr>
        <td id="L2086" class="blob-num js-line-number" data-line-number="2086"></td>
        <td id="LC2086" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1c090e0e), <span class="pl-c1">C32e</span>(0x48362424), <span class="pl-c1">C32e</span>(0x369b1b1b), <span class="pl-c1">C32e</span>(0xa53ddfdf),</td>
      </tr>
      <tr>
        <td id="L2087" class="blob-num js-line-number" data-line-number="2087"></td>
        <td id="LC2087" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8126cdcd), <span class="pl-c1">C32e</span>(0x9c694e4e), <span class="pl-c1">C32e</span>(0xfecd7f7f), <span class="pl-c1">C32e</span>(0xcf9feaea),</td>
      </tr>
      <tr>
        <td id="L2088" class="blob-num js-line-number" data-line-number="2088"></td>
        <td id="LC2088" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x241b1212), <span class="pl-c1">C32e</span>(0x3a9e1d1d), <span class="pl-c1">C32e</span>(0xb0745858), <span class="pl-c1">C32e</span>(0x682e3434),</td>
      </tr>
      <tr>
        <td id="L2089" class="blob-num js-line-number" data-line-number="2089"></td>
        <td id="LC2089" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6c2d3636), <span class="pl-c1">C32e</span>(0xa3b2dcdc), <span class="pl-c1">C32e</span>(0x73eeb4b4), <span class="pl-c1">C32e</span>(0xb6fb5b5b),</td>
      </tr>
      <tr>
        <td id="L2090" class="blob-num js-line-number" data-line-number="2090"></td>
        <td id="LC2090" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x53f6a4a4), <span class="pl-c1">C32e</span>(0xec4d7676), <span class="pl-c1">C32e</span>(0x7561b7b7), <span class="pl-c1">C32e</span>(0xface7d7d),</td>
      </tr>
      <tr>
        <td id="L2091" class="blob-num js-line-number" data-line-number="2091"></td>
        <td id="LC2091" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa47b5252), <span class="pl-c1">C32e</span>(0xa13edddd), <span class="pl-c1">C32e</span>(0xbc715e5e), <span class="pl-c1">C32e</span>(0x26971313),</td>
      </tr>
      <tr>
        <td id="L2092" class="blob-num js-line-number" data-line-number="2092"></td>
        <td id="LC2092" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x57f5a6a6), <span class="pl-c1">C32e</span>(0x6968b9b9), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0x992cc1c1),</td>
      </tr>
      <tr>
        <td id="L2093" class="blob-num js-line-number" data-line-number="2093"></td>
        <td id="LC2093" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x80604040), <span class="pl-c1">C32e</span>(0xdd1fe3e3), <span class="pl-c1">C32e</span>(0xf2c87979), <span class="pl-c1">C32e</span>(0x77edb6b6),</td>
      </tr>
      <tr>
        <td id="L2094" class="blob-num js-line-number" data-line-number="2094"></td>
        <td id="LC2094" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb3bed4d4), <span class="pl-c1">C32e</span>(0x01468d8d), <span class="pl-c1">C32e</span>(0xced96767), <span class="pl-c1">C32e</span>(0xe44b7272),</td>
      </tr>
      <tr>
        <td id="L2095" class="blob-num js-line-number" data-line-number="2095"></td>
        <td id="LC2095" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x33de9494), <span class="pl-c1">C32e</span>(0x2bd49898), <span class="pl-c1">C32e</span>(0x7be8b0b0), <span class="pl-c1">C32e</span>(0x114a8585),</td>
      </tr>
      <tr>
        <td id="L2096" class="blob-num js-line-number" data-line-number="2096"></td>
        <td id="LC2096" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6d6bbbbb), <span class="pl-c1">C32e</span>(0x912ac5c5), <span class="pl-c1">C32e</span>(0x9ee54f4f), <span class="pl-c1">C32e</span>(0xc116eded),</td>
      </tr>
      <tr>
        <td id="L2097" class="blob-num js-line-number" data-line-number="2097"></td>
        <td id="LC2097" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x17c58686), <span class="pl-c1">C32e</span>(0x2fd79a9a), <span class="pl-c1">C32e</span>(0xcc556666), <span class="pl-c1">C32e</span>(0x22941111),</td>
      </tr>
      <tr>
        <td id="L2098" class="blob-num js-line-number" data-line-number="2098"></td>
        <td id="LC2098" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0fcf8a8a), <span class="pl-c1">C32e</span>(0xc910e9e9), <span class="pl-c1">C32e</span>(0x08060404), <span class="pl-c1">C32e</span>(0xe781fefe),</td>
      </tr>
      <tr>
        <td id="L2099" class="blob-num js-line-number" data-line-number="2099"></td>
        <td id="LC2099" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5bf0a0a0), <span class="pl-c1">C32e</span>(0xf0447878), <span class="pl-c1">C32e</span>(0x4aba2525), <span class="pl-c1">C32e</span>(0x96e34b4b),</td>
      </tr>
      <tr>
        <td id="L2100" class="blob-num js-line-number" data-line-number="2100"></td>
        <td id="LC2100" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5ff3a2a2), <span class="pl-c1">C32e</span>(0xbafe5d5d), <span class="pl-c1">C32e</span>(0x1bc08080), <span class="pl-c1">C32e</span>(0x0a8a0505),</td>
      </tr>
      <tr>
        <td id="L2101" class="blob-num js-line-number" data-line-number="2101"></td>
        <td id="LC2101" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x7ead3f3f), <span class="pl-c1">C32e</span>(0x42bc2121), <span class="pl-c1">C32e</span>(0xe0487070), <span class="pl-c1">C32e</span>(0xf904f1f1),</td>
      </tr>
      <tr>
        <td id="L2102" class="blob-num js-line-number" data-line-number="2102"></td>
        <td id="LC2102" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc6df6363), <span class="pl-c1">C32e</span>(0xeec17777), <span class="pl-c1">C32e</span>(0x4575afaf), <span class="pl-c1">C32e</span>(0x84634242),</td>
      </tr>
      <tr>
        <td id="L2103" class="blob-num js-line-number" data-line-number="2103"></td>
        <td id="LC2103" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x40302020), <span class="pl-c1">C32e</span>(0xd11ae5e5), <span class="pl-c1">C32e</span>(0xe10efdfd), <span class="pl-c1">C32e</span>(0x656dbfbf),</td>
      </tr>
      <tr>
        <td id="L2104" class="blob-num js-line-number" data-line-number="2104"></td>
        <td id="LC2104" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x194c8181), <span class="pl-c1">C32e</span>(0x30141818), <span class="pl-c1">C32e</span>(0x4c352626), <span class="pl-c1">C32e</span>(0x9d2fc3c3),</td>
      </tr>
      <tr>
        <td id="L2105" class="blob-num js-line-number" data-line-number="2105"></td>
        <td id="LC2105" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x67e1bebe), <span class="pl-c1">C32e</span>(0x6aa23535), <span class="pl-c1">C32e</span>(0x0bcc8888), <span class="pl-c1">C32e</span>(0x5c392e2e),</td>
      </tr>
      <tr>
        <td id="L2106" class="blob-num js-line-number" data-line-number="2106"></td>
        <td id="LC2106" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3d579393), <span class="pl-c1">C32e</span>(0xaaf25555), <span class="pl-c1">C32e</span>(0xe382fcfc), <span class="pl-c1">C32e</span>(0xf4477a7a),</td>
      </tr>
      <tr>
        <td id="L2107" class="blob-num js-line-number" data-line-number="2107"></td>
        <td id="LC2107" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8bacc8c8), <span class="pl-c1">C32e</span>(0x6fe7baba), <span class="pl-c1">C32e</span>(0x642b3232), <span class="pl-c1">C32e</span>(0xd795e6e6),</td>
      </tr>
      <tr>
        <td id="L2108" class="blob-num js-line-number" data-line-number="2108"></td>
        <td id="LC2108" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9ba0c0c0), <span class="pl-c1">C32e</span>(0x32981919), <span class="pl-c1">C32e</span>(0x27d19e9e), <span class="pl-c1">C32e</span>(0x5d7fa3a3),</td>
      </tr>
      <tr>
        <td id="L2109" class="blob-num js-line-number" data-line-number="2109"></td>
        <td id="LC2109" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x88664444), <span class="pl-c1">C32e</span>(0xa87e5454), <span class="pl-c1">C32e</span>(0x76ab3b3b), <span class="pl-c1">C32e</span>(0x16830b0b),</td>
      </tr>
      <tr>
        <td id="L2110" class="blob-num js-line-number" data-line-number="2110"></td>
        <td id="LC2110" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x03ca8c8c), <span class="pl-c1">C32e</span>(0x9529c7c7), <span class="pl-c1">C32e</span>(0xd6d36b6b), <span class="pl-c1">C32e</span>(0x503c2828),</td>
      </tr>
      <tr>
        <td id="L2111" class="blob-num js-line-number" data-line-number="2111"></td>
        <td id="LC2111" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5579a7a7), <span class="pl-c1">C32e</span>(0x63e2bcbc), <span class="pl-c1">C32e</span>(0x2c1d1616), <span class="pl-c1">C32e</span>(0x4176adad),</td>
      </tr>
      <tr>
        <td id="L2112" class="blob-num js-line-number" data-line-number="2112"></td>
        <td id="LC2112" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xad3bdbdb), <span class="pl-c1">C32e</span>(0xc8566464), <span class="pl-c1">C32e</span>(0xe84e7474), <span class="pl-c1">C32e</span>(0x281e1414),</td>
      </tr>
      <tr>
        <td id="L2113" class="blob-num js-line-number" data-line-number="2113"></td>
        <td id="LC2113" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3fdb9292), <span class="pl-c1">C32e</span>(0x180a0c0c), <span class="pl-c1">C32e</span>(0x906c4848), <span class="pl-c1">C32e</span>(0x6be4b8b8),</td>
      </tr>
      <tr>
        <td id="L2114" class="blob-num js-line-number" data-line-number="2114"></td>
        <td id="LC2114" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x255d9f9f), <span class="pl-c1">C32e</span>(0x616ebdbd), <span class="pl-c1">C32e</span>(0x86ef4343), <span class="pl-c1">C32e</span>(0x93a6c4c4),</td>
      </tr>
      <tr>
        <td id="L2115" class="blob-num js-line-number" data-line-number="2115"></td>
        <td id="LC2115" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x72a83939), <span class="pl-c1">C32e</span>(0x62a43131), <span class="pl-c1">C32e</span>(0xbd37d3d3), <span class="pl-c1">C32e</span>(0xff8bf2f2),</td>
      </tr>
      <tr>
        <td id="L2116" class="blob-num js-line-number" data-line-number="2116"></td>
        <td id="LC2116" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xb132d5d5), <span class="pl-c1">C32e</span>(0x0d438b8b), <span class="pl-c1">C32e</span>(0xdc596e6e), <span class="pl-c1">C32e</span>(0xafb7dada),</td>
      </tr>
      <tr>
        <td id="L2117" class="blob-num js-line-number" data-line-number="2117"></td>
        <td id="LC2117" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x028c0101), <span class="pl-c1">C32e</span>(0x7964b1b1), <span class="pl-c1">C32e</span>(0x23d29c9c), <span class="pl-c1">C32e</span>(0x92e04949),</td>
      </tr>
      <tr>
        <td id="L2118" class="blob-num js-line-number" data-line-number="2118"></td>
        <td id="LC2118" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xabb4d8d8), <span class="pl-c1">C32e</span>(0x43faacac), <span class="pl-c1">C32e</span>(0xfd07f3f3), <span class="pl-c1">C32e</span>(0x8525cfcf),</td>
      </tr>
      <tr>
        <td id="L2119" class="blob-num js-line-number" data-line-number="2119"></td>
        <td id="LC2119" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8fafcaca), <span class="pl-c1">C32e</span>(0xf38ef4f4), <span class="pl-c1">C32e</span>(0x8ee94747), <span class="pl-c1">C32e</span>(0x20181010),</td>
      </tr>
      <tr>
        <td id="L2120" class="blob-num js-line-number" data-line-number="2120"></td>
        <td id="LC2120" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xded56f6f), <span class="pl-c1">C32e</span>(0xfb88f0f0), <span class="pl-c1">C32e</span>(0x946f4a4a), <span class="pl-c1">C32e</span>(0xb8725c5c),</td>
      </tr>
      <tr>
        <td id="L2121" class="blob-num js-line-number" data-line-number="2121"></td>
        <td id="LC2121" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x70243838), <span class="pl-c1">C32e</span>(0xaef15757), <span class="pl-c1">C32e</span>(0xe6c77373), <span class="pl-c1">C32e</span>(0x35519797),</td>
      </tr>
      <tr>
        <td id="L2122" class="blob-num js-line-number" data-line-number="2122"></td>
        <td id="LC2122" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8d23cbcb), <span class="pl-c1">C32e</span>(0x597ca1a1), <span class="pl-c1">C32e</span>(0xcb9ce8e8), <span class="pl-c1">C32e</span>(0x7c213e3e),</td>
      </tr>
      <tr>
        <td id="L2123" class="blob-num js-line-number" data-line-number="2123"></td>
        <td id="LC2123" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x37dd9696), <span class="pl-c1">C32e</span>(0xc2dc6161), <span class="pl-c1">C32e</span>(0x1a860d0d), <span class="pl-c1">C32e</span>(0x1e850f0f),</td>
      </tr>
      <tr>
        <td id="L2124" class="blob-num js-line-number" data-line-number="2124"></td>
        <td id="LC2124" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdb90e0e0), <span class="pl-c1">C32e</span>(0xf8427c7c), <span class="pl-c1">C32e</span>(0xe2c47171), <span class="pl-c1">C32e</span>(0x83aacccc),</td>
      </tr>
      <tr>
        <td id="L2125" class="blob-num js-line-number" data-line-number="2125"></td>
        <td id="LC2125" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3bd89090), <span class="pl-c1">C32e</span>(0x0c050606), <span class="pl-c1">C32e</span>(0xf501f7f7), <span class="pl-c1">C32e</span>(0x38121c1c),</td>
      </tr>
      <tr>
        <td id="L2126" class="blob-num js-line-number" data-line-number="2126"></td>
        <td id="LC2126" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x9fa3c2c2), <span class="pl-c1">C32e</span>(0xd45f6a6a), <span class="pl-c1">C32e</span>(0x47f9aeae), <span class="pl-c1">C32e</span>(0xd2d06969),</td>
      </tr>
      <tr>
        <td id="L2127" class="blob-num js-line-number" data-line-number="2127"></td>
        <td id="LC2127" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2e911717), <span class="pl-c1">C32e</span>(0x29589999), <span class="pl-c1">C32e</span>(0x74273a3a), <span class="pl-c1">C32e</span>(0x4eb92727),</td>
      </tr>
      <tr>
        <td id="L2128" class="blob-num js-line-number" data-line-number="2128"></td>
        <td id="LC2128" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa938d9d9), <span class="pl-c1">C32e</span>(0xcd13ebeb), <span class="pl-c1">C32e</span>(0x56b32b2b), <span class="pl-c1">C32e</span>(0x44332222),</td>
      </tr>
      <tr>
        <td id="L2129" class="blob-num js-line-number" data-line-number="2129"></td>
        <td id="LC2129" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbfbbd2d2), <span class="pl-c1">C32e</span>(0x4970a9a9), <span class="pl-c1">C32e</span>(0x0e890707), <span class="pl-c1">C32e</span>(0x66a73333),</td>
      </tr>
      <tr>
        <td id="L2130" class="blob-num js-line-number" data-line-number="2130"></td>
        <td id="LC2130" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5ab62d2d), <span class="pl-c1">C32e</span>(0x78223c3c), <span class="pl-c1">C32e</span>(0x2a921515), <span class="pl-c1">C32e</span>(0x8920c9c9),</td>
      </tr>
      <tr>
        <td id="L2131" class="blob-num js-line-number" data-line-number="2131"></td>
        <td id="LC2131" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x15498787), <span class="pl-c1">C32e</span>(0x4fffaaaa), <span class="pl-c1">C32e</span>(0xa0785050), <span class="pl-c1">C32e</span>(0x517aa5a5),</td>
      </tr>
      <tr>
        <td id="L2132" class="blob-num js-line-number" data-line-number="2132"></td>
        <td id="LC2132" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x068f0303), <span class="pl-c1">C32e</span>(0xb2f85959), <span class="pl-c1">C32e</span>(0x12800909), <span class="pl-c1">C32e</span>(0x34171a1a),</td>
      </tr>
      <tr>
        <td id="L2133" class="blob-num js-line-number" data-line-number="2133"></td>
        <td id="LC2133" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcada6565), <span class="pl-c1">C32e</span>(0xb531d7d7), <span class="pl-c1">C32e</span>(0x13c68484), <span class="pl-c1">C32e</span>(0xbbb8d0d0),</td>
      </tr>
      <tr>
        <td id="L2134" class="blob-num js-line-number" data-line-number="2134"></td>
        <td id="LC2134" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1fc38282), <span class="pl-c1">C32e</span>(0x52b02929), <span class="pl-c1">C32e</span>(0xb4775a5a), <span class="pl-c1">C32e</span>(0x3c111e1e),</td>
      </tr>
      <tr>
        <td id="L2135" class="blob-num js-line-number" data-line-number="2135"></td>
        <td id="LC2135" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf6cb7b7b), <span class="pl-c1">C32e</span>(0x4bfca8a8), <span class="pl-c1">C32e</span>(0xdad66d6d), <span class="pl-c1">C32e</span>(0x583a2c2c)</td>
      </tr>
      <tr>
        <td id="L2136" class="blob-num js-line-number" data-line-number="2136"></td>
        <td id="LC2136" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2137" class="blob-num js-line-number" data-line-number="2137"></td>
        <td id="LC2137" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2138" class="blob-num js-line-number" data-line-number="2138"></td>
        <td id="LC2138" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> sph_u32 T3dn[] = {</td>
      </tr>
      <tr>
        <td id="L2139" class="blob-num js-line-number" data-line-number="2139"></td>
        <td id="LC2139" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x32f4a5f4), <span class="pl-c1">C32e</span>(0x6f978497), <span class="pl-c1">C32e</span>(0x5eb099b0), <span class="pl-c1">C32e</span>(0x7a8c8d8c),</td>
      </tr>
      <tr>
        <td id="L2140" class="blob-num js-line-number" data-line-number="2140"></td>
        <td id="LC2140" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe8170d17), <span class="pl-c1">C32e</span>(0x0adcbddc), <span class="pl-c1">C32e</span>(0x16c8b1c8), <span class="pl-c1">C32e</span>(0x6dfc54fc),</td>
      </tr>
      <tr>
        <td id="L2141" class="blob-num js-line-number" data-line-number="2141"></td>
        <td id="LC2141" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x90f050f0), <span class="pl-c1">C32e</span>(0x07050305), <span class="pl-c1">C32e</span>(0x2ee0a9e0), <span class="pl-c1">C32e</span>(0xd1877d87),</td>
      </tr>
      <tr>
        <td id="L2142" class="blob-num js-line-number" data-line-number="2142"></td>
        <td id="LC2142" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xcc2b192b), <span class="pl-c1">C32e</span>(0x13a662a6), <span class="pl-c1">C32e</span>(0x7c31e631), <span class="pl-c1">C32e</span>(0x59b59ab5),</td>
      </tr>
      <tr>
        <td id="L2143" class="blob-num js-line-number" data-line-number="2143"></td>
        <td id="LC2143" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x40cf45cf), <span class="pl-c1">C32e</span>(0xa3bc9dbc), <span class="pl-c1">C32e</span>(0x49c040c0), <span class="pl-c1">C32e</span>(0x68928792),</td>
      </tr>
      <tr>
        <td id="L2144" class="blob-num js-line-number" data-line-number="2144"></td>
        <td id="LC2144" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd03f153f), <span class="pl-c1">C32e</span>(0x9426eb26), <span class="pl-c1">C32e</span>(0xce40c940), <span class="pl-c1">C32e</span>(0xe61d0b1d),</td>
      </tr>
      <tr>
        <td id="L2145" class="blob-num js-line-number" data-line-number="2145"></td>
        <td id="LC2145" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6e2fec2f), <span class="pl-c1">C32e</span>(0x1aa967a9), <span class="pl-c1">C32e</span>(0x431cfd1c), <span class="pl-c1">C32e</span>(0x6025ea25),</td>
      </tr>
      <tr>
        <td id="L2146" class="blob-num js-line-number" data-line-number="2146"></td>
        <td id="LC2146" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xf9dabfda), <span class="pl-c1">C32e</span>(0x5102f702), <span class="pl-c1">C32e</span>(0x45a196a1), <span class="pl-c1">C32e</span>(0x76ed5bed),</td>
      </tr>
      <tr>
        <td id="L2147" class="blob-num js-line-number" data-line-number="2147"></td>
        <td id="LC2147" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x285dc25d), <span class="pl-c1">C32e</span>(0xc5241c24), <span class="pl-c1">C32e</span>(0xd4e9aee9), <span class="pl-c1">C32e</span>(0xf2be6abe),</td>
      </tr>
      <tr>
        <td id="L2148" class="blob-num js-line-number" data-line-number="2148"></td>
        <td id="LC2148" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x82ee5aee), <span class="pl-c1">C32e</span>(0xbdc341c3), <span class="pl-c1">C32e</span>(0xf3060206), <span class="pl-c1">C32e</span>(0x52d14fd1),</td>
      </tr>
      <tr>
        <td id="L2149" class="blob-num js-line-number" data-line-number="2149"></td>
        <td id="LC2149" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8ce45ce4), <span class="pl-c1">C32e</span>(0x5607f407), <span class="pl-c1">C32e</span>(0x8d5c345c), <span class="pl-c1">C32e</span>(0xe1180818),</td>
      </tr>
      <tr>
        <td id="L2150" class="blob-num js-line-number" data-line-number="2150"></td>
        <td id="LC2150" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4cae93ae), <span class="pl-c1">C32e</span>(0x3e957395), <span class="pl-c1">C32e</span>(0x97f553f5), <span class="pl-c1">C32e</span>(0x6b413f41),</td>
      </tr>
      <tr>
        <td id="L2151" class="blob-num js-line-number" data-line-number="2151"></td>
        <td id="LC2151" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1c140c14), <span class="pl-c1">C32e</span>(0x63f652f6), <span class="pl-c1">C32e</span>(0xe9af65af), <span class="pl-c1">C32e</span>(0x7fe25ee2),</td>
      </tr>
      <tr>
        <td id="L2152" class="blob-num js-line-number" data-line-number="2152"></td>
        <td id="LC2152" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x48782878), <span class="pl-c1">C32e</span>(0xcff8a1f8), <span class="pl-c1">C32e</span>(0x1b110f11), <span class="pl-c1">C32e</span>(0xebc4b5c4),</td>
      </tr>
      <tr>
        <td id="L2153" class="blob-num js-line-number" data-line-number="2153"></td>
        <td id="LC2153" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x151b091b), <span class="pl-c1">C32e</span>(0x7e5a365a), <span class="pl-c1">C32e</span>(0xadb69bb6), <span class="pl-c1">C32e</span>(0x98473d47),</td>
      </tr>
      <tr>
        <td id="L2154" class="blob-num js-line-number" data-line-number="2154"></td>
        <td id="LC2154" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa76a266a), <span class="pl-c1">C32e</span>(0xf5bb69bb), <span class="pl-c1">C32e</span>(0x334ccd4c), <span class="pl-c1">C32e</span>(0x50ba9fba),</td>
      </tr>
      <tr>
        <td id="L2155" class="blob-num js-line-number" data-line-number="2155"></td>
        <td id="LC2155" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3f2d1b2d), <span class="pl-c1">C32e</span>(0xa4b99eb9), <span class="pl-c1">C32e</span>(0xc49c749c), <span class="pl-c1">C32e</span>(0x46722e72),</td>
      </tr>
      <tr>
        <td id="L2156" class="blob-num js-line-number" data-line-number="2156"></td>
        <td id="LC2156" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x41772d77), <span class="pl-c1">C32e</span>(0x11cdb2cd), <span class="pl-c1">C32e</span>(0x9d29ee29), <span class="pl-c1">C32e</span>(0x4d16fb16),</td>
      </tr>
      <tr>
        <td id="L2157" class="blob-num js-line-number" data-line-number="2157"></td>
        <td id="LC2157" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa501f601), <span class="pl-c1">C32e</span>(0xa1d74dd7), <span class="pl-c1">C32e</span>(0x14a361a3), <span class="pl-c1">C32e</span>(0x3449ce49),</td>
      </tr>
      <tr>
        <td id="L2158" class="blob-num js-line-number" data-line-number="2158"></td>
        <td id="LC2158" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdf8d7b8d), <span class="pl-c1">C32e</span>(0x9f423e42), <span class="pl-c1">C32e</span>(0xcd937193), <span class="pl-c1">C32e</span>(0xb1a297a2),</td>
      </tr>
      <tr>
        <td id="L2159" class="blob-num js-line-number" data-line-number="2159"></td>
        <td id="LC2159" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xa204f504), <span class="pl-c1">C32e</span>(0x01b868b8), <span class="pl-c1">C32e</span>(0x00000000), <span class="pl-c1">C32e</span>(0xb5742c74),</td>
      </tr>
      <tr>
        <td id="L2160" class="blob-num js-line-number" data-line-number="2160"></td>
        <td id="LC2160" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe0a060a0), <span class="pl-c1">C32e</span>(0xc2211f21), <span class="pl-c1">C32e</span>(0x3a43c843), <span class="pl-c1">C32e</span>(0x9a2ced2c),</td>
      </tr>
      <tr>
        <td id="L2161" class="blob-num js-line-number" data-line-number="2161"></td>
        <td id="LC2161" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0dd9bed9), <span class="pl-c1">C32e</span>(0x47ca46ca), <span class="pl-c1">C32e</span>(0x1770d970), <span class="pl-c1">C32e</span>(0xafdd4bdd),</td>
      </tr>
      <tr>
        <td id="L2162" class="blob-num js-line-number" data-line-number="2162"></td>
        <td id="LC2162" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xed79de79), <span class="pl-c1">C32e</span>(0xff67d467), <span class="pl-c1">C32e</span>(0x9323e823), <span class="pl-c1">C32e</span>(0x5bde4ade),</td>
      </tr>
      <tr>
        <td id="L2163" class="blob-num js-line-number" data-line-number="2163"></td>
        <td id="LC2163" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x06bd6bbd), <span class="pl-c1">C32e</span>(0xbb7e2a7e), <span class="pl-c1">C32e</span>(0x7b34e534), <span class="pl-c1">C32e</span>(0xd73a163a),</td>
      </tr>
      <tr>
        <td id="L2164" class="blob-num js-line-number" data-line-number="2164"></td>
        <td id="LC2164" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd254c554), <span class="pl-c1">C32e</span>(0xf862d762), <span class="pl-c1">C32e</span>(0x99ff55ff), <span class="pl-c1">C32e</span>(0xb6a794a7),</td>
      </tr>
      <tr>
        <td id="L2165" class="blob-num js-line-number" data-line-number="2165"></td>
        <td id="LC2165" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc04acf4a), <span class="pl-c1">C32e</span>(0xd9301030), <span class="pl-c1">C32e</span>(0x0e0a060a), <span class="pl-c1">C32e</span>(0x66988198),</td>
      </tr>
      <tr>
        <td id="L2166" class="blob-num js-line-number" data-line-number="2166"></td>
        <td id="LC2166" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xab0bf00b), <span class="pl-c1">C32e</span>(0xb4cc44cc), <span class="pl-c1">C32e</span>(0xf0d5bad5), <span class="pl-c1">C32e</span>(0x753ee33e),</td>
      </tr>
      <tr>
        <td id="L2167" class="blob-num js-line-number" data-line-number="2167"></td>
        <td id="LC2167" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xac0ef30e), <span class="pl-c1">C32e</span>(0x4419fe19), <span class="pl-c1">C32e</span>(0xdb5bc05b), <span class="pl-c1">C32e</span>(0x80858a85),</td>
      </tr>
      <tr>
        <td id="L2168" class="blob-num js-line-number" data-line-number="2168"></td>
        <td id="LC2168" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xd3ecadec), <span class="pl-c1">C32e</span>(0xfedfbcdf), <span class="pl-c1">C32e</span>(0xa8d848d8), <span class="pl-c1">C32e</span>(0xfd0c040c),</td>
      </tr>
      <tr>
        <td id="L2169" class="blob-num js-line-number" data-line-number="2169"></td>
        <td id="LC2169" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x197adf7a), <span class="pl-c1">C32e</span>(0x2f58c158), <span class="pl-c1">C32e</span>(0x309f759f), <span class="pl-c1">C32e</span>(0xe7a563a5),</td>
      </tr>
      <tr>
        <td id="L2170" class="blob-num js-line-number" data-line-number="2170"></td>
        <td id="LC2170" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x70503050), <span class="pl-c1">C32e</span>(0xcb2e1a2e), <span class="pl-c1">C32e</span>(0xef120e12), <span class="pl-c1">C32e</span>(0x08b76db7),</td>
      </tr>
      <tr>
        <td id="L2171" class="blob-num js-line-number" data-line-number="2171"></td>
        <td id="LC2171" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x55d44cd4), <span class="pl-c1">C32e</span>(0x243c143c), <span class="pl-c1">C32e</span>(0x795f355f), <span class="pl-c1">C32e</span>(0xb2712f71),</td>
      </tr>
      <tr>
        <td id="L2172" class="blob-num js-line-number" data-line-number="2172"></td>
        <td id="LC2172" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8638e138), <span class="pl-c1">C32e</span>(0xc8fda2fd), <span class="pl-c1">C32e</span>(0xc74fcc4f), <span class="pl-c1">C32e</span>(0x654b394b),</td>
      </tr>
      <tr>
        <td id="L2173" class="blob-num js-line-number" data-line-number="2173"></td>
        <td id="LC2173" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x6af957f9), <span class="pl-c1">C32e</span>(0x580df20d), <span class="pl-c1">C32e</span>(0x619d829d), <span class="pl-c1">C32e</span>(0xb3c947c9),</td>
      </tr>
      <tr>
        <td id="L2174" class="blob-num js-line-number" data-line-number="2174"></td>
        <td id="LC2174" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x27efacef), <span class="pl-c1">C32e</span>(0x8832e732), <span class="pl-c1">C32e</span>(0x4f7d2b7d), <span class="pl-c1">C32e</span>(0x42a495a4),</td>
      </tr>
      <tr>
        <td id="L2175" class="blob-num js-line-number" data-line-number="2175"></td>
        <td id="LC2175" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3bfba0fb), <span class="pl-c1">C32e</span>(0xaab398b3), <span class="pl-c1">C32e</span>(0xf668d168), <span class="pl-c1">C32e</span>(0x22817f81),</td>
      </tr>
      <tr>
        <td id="L2176" class="blob-num js-line-number" data-line-number="2176"></td>
        <td id="LC2176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xeeaa66aa), <span class="pl-c1">C32e</span>(0xd6827e82), <span class="pl-c1">C32e</span>(0xdde6abe6), <span class="pl-c1">C32e</span>(0x959e839e),</td>
      </tr>
      <tr>
        <td id="L2177" class="blob-num js-line-number" data-line-number="2177"></td>
        <td id="LC2177" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xc945ca45), <span class="pl-c1">C32e</span>(0xbc7b297b), <span class="pl-c1">C32e</span>(0x056ed36e), <span class="pl-c1">C32e</span>(0x6c443c44),</td>
      </tr>
      <tr>
        <td id="L2178" class="blob-num js-line-number" data-line-number="2178"></td>
        <td id="LC2178" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x2c8b798b), <span class="pl-c1">C32e</span>(0x813de23d), <span class="pl-c1">C32e</span>(0x31271d27), <span class="pl-c1">C32e</span>(0x379a769a),</td>
      </tr>
      <tr>
        <td id="L2179" class="blob-num js-line-number" data-line-number="2179"></td>
        <td id="LC2179" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x964d3b4d), <span class="pl-c1">C32e</span>(0x9efa56fa), <span class="pl-c1">C32e</span>(0xa6d24ed2), <span class="pl-c1">C32e</span>(0x36221e22),</td>
      </tr>
      <tr>
        <td id="L2180" class="blob-num js-line-number" data-line-number="2180"></td>
        <td id="LC2180" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe476db76), <span class="pl-c1">C32e</span>(0x121e0a1e), <span class="pl-c1">C32e</span>(0xfcb46cb4), <span class="pl-c1">C32e</span>(0x8f37e437),</td>
      </tr>
      <tr>
        <td id="L2181" class="blob-num js-line-number" data-line-number="2181"></td>
        <td id="LC2181" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x78e75de7), <span class="pl-c1">C32e</span>(0x0fb26eb2), <span class="pl-c1">C32e</span>(0x692aef2a), <span class="pl-c1">C32e</span>(0x35f1a6f1),</td>
      </tr>
      <tr>
        <td id="L2182" class="blob-num js-line-number" data-line-number="2182"></td>
        <td id="LC2182" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdae3a8e3), <span class="pl-c1">C32e</span>(0xc6f7a4f7), <span class="pl-c1">C32e</span>(0x8a593759), <span class="pl-c1">C32e</span>(0x74868b86),</td>
      </tr>
      <tr>
        <td id="L2183" class="blob-num js-line-number" data-line-number="2183"></td>
        <td id="LC2183" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x83563256), <span class="pl-c1">C32e</span>(0x4ec543c5), <span class="pl-c1">C32e</span>(0x85eb59eb), <span class="pl-c1">C32e</span>(0x18c2b7c2),</td>
      </tr>
      <tr>
        <td id="L2184" class="blob-num js-line-number" data-line-number="2184"></td>
        <td id="LC2184" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x8e8f8c8f), <span class="pl-c1">C32e</span>(0x1dac64ac), <span class="pl-c1">C32e</span>(0xf16dd26d), <span class="pl-c1">C32e</span>(0x723be03b),</td>
      </tr>
      <tr>
        <td id="L2185" class="blob-num js-line-number" data-line-number="2185"></td>
        <td id="LC2185" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1fc7b4c7), <span class="pl-c1">C32e</span>(0xb915fa15), <span class="pl-c1">C32e</span>(0xfa090709), <span class="pl-c1">C32e</span>(0xa06f256f),</td>
      </tr>
      <tr>
        <td id="L2186" class="blob-num js-line-number" data-line-number="2186"></td>
        <td id="LC2186" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x20eaafea), <span class="pl-c1">C32e</span>(0x7d898e89), <span class="pl-c1">C32e</span>(0x6720e920), <span class="pl-c1">C32e</span>(0x38281828),</td>
      </tr>
      <tr>
        <td id="L2187" class="blob-num js-line-number" data-line-number="2187"></td>
        <td id="LC2187" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x0b64d564), <span class="pl-c1">C32e</span>(0x73838883), <span class="pl-c1">C32e</span>(0xfbb16fb1), <span class="pl-c1">C32e</span>(0xca967296),</td>
      </tr>
      <tr>
        <td id="L2188" class="blob-num js-line-number" data-line-number="2188"></td>
        <td id="LC2188" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x546c246c), <span class="pl-c1">C32e</span>(0x5f08f108), <span class="pl-c1">C32e</span>(0x2152c752), <span class="pl-c1">C32e</span>(0x64f351f3),</td>
      </tr>
      <tr>
        <td id="L2189" class="blob-num js-line-number" data-line-number="2189"></td>
        <td id="LC2189" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xae652365), <span class="pl-c1">C32e</span>(0x25847c84), <span class="pl-c1">C32e</span>(0x57bf9cbf), <span class="pl-c1">C32e</span>(0x5d632163),</td>
      </tr>
      <tr>
        <td id="L2190" class="blob-num js-line-number" data-line-number="2190"></td>
        <td id="LC2190" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xea7cdd7c), <span class="pl-c1">C32e</span>(0x1e7fdc7f), <span class="pl-c1">C32e</span>(0x9c918691), <span class="pl-c1">C32e</span>(0x9b948594),</td>
      </tr>
      <tr>
        <td id="L2191" class="blob-num js-line-number" data-line-number="2191"></td>
        <td id="LC2191" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x4bab90ab), <span class="pl-c1">C32e</span>(0xbac642c6), <span class="pl-c1">C32e</span>(0x2657c457), <span class="pl-c1">C32e</span>(0x29e5aae5),</td>
      </tr>
      <tr>
        <td id="L2192" class="blob-num js-line-number" data-line-number="2192"></td>
        <td id="LC2192" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xe373d873), <span class="pl-c1">C32e</span>(0x090f050f), <span class="pl-c1">C32e</span>(0xf4030103), <span class="pl-c1">C32e</span>(0x2a361236),</td>
      </tr>
      <tr>
        <td id="L2193" class="blob-num js-line-number" data-line-number="2193"></td>
        <td id="LC2193" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3cfea3fe), <span class="pl-c1">C32e</span>(0x8be15fe1), <span class="pl-c1">C32e</span>(0xbe10f910), <span class="pl-c1">C32e</span>(0x026bd06b),</td>
      </tr>
      <tr>
        <td id="L2194" class="blob-num js-line-number" data-line-number="2194"></td>
        <td id="LC2194" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xbfa891a8), <span class="pl-c1">C32e</span>(0x71e858e8), <span class="pl-c1">C32e</span>(0x53692769), <span class="pl-c1">C32e</span>(0xf7d0b9d0),</td>
      </tr>
      <tr>
        <td id="L2195" class="blob-num js-line-number" data-line-number="2195"></td>
        <td id="LC2195" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x91483848), <span class="pl-c1">C32e</span>(0xde351335), <span class="pl-c1">C32e</span>(0xe5ceb3ce), <span class="pl-c1">C32e</span>(0x77553355),</td>
      </tr>
      <tr>
        <td id="L2196" class="blob-num js-line-number" data-line-number="2196"></td>
        <td id="LC2196" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x04d6bbd6), <span class="pl-c1">C32e</span>(0x39907090), <span class="pl-c1">C32e</span>(0x87808980), <span class="pl-c1">C32e</span>(0xc1f2a7f2),</td>
      </tr>
      <tr>
        <td id="L2197" class="blob-num js-line-number" data-line-number="2197"></td>
        <td id="LC2197" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xecc1b6c1), <span class="pl-c1">C32e</span>(0x5a662266), <span class="pl-c1">C32e</span>(0xb8ad92ad), <span class="pl-c1">C32e</span>(0xa9602060),</td>
      </tr>
      <tr>
        <td id="L2198" class="blob-num js-line-number" data-line-number="2198"></td>
        <td id="LC2198" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x5cdb49db), <span class="pl-c1">C32e</span>(0xb01aff1a), <span class="pl-c1">C32e</span>(0xd8887888), <span class="pl-c1">C32e</span>(0x2b8e7a8e),</td>
      </tr>
      <tr>
        <td id="L2199" class="blob-num js-line-number" data-line-number="2199"></td>
        <td id="LC2199" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x898a8f8a), <span class="pl-c1">C32e</span>(0x4a13f813), <span class="pl-c1">C32e</span>(0x929b809b), <span class="pl-c1">C32e</span>(0x23391739),</td>
      </tr>
      <tr>
        <td id="L2200" class="blob-num js-line-number" data-line-number="2200"></td>
        <td id="LC2200" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x1075da75), <span class="pl-c1">C32e</span>(0x84533153), <span class="pl-c1">C32e</span>(0xd551c651), <span class="pl-c1">C32e</span>(0x03d3b8d3),</td>
      </tr>
      <tr>
        <td id="L2201" class="blob-num js-line-number" data-line-number="2201"></td>
        <td id="LC2201" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0xdc5ec35e), <span class="pl-c1">C32e</span>(0xe2cbb0cb), <span class="pl-c1">C32e</span>(0xc3997799), <span class="pl-c1">C32e</span>(0x2d331133),</td>
      </tr>
      <tr>
        <td id="L2202" class="blob-num js-line-number" data-line-number="2202"></td>
        <td id="LC2202" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">C32e</span>(0x3d46cb46), <span class="pl-c1">C32e</span>(0xb71ffc1f), <span class="pl-c1">C32e</span>(0x0c61d661), <span class="pl-c1">C32e</span>(0x624e3a4e)</td>
      </tr>
      <tr>
        <td id="L2203" class="blob-num js-line-number" data-line-number="2203"></td>
        <td id="LC2203" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L2204" class="blob-num js-line-number" data-line-number="2204"></td>
        <td id="LC2204" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2205" class="blob-num js-line-number" data-line-number="2205"></td>
        <td id="LC2205" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">DECL_STATE_SMALL</span> \</td>
      </tr>
      <tr>
        <td id="L2206" class="blob-num js-line-number" data-line-number="2206"></td>
        <td id="LC2206" class="blob-code blob-code-inner js-file-line">	sph_u32 H[<span class="pl-c1">16</span>];</td>
      </tr>
      <tr>
        <td id="L2207" class="blob-num js-line-number" data-line-number="2207"></td>
        <td id="LC2207" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2208" class="blob-num js-line-number" data-line-number="2208"></td>
        <td id="LC2208" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">READ_STATE_SMALL</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2209" class="blob-num js-line-number" data-line-number="2209"></td>
        <td id="LC2209" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(H, (sc)-&gt;state.<span class="pl-smi">narrow</span>, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L2210" class="blob-num js-line-number" data-line-number="2210"></td>
        <td id="LC2210" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2211" class="blob-num js-line-number" data-line-number="2211"></td>
        <td id="LC2211" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2212" class="blob-num js-line-number" data-line-number="2212"></td>
        <td id="LC2212" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">WRITE_STATE_SMALL</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2213" class="blob-num js-line-number" data-line-number="2213"></td>
        <td id="LC2213" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>((sc)-&gt;state.<span class="pl-smi">narrow</span>, H, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L2214" class="blob-num js-line-number" data-line-number="2214"></td>
        <td id="LC2214" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2215" class="blob-num js-line-number" data-line-number="2215"></td>
        <td id="LC2215" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2216" class="blob-num js-line-number" data-line-number="2216"></td>
        <td id="LC2216" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">XCAT</span>(<span class="pl-v">x, y</span>)    XCAT_(x, y)</td>
      </tr>
      <tr>
        <td id="L2217" class="blob-num js-line-number" data-line-number="2217"></td>
        <td id="LC2217" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">XCAT_</span>(<span class="pl-v">x, y</span>)   x ## y</td>
      </tr>
      <tr>
        <td id="L2218" class="blob-num js-line-number" data-line-number="2218"></td>
        <td id="LC2218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2219" class="blob-num js-line-number" data-line-number="2219"></td>
        <td id="LC2219" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RSTT</span>(<span class="pl-v">d0, d1, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2220" class="blob-num js-line-number" data-line-number="2220"></td>
        <td id="LC2220" class="blob-code blob-code-inner js-file-line">		t[d0] = T0up[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2221" class="blob-num js-line-number" data-line-number="2221"></td>
        <td id="LC2221" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2222" class="blob-num js-line-number" data-line-number="2222"></td>
        <td id="LC2222" class="blob-code blob-code-inner js-file-line">			^ T2up[<span class="pl-c1">B32_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L2223" class="blob-num js-line-number" data-line-number="2223"></td>
        <td id="LC2223" class="blob-code blob-code-inner js-file-line">			^ T3up[<span class="pl-c1">B32_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L2224" class="blob-num js-line-number" data-line-number="2224"></td>
        <td id="LC2224" class="blob-code blob-code-inner js-file-line">			^ T0dn[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2225" class="blob-num js-line-number" data-line-number="2225"></td>
        <td id="LC2225" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2226" class="blob-num js-line-number" data-line-number="2226"></td>
        <td id="LC2226" class="blob-code blob-code-inner js-file-line">			^ T2dn[<span class="pl-c1">B32_2</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L2227" class="blob-num js-line-number" data-line-number="2227"></td>
        <td id="LC2227" class="blob-code blob-code-inner js-file-line">			^ T3dn[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2228" class="blob-num js-line-number" data-line-number="2228"></td>
        <td id="LC2228" class="blob-code blob-code-inner js-file-line">		t[d1] = T0dn[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2229" class="blob-num js-line-number" data-line-number="2229"></td>
        <td id="LC2229" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2230" class="blob-num js-line-number" data-line-number="2230"></td>
        <td id="LC2230" class="blob-code blob-code-inner js-file-line">			^ T2dn[<span class="pl-c1">B32_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L2231" class="blob-num js-line-number" data-line-number="2231"></td>
        <td id="LC2231" class="blob-code blob-code-inner js-file-line">			^ T3dn[<span class="pl-c1">B32_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L2232" class="blob-num js-line-number" data-line-number="2232"></td>
        <td id="LC2232" class="blob-code blob-code-inner js-file-line">			^ T0up[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2233" class="blob-num js-line-number" data-line-number="2233"></td>
        <td id="LC2233" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2234" class="blob-num js-line-number" data-line-number="2234"></td>
        <td id="LC2234" class="blob-code blob-code-inner js-file-line">			^ T2up[<span class="pl-c1">B32_2</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L2235" class="blob-num js-line-number" data-line-number="2235"></td>
        <td id="LC2235" class="blob-code blob-code-inner js-file-line">			^ T3up[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2236" class="blob-num js-line-number" data-line-number="2236"></td>
        <td id="LC2236" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2237" class="blob-num js-line-number" data-line-number="2237"></td>
        <td id="LC2237" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2238" class="blob-num js-line-number" data-line-number="2238"></td>
        <td id="LC2238" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_SMALL_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2239" class="blob-num js-line-number" data-line-number="2239"></td>
        <td id="LC2239" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L2240" class="blob-num js-line-number" data-line-number="2240"></td>
        <td id="LC2240" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">PC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2241" class="blob-num js-line-number" data-line-number="2241"></td>
        <td id="LC2241" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">PC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2242" class="blob-num js-line-number" data-line-number="2242"></td>
        <td id="LC2242" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">PC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2243" class="blob-num js-line-number" data-line-number="2243"></td>
        <td id="LC2243" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">PC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2244" class="blob-num js-line-number" data-line-number="2244"></td>
        <td id="LC2244" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">PC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2245" class="blob-num js-line-number" data-line-number="2245"></td>
        <td id="LC2245" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">PC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2246" class="blob-num js-line-number" data-line-number="2246"></td>
        <td id="LC2246" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">PC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2247" class="blob-num js-line-number" data-line-number="2247"></td>
        <td id="LC2247" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">PC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2248" class="blob-num js-line-number" data-line-number="2248"></td>
        <td id="LC2248" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">PC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2249" class="blob-num js-line-number" data-line-number="2249"></td>
        <td id="LC2249" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">PC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2250" class="blob-num js-line-number" data-line-number="2250"></td>
        <td id="LC2250" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">PC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2251" class="blob-num js-line-number" data-line-number="2251"></td>
        <td id="LC2251" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">PC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2252" class="blob-num js-line-number" data-line-number="2252"></td>
        <td id="LC2252" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">PC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2253" class="blob-num js-line-number" data-line-number="2253"></td>
        <td id="LC2253" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">PC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2254" class="blob-num js-line-number" data-line-number="2254"></td>
        <td id="LC2254" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">PC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2255" class="blob-num js-line-number" data-line-number="2255"></td>
        <td id="LC2255" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">PC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2256" class="blob-num js-line-number" data-line-number="2256"></td>
        <td id="LC2256" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x0, 0x1, a, 0x0, 0x2, 0x4, 0x6, 0x9, 0xB, 0xD, <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L2257" class="blob-num js-line-number" data-line-number="2257"></td>
        <td id="LC2257" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x2, 0x3, a, 0x2, 0x4, 0x6, 0x8, 0xB, 0xD, <span class="pl-c1">0xF</span>, 0x1); \</td>
      </tr>
      <tr>
        <td id="L2258" class="blob-num js-line-number" data-line-number="2258"></td>
        <td id="LC2258" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x4, 0x5, a, 0x4, 0x6, 0x8, 0xA, 0xD, <span class="pl-c1">0xF</span>, 0x1, 0x3); \</td>
      </tr>
      <tr>
        <td id="L2259" class="blob-num js-line-number" data-line-number="2259"></td>
        <td id="LC2259" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x6, 0x7, a, 0x6, 0x8, 0xA, 0xC, <span class="pl-c1">0xF</span>, 0x1, 0x3, 0x5); \</td>
      </tr>
      <tr>
        <td id="L2260" class="blob-num js-line-number" data-line-number="2260"></td>
        <td id="LC2260" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x8, 0x9, a, 0x8, 0xA, 0xC, 0xE, 0x1, 0x3, 0x5, 0x7); \</td>
      </tr>
      <tr>
        <td id="L2261" class="blob-num js-line-number" data-line-number="2261"></td>
        <td id="LC2261" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xA, 0xB, a, 0xA, 0xC, 0xE, 0x0, 0x3, 0x5, 0x7, 0x9); \</td>
      </tr>
      <tr>
        <td id="L2262" class="blob-num js-line-number" data-line-number="2262"></td>
        <td id="LC2262" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xC, 0xD, a, 0xC, 0xE, 0x0, 0x2, 0x5, 0x7, 0x9, 0xB); \</td>
      </tr>
      <tr>
        <td id="L2263" class="blob-num js-line-number" data-line-number="2263"></td>
        <td id="LC2263" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xE, <span class="pl-c1">0xF</span>, a, 0xE, 0x0, 0x2, 0x4, 0x7, 0x9, 0xB, 0xD); \</td>
      </tr>
      <tr>
        <td id="L2264" class="blob-num js-line-number" data-line-number="2264"></td>
        <td id="LC2264" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2265" class="blob-num js-line-number" data-line-number="2265"></td>
        <td id="LC2265" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2266" class="blob-num js-line-number" data-line-number="2266"></td>
        <td id="LC2266" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2267" class="blob-num js-line-number" data-line-number="2267"></td>
        <td id="LC2267" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_SMALL_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2268" class="blob-num js-line-number" data-line-number="2268"></td>
        <td id="LC2268" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L2269" class="blob-num js-line-number" data-line-number="2269"></td>
        <td id="LC2269" class="blob-code blob-code-inner js-file-line">		a[0x0] ^= <span class="pl-c1">QC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2270" class="blob-num js-line-number" data-line-number="2270"></td>
        <td id="LC2270" class="blob-code blob-code-inner js-file-line">		a[0x1] ^= <span class="pl-c1">QC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2271" class="blob-num js-line-number" data-line-number="2271"></td>
        <td id="LC2271" class="blob-code blob-code-inner js-file-line">		a[0x2] ^= <span class="pl-c1">QC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2272" class="blob-num js-line-number" data-line-number="2272"></td>
        <td id="LC2272" class="blob-code blob-code-inner js-file-line">		a[0x3] ^= <span class="pl-c1">QC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2273" class="blob-num js-line-number" data-line-number="2273"></td>
        <td id="LC2273" class="blob-code blob-code-inner js-file-line">		a[0x4] ^= <span class="pl-c1">QC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2274" class="blob-num js-line-number" data-line-number="2274"></td>
        <td id="LC2274" class="blob-code blob-code-inner js-file-line">		a[0x5] ^= <span class="pl-c1">QC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2275" class="blob-num js-line-number" data-line-number="2275"></td>
        <td id="LC2275" class="blob-code blob-code-inner js-file-line">		a[0x6] ^= <span class="pl-c1">QC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2276" class="blob-num js-line-number" data-line-number="2276"></td>
        <td id="LC2276" class="blob-code blob-code-inner js-file-line">		a[0x7] ^= <span class="pl-c1">QC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2277" class="blob-num js-line-number" data-line-number="2277"></td>
        <td id="LC2277" class="blob-code blob-code-inner js-file-line">		a[0x8] ^= <span class="pl-c1">QC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2278" class="blob-num js-line-number" data-line-number="2278"></td>
        <td id="LC2278" class="blob-code blob-code-inner js-file-line">		a[0x9] ^= <span class="pl-c1">QC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2279" class="blob-num js-line-number" data-line-number="2279"></td>
        <td id="LC2279" class="blob-code blob-code-inner js-file-line">		a[0xA] ^= <span class="pl-c1">QC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2280" class="blob-num js-line-number" data-line-number="2280"></td>
        <td id="LC2280" class="blob-code blob-code-inner js-file-line">		a[0xB] ^= <span class="pl-c1">QC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2281" class="blob-num js-line-number" data-line-number="2281"></td>
        <td id="LC2281" class="blob-code blob-code-inner js-file-line">		a[0xC] ^= <span class="pl-c1">QC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2282" class="blob-num js-line-number" data-line-number="2282"></td>
        <td id="LC2282" class="blob-code blob-code-inner js-file-line">		a[0xD] ^= <span class="pl-c1">QC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2283" class="blob-num js-line-number" data-line-number="2283"></td>
        <td id="LC2283" class="blob-code blob-code-inner js-file-line">		a[0xE] ^= <span class="pl-c1">QC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2284" class="blob-num js-line-number" data-line-number="2284"></td>
        <td id="LC2284" class="blob-code blob-code-inner js-file-line">		a[<span class="pl-c1">0xF</span>] ^= <span class="pl-c1">QC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2285" class="blob-num js-line-number" data-line-number="2285"></td>
        <td id="LC2285" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x0, 0x1, a, 0x2, 0x6, 0xA, 0xE, 0x1, 0x5, 0x9, 0xD); \</td>
      </tr>
      <tr>
        <td id="L2286" class="blob-num js-line-number" data-line-number="2286"></td>
        <td id="LC2286" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x2, 0x3, a, 0x4, 0x8, 0xC, 0x0, 0x3, 0x7, 0xB, <span class="pl-c1">0xF</span>); \</td>
      </tr>
      <tr>
        <td id="L2287" class="blob-num js-line-number" data-line-number="2287"></td>
        <td id="LC2287" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x4, 0x5, a, 0x6, 0xA, 0xE, 0x2, 0x5, 0x9, 0xD, 0x1); \</td>
      </tr>
      <tr>
        <td id="L2288" class="blob-num js-line-number" data-line-number="2288"></td>
        <td id="LC2288" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x6, 0x7, a, 0x8, 0xC, 0x0, 0x4, 0x7, 0xB, <span class="pl-c1">0xF</span>, 0x3); \</td>
      </tr>
      <tr>
        <td id="L2289" class="blob-num js-line-number" data-line-number="2289"></td>
        <td id="LC2289" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0x8, 0x9, a, 0xA, 0xE, 0x2, 0x6, 0x9, 0xD, 0x1, 0x5); \</td>
      </tr>
      <tr>
        <td id="L2290" class="blob-num js-line-number" data-line-number="2290"></td>
        <td id="LC2290" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xA, 0xB, a, 0xC, 0x0, 0x4, 0x8, 0xB, <span class="pl-c1">0xF</span>, 0x3, 0x7); \</td>
      </tr>
      <tr>
        <td id="L2291" class="blob-num js-line-number" data-line-number="2291"></td>
        <td id="LC2291" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xC, 0xD, a, 0xE, 0x2, 0x6, 0xA, 0xD, 0x1, 0x5, 0x9); \</td>
      </tr>
      <tr>
        <td id="L2292" class="blob-num js-line-number" data-line-number="2292"></td>
        <td id="LC2292" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RSTT</span>(0xE, <span class="pl-c1">0xF</span>, a, 0x0, 0x4, 0x8, 0xC, <span class="pl-c1">0xF</span>, 0x3, 0x7, 0xB); \</td>
      </tr>
      <tr>
        <td id="L2293" class="blob-num js-line-number" data-line-number="2293"></td>
        <td id="LC2293" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2294" class="blob-num js-line-number" data-line-number="2294"></td>
        <td id="LC2294" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2295" class="blob-num js-line-number" data-line-number="2295"></td>
        <td id="LC2295" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2296" class="blob-num js-line-number" data-line-number="2296"></td>
        <td id="LC2296" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L2297" class="blob-num js-line-number" data-line-number="2297"></td>
        <td id="LC2297" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2298" class="blob-num js-line-number" data-line-number="2298"></td>
        <td id="LC2298" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2299" class="blob-num js-line-number" data-line-number="2299"></td>
        <td id="LC2299" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2300" class="blob-num js-line-number" data-line-number="2300"></td>
        <td id="LC2300" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L2301" class="blob-num js-line-number" data-line-number="2301"></td>
        <td id="LC2301" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L2302" class="blob-num js-line-number" data-line-number="2302"></td>
        <td id="LC2302" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2303" class="blob-num js-line-number" data-line-number="2303"></td>
        <td id="LC2303" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2304" class="blob-num js-line-number" data-line-number="2304"></td>
        <td id="LC2304" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2305" class="blob-num js-line-number" data-line-number="2305"></td>
        <td id="LC2305" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2306" class="blob-num js-line-number" data-line-number="2306"></td>
        <td id="LC2306" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L2307" class="blob-num js-line-number" data-line-number="2307"></td>
        <td id="LC2307" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L2308" class="blob-num js-line-number" data-line-number="2308"></td>
        <td id="LC2308" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2309" class="blob-num js-line-number" data-line-number="2309"></td>
        <td id="LC2309" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2310" class="blob-num js-line-number" data-line-number="2310"></td>
        <td id="LC2310" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2311" class="blob-num js-line-number" data-line-number="2311"></td>
        <td id="LC2311" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2312" class="blob-num js-line-number" data-line-number="2312"></td>
        <td id="LC2312" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2313" class="blob-num js-line-number" data-line-number="2313"></td>
        <td id="LC2313" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2314" class="blob-num js-line-number" data-line-number="2314"></td>
        <td id="LC2314" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L2315" class="blob-num js-line-number" data-line-number="2315"></td>
        <td id="LC2315" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L2316" class="blob-num js-line-number" data-line-number="2316"></td>
        <td id="LC2316" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_P</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L2317" class="blob-num js-line-number" data-line-number="2317"></td>
        <td id="LC2317" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2318" class="blob-num js-line-number" data-line-number="2318"></td>
        <td id="LC2318" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2319" class="blob-num js-line-number" data-line-number="2319"></td>
        <td id="LC2319" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2320" class="blob-num js-line-number" data-line-number="2320"></td>
        <td id="LC2320" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_SMALL_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2321" class="blob-num js-line-number" data-line-number="2321"></td>
        <td id="LC2321" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2322" class="blob-num js-line-number" data-line-number="2322"></td>
        <td id="LC2322" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">10</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L2323" class="blob-num js-line-number" data-line-number="2323"></td>
        <td id="LC2323" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L2324" class="blob-num js-line-number" data-line-number="2324"></td>
        <td id="LC2324" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_SMALL_Q</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L2325" class="blob-num js-line-number" data-line-number="2325"></td>
        <td id="LC2325" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2326" class="blob-num js-line-number" data-line-number="2326"></td>
        <td id="LC2326" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2327" class="blob-num js-line-number" data-line-number="2327"></td>
        <td id="LC2327" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2328" class="blob-num js-line-number" data-line-number="2328"></td>
        <td id="LC2328" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2329" class="blob-num js-line-number" data-line-number="2329"></td>
        <td id="LC2329" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2330" class="blob-num js-line-number" data-line-number="2330"></td>
        <td id="LC2330" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">COMPRESS_SMALL</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2331" class="blob-num js-line-number" data-line-number="2331"></td>
        <td id="LC2331" class="blob-code blob-code-inner js-file-line">		sph_u32 g[<span class="pl-c1">16</span>], m[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L2332" class="blob-num js-line-number" data-line-number="2332"></td>
        <td id="LC2332" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2333" class="blob-num js-line-number" data-line-number="2333"></td>
        <td id="LC2333" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) { \</td>
      </tr>
      <tr>
        <td id="L2334" class="blob-num js-line-number" data-line-number="2334"></td>
        <td id="LC2334" class="blob-code blob-code-inner js-file-line">			m[u] = <span class="pl-c1">dec32e_aligned</span>(buf + (u &lt;&lt; <span class="pl-c1">2</span>)); \</td>
      </tr>
      <tr>
        <td id="L2335" class="blob-num js-line-number" data-line-number="2335"></td>
        <td id="LC2335" class="blob-code blob-code-inner js-file-line">			g[u] = m[u] ^ H[u]; \</td>
      </tr>
      <tr>
        <td id="L2336" class="blob-num js-line-number" data-line-number="2336"></td>
        <td id="LC2336" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2337" class="blob-num js-line-number" data-line-number="2337"></td>
        <td id="LC2337" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_P</span>(g); \</td>
      </tr>
      <tr>
        <td id="L2338" class="blob-num js-line-number" data-line-number="2338"></td>
        <td id="LC2338" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_Q</span>(m); \</td>
      </tr>
      <tr>
        <td id="L2339" class="blob-num js-line-number" data-line-number="2339"></td>
        <td id="LC2339" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L2340" class="blob-num js-line-number" data-line-number="2340"></td>
        <td id="LC2340" class="blob-code blob-code-inner js-file-line">			H[u] ^= g[u] ^ m[u]; \</td>
      </tr>
      <tr>
        <td id="L2341" class="blob-num js-line-number" data-line-number="2341"></td>
        <td id="LC2341" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2342" class="blob-num js-line-number" data-line-number="2342"></td>
        <td id="LC2342" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2343" class="blob-num js-line-number" data-line-number="2343"></td>
        <td id="LC2343" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">FINAL_SMALL</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2344" class="blob-num js-line-number" data-line-number="2344"></td>
        <td id="LC2344" class="blob-code blob-code-inner js-file-line">		sph_u32 x[<span class="pl-c1">16</span>]; \</td>
      </tr>
      <tr>
        <td id="L2345" class="blob-num js-line-number" data-line-number="2345"></td>
        <td id="LC2345" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2346" class="blob-num js-line-number" data-line-number="2346"></td>
        <td id="LC2346" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(x, H, <span class="pl-k">sizeof</span> x); \</td>
      </tr>
      <tr>
        <td id="L2347" class="blob-num js-line-number" data-line-number="2347"></td>
        <td id="LC2347" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_SMALL_P</span>(x); \</td>
      </tr>
      <tr>
        <td id="L2348" class="blob-num js-line-number" data-line-number="2348"></td>
        <td id="LC2348" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L2349" class="blob-num js-line-number" data-line-number="2349"></td>
        <td id="LC2349" class="blob-code blob-code-inner js-file-line">			H[u] ^= x[u]; \</td>
      </tr>
      <tr>
        <td id="L2350" class="blob-num js-line-number" data-line-number="2350"></td>
        <td id="LC2350" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2351" class="blob-num js-line-number" data-line-number="2351"></td>
        <td id="LC2351" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2352" class="blob-num js-line-number" data-line-number="2352"></td>
        <td id="LC2352" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">DECL_STATE_BIG</span> \</td>
      </tr>
      <tr>
        <td id="L2353" class="blob-num js-line-number" data-line-number="2353"></td>
        <td id="LC2353" class="blob-code blob-code-inner js-file-line">	sph_u32 H[<span class="pl-c1">32</span>];</td>
      </tr>
      <tr>
        <td id="L2354" class="blob-num js-line-number" data-line-number="2354"></td>
        <td id="LC2354" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2355" class="blob-num js-line-number" data-line-number="2355"></td>
        <td id="LC2355" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">READ_STATE_BIG</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2356" class="blob-num js-line-number" data-line-number="2356"></td>
        <td id="LC2356" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(H, (sc)-&gt;state.<span class="pl-smi">narrow</span>, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L2357" class="blob-num js-line-number" data-line-number="2357"></td>
        <td id="LC2357" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2358" class="blob-num js-line-number" data-line-number="2358"></td>
        <td id="LC2358" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2359" class="blob-num js-line-number" data-line-number="2359"></td>
        <td id="LC2359" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">WRITE_STATE_BIG</span>(<span class="pl-v">sc</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2360" class="blob-num js-line-number" data-line-number="2360"></td>
        <td id="LC2360" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>((sc)-&gt;state.<span class="pl-smi">narrow</span>, H, <span class="pl-k">sizeof</span> H); \</td>
      </tr>
      <tr>
        <td id="L2361" class="blob-num js-line-number" data-line-number="2361"></td>
        <td id="LC2361" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2362" class="blob-num js-line-number" data-line-number="2362"></td>
        <td id="LC2362" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2363" class="blob-num js-line-number" data-line-number="2363"></td>
        <td id="LC2363" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L2364" class="blob-num js-line-number" data-line-number="2364"></td>
        <td id="LC2364" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2365" class="blob-num js-line-number" data-line-number="2365"></td>
        <td id="LC2365" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RBTT</span>(<span class="pl-v">d0, d1, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2366" class="blob-num js-line-number" data-line-number="2366"></td>
        <td id="LC2366" class="blob-code blob-code-inner js-file-line">		sph_u32 fu2 = T0up[<span class="pl-c1">B32_2</span>(a[b2])]; \</td>
      </tr>
      <tr>
        <td id="L2367" class="blob-num js-line-number" data-line-number="2367"></td>
        <td id="LC2367" class="blob-code blob-code-inner js-file-line">		sph_u32 fd2 = T0dn[<span class="pl-c1">B32_2</span>(a[b2])]; \</td>
      </tr>
      <tr>
        <td id="L2368" class="blob-num js-line-number" data-line-number="2368"></td>
        <td id="LC2368" class="blob-code blob-code-inner js-file-line">		sph_u32 fu3 = T1up[<span class="pl-c1">B32_3</span>(a[b3])]; \</td>
      </tr>
      <tr>
        <td id="L2369" class="blob-num js-line-number" data-line-number="2369"></td>
        <td id="LC2369" class="blob-code blob-code-inner js-file-line">		sph_u32 fd3 = T1dn[<span class="pl-c1">B32_3</span>(a[b3])]; \</td>
      </tr>
      <tr>
        <td id="L2370" class="blob-num js-line-number" data-line-number="2370"></td>
        <td id="LC2370" class="blob-code blob-code-inner js-file-line">		sph_u32 fu6 = T0up[<span class="pl-c1">B32_2</span>(a[b6])]; \</td>
      </tr>
      <tr>
        <td id="L2371" class="blob-num js-line-number" data-line-number="2371"></td>
        <td id="LC2371" class="blob-code blob-code-inner js-file-line">		sph_u32 fd6 = T0dn[<span class="pl-c1">B32_2</span>(a[b6])]; \</td>
      </tr>
      <tr>
        <td id="L2372" class="blob-num js-line-number" data-line-number="2372"></td>
        <td id="LC2372" class="blob-code blob-code-inner js-file-line">		sph_u32 fu7 = T1up[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2373" class="blob-num js-line-number" data-line-number="2373"></td>
        <td id="LC2373" class="blob-code blob-code-inner js-file-line">		sph_u32 fd7 = T1dn[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2374" class="blob-num js-line-number" data-line-number="2374"></td>
        <td id="LC2374" class="blob-code blob-code-inner js-file-line">		t[d0] = T0up[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2375" class="blob-num js-line-number" data-line-number="2375"></td>
        <td id="LC2375" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2376" class="blob-num js-line-number" data-line-number="2376"></td>
        <td id="LC2376" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32u</span>(fu2, fd2) \</td>
      </tr>
      <tr>
        <td id="L2377" class="blob-num js-line-number" data-line-number="2377"></td>
        <td id="LC2377" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32u</span>(fu3, fd3) \</td>
      </tr>
      <tr>
        <td id="L2378" class="blob-num js-line-number" data-line-number="2378"></td>
        <td id="LC2378" class="blob-code blob-code-inner js-file-line">			^ T0dn[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2379" class="blob-num js-line-number" data-line-number="2379"></td>
        <td id="LC2379" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2380" class="blob-num js-line-number" data-line-number="2380"></td>
        <td id="LC2380" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32d</span>(fu6, fd6) \</td>
      </tr>
      <tr>
        <td id="L2381" class="blob-num js-line-number" data-line-number="2381"></td>
        <td id="LC2381" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32d</span>(fu7, fd7); \</td>
      </tr>
      <tr>
        <td id="L2382" class="blob-num js-line-number" data-line-number="2382"></td>
        <td id="LC2382" class="blob-code blob-code-inner js-file-line">		t[d1] = T0dn[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2383" class="blob-num js-line-number" data-line-number="2383"></td>
        <td id="LC2383" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2384" class="blob-num js-line-number" data-line-number="2384"></td>
        <td id="LC2384" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32d</span>(fu2, fd2) \</td>
      </tr>
      <tr>
        <td id="L2385" class="blob-num js-line-number" data-line-number="2385"></td>
        <td id="LC2385" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32d</span>(fu3, fd3) \</td>
      </tr>
      <tr>
        <td id="L2386" class="blob-num js-line-number" data-line-number="2386"></td>
        <td id="LC2386" class="blob-code blob-code-inner js-file-line">			^ T0up[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2387" class="blob-num js-line-number" data-line-number="2387"></td>
        <td id="LC2387" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2388" class="blob-num js-line-number" data-line-number="2388"></td>
        <td id="LC2388" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32u</span>(fu6, fd6) \</td>
      </tr>
      <tr>
        <td id="L2389" class="blob-num js-line-number" data-line-number="2389"></td>
        <td id="LC2389" class="blob-code blob-code-inner js-file-line">			^ <span class="pl-c1">R32u</span>(fu7, fd7); \</td>
      </tr>
      <tr>
        <td id="L2390" class="blob-num js-line-number" data-line-number="2390"></td>
        <td id="LC2390" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2391" class="blob-num js-line-number" data-line-number="2391"></td>
        <td id="LC2391" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2392" class="blob-num js-line-number" data-line-number="2392"></td>
        <td id="LC2392" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2393" class="blob-num js-line-number" data-line-number="2393"></td>
        <td id="LC2393" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2394" class="blob-num js-line-number" data-line-number="2394"></td>
        <td id="LC2394" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RBTT</span>(<span class="pl-v">d0, d1, a, b0, b1, b2, b3, b4, b5, b6, b7</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2395" class="blob-num js-line-number" data-line-number="2395"></td>
        <td id="LC2395" class="blob-code blob-code-inner js-file-line">		t[d0] = T0up[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2396" class="blob-num js-line-number" data-line-number="2396"></td>
        <td id="LC2396" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2397" class="blob-num js-line-number" data-line-number="2397"></td>
        <td id="LC2397" class="blob-code blob-code-inner js-file-line">			^ T2up[<span class="pl-c1">B32_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L2398" class="blob-num js-line-number" data-line-number="2398"></td>
        <td id="LC2398" class="blob-code blob-code-inner js-file-line">			^ T3up[<span class="pl-c1">B32_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L2399" class="blob-num js-line-number" data-line-number="2399"></td>
        <td id="LC2399" class="blob-code blob-code-inner js-file-line">			^ T0dn[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2400" class="blob-num js-line-number" data-line-number="2400"></td>
        <td id="LC2400" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2401" class="blob-num js-line-number" data-line-number="2401"></td>
        <td id="LC2401" class="blob-code blob-code-inner js-file-line">			^ T2dn[<span class="pl-c1">B32_2</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L2402" class="blob-num js-line-number" data-line-number="2402"></td>
        <td id="LC2402" class="blob-code blob-code-inner js-file-line">			^ T3dn[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2403" class="blob-num js-line-number" data-line-number="2403"></td>
        <td id="LC2403" class="blob-code blob-code-inner js-file-line">		t[d1] = T0dn[<span class="pl-c1">B32_0</span>(a[b0])] \</td>
      </tr>
      <tr>
        <td id="L2404" class="blob-num js-line-number" data-line-number="2404"></td>
        <td id="LC2404" class="blob-code blob-code-inner js-file-line">			^ T1dn[<span class="pl-c1">B32_1</span>(a[b1])] \</td>
      </tr>
      <tr>
        <td id="L2405" class="blob-num js-line-number" data-line-number="2405"></td>
        <td id="LC2405" class="blob-code blob-code-inner js-file-line">			^ T2dn[<span class="pl-c1">B32_2</span>(a[b2])] \</td>
      </tr>
      <tr>
        <td id="L2406" class="blob-num js-line-number" data-line-number="2406"></td>
        <td id="LC2406" class="blob-code blob-code-inner js-file-line">			^ T3dn[<span class="pl-c1">B32_3</span>(a[b3])] \</td>
      </tr>
      <tr>
        <td id="L2407" class="blob-num js-line-number" data-line-number="2407"></td>
        <td id="LC2407" class="blob-code blob-code-inner js-file-line">			^ T0up[<span class="pl-c1">B32_0</span>(a[b4])] \</td>
      </tr>
      <tr>
        <td id="L2408" class="blob-num js-line-number" data-line-number="2408"></td>
        <td id="LC2408" class="blob-code blob-code-inner js-file-line">			^ T1up[<span class="pl-c1">B32_1</span>(a[b5])] \</td>
      </tr>
      <tr>
        <td id="L2409" class="blob-num js-line-number" data-line-number="2409"></td>
        <td id="LC2409" class="blob-code blob-code-inner js-file-line">			^ T2up[<span class="pl-c1">B32_2</span>(a[b6])] \</td>
      </tr>
      <tr>
        <td id="L2410" class="blob-num js-line-number" data-line-number="2410"></td>
        <td id="LC2410" class="blob-code blob-code-inner js-file-line">			^ T3up[<span class="pl-c1">B32_3</span>(a[b7])]; \</td>
      </tr>
      <tr>
        <td id="L2411" class="blob-num js-line-number" data-line-number="2411"></td>
        <td id="LC2411" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2412" class="blob-num js-line-number" data-line-number="2412"></td>
        <td id="LC2412" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2413" class="blob-num js-line-number" data-line-number="2413"></td>
        <td id="LC2413" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2414" class="blob-num js-line-number" data-line-number="2414"></td>
        <td id="LC2414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2415" class="blob-num js-line-number" data-line-number="2415"></td>
        <td id="LC2415" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L2416" class="blob-num js-line-number" data-line-number="2416"></td>
        <td id="LC2416" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2417" class="blob-num js-line-number" data-line-number="2417"></td>
        <td id="LC2417" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2418" class="blob-num js-line-number" data-line-number="2418"></td>
        <td id="LC2418" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2419" class="blob-num js-line-number" data-line-number="2419"></td>
        <td id="LC2419" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2420" class="blob-num js-line-number" data-line-number="2420"></td>
        <td id="LC2420" class="blob-code blob-code-inner js-file-line">		a[0x00] ^= <span class="pl-c1">PC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2421" class="blob-num js-line-number" data-line-number="2421"></td>
        <td id="LC2421" class="blob-code blob-code-inner js-file-line">		a[0x01] ^= <span class="pl-c1">PC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2422" class="blob-num js-line-number" data-line-number="2422"></td>
        <td id="LC2422" class="blob-code blob-code-inner js-file-line">		a[0x02] ^= <span class="pl-c1">PC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2423" class="blob-num js-line-number" data-line-number="2423"></td>
        <td id="LC2423" class="blob-code blob-code-inner js-file-line">		a[0x03] ^= <span class="pl-c1">PC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2424" class="blob-num js-line-number" data-line-number="2424"></td>
        <td id="LC2424" class="blob-code blob-code-inner js-file-line">		a[0x04] ^= <span class="pl-c1">PC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2425" class="blob-num js-line-number" data-line-number="2425"></td>
        <td id="LC2425" class="blob-code blob-code-inner js-file-line">		a[0x05] ^= <span class="pl-c1">PC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2426" class="blob-num js-line-number" data-line-number="2426"></td>
        <td id="LC2426" class="blob-code blob-code-inner js-file-line">		a[0x06] ^= <span class="pl-c1">PC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2427" class="blob-num js-line-number" data-line-number="2427"></td>
        <td id="LC2427" class="blob-code blob-code-inner js-file-line">		a[0x07] ^= <span class="pl-c1">PC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2428" class="blob-num js-line-number" data-line-number="2428"></td>
        <td id="LC2428" class="blob-code blob-code-inner js-file-line">		a[0x08] ^= <span class="pl-c1">PC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2429" class="blob-num js-line-number" data-line-number="2429"></td>
        <td id="LC2429" class="blob-code blob-code-inner js-file-line">		a[0x09] ^= <span class="pl-c1">PC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2430" class="blob-num js-line-number" data-line-number="2430"></td>
        <td id="LC2430" class="blob-code blob-code-inner js-file-line">		a[0x0A] ^= <span class="pl-c1">PC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2431" class="blob-num js-line-number" data-line-number="2431"></td>
        <td id="LC2431" class="blob-code blob-code-inner js-file-line">		a[0x0B] ^= <span class="pl-c1">PC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2432" class="blob-num js-line-number" data-line-number="2432"></td>
        <td id="LC2432" class="blob-code blob-code-inner js-file-line">		a[0x0C] ^= <span class="pl-c1">PC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2433" class="blob-num js-line-number" data-line-number="2433"></td>
        <td id="LC2433" class="blob-code blob-code-inner js-file-line">		a[0x0D] ^= <span class="pl-c1">PC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2434" class="blob-num js-line-number" data-line-number="2434"></td>
        <td id="LC2434" class="blob-code blob-code-inner js-file-line">		a[0x0E] ^= <span class="pl-c1">PC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2435" class="blob-num js-line-number" data-line-number="2435"></td>
        <td id="LC2435" class="blob-code blob-code-inner js-file-line">		a[0x0F] ^= <span class="pl-c1">PC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2436" class="blob-num js-line-number" data-line-number="2436"></td>
        <td id="LC2436" class="blob-code blob-code-inner js-file-line">		a[0x10] ^= <span class="pl-c1">PC32up</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2437" class="blob-num js-line-number" data-line-number="2437"></td>
        <td id="LC2437" class="blob-code blob-code-inner js-file-line">		a[0x11] ^= <span class="pl-c1">PC32dn</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2438" class="blob-num js-line-number" data-line-number="2438"></td>
        <td id="LC2438" class="blob-code blob-code-inner js-file-line">		a[0x12] ^= <span class="pl-c1">PC32up</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2439" class="blob-num js-line-number" data-line-number="2439"></td>
        <td id="LC2439" class="blob-code blob-code-inner js-file-line">		a[0x13] ^= <span class="pl-c1">PC32dn</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2440" class="blob-num js-line-number" data-line-number="2440"></td>
        <td id="LC2440" class="blob-code blob-code-inner js-file-line">		a[0x14] ^= <span class="pl-c1">PC32up</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2441" class="blob-num js-line-number" data-line-number="2441"></td>
        <td id="LC2441" class="blob-code blob-code-inner js-file-line">		a[0x15] ^= <span class="pl-c1">PC32dn</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2442" class="blob-num js-line-number" data-line-number="2442"></td>
        <td id="LC2442" class="blob-code blob-code-inner js-file-line">		a[0x16] ^= <span class="pl-c1">PC32up</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2443" class="blob-num js-line-number" data-line-number="2443"></td>
        <td id="LC2443" class="blob-code blob-code-inner js-file-line">		a[0x17] ^= <span class="pl-c1">PC32dn</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2444" class="blob-num js-line-number" data-line-number="2444"></td>
        <td id="LC2444" class="blob-code blob-code-inner js-file-line">		a[0x18] ^= <span class="pl-c1">PC32up</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2445" class="blob-num js-line-number" data-line-number="2445"></td>
        <td id="LC2445" class="blob-code blob-code-inner js-file-line">		a[0x19] ^= <span class="pl-c1">PC32dn</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2446" class="blob-num js-line-number" data-line-number="2446"></td>
        <td id="LC2446" class="blob-code blob-code-inner js-file-line">		a[0x1A] ^= <span class="pl-c1">PC32up</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2447" class="blob-num js-line-number" data-line-number="2447"></td>
        <td id="LC2447" class="blob-code blob-code-inner js-file-line">		a[0x1B] ^= <span class="pl-c1">PC32dn</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2448" class="blob-num js-line-number" data-line-number="2448"></td>
        <td id="LC2448" class="blob-code blob-code-inner js-file-line">		a[0x1C] ^= <span class="pl-c1">PC32up</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2449" class="blob-num js-line-number" data-line-number="2449"></td>
        <td id="LC2449" class="blob-code blob-code-inner js-file-line">		a[0x1D] ^= <span class="pl-c1">PC32dn</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2450" class="blob-num js-line-number" data-line-number="2450"></td>
        <td id="LC2450" class="blob-code blob-code-inner js-file-line">		a[0x1E] ^= <span class="pl-c1">PC32up</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2451" class="blob-num js-line-number" data-line-number="2451"></td>
        <td id="LC2451" class="blob-code blob-code-inner js-file-line">		a[0x1F] ^= <span class="pl-c1">PC32dn</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2452" class="blob-num js-line-number" data-line-number="2452"></td>
        <td id="LC2452" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">32</span>; u += <span class="pl-c1">8</span>) { \</td>
      </tr>
      <tr>
        <td id="L2453" class="blob-num js-line-number" data-line-number="2453"></td>
        <td id="LC2453" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x00, (u + 0x01) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2454" class="blob-num js-line-number" data-line-number="2454"></td>
        <td id="LC2454" class="blob-code blob-code-inner js-file-line">				u + 0x00, (u + 0x02) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2455" class="blob-num js-line-number" data-line-number="2455"></td>
        <td id="LC2455" class="blob-code blob-code-inner js-file-line">				(u + 0x04) &amp; 0x1F, (u + 0x06) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2456" class="blob-num js-line-number" data-line-number="2456"></td>
        <td id="LC2456" class="blob-code blob-code-inner js-file-line">				(u + 0x09) &amp; 0x1F, (u + 0x0B) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2457" class="blob-num js-line-number" data-line-number="2457"></td>
        <td id="LC2457" class="blob-code blob-code-inner js-file-line">				(u + 0x0D) &amp; 0x1F, (u + 0x17) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2458" class="blob-num js-line-number" data-line-number="2458"></td>
        <td id="LC2458" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x02, (u + 0x03) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2459" class="blob-num js-line-number" data-line-number="2459"></td>
        <td id="LC2459" class="blob-code blob-code-inner js-file-line">				u + 0x02, (u + 0x04) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2460" class="blob-num js-line-number" data-line-number="2460"></td>
        <td id="LC2460" class="blob-code blob-code-inner js-file-line">				(u + 0x06) &amp; 0x1F, (u + 0x08) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2461" class="blob-num js-line-number" data-line-number="2461"></td>
        <td id="LC2461" class="blob-code blob-code-inner js-file-line">				(u + 0x0B) &amp; 0x1F, (u + 0x0D) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2462" class="blob-num js-line-number" data-line-number="2462"></td>
        <td id="LC2462" class="blob-code blob-code-inner js-file-line">				(u + 0x0F) &amp; 0x1F, (u + 0x19) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2463" class="blob-num js-line-number" data-line-number="2463"></td>
        <td id="LC2463" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x04, (u + 0x05) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2464" class="blob-num js-line-number" data-line-number="2464"></td>
        <td id="LC2464" class="blob-code blob-code-inner js-file-line">				u + 0x04, (u + 0x06) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2465" class="blob-num js-line-number" data-line-number="2465"></td>
        <td id="LC2465" class="blob-code blob-code-inner js-file-line">				(u + 0x08) &amp; 0x1F, (u + 0x0A) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2466" class="blob-num js-line-number" data-line-number="2466"></td>
        <td id="LC2466" class="blob-code blob-code-inner js-file-line">				(u + 0x0D) &amp; 0x1F, (u + 0x0F) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2467" class="blob-num js-line-number" data-line-number="2467"></td>
        <td id="LC2467" class="blob-code blob-code-inner js-file-line">				(u + 0x11) &amp; 0x1F, (u + 0x1B) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2468" class="blob-num js-line-number" data-line-number="2468"></td>
        <td id="LC2468" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x06, (u + 0x07) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2469" class="blob-num js-line-number" data-line-number="2469"></td>
        <td id="LC2469" class="blob-code blob-code-inner js-file-line">				u + 0x06, (u + 0x08) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2470" class="blob-num js-line-number" data-line-number="2470"></td>
        <td id="LC2470" class="blob-code blob-code-inner js-file-line">				(u + 0x0A) &amp; 0x1F, (u + 0x0C) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2471" class="blob-num js-line-number" data-line-number="2471"></td>
        <td id="LC2471" class="blob-code blob-code-inner js-file-line">				(u + 0x0F) &amp; 0x1F, (u + 0x11) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2472" class="blob-num js-line-number" data-line-number="2472"></td>
        <td id="LC2472" class="blob-code blob-code-inner js-file-line">				(u + 0x13) &amp; 0x1F, (u + 0x1D) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2473" class="blob-num js-line-number" data-line-number="2473"></td>
        <td id="LC2473" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2474" class="blob-num js-line-number" data-line-number="2474"></td>
        <td id="LC2474" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2475" class="blob-num js-line-number" data-line-number="2475"></td>
        <td id="LC2475" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2476" class="blob-num js-line-number" data-line-number="2476"></td>
        <td id="LC2476" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2477" class="blob-num js-line-number" data-line-number="2477"></td>
        <td id="LC2477" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2478" class="blob-num js-line-number" data-line-number="2478"></td>
        <td id="LC2478" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2479" class="blob-num js-line-number" data-line-number="2479"></td>
        <td id="LC2479" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2480" class="blob-num js-line-number" data-line-number="2480"></td>
        <td id="LC2480" class="blob-code blob-code-inner js-file-line">		a[0x00] ^= <span class="pl-c1">QC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2481" class="blob-num js-line-number" data-line-number="2481"></td>
        <td id="LC2481" class="blob-code blob-code-inner js-file-line">		a[0x01] ^= <span class="pl-c1">QC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2482" class="blob-num js-line-number" data-line-number="2482"></td>
        <td id="LC2482" class="blob-code blob-code-inner js-file-line">		a[0x02] ^= <span class="pl-c1">QC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2483" class="blob-num js-line-number" data-line-number="2483"></td>
        <td id="LC2483" class="blob-code blob-code-inner js-file-line">		a[0x03] ^= <span class="pl-c1">QC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2484" class="blob-num js-line-number" data-line-number="2484"></td>
        <td id="LC2484" class="blob-code blob-code-inner js-file-line">		a[0x04] ^= <span class="pl-c1">QC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2485" class="blob-num js-line-number" data-line-number="2485"></td>
        <td id="LC2485" class="blob-code blob-code-inner js-file-line">		a[0x05] ^= <span class="pl-c1">QC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2486" class="blob-num js-line-number" data-line-number="2486"></td>
        <td id="LC2486" class="blob-code blob-code-inner js-file-line">		a[0x06] ^= <span class="pl-c1">QC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2487" class="blob-num js-line-number" data-line-number="2487"></td>
        <td id="LC2487" class="blob-code blob-code-inner js-file-line">		a[0x07] ^= <span class="pl-c1">QC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2488" class="blob-num js-line-number" data-line-number="2488"></td>
        <td id="LC2488" class="blob-code blob-code-inner js-file-line">		a[0x08] ^= <span class="pl-c1">QC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2489" class="blob-num js-line-number" data-line-number="2489"></td>
        <td id="LC2489" class="blob-code blob-code-inner js-file-line">		a[0x09] ^= <span class="pl-c1">QC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2490" class="blob-num js-line-number" data-line-number="2490"></td>
        <td id="LC2490" class="blob-code blob-code-inner js-file-line">		a[0x0A] ^= <span class="pl-c1">QC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2491" class="blob-num js-line-number" data-line-number="2491"></td>
        <td id="LC2491" class="blob-code blob-code-inner js-file-line">		a[0x0B] ^= <span class="pl-c1">QC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2492" class="blob-num js-line-number" data-line-number="2492"></td>
        <td id="LC2492" class="blob-code blob-code-inner js-file-line">		a[0x0C] ^= <span class="pl-c1">QC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2493" class="blob-num js-line-number" data-line-number="2493"></td>
        <td id="LC2493" class="blob-code blob-code-inner js-file-line">		a[0x0D] ^= <span class="pl-c1">QC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2494" class="blob-num js-line-number" data-line-number="2494"></td>
        <td id="LC2494" class="blob-code blob-code-inner js-file-line">		a[0x0E] ^= <span class="pl-c1">QC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2495" class="blob-num js-line-number" data-line-number="2495"></td>
        <td id="LC2495" class="blob-code blob-code-inner js-file-line">		a[0x0F] ^= <span class="pl-c1">QC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2496" class="blob-num js-line-number" data-line-number="2496"></td>
        <td id="LC2496" class="blob-code blob-code-inner js-file-line">		a[0x10] ^= <span class="pl-c1">QC32up</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2497" class="blob-num js-line-number" data-line-number="2497"></td>
        <td id="LC2497" class="blob-code blob-code-inner js-file-line">		a[0x11] ^= <span class="pl-c1">QC32dn</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2498" class="blob-num js-line-number" data-line-number="2498"></td>
        <td id="LC2498" class="blob-code blob-code-inner js-file-line">		a[0x12] ^= <span class="pl-c1">QC32up</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2499" class="blob-num js-line-number" data-line-number="2499"></td>
        <td id="LC2499" class="blob-code blob-code-inner js-file-line">		a[0x13] ^= <span class="pl-c1">QC32dn</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2500" class="blob-num js-line-number" data-line-number="2500"></td>
        <td id="LC2500" class="blob-code blob-code-inner js-file-line">		a[0x14] ^= <span class="pl-c1">QC32up</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2501" class="blob-num js-line-number" data-line-number="2501"></td>
        <td id="LC2501" class="blob-code blob-code-inner js-file-line">		a[0x15] ^= <span class="pl-c1">QC32dn</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2502" class="blob-num js-line-number" data-line-number="2502"></td>
        <td id="LC2502" class="blob-code blob-code-inner js-file-line">		a[0x16] ^= <span class="pl-c1">QC32up</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2503" class="blob-num js-line-number" data-line-number="2503"></td>
        <td id="LC2503" class="blob-code blob-code-inner js-file-line">		a[0x17] ^= <span class="pl-c1">QC32dn</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2504" class="blob-num js-line-number" data-line-number="2504"></td>
        <td id="LC2504" class="blob-code blob-code-inner js-file-line">		a[0x18] ^= <span class="pl-c1">QC32up</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2505" class="blob-num js-line-number" data-line-number="2505"></td>
        <td id="LC2505" class="blob-code blob-code-inner js-file-line">		a[0x19] ^= <span class="pl-c1">QC32dn</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2506" class="blob-num js-line-number" data-line-number="2506"></td>
        <td id="LC2506" class="blob-code blob-code-inner js-file-line">		a[0x1A] ^= <span class="pl-c1">QC32up</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2507" class="blob-num js-line-number" data-line-number="2507"></td>
        <td id="LC2507" class="blob-code blob-code-inner js-file-line">		a[0x1B] ^= <span class="pl-c1">QC32dn</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2508" class="blob-num js-line-number" data-line-number="2508"></td>
        <td id="LC2508" class="blob-code blob-code-inner js-file-line">		a[0x1C] ^= <span class="pl-c1">QC32up</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2509" class="blob-num js-line-number" data-line-number="2509"></td>
        <td id="LC2509" class="blob-code blob-code-inner js-file-line">		a[0x1D] ^= <span class="pl-c1">QC32dn</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2510" class="blob-num js-line-number" data-line-number="2510"></td>
        <td id="LC2510" class="blob-code blob-code-inner js-file-line">		a[0x1E] ^= <span class="pl-c1">QC32up</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2511" class="blob-num js-line-number" data-line-number="2511"></td>
        <td id="LC2511" class="blob-code blob-code-inner js-file-line">		a[0x1F] ^= <span class="pl-c1">QC32dn</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2512" class="blob-num js-line-number" data-line-number="2512"></td>
        <td id="LC2512" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">32</span>; u += <span class="pl-c1">8</span>) { \</td>
      </tr>
      <tr>
        <td id="L2513" class="blob-num js-line-number" data-line-number="2513"></td>
        <td id="LC2513" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x00, (u + 0x01) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2514" class="blob-num js-line-number" data-line-number="2514"></td>
        <td id="LC2514" class="blob-code blob-code-inner js-file-line">				(u + 0x02) &amp; 0x1F, (u + 0x06) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2515" class="blob-num js-line-number" data-line-number="2515"></td>
        <td id="LC2515" class="blob-code blob-code-inner js-file-line">				(u + 0x0A) &amp; 0x1F, (u + 0x16) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2516" class="blob-num js-line-number" data-line-number="2516"></td>
        <td id="LC2516" class="blob-code blob-code-inner js-file-line">				(u + 0x01) &amp; 0x1F, (u + 0x05) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2517" class="blob-num js-line-number" data-line-number="2517"></td>
        <td id="LC2517" class="blob-code blob-code-inner js-file-line">				(u + 0x09) &amp; 0x1F, (u + 0x0D) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2518" class="blob-num js-line-number" data-line-number="2518"></td>
        <td id="LC2518" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x02, (u + 0x03) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2519" class="blob-num js-line-number" data-line-number="2519"></td>
        <td id="LC2519" class="blob-code blob-code-inner js-file-line">				(u + 0x04) &amp; 0x1F, (u + 0x08) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2520" class="blob-num js-line-number" data-line-number="2520"></td>
        <td id="LC2520" class="blob-code blob-code-inner js-file-line">				(u + 0x0C) &amp; 0x1F, (u + 0x18) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2521" class="blob-num js-line-number" data-line-number="2521"></td>
        <td id="LC2521" class="blob-code blob-code-inner js-file-line">				(u + 0x03) &amp; 0x1F, (u + 0x07) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2522" class="blob-num js-line-number" data-line-number="2522"></td>
        <td id="LC2522" class="blob-code blob-code-inner js-file-line">				(u + 0x0B) &amp; 0x1F, (u + 0x0F) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2523" class="blob-num js-line-number" data-line-number="2523"></td>
        <td id="LC2523" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x04, (u + 0x05) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2524" class="blob-num js-line-number" data-line-number="2524"></td>
        <td id="LC2524" class="blob-code blob-code-inner js-file-line">				(u + 0x06) &amp; 0x1F, (u + 0x0A) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2525" class="blob-num js-line-number" data-line-number="2525"></td>
        <td id="LC2525" class="blob-code blob-code-inner js-file-line">				(u + 0x0E) &amp; 0x1F, (u + 0x1A) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2526" class="blob-num js-line-number" data-line-number="2526"></td>
        <td id="LC2526" class="blob-code blob-code-inner js-file-line">				(u + 0x05) &amp; 0x1F, (u + 0x09) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2527" class="blob-num js-line-number" data-line-number="2527"></td>
        <td id="LC2527" class="blob-code blob-code-inner js-file-line">				(u + 0x0D) &amp; 0x1F, (u + 0x11) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2528" class="blob-num js-line-number" data-line-number="2528"></td>
        <td id="LC2528" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">RBTT</span>(u + 0x06, (u + 0x07) &amp; 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2529" class="blob-num js-line-number" data-line-number="2529"></td>
        <td id="LC2529" class="blob-code blob-code-inner js-file-line">				(u + 0x08) &amp; 0x1F, (u + 0x0C) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2530" class="blob-num js-line-number" data-line-number="2530"></td>
        <td id="LC2530" class="blob-code blob-code-inner js-file-line">				(u + 0x10) &amp; 0x1F, (u + 0x1C) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2531" class="blob-num js-line-number" data-line-number="2531"></td>
        <td id="LC2531" class="blob-code blob-code-inner js-file-line">				(u + 0x07) &amp; 0x1F, (u + 0x0B) &amp; 0x1F, \</td>
      </tr>
      <tr>
        <td id="L2532" class="blob-num js-line-number" data-line-number="2532"></td>
        <td id="LC2532" class="blob-code blob-code-inner js-file-line">				(u + 0x0F) &amp; 0x1F, (u + 0x13) &amp; 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2533" class="blob-num js-line-number" data-line-number="2533"></td>
        <td id="LC2533" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2534" class="blob-num js-line-number" data-line-number="2534"></td>
        <td id="LC2534" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2535" class="blob-num js-line-number" data-line-number="2535"></td>
        <td id="LC2535" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2536" class="blob-num js-line-number" data-line-number="2536"></td>
        <td id="LC2536" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2537" class="blob-num js-line-number" data-line-number="2537"></td>
        <td id="LC2537" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2538" class="blob-num js-line-number" data-line-number="2538"></td>
        <td id="LC2538" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2539" class="blob-num js-line-number" data-line-number="2539"></td>
        <td id="LC2539" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_P</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2540" class="blob-num js-line-number" data-line-number="2540"></td>
        <td id="LC2540" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2541" class="blob-num js-line-number" data-line-number="2541"></td>
        <td id="LC2541" class="blob-code blob-code-inner js-file-line">		a[0x00] ^= <span class="pl-c1">PC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2542" class="blob-num js-line-number" data-line-number="2542"></td>
        <td id="LC2542" class="blob-code blob-code-inner js-file-line">		a[0x01] ^= <span class="pl-c1">PC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2543" class="blob-num js-line-number" data-line-number="2543"></td>
        <td id="LC2543" class="blob-code blob-code-inner js-file-line">		a[0x02] ^= <span class="pl-c1">PC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2544" class="blob-num js-line-number" data-line-number="2544"></td>
        <td id="LC2544" class="blob-code blob-code-inner js-file-line">		a[0x03] ^= <span class="pl-c1">PC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2545" class="blob-num js-line-number" data-line-number="2545"></td>
        <td id="LC2545" class="blob-code blob-code-inner js-file-line">		a[0x04] ^= <span class="pl-c1">PC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2546" class="blob-num js-line-number" data-line-number="2546"></td>
        <td id="LC2546" class="blob-code blob-code-inner js-file-line">		a[0x05] ^= <span class="pl-c1">PC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2547" class="blob-num js-line-number" data-line-number="2547"></td>
        <td id="LC2547" class="blob-code blob-code-inner js-file-line">		a[0x06] ^= <span class="pl-c1">PC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2548" class="blob-num js-line-number" data-line-number="2548"></td>
        <td id="LC2548" class="blob-code blob-code-inner js-file-line">		a[0x07] ^= <span class="pl-c1">PC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2549" class="blob-num js-line-number" data-line-number="2549"></td>
        <td id="LC2549" class="blob-code blob-code-inner js-file-line">		a[0x08] ^= <span class="pl-c1">PC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2550" class="blob-num js-line-number" data-line-number="2550"></td>
        <td id="LC2550" class="blob-code blob-code-inner js-file-line">		a[0x09] ^= <span class="pl-c1">PC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2551" class="blob-num js-line-number" data-line-number="2551"></td>
        <td id="LC2551" class="blob-code blob-code-inner js-file-line">		a[0x0A] ^= <span class="pl-c1">PC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2552" class="blob-num js-line-number" data-line-number="2552"></td>
        <td id="LC2552" class="blob-code blob-code-inner js-file-line">		a[0x0B] ^= <span class="pl-c1">PC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2553" class="blob-num js-line-number" data-line-number="2553"></td>
        <td id="LC2553" class="blob-code blob-code-inner js-file-line">		a[0x0C] ^= <span class="pl-c1">PC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2554" class="blob-num js-line-number" data-line-number="2554"></td>
        <td id="LC2554" class="blob-code blob-code-inner js-file-line">		a[0x0D] ^= <span class="pl-c1">PC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2555" class="blob-num js-line-number" data-line-number="2555"></td>
        <td id="LC2555" class="blob-code blob-code-inner js-file-line">		a[0x0E] ^= <span class="pl-c1">PC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2556" class="blob-num js-line-number" data-line-number="2556"></td>
        <td id="LC2556" class="blob-code blob-code-inner js-file-line">		a[0x0F] ^= <span class="pl-c1">PC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2557" class="blob-num js-line-number" data-line-number="2557"></td>
        <td id="LC2557" class="blob-code blob-code-inner js-file-line">		a[0x10] ^= <span class="pl-c1">PC32up</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2558" class="blob-num js-line-number" data-line-number="2558"></td>
        <td id="LC2558" class="blob-code blob-code-inner js-file-line">		a[0x11] ^= <span class="pl-c1">PC32dn</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2559" class="blob-num js-line-number" data-line-number="2559"></td>
        <td id="LC2559" class="blob-code blob-code-inner js-file-line">		a[0x12] ^= <span class="pl-c1">PC32up</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2560" class="blob-num js-line-number" data-line-number="2560"></td>
        <td id="LC2560" class="blob-code blob-code-inner js-file-line">		a[0x13] ^= <span class="pl-c1">PC32dn</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2561" class="blob-num js-line-number" data-line-number="2561"></td>
        <td id="LC2561" class="blob-code blob-code-inner js-file-line">		a[0x14] ^= <span class="pl-c1">PC32up</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2562" class="blob-num js-line-number" data-line-number="2562"></td>
        <td id="LC2562" class="blob-code blob-code-inner js-file-line">		a[0x15] ^= <span class="pl-c1">PC32dn</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2563" class="blob-num js-line-number" data-line-number="2563"></td>
        <td id="LC2563" class="blob-code blob-code-inner js-file-line">		a[0x16] ^= <span class="pl-c1">PC32up</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2564" class="blob-num js-line-number" data-line-number="2564"></td>
        <td id="LC2564" class="blob-code blob-code-inner js-file-line">		a[0x17] ^= <span class="pl-c1">PC32dn</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2565" class="blob-num js-line-number" data-line-number="2565"></td>
        <td id="LC2565" class="blob-code blob-code-inner js-file-line">		a[0x18] ^= <span class="pl-c1">PC32up</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2566" class="blob-num js-line-number" data-line-number="2566"></td>
        <td id="LC2566" class="blob-code blob-code-inner js-file-line">		a[0x19] ^= <span class="pl-c1">PC32dn</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2567" class="blob-num js-line-number" data-line-number="2567"></td>
        <td id="LC2567" class="blob-code blob-code-inner js-file-line">		a[0x1A] ^= <span class="pl-c1">PC32up</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2568" class="blob-num js-line-number" data-line-number="2568"></td>
        <td id="LC2568" class="blob-code blob-code-inner js-file-line">		a[0x1B] ^= <span class="pl-c1">PC32dn</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2569" class="blob-num js-line-number" data-line-number="2569"></td>
        <td id="LC2569" class="blob-code blob-code-inner js-file-line">		a[0x1C] ^= <span class="pl-c1">PC32up</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2570" class="blob-num js-line-number" data-line-number="2570"></td>
        <td id="LC2570" class="blob-code blob-code-inner js-file-line">		a[0x1D] ^= <span class="pl-c1">PC32dn</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2571" class="blob-num js-line-number" data-line-number="2571"></td>
        <td id="LC2571" class="blob-code blob-code-inner js-file-line">		a[0x1E] ^= <span class="pl-c1">PC32up</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2572" class="blob-num js-line-number" data-line-number="2572"></td>
        <td id="LC2572" class="blob-code blob-code-inner js-file-line">		a[0x1F] ^= <span class="pl-c1">PC32dn</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2573" class="blob-num js-line-number" data-line-number="2573"></td>
        <td id="LC2573" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x00, 0x01, a, \</td>
      </tr>
      <tr>
        <td id="L2574" class="blob-num js-line-number" data-line-number="2574"></td>
        <td id="LC2574" class="blob-code blob-code-inner js-file-line">			0x00, 0x02, 0x04, 0x06, 0x09, 0x0B, 0x0D, 0x17); \</td>
      </tr>
      <tr>
        <td id="L2575" class="blob-num js-line-number" data-line-number="2575"></td>
        <td id="LC2575" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x02, 0x03, a, \</td>
      </tr>
      <tr>
        <td id="L2576" class="blob-num js-line-number" data-line-number="2576"></td>
        <td id="LC2576" class="blob-code blob-code-inner js-file-line">			0x02, 0x04, 0x06, 0x08, 0x0B, 0x0D, 0x0F, 0x19); \</td>
      </tr>
      <tr>
        <td id="L2577" class="blob-num js-line-number" data-line-number="2577"></td>
        <td id="LC2577" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x04, 0x05, a, \</td>
      </tr>
      <tr>
        <td id="L2578" class="blob-num js-line-number" data-line-number="2578"></td>
        <td id="LC2578" class="blob-code blob-code-inner js-file-line">			0x04, 0x06, 0x08, 0x0A, 0x0D, 0x0F, 0x11, 0x1B); \</td>
      </tr>
      <tr>
        <td id="L2579" class="blob-num js-line-number" data-line-number="2579"></td>
        <td id="LC2579" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x06, 0x07, a, \</td>
      </tr>
      <tr>
        <td id="L2580" class="blob-num js-line-number" data-line-number="2580"></td>
        <td id="LC2580" class="blob-code blob-code-inner js-file-line">			0x06, 0x08, 0x0A, 0x0C, 0x0F, 0x11, 0x13, 0x1D); \</td>
      </tr>
      <tr>
        <td id="L2581" class="blob-num js-line-number" data-line-number="2581"></td>
        <td id="LC2581" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x08, 0x09, a, \</td>
      </tr>
      <tr>
        <td id="L2582" class="blob-num js-line-number" data-line-number="2582"></td>
        <td id="LC2582" class="blob-code blob-code-inner js-file-line">			0x08, 0x0A, 0x0C, 0x0E, 0x11, 0x13, 0x15, 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2583" class="blob-num js-line-number" data-line-number="2583"></td>
        <td id="LC2583" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0A, 0x0B, a, \</td>
      </tr>
      <tr>
        <td id="L2584" class="blob-num js-line-number" data-line-number="2584"></td>
        <td id="LC2584" class="blob-code blob-code-inner js-file-line">			0x0A, 0x0C, 0x0E, 0x10, 0x13, 0x15, 0x17, 0x01); \</td>
      </tr>
      <tr>
        <td id="L2585" class="blob-num js-line-number" data-line-number="2585"></td>
        <td id="LC2585" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0C, 0x0D, a, \</td>
      </tr>
      <tr>
        <td id="L2586" class="blob-num js-line-number" data-line-number="2586"></td>
        <td id="LC2586" class="blob-code blob-code-inner js-file-line">			0x0C, 0x0E, 0x10, 0x12, 0x15, 0x17, 0x19, 0x03); \</td>
      </tr>
      <tr>
        <td id="L2587" class="blob-num js-line-number" data-line-number="2587"></td>
        <td id="LC2587" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0E, 0x0F, a, \</td>
      </tr>
      <tr>
        <td id="L2588" class="blob-num js-line-number" data-line-number="2588"></td>
        <td id="LC2588" class="blob-code blob-code-inner js-file-line">			0x0E, 0x10, 0x12, 0x14, 0x17, 0x19, 0x1B, 0x05); \</td>
      </tr>
      <tr>
        <td id="L2589" class="blob-num js-line-number" data-line-number="2589"></td>
        <td id="LC2589" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x10, 0x11, a, \</td>
      </tr>
      <tr>
        <td id="L2590" class="blob-num js-line-number" data-line-number="2590"></td>
        <td id="LC2590" class="blob-code blob-code-inner js-file-line">			0x10, 0x12, 0x14, 0x16, 0x19, 0x1B, 0x1D, 0x07); \</td>
      </tr>
      <tr>
        <td id="L2591" class="blob-num js-line-number" data-line-number="2591"></td>
        <td id="LC2591" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x12, 0x13, a, \</td>
      </tr>
      <tr>
        <td id="L2592" class="blob-num js-line-number" data-line-number="2592"></td>
        <td id="LC2592" class="blob-code blob-code-inner js-file-line">			0x12, 0x14, 0x16, 0x18, 0x1B, 0x1D, 0x1F, 0x09); \</td>
      </tr>
      <tr>
        <td id="L2593" class="blob-num js-line-number" data-line-number="2593"></td>
        <td id="LC2593" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x14, 0x15, a, \</td>
      </tr>
      <tr>
        <td id="L2594" class="blob-num js-line-number" data-line-number="2594"></td>
        <td id="LC2594" class="blob-code blob-code-inner js-file-line">			0x14, 0x16, 0x18, 0x1A, 0x1D, 0x1F, 0x01, 0x0B); \</td>
      </tr>
      <tr>
        <td id="L2595" class="blob-num js-line-number" data-line-number="2595"></td>
        <td id="LC2595" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x16, 0x17, a, \</td>
      </tr>
      <tr>
        <td id="L2596" class="blob-num js-line-number" data-line-number="2596"></td>
        <td id="LC2596" class="blob-code blob-code-inner js-file-line">			0x16, 0x18, 0x1A, 0x1C, 0x1F, 0x01, 0x03, 0x0D); \</td>
      </tr>
      <tr>
        <td id="L2597" class="blob-num js-line-number" data-line-number="2597"></td>
        <td id="LC2597" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x18, 0x19, a, \</td>
      </tr>
      <tr>
        <td id="L2598" class="blob-num js-line-number" data-line-number="2598"></td>
        <td id="LC2598" class="blob-code blob-code-inner js-file-line">			0x18, 0x1A, 0x1C, 0x1E, 0x01, 0x03, 0x05, 0x0F); \</td>
      </tr>
      <tr>
        <td id="L2599" class="blob-num js-line-number" data-line-number="2599"></td>
        <td id="LC2599" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1A, 0x1B, a, \</td>
      </tr>
      <tr>
        <td id="L2600" class="blob-num js-line-number" data-line-number="2600"></td>
        <td id="LC2600" class="blob-code blob-code-inner js-file-line">			0x1A, 0x1C, 0x1E, 0x00, 0x03, 0x05, 0x07, 0x11); \</td>
      </tr>
      <tr>
        <td id="L2601" class="blob-num js-line-number" data-line-number="2601"></td>
        <td id="LC2601" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1C, 0x1D, a, \</td>
      </tr>
      <tr>
        <td id="L2602" class="blob-num js-line-number" data-line-number="2602"></td>
        <td id="LC2602" class="blob-code blob-code-inner js-file-line">			0x1C, 0x1E, 0x00, 0x02, 0x05, 0x07, 0x09, 0x13); \</td>
      </tr>
      <tr>
        <td id="L2603" class="blob-num js-line-number" data-line-number="2603"></td>
        <td id="LC2603" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1E, 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2604" class="blob-num js-line-number" data-line-number="2604"></td>
        <td id="LC2604" class="blob-code blob-code-inner js-file-line">			0x1E, 0x00, 0x02, 0x04, 0x07, 0x09, 0x0B, 0x15); \</td>
      </tr>
      <tr>
        <td id="L2605" class="blob-num js-line-number" data-line-number="2605"></td>
        <td id="LC2605" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2606" class="blob-num js-line-number" data-line-number="2606"></td>
        <td id="LC2606" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2607" class="blob-num js-line-number" data-line-number="2607"></td>
        <td id="LC2607" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2608" class="blob-num js-line-number" data-line-number="2608"></td>
        <td id="LC2608" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">ROUND_BIG_Q</span>(<span class="pl-v">a, r</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2609" class="blob-num js-line-number" data-line-number="2609"></td>
        <td id="LC2609" class="blob-code blob-code-inner js-file-line">		sph_u32 t[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2610" class="blob-num js-line-number" data-line-number="2610"></td>
        <td id="LC2610" class="blob-code blob-code-inner js-file-line">		a[0x00] ^= <span class="pl-c1">QC32up</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2611" class="blob-num js-line-number" data-line-number="2611"></td>
        <td id="LC2611" class="blob-code blob-code-inner js-file-line">		a[0x01] ^= <span class="pl-c1">QC32dn</span>(0x00, r); \</td>
      </tr>
      <tr>
        <td id="L2612" class="blob-num js-line-number" data-line-number="2612"></td>
        <td id="LC2612" class="blob-code blob-code-inner js-file-line">		a[0x02] ^= <span class="pl-c1">QC32up</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2613" class="blob-num js-line-number" data-line-number="2613"></td>
        <td id="LC2613" class="blob-code blob-code-inner js-file-line">		a[0x03] ^= <span class="pl-c1">QC32dn</span>(0x10, r); \</td>
      </tr>
      <tr>
        <td id="L2614" class="blob-num js-line-number" data-line-number="2614"></td>
        <td id="LC2614" class="blob-code blob-code-inner js-file-line">		a[0x04] ^= <span class="pl-c1">QC32up</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2615" class="blob-num js-line-number" data-line-number="2615"></td>
        <td id="LC2615" class="blob-code blob-code-inner js-file-line">		a[0x05] ^= <span class="pl-c1">QC32dn</span>(0x20, r); \</td>
      </tr>
      <tr>
        <td id="L2616" class="blob-num js-line-number" data-line-number="2616"></td>
        <td id="LC2616" class="blob-code blob-code-inner js-file-line">		a[0x06] ^= <span class="pl-c1">QC32up</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2617" class="blob-num js-line-number" data-line-number="2617"></td>
        <td id="LC2617" class="blob-code blob-code-inner js-file-line">		a[0x07] ^= <span class="pl-c1">QC32dn</span>(0x30, r); \</td>
      </tr>
      <tr>
        <td id="L2618" class="blob-num js-line-number" data-line-number="2618"></td>
        <td id="LC2618" class="blob-code blob-code-inner js-file-line">		a[0x08] ^= <span class="pl-c1">QC32up</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2619" class="blob-num js-line-number" data-line-number="2619"></td>
        <td id="LC2619" class="blob-code blob-code-inner js-file-line">		a[0x09] ^= <span class="pl-c1">QC32dn</span>(0x40, r); \</td>
      </tr>
      <tr>
        <td id="L2620" class="blob-num js-line-number" data-line-number="2620"></td>
        <td id="LC2620" class="blob-code blob-code-inner js-file-line">		a[0x0A] ^= <span class="pl-c1">QC32up</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2621" class="blob-num js-line-number" data-line-number="2621"></td>
        <td id="LC2621" class="blob-code blob-code-inner js-file-line">		a[0x0B] ^= <span class="pl-c1">QC32dn</span>(0x50, r); \</td>
      </tr>
      <tr>
        <td id="L2622" class="blob-num js-line-number" data-line-number="2622"></td>
        <td id="LC2622" class="blob-code blob-code-inner js-file-line">		a[0x0C] ^= <span class="pl-c1">QC32up</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2623" class="blob-num js-line-number" data-line-number="2623"></td>
        <td id="LC2623" class="blob-code blob-code-inner js-file-line">		a[0x0D] ^= <span class="pl-c1">QC32dn</span>(0x60, r); \</td>
      </tr>
      <tr>
        <td id="L2624" class="blob-num js-line-number" data-line-number="2624"></td>
        <td id="LC2624" class="blob-code blob-code-inner js-file-line">		a[0x0E] ^= <span class="pl-c1">QC32up</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2625" class="blob-num js-line-number" data-line-number="2625"></td>
        <td id="LC2625" class="blob-code blob-code-inner js-file-line">		a[0x0F] ^= <span class="pl-c1">QC32dn</span>(0x70, r); \</td>
      </tr>
      <tr>
        <td id="L2626" class="blob-num js-line-number" data-line-number="2626"></td>
        <td id="LC2626" class="blob-code blob-code-inner js-file-line">		a[0x10] ^= <span class="pl-c1">QC32up</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2627" class="blob-num js-line-number" data-line-number="2627"></td>
        <td id="LC2627" class="blob-code blob-code-inner js-file-line">		a[0x11] ^= <span class="pl-c1">QC32dn</span>(0x80, r); \</td>
      </tr>
      <tr>
        <td id="L2628" class="blob-num js-line-number" data-line-number="2628"></td>
        <td id="LC2628" class="blob-code blob-code-inner js-file-line">		a[0x12] ^= <span class="pl-c1">QC32up</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2629" class="blob-num js-line-number" data-line-number="2629"></td>
        <td id="LC2629" class="blob-code blob-code-inner js-file-line">		a[0x13] ^= <span class="pl-c1">QC32dn</span>(0x90, r); \</td>
      </tr>
      <tr>
        <td id="L2630" class="blob-num js-line-number" data-line-number="2630"></td>
        <td id="LC2630" class="blob-code blob-code-inner js-file-line">		a[0x14] ^= <span class="pl-c1">QC32up</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2631" class="blob-num js-line-number" data-line-number="2631"></td>
        <td id="LC2631" class="blob-code blob-code-inner js-file-line">		a[0x15] ^= <span class="pl-c1">QC32dn</span>(0xA0, r); \</td>
      </tr>
      <tr>
        <td id="L2632" class="blob-num js-line-number" data-line-number="2632"></td>
        <td id="LC2632" class="blob-code blob-code-inner js-file-line">		a[0x16] ^= <span class="pl-c1">QC32up</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2633" class="blob-num js-line-number" data-line-number="2633"></td>
        <td id="LC2633" class="blob-code blob-code-inner js-file-line">		a[0x17] ^= <span class="pl-c1">QC32dn</span>(0xB0, r); \</td>
      </tr>
      <tr>
        <td id="L2634" class="blob-num js-line-number" data-line-number="2634"></td>
        <td id="LC2634" class="blob-code blob-code-inner js-file-line">		a[0x18] ^= <span class="pl-c1">QC32up</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2635" class="blob-num js-line-number" data-line-number="2635"></td>
        <td id="LC2635" class="blob-code blob-code-inner js-file-line">		a[0x19] ^= <span class="pl-c1">QC32dn</span>(0xC0, r); \</td>
      </tr>
      <tr>
        <td id="L2636" class="blob-num js-line-number" data-line-number="2636"></td>
        <td id="LC2636" class="blob-code blob-code-inner js-file-line">		a[0x1A] ^= <span class="pl-c1">QC32up</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2637" class="blob-num js-line-number" data-line-number="2637"></td>
        <td id="LC2637" class="blob-code blob-code-inner js-file-line">		a[0x1B] ^= <span class="pl-c1">QC32dn</span>(0xD0, r); \</td>
      </tr>
      <tr>
        <td id="L2638" class="blob-num js-line-number" data-line-number="2638"></td>
        <td id="LC2638" class="blob-code blob-code-inner js-file-line">		a[0x1C] ^= <span class="pl-c1">QC32up</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2639" class="blob-num js-line-number" data-line-number="2639"></td>
        <td id="LC2639" class="blob-code blob-code-inner js-file-line">		a[0x1D] ^= <span class="pl-c1">QC32dn</span>(0xE0, r); \</td>
      </tr>
      <tr>
        <td id="L2640" class="blob-num js-line-number" data-line-number="2640"></td>
        <td id="LC2640" class="blob-code blob-code-inner js-file-line">		a[0x1E] ^= <span class="pl-c1">QC32up</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2641" class="blob-num js-line-number" data-line-number="2641"></td>
        <td id="LC2641" class="blob-code blob-code-inner js-file-line">		a[0x1F] ^= <span class="pl-c1">QC32dn</span>(0xF0, r); \</td>
      </tr>
      <tr>
        <td id="L2642" class="blob-num js-line-number" data-line-number="2642"></td>
        <td id="LC2642" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x00, 0x01, a, \</td>
      </tr>
      <tr>
        <td id="L2643" class="blob-num js-line-number" data-line-number="2643"></td>
        <td id="LC2643" class="blob-code blob-code-inner js-file-line">			0x02, 0x06, 0x0A, 0x16, 0x01, 0x05, 0x09, 0x0D); \</td>
      </tr>
      <tr>
        <td id="L2644" class="blob-num js-line-number" data-line-number="2644"></td>
        <td id="LC2644" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x02, 0x03, a, \</td>
      </tr>
      <tr>
        <td id="L2645" class="blob-num js-line-number" data-line-number="2645"></td>
        <td id="LC2645" class="blob-code blob-code-inner js-file-line">			0x04, 0x08, 0x0C, 0x18, 0x03, 0x07, 0x0B, 0x0F); \</td>
      </tr>
      <tr>
        <td id="L2646" class="blob-num js-line-number" data-line-number="2646"></td>
        <td id="LC2646" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x04, 0x05, a, \</td>
      </tr>
      <tr>
        <td id="L2647" class="blob-num js-line-number" data-line-number="2647"></td>
        <td id="LC2647" class="blob-code blob-code-inner js-file-line">			0x06, 0x0A, 0x0E, 0x1A, 0x05, 0x09, 0x0D, 0x11); \</td>
      </tr>
      <tr>
        <td id="L2648" class="blob-num js-line-number" data-line-number="2648"></td>
        <td id="LC2648" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x06, 0x07, a, \</td>
      </tr>
      <tr>
        <td id="L2649" class="blob-num js-line-number" data-line-number="2649"></td>
        <td id="LC2649" class="blob-code blob-code-inner js-file-line">			0x08, 0x0C, 0x10, 0x1C, 0x07, 0x0B, 0x0F, 0x13); \</td>
      </tr>
      <tr>
        <td id="L2650" class="blob-num js-line-number" data-line-number="2650"></td>
        <td id="LC2650" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x08, 0x09, a, \</td>
      </tr>
      <tr>
        <td id="L2651" class="blob-num js-line-number" data-line-number="2651"></td>
        <td id="LC2651" class="blob-code blob-code-inner js-file-line">			0x0A, 0x0E, 0x12, 0x1E, 0x09, 0x0D, 0x11, 0x15); \</td>
      </tr>
      <tr>
        <td id="L2652" class="blob-num js-line-number" data-line-number="2652"></td>
        <td id="LC2652" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0A, 0x0B, a, \</td>
      </tr>
      <tr>
        <td id="L2653" class="blob-num js-line-number" data-line-number="2653"></td>
        <td id="LC2653" class="blob-code blob-code-inner js-file-line">			0x0C, 0x10, 0x14, 0x00, 0x0B, 0x0F, 0x13, 0x17); \</td>
      </tr>
      <tr>
        <td id="L2654" class="blob-num js-line-number" data-line-number="2654"></td>
        <td id="LC2654" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0C, 0x0D, a, \</td>
      </tr>
      <tr>
        <td id="L2655" class="blob-num js-line-number" data-line-number="2655"></td>
        <td id="LC2655" class="blob-code blob-code-inner js-file-line">			0x0E, 0x12, 0x16, 0x02, 0x0D, 0x11, 0x15, 0x19); \</td>
      </tr>
      <tr>
        <td id="L2656" class="blob-num js-line-number" data-line-number="2656"></td>
        <td id="LC2656" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x0E, 0x0F, a, \</td>
      </tr>
      <tr>
        <td id="L2657" class="blob-num js-line-number" data-line-number="2657"></td>
        <td id="LC2657" class="blob-code blob-code-inner js-file-line">			0x10, 0x14, 0x18, 0x04, 0x0F, 0x13, 0x17, 0x1B); \</td>
      </tr>
      <tr>
        <td id="L2658" class="blob-num js-line-number" data-line-number="2658"></td>
        <td id="LC2658" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x10, 0x11, a, \</td>
      </tr>
      <tr>
        <td id="L2659" class="blob-num js-line-number" data-line-number="2659"></td>
        <td id="LC2659" class="blob-code blob-code-inner js-file-line">			0x12, 0x16, 0x1A, 0x06, 0x11, 0x15, 0x19, 0x1D); \</td>
      </tr>
      <tr>
        <td id="L2660" class="blob-num js-line-number" data-line-number="2660"></td>
        <td id="LC2660" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x12, 0x13, a, \</td>
      </tr>
      <tr>
        <td id="L2661" class="blob-num js-line-number" data-line-number="2661"></td>
        <td id="LC2661" class="blob-code blob-code-inner js-file-line">			0x14, 0x18, 0x1C, 0x08, 0x13, 0x17, 0x1B, 0x1F); \</td>
      </tr>
      <tr>
        <td id="L2662" class="blob-num js-line-number" data-line-number="2662"></td>
        <td id="LC2662" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x14, 0x15, a, \</td>
      </tr>
      <tr>
        <td id="L2663" class="blob-num js-line-number" data-line-number="2663"></td>
        <td id="LC2663" class="blob-code blob-code-inner js-file-line">			0x16, 0x1A, 0x1E, 0x0A, 0x15, 0x19, 0x1D, 0x01); \</td>
      </tr>
      <tr>
        <td id="L2664" class="blob-num js-line-number" data-line-number="2664"></td>
        <td id="LC2664" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x16, 0x17, a, \</td>
      </tr>
      <tr>
        <td id="L2665" class="blob-num js-line-number" data-line-number="2665"></td>
        <td id="LC2665" class="blob-code blob-code-inner js-file-line">			0x18, 0x1C, 0x00, 0x0C, 0x17, 0x1B, 0x1F, 0x03); \</td>
      </tr>
      <tr>
        <td id="L2666" class="blob-num js-line-number" data-line-number="2666"></td>
        <td id="LC2666" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x18, 0x19, a, \</td>
      </tr>
      <tr>
        <td id="L2667" class="blob-num js-line-number" data-line-number="2667"></td>
        <td id="LC2667" class="blob-code blob-code-inner js-file-line">			0x1A, 0x1E, 0x02, 0x0E, 0x19, 0x1D, 0x01, 0x05); \</td>
      </tr>
      <tr>
        <td id="L2668" class="blob-num js-line-number" data-line-number="2668"></td>
        <td id="LC2668" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1A, 0x1B, a, \</td>
      </tr>
      <tr>
        <td id="L2669" class="blob-num js-line-number" data-line-number="2669"></td>
        <td id="LC2669" class="blob-code blob-code-inner js-file-line">			0x1C, 0x00, 0x04, 0x10, 0x1B, 0x1F, 0x03, 0x07); \</td>
      </tr>
      <tr>
        <td id="L2670" class="blob-num js-line-number" data-line-number="2670"></td>
        <td id="LC2670" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1C, 0x1D, a, \</td>
      </tr>
      <tr>
        <td id="L2671" class="blob-num js-line-number" data-line-number="2671"></td>
        <td id="LC2671" class="blob-code blob-code-inner js-file-line">			0x1E, 0x02, 0x06, 0x12, 0x1D, 0x01, 0x05, 0x09); \</td>
      </tr>
      <tr>
        <td id="L2672" class="blob-num js-line-number" data-line-number="2672"></td>
        <td id="LC2672" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RBTT</span>(0x1E, 0x1F, a, \</td>
      </tr>
      <tr>
        <td id="L2673" class="blob-num js-line-number" data-line-number="2673"></td>
        <td id="LC2673" class="blob-code blob-code-inner js-file-line">			0x00, 0x04, 0x08, 0x14, 0x1F, 0x03, 0x07, 0x0B); \</td>
      </tr>
      <tr>
        <td id="L2674" class="blob-num js-line-number" data-line-number="2674"></td>
        <td id="LC2674" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(a, t, <span class="pl-k">sizeof</span> t); \</td>
      </tr>
      <tr>
        <td id="L2675" class="blob-num js-line-number" data-line-number="2675"></td>
        <td id="LC2675" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2676" class="blob-num js-line-number" data-line-number="2676"></td>
        <td id="LC2676" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2677" class="blob-num js-line-number" data-line-number="2677"></td>
        <td id="LC2677" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2678" class="blob-num js-line-number" data-line-number="2678"></td>
        <td id="LC2678" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2679" class="blob-num js-line-number" data-line-number="2679"></td>
        <td id="LC2679" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_SMALL_FOOTPRINT_GROESTL</td>
      </tr>
      <tr>
        <td id="L2680" class="blob-num js-line-number" data-line-number="2680"></td>
        <td id="LC2680" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2681" class="blob-num js-line-number" data-line-number="2681"></td>
        <td id="LC2681" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2682" class="blob-num js-line-number" data-line-number="2682"></td>
        <td id="LC2682" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2683" class="blob-num js-line-number" data-line-number="2683"></td>
        <td id="LC2683" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L2684" class="blob-num js-line-number" data-line-number="2684"></td>
        <td id="LC2684" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_P</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L2685" class="blob-num js-line-number" data-line-number="2685"></td>
        <td id="LC2685" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2686" class="blob-num js-line-number" data-line-number="2686"></td>
        <td id="LC2686" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2687" class="blob-num js-line-number" data-line-number="2687"></td>
        <td id="LC2687" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2688" class="blob-num js-line-number" data-line-number="2688"></td>
        <td id="LC2688" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2689" class="blob-num js-line-number" data-line-number="2689"></td>
        <td id="LC2689" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r ++) \</td>
      </tr>
      <tr>
        <td id="L2690" class="blob-num js-line-number" data-line-number="2690"></td>
        <td id="LC2690" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_Q</span>(a, r); \</td>
      </tr>
      <tr>
        <td id="L2691" class="blob-num js-line-number" data-line-number="2691"></td>
        <td id="LC2691" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2692" class="blob-num js-line-number" data-line-number="2692"></td>
        <td id="LC2692" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2693" class="blob-num js-line-number" data-line-number="2693"></td>
        <td id="LC2693" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2694" class="blob-num js-line-number" data-line-number="2694"></td>
        <td id="LC2694" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2695" class="blob-num js-line-number" data-line-number="2695"></td>
        <td id="LC2695" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_P</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2696" class="blob-num js-line-number" data-line-number="2696"></td>
        <td id="LC2696" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2697" class="blob-num js-line-number" data-line-number="2697"></td>
        <td id="LC2697" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L2698" class="blob-num js-line-number" data-line-number="2698"></td>
        <td id="LC2698" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_P</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L2699" class="blob-num js-line-number" data-line-number="2699"></td>
        <td id="LC2699" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_P</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L2700" class="blob-num js-line-number" data-line-number="2700"></td>
        <td id="LC2700" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2701" class="blob-num js-line-number" data-line-number="2701"></td>
        <td id="LC2701" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2702" class="blob-num js-line-number" data-line-number="2702"></td>
        <td id="LC2702" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2703" class="blob-num js-line-number" data-line-number="2703"></td>
        <td id="LC2703" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">PERM_BIG_Q</span>(<span class="pl-v">a</span>)   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2704" class="blob-num js-line-number" data-line-number="2704"></td>
        <td id="LC2704" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">int</span> r; \</td>
      </tr>
      <tr>
        <td id="L2705" class="blob-num js-line-number" data-line-number="2705"></td>
        <td id="LC2705" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (r = <span class="pl-c1">0</span>; r &lt; <span class="pl-c1">14</span>; r += <span class="pl-c1">2</span>) { \</td>
      </tr>
      <tr>
        <td id="L2706" class="blob-num js-line-number" data-line-number="2706"></td>
        <td id="LC2706" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_Q</span>(a, r + <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L2707" class="blob-num js-line-number" data-line-number="2707"></td>
        <td id="LC2707" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">ROUND_BIG_Q</span>(a, r + <span class="pl-c1">1</span>); \</td>
      </tr>
      <tr>
        <td id="L2708" class="blob-num js-line-number" data-line-number="2708"></td>
        <td id="LC2708" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2709" class="blob-num js-line-number" data-line-number="2709"></td>
        <td id="LC2709" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2710" class="blob-num js-line-number" data-line-number="2710"></td>
        <td id="LC2710" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2711" class="blob-num js-line-number" data-line-number="2711"></td>
        <td id="LC2711" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2712" class="blob-num js-line-number" data-line-number="2712"></td>
        <td id="LC2712" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2713" class="blob-num js-line-number" data-line-number="2713"></td>
        <td id="LC2713" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">COMPRESS_BIG</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2714" class="blob-num js-line-number" data-line-number="2714"></td>
        <td id="LC2714" class="blob-code blob-code-inner js-file-line">		sph_u32 g[<span class="pl-c1">32</span>], m[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2715" class="blob-num js-line-number" data-line-number="2715"></td>
        <td id="LC2715" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2716" class="blob-num js-line-number" data-line-number="2716"></td>
        <td id="LC2716" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">32</span>; u ++) { \</td>
      </tr>
      <tr>
        <td id="L2717" class="blob-num js-line-number" data-line-number="2717"></td>
        <td id="LC2717" class="blob-code blob-code-inner js-file-line">			m[u] = <span class="pl-c1">dec32e_aligned</span>(buf + (u &lt;&lt; <span class="pl-c1">2</span>)); \</td>
      </tr>
      <tr>
        <td id="L2718" class="blob-num js-line-number" data-line-number="2718"></td>
        <td id="LC2718" class="blob-code blob-code-inner js-file-line">			g[u] = m[u] ^ H[u]; \</td>
      </tr>
      <tr>
        <td id="L2719" class="blob-num js-line-number" data-line-number="2719"></td>
        <td id="LC2719" class="blob-code blob-code-inner js-file-line">		} \</td>
      </tr>
      <tr>
        <td id="L2720" class="blob-num js-line-number" data-line-number="2720"></td>
        <td id="LC2720" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_P</span>(g); \</td>
      </tr>
      <tr>
        <td id="L2721" class="blob-num js-line-number" data-line-number="2721"></td>
        <td id="LC2721" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_Q</span>(m); \</td>
      </tr>
      <tr>
        <td id="L2722" class="blob-num js-line-number" data-line-number="2722"></td>
        <td id="LC2722" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">32</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L2723" class="blob-num js-line-number" data-line-number="2723"></td>
        <td id="LC2723" class="blob-code blob-code-inner js-file-line">			H[u] ^= g[u] ^ m[u]; \</td>
      </tr>
      <tr>
        <td id="L2724" class="blob-num js-line-number" data-line-number="2724"></td>
        <td id="LC2724" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2725" class="blob-num js-line-number" data-line-number="2725"></td>
        <td id="LC2725" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2726" class="blob-num js-line-number" data-line-number="2726"></td>
        <td id="LC2726" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">FINAL_BIG</span>   <span class="pl-k">do</span> { \</td>
      </tr>
      <tr>
        <td id="L2727" class="blob-num js-line-number" data-line-number="2727"></td>
        <td id="LC2727" class="blob-code blob-code-inner js-file-line">		sph_u32 x[<span class="pl-c1">32</span>]; \</td>
      </tr>
      <tr>
        <td id="L2728" class="blob-num js-line-number" data-line-number="2728"></td>
        <td id="LC2728" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> u; \</td>
      </tr>
      <tr>
        <td id="L2729" class="blob-num js-line-number" data-line-number="2729"></td>
        <td id="LC2729" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(x, H, <span class="pl-k">sizeof</span> x); \</td>
      </tr>
      <tr>
        <td id="L2730" class="blob-num js-line-number" data-line-number="2730"></td>
        <td id="LC2730" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">PERM_BIG_P</span>(x); \</td>
      </tr>
      <tr>
        <td id="L2731" class="blob-num js-line-number" data-line-number="2731"></td>
        <td id="LC2731" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">32</span>; u ++) \</td>
      </tr>
      <tr>
        <td id="L2732" class="blob-num js-line-number" data-line-number="2732"></td>
        <td id="LC2732" class="blob-code blob-code-inner js-file-line">			H[u] ^= x[u]; \</td>
      </tr>
      <tr>
        <td id="L2733" class="blob-num js-line-number" data-line-number="2733"></td>
        <td id="LC2733" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2734" class="blob-num js-line-number" data-line-number="2734"></td>
        <td id="LC2734" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2735" class="blob-num js-line-number" data-line-number="2735"></td>
        <td id="LC2735" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2736" class="blob-num js-line-number" data-line-number="2736"></td>
        <td id="LC2736" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2737" class="blob-num js-line-number" data-line-number="2737"></td>
        <td id="LC2737" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2738" class="blob-num js-line-number" data-line-number="2738"></td>
        <td id="LC2738" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_small_init</span>(sph_groestl_small_context *sc, <span class="pl-k">unsigned</span> out_size)</td>
      </tr>
      <tr>
        <td id="L2739" class="blob-num js-line-number" data-line-number="2739"></td>
        <td id="LC2739" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2740" class="blob-num js-line-number" data-line-number="2740"></td>
        <td id="LC2740" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> u;</td>
      </tr>
      <tr>
        <td id="L2741" class="blob-num js-line-number" data-line-number="2741"></td>
        <td id="LC2741" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2742" class="blob-num js-line-number" data-line-number="2742"></td>
        <td id="LC2742" class="blob-code blob-code-inner js-file-line">	sc-&gt;ptr = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2743" class="blob-num js-line-number" data-line-number="2743"></td>
        <td id="LC2743" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L2744" class="blob-num js-line-number" data-line-number="2744"></td>
        <td id="LC2744" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">7</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2745" class="blob-num js-line-number" data-line-number="2745"></td>
        <td id="LC2745" class="blob-code blob-code-inner js-file-line">		sc-&gt;state.<span class="pl-smi">wide</span>[u] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2746" class="blob-num js-line-number" data-line-number="2746"></td>
        <td id="LC2746" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L2747" class="blob-num js-line-number" data-line-number="2747"></td>
        <td id="LC2747" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">wide</span>[<span class="pl-c1">7</span>] = ((sph_u64)(out_size &amp; 0xFF) &lt;&lt; <span class="pl-c1">56</span>)</td>
      </tr>
      <tr>
        <td id="L2748" class="blob-num js-line-number" data-line-number="2748"></td>
        <td id="LC2748" class="blob-code blob-code-inner js-file-line">		| ((sph_u64)(out_size &amp; 0xFF00) &lt;&lt; <span class="pl-c1">40</span>);</td>
      </tr>
      <tr>
        <td id="L2749" class="blob-num js-line-number" data-line-number="2749"></td>
        <td id="LC2749" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2750" class="blob-num js-line-number" data-line-number="2750"></td>
        <td id="LC2750" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">wide</span>[<span class="pl-c1">7</span>] = (sph_u64)out_size;</td>
      </tr>
      <tr>
        <td id="L2751" class="blob-num js-line-number" data-line-number="2751"></td>
        <td id="LC2751" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2752" class="blob-num js-line-number" data-line-number="2752"></td>
        <td id="LC2752" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2753" class="blob-num js-line-number" data-line-number="2753"></td>
        <td id="LC2753" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">15</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2754" class="blob-num js-line-number" data-line-number="2754"></td>
        <td id="LC2754" class="blob-code blob-code-inner js-file-line">		sc-&gt;state.<span class="pl-smi">narrow</span>[u] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2755" class="blob-num js-line-number" data-line-number="2755"></td>
        <td id="LC2755" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L2756" class="blob-num js-line-number" data-line-number="2756"></td>
        <td id="LC2756" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">narrow</span>[<span class="pl-c1">15</span>] = ((sph_u32)(out_size &amp; 0xFF) &lt;&lt; <span class="pl-c1">24</span>)</td>
      </tr>
      <tr>
        <td id="L2757" class="blob-num js-line-number" data-line-number="2757"></td>
        <td id="LC2757" class="blob-code blob-code-inner js-file-line">		| ((sph_u32)(out_size &amp; 0xFF00) &lt;&lt; <span class="pl-c1">8</span>);</td>
      </tr>
      <tr>
        <td id="L2758" class="blob-num js-line-number" data-line-number="2758"></td>
        <td id="LC2758" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2759" class="blob-num js-line-number" data-line-number="2759"></td>
        <td id="LC2759" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">narrow</span>[<span class="pl-c1">15</span>] = (sph_u32)out_size;</td>
      </tr>
      <tr>
        <td id="L2760" class="blob-num js-line-number" data-line-number="2760"></td>
        <td id="LC2760" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2761" class="blob-num js-line-number" data-line-number="2761"></td>
        <td id="LC2761" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2762" class="blob-num js-line-number" data-line-number="2762"></td>
        <td id="LC2762" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2763" class="blob-num js-line-number" data-line-number="2763"></td>
        <td id="LC2763" class="blob-code blob-code-inner js-file-line">	sc-&gt;count = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2764" class="blob-num js-line-number" data-line-number="2764"></td>
        <td id="LC2764" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2765" class="blob-num js-line-number" data-line-number="2765"></td>
        <td id="LC2765" class="blob-code blob-code-inner js-file-line">	sc-&gt;count_high = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2766" class="blob-num js-line-number" data-line-number="2766"></td>
        <td id="LC2766" class="blob-code blob-code-inner js-file-line">	sc-&gt;count_low = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2767" class="blob-num js-line-number" data-line-number="2767"></td>
        <td id="LC2767" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2768" class="blob-num js-line-number" data-line-number="2768"></td>
        <td id="LC2768" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2769" class="blob-num js-line-number" data-line-number="2769"></td>
        <td id="LC2769" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2770" class="blob-num js-line-number" data-line-number="2770"></td>
        <td id="LC2770" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2771" class="blob-num js-line-number" data-line-number="2771"></td>
        <td id="LC2771" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_small_core</span>(sph_groestl_small_context *sc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L2772" class="blob-num js-line-number" data-line-number="2772"></td>
        <td id="LC2772" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2773" class="blob-num js-line-number" data-line-number="2773"></td>
        <td id="LC2773" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> *buf;</td>
      </tr>
      <tr>
        <td id="L2774" class="blob-num js-line-number" data-line-number="2774"></td>
        <td id="LC2774" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> ptr;</td>
      </tr>
      <tr>
        <td id="L2775" class="blob-num js-line-number" data-line-number="2775"></td>
        <td id="LC2775" class="blob-code blob-code-inner js-file-line">	DECL_STATE_SMALL</td>
      </tr>
      <tr>
        <td id="L2776" class="blob-num js-line-number" data-line-number="2776"></td>
        <td id="LC2776" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2777" class="blob-num js-line-number" data-line-number="2777"></td>
        <td id="LC2777" class="blob-code blob-code-inner js-file-line">	buf = sc-&gt;buf;</td>
      </tr>
      <tr>
        <td id="L2778" class="blob-num js-line-number" data-line-number="2778"></td>
        <td id="LC2778" class="blob-code blob-code-inner js-file-line">	ptr = sc-&gt;ptr;</td>
      </tr>
      <tr>
        <td id="L2779" class="blob-num js-line-number" data-line-number="2779"></td>
        <td id="LC2779" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (len &lt; (<span class="pl-k">sizeof</span> sc-&gt;buf) - ptr) {</td>
      </tr>
      <tr>
        <td id="L2780" class="blob-num js-line-number" data-line-number="2780"></td>
        <td id="LC2780" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(buf + ptr, data, len);</td>
      </tr>
      <tr>
        <td id="L2781" class="blob-num js-line-number" data-line-number="2781"></td>
        <td id="LC2781" class="blob-code blob-code-inner js-file-line">		ptr += len;</td>
      </tr>
      <tr>
        <td id="L2782" class="blob-num js-line-number" data-line-number="2782"></td>
        <td id="LC2782" class="blob-code blob-code-inner js-file-line">		sc-&gt;ptr = ptr;</td>
      </tr>
      <tr>
        <td id="L2783" class="blob-num js-line-number" data-line-number="2783"></td>
        <td id="LC2783" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2784" class="blob-num js-line-number" data-line-number="2784"></td>
        <td id="LC2784" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2785" class="blob-num js-line-number" data-line-number="2785"></td>
        <td id="LC2785" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2786" class="blob-num js-line-number" data-line-number="2786"></td>
        <td id="LC2786" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">READ_STATE_SMALL</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2787" class="blob-num js-line-number" data-line-number="2787"></td>
        <td id="LC2787" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (len &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L2788" class="blob-num js-line-number" data-line-number="2788"></td>
        <td id="LC2788" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> clen;</td>
      </tr>
      <tr>
        <td id="L2789" class="blob-num js-line-number" data-line-number="2789"></td>
        <td id="LC2789" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2790" class="blob-num js-line-number" data-line-number="2790"></td>
        <td id="LC2790" class="blob-code blob-code-inner js-file-line">		clen = (<span class="pl-k">sizeof</span> sc-&gt;buf) - ptr;</td>
      </tr>
      <tr>
        <td id="L2791" class="blob-num js-line-number" data-line-number="2791"></td>
        <td id="LC2791" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (clen &gt; len)</td>
      </tr>
      <tr>
        <td id="L2792" class="blob-num js-line-number" data-line-number="2792"></td>
        <td id="LC2792" class="blob-code blob-code-inner js-file-line">			clen = len;</td>
      </tr>
      <tr>
        <td id="L2793" class="blob-num js-line-number" data-line-number="2793"></td>
        <td id="LC2793" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(buf + ptr, data, clen);</td>
      </tr>
      <tr>
        <td id="L2794" class="blob-num js-line-number" data-line-number="2794"></td>
        <td id="LC2794" class="blob-code blob-code-inner js-file-line">		ptr += clen;</td>
      </tr>
      <tr>
        <td id="L2795" class="blob-num js-line-number" data-line-number="2795"></td>
        <td id="LC2795" class="blob-code blob-code-inner js-file-line">		data = (<span class="pl-k">const</span> <span class="pl-k">unsigned</span> <span class="pl-k">char</span> *)data + clen;</td>
      </tr>
      <tr>
        <td id="L2796" class="blob-num js-line-number" data-line-number="2796"></td>
        <td id="LC2796" class="blob-code blob-code-inner js-file-line">		len -= clen;</td>
      </tr>
      <tr>
        <td id="L2797" class="blob-num js-line-number" data-line-number="2797"></td>
        <td id="LC2797" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (ptr == <span class="pl-k">sizeof</span> sc-&gt;buf) {</td>
      </tr>
      <tr>
        <td id="L2798" class="blob-num js-line-number" data-line-number="2798"></td>
        <td id="LC2798" class="blob-code blob-code-inner js-file-line">			COMPRESS_SMALL;</td>
      </tr>
      <tr>
        <td id="L2799" class="blob-num js-line-number" data-line-number="2799"></td>
        <td id="LC2799" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2800" class="blob-num js-line-number" data-line-number="2800"></td>
        <td id="LC2800" class="blob-code blob-code-inner js-file-line">			sc-&gt;count ++;</td>
      </tr>
      <tr>
        <td id="L2801" class="blob-num js-line-number" data-line-number="2801"></td>
        <td id="LC2801" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2802" class="blob-num js-line-number" data-line-number="2802"></td>
        <td id="LC2802" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> ((sc-&gt;count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">1</span>)) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2803" class="blob-num js-line-number" data-line-number="2803"></td>
        <td id="LC2803" class="blob-code blob-code-inner js-file-line">				sc-&gt;count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2804" class="blob-num js-line-number" data-line-number="2804"></td>
        <td id="LC2804" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2805" class="blob-num js-line-number" data-line-number="2805"></td>
        <td id="LC2805" class="blob-code blob-code-inner js-file-line">			ptr = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2806" class="blob-num js-line-number" data-line-number="2806"></td>
        <td id="LC2806" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2807" class="blob-num js-line-number" data-line-number="2807"></td>
        <td id="LC2807" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2808" class="blob-num js-line-number" data-line-number="2808"></td>
        <td id="LC2808" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WRITE_STATE_SMALL</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2809" class="blob-num js-line-number" data-line-number="2809"></td>
        <td id="LC2809" class="blob-code blob-code-inner js-file-line">	sc-&gt;ptr = ptr;</td>
      </tr>
      <tr>
        <td id="L2810" class="blob-num js-line-number" data-line-number="2810"></td>
        <td id="LC2810" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2811" class="blob-num js-line-number" data-line-number="2811"></td>
        <td id="LC2811" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2812" class="blob-num js-line-number" data-line-number="2812"></td>
        <td id="LC2812" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2813" class="blob-num js-line-number" data-line-number="2813"></td>
        <td id="LC2813" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_small_close</span>(sph_groestl_small_context *sc,</td>
      </tr>
      <tr>
        <td id="L2814" class="blob-num js-line-number" data-line-number="2814"></td>
        <td id="LC2814" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst, <span class="pl-c1">size_t</span> out_len)</td>
      </tr>
      <tr>
        <td id="L2815" class="blob-num js-line-number" data-line-number="2815"></td>
        <td id="LC2815" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2816" class="blob-num js-line-number" data-line-number="2816"></td>
        <td id="LC2816" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> *buf;</td>
      </tr>
      <tr>
        <td id="L2817" class="blob-num js-line-number" data-line-number="2817"></td>
        <td id="LC2817" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> pad[<span class="pl-c1">72</span>];</td>
      </tr>
      <tr>
        <td id="L2818" class="blob-num js-line-number" data-line-number="2818"></td>
        <td id="LC2818" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> u, ptr, pad_len;</td>
      </tr>
      <tr>
        <td id="L2819" class="blob-num js-line-number" data-line-number="2819"></td>
        <td id="LC2819" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2820" class="blob-num js-line-number" data-line-number="2820"></td>
        <td id="LC2820" class="blob-code blob-code-inner js-file-line">	sph_u64 count;</td>
      </tr>
      <tr>
        <td id="L2821" class="blob-num js-line-number" data-line-number="2821"></td>
        <td id="LC2821" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2822" class="blob-num js-line-number" data-line-number="2822"></td>
        <td id="LC2822" class="blob-code blob-code-inner js-file-line">	sph_u32 count_high, count_low;</td>
      </tr>
      <tr>
        <td id="L2823" class="blob-num js-line-number" data-line-number="2823"></td>
        <td id="LC2823" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2824" class="blob-num js-line-number" data-line-number="2824"></td>
        <td id="LC2824" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> z;</td>
      </tr>
      <tr>
        <td id="L2825" class="blob-num js-line-number" data-line-number="2825"></td>
        <td id="LC2825" class="blob-code blob-code-inner js-file-line">	DECL_STATE_SMALL</td>
      </tr>
      <tr>
        <td id="L2826" class="blob-num js-line-number" data-line-number="2826"></td>
        <td id="LC2826" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2827" class="blob-num js-line-number" data-line-number="2827"></td>
        <td id="LC2827" class="blob-code blob-code-inner js-file-line">	buf = sc-&gt;buf;</td>
      </tr>
      <tr>
        <td id="L2828" class="blob-num js-line-number" data-line-number="2828"></td>
        <td id="LC2828" class="blob-code blob-code-inner js-file-line">	ptr = sc-&gt;ptr;</td>
      </tr>
      <tr>
        <td id="L2829" class="blob-num js-line-number" data-line-number="2829"></td>
        <td id="LC2829" class="blob-code blob-code-inner js-file-line">	z = 0x80 &gt;&gt; n;</td>
      </tr>
      <tr>
        <td id="L2830" class="blob-num js-line-number" data-line-number="2830"></td>
        <td id="LC2830" class="blob-code blob-code-inner js-file-line">	pad[<span class="pl-c1">0</span>] = ((ub &amp; -z) | z) &amp; 0xFF;</td>
      </tr>
      <tr>
        <td id="L2831" class="blob-num js-line-number" data-line-number="2831"></td>
        <td id="LC2831" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (ptr &lt; <span class="pl-c1">56</span>) {</td>
      </tr>
      <tr>
        <td id="L2832" class="blob-num js-line-number" data-line-number="2832"></td>
        <td id="LC2832" class="blob-code blob-code-inner js-file-line">		pad_len = <span class="pl-c1">64</span> - ptr;</td>
      </tr>
      <tr>
        <td id="L2833" class="blob-num js-line-number" data-line-number="2833"></td>
        <td id="LC2833" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2834" class="blob-num js-line-number" data-line-number="2834"></td>
        <td id="LC2834" class="blob-code blob-code-inner js-file-line">		count = <span class="pl-c1">SPH_T64</span>(sc-&gt;count + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2835" class="blob-num js-line-number" data-line-number="2835"></td>
        <td id="LC2835" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2836" class="blob-num js-line-number" data-line-number="2836"></td>
        <td id="LC2836" class="blob-code blob-code-inner js-file-line">		count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2837" class="blob-num js-line-number" data-line-number="2837"></td>
        <td id="LC2837" class="blob-code blob-code-inner js-file-line">		count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high);</td>
      </tr>
      <tr>
        <td id="L2838" class="blob-num js-line-number" data-line-number="2838"></td>
        <td id="LC2838" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (count_low == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2839" class="blob-num js-line-number" data-line-number="2839"></td>
        <td id="LC2839" class="blob-code blob-code-inner js-file-line">			count_high = <span class="pl-c1">SPH_T32</span>(count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2840" class="blob-num js-line-number" data-line-number="2840"></td>
        <td id="LC2840" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2841" class="blob-num js-line-number" data-line-number="2841"></td>
        <td id="LC2841" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2842" class="blob-num js-line-number" data-line-number="2842"></td>
        <td id="LC2842" class="blob-code blob-code-inner js-file-line">		pad_len = <span class="pl-c1">128</span> - ptr;</td>
      </tr>
      <tr>
        <td id="L2843" class="blob-num js-line-number" data-line-number="2843"></td>
        <td id="LC2843" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2844" class="blob-num js-line-number" data-line-number="2844"></td>
        <td id="LC2844" class="blob-code blob-code-inner js-file-line">		count = <span class="pl-c1">SPH_T64</span>(sc-&gt;count + <span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L2845" class="blob-num js-line-number" data-line-number="2845"></td>
        <td id="LC2845" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2846" class="blob-num js-line-number" data-line-number="2846"></td>
        <td id="LC2846" class="blob-code blob-code-inner js-file-line">		count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L2847" class="blob-num js-line-number" data-line-number="2847"></td>
        <td id="LC2847" class="blob-code blob-code-inner js-file-line">		count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high);</td>
      </tr>
      <tr>
        <td id="L2848" class="blob-num js-line-number" data-line-number="2848"></td>
        <td id="LC2848" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (count_low &lt;= <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2849" class="blob-num js-line-number" data-line-number="2849"></td>
        <td id="LC2849" class="blob-code blob-code-inner js-file-line">			count_high = <span class="pl-c1">SPH_T32</span>(count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2850" class="blob-num js-line-number" data-line-number="2850"></td>
        <td id="LC2850" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2851" class="blob-num js-line-number" data-line-number="2851"></td>
        <td id="LC2851" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2852" class="blob-num js-line-number" data-line-number="2852"></td>
        <td id="LC2852" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">memset</span>(pad + <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, pad_len - <span class="pl-c1">9</span>);</td>
      </tr>
      <tr>
        <td id="L2853" class="blob-num js-line-number" data-line-number="2853"></td>
        <td id="LC2853" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2854" class="blob-num js-line-number" data-line-number="2854"></td>
        <td id="LC2854" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">8</span>, count);</td>
      </tr>
      <tr>
        <td id="L2855" class="blob-num js-line-number" data-line-number="2855"></td>
        <td id="LC2855" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2856" class="blob-num js-line-number" data-line-number="2856"></td>
        <td id="LC2856" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">8</span>, count_high);</td>
      </tr>
      <tr>
        <td id="L2857" class="blob-num js-line-number" data-line-number="2857"></td>
        <td id="LC2857" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">4</span>, count_low);</td>
      </tr>
      <tr>
        <td id="L2858" class="blob-num js-line-number" data-line-number="2858"></td>
        <td id="LC2858" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2859" class="blob-num js-line-number" data-line-number="2859"></td>
        <td id="LC2859" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_core</span>(sc, pad, pad_len);</td>
      </tr>
      <tr>
        <td id="L2860" class="blob-num js-line-number" data-line-number="2860"></td>
        <td id="LC2860" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">READ_STATE_SMALL</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2861" class="blob-num js-line-number" data-line-number="2861"></td>
        <td id="LC2861" class="blob-code blob-code-inner js-file-line">	FINAL_SMALL;</td>
      </tr>
      <tr>
        <td id="L2862" class="blob-num js-line-number" data-line-number="2862"></td>
        <td id="LC2862" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L2863" class="blob-num js-line-number" data-line-number="2863"></td>
        <td id="LC2863" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">4</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2864" class="blob-num js-line-number" data-line-number="2864"></td>
        <td id="LC2864" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">enc64e</span>(pad + (u &lt;&lt; <span class="pl-c1">3</span>), H[u + <span class="pl-c1">4</span>]);</td>
      </tr>
      <tr>
        <td id="L2865" class="blob-num js-line-number" data-line-number="2865"></td>
        <td id="LC2865" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2866" class="blob-num js-line-number" data-line-number="2866"></td>
        <td id="LC2866" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">8</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2867" class="blob-num js-line-number" data-line-number="2867"></td>
        <td id="LC2867" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">enc32e</span>(pad + (u &lt;&lt; <span class="pl-c1">2</span>), H[u + <span class="pl-c1">8</span>]);</td>
      </tr>
      <tr>
        <td id="L2868" class="blob-num js-line-number" data-line-number="2868"></td>
        <td id="LC2868" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2869" class="blob-num js-line-number" data-line-number="2869"></td>
        <td id="LC2869" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">memcpy</span>(dst, pad + <span class="pl-c1">32</span> - out_len, out_len);</td>
      </tr>
      <tr>
        <td id="L2870" class="blob-num js-line-number" data-line-number="2870"></td>
        <td id="LC2870" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_init</span>(sc, (<span class="pl-k">unsigned</span>)out_len &lt;&lt; <span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L2871" class="blob-num js-line-number" data-line-number="2871"></td>
        <td id="LC2871" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2872" class="blob-num js-line-number" data-line-number="2872"></td>
        <td id="LC2872" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2873" class="blob-num js-line-number" data-line-number="2873"></td>
        <td id="LC2873" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2874" class="blob-num js-line-number" data-line-number="2874"></td>
        <td id="LC2874" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_big_init</span>(sph_groestl_big_context *sc, <span class="pl-k">unsigned</span> out_size)</td>
      </tr>
      <tr>
        <td id="L2875" class="blob-num js-line-number" data-line-number="2875"></td>
        <td id="LC2875" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2876" class="blob-num js-line-number" data-line-number="2876"></td>
        <td id="LC2876" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> u;</td>
      </tr>
      <tr>
        <td id="L2877" class="blob-num js-line-number" data-line-number="2877"></td>
        <td id="LC2877" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2878" class="blob-num js-line-number" data-line-number="2878"></td>
        <td id="LC2878" class="blob-code blob-code-inner js-file-line">	sc-&gt;ptr = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2879" class="blob-num js-line-number" data-line-number="2879"></td>
        <td id="LC2879" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L2880" class="blob-num js-line-number" data-line-number="2880"></td>
        <td id="LC2880" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">15</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2881" class="blob-num js-line-number" data-line-number="2881"></td>
        <td id="LC2881" class="blob-code blob-code-inner js-file-line">		sc-&gt;state.<span class="pl-smi">wide</span>[u] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2882" class="blob-num js-line-number" data-line-number="2882"></td>
        <td id="LC2882" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L2883" class="blob-num js-line-number" data-line-number="2883"></td>
        <td id="LC2883" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">wide</span>[<span class="pl-c1">15</span>] = ((sph_u64)(out_size &amp; 0xFF) &lt;&lt; <span class="pl-c1">56</span>)</td>
      </tr>
      <tr>
        <td id="L2884" class="blob-num js-line-number" data-line-number="2884"></td>
        <td id="LC2884" class="blob-code blob-code-inner js-file-line">		| ((sph_u64)(out_size &amp; 0xFF00) &lt;&lt; <span class="pl-c1">40</span>);</td>
      </tr>
      <tr>
        <td id="L2885" class="blob-num js-line-number" data-line-number="2885"></td>
        <td id="LC2885" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2886" class="blob-num js-line-number" data-line-number="2886"></td>
        <td id="LC2886" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">wide</span>[<span class="pl-c1">15</span>] = (sph_u64)out_size;</td>
      </tr>
      <tr>
        <td id="L2887" class="blob-num js-line-number" data-line-number="2887"></td>
        <td id="LC2887" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2888" class="blob-num js-line-number" data-line-number="2888"></td>
        <td id="LC2888" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2889" class="blob-num js-line-number" data-line-number="2889"></td>
        <td id="LC2889" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">31</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L2890" class="blob-num js-line-number" data-line-number="2890"></td>
        <td id="LC2890" class="blob-code blob-code-inner js-file-line">		sc-&gt;state.<span class="pl-smi">narrow</span>[u] = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2891" class="blob-num js-line-number" data-line-number="2891"></td>
        <td id="LC2891" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> USE_LE</td>
      </tr>
      <tr>
        <td id="L2892" class="blob-num js-line-number" data-line-number="2892"></td>
        <td id="LC2892" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">narrow</span>[<span class="pl-c1">31</span>] = ((sph_u32)(out_size &amp; 0xFF) &lt;&lt; <span class="pl-c1">24</span>)</td>
      </tr>
      <tr>
        <td id="L2893" class="blob-num js-line-number" data-line-number="2893"></td>
        <td id="LC2893" class="blob-code blob-code-inner js-file-line">		| ((sph_u32)(out_size &amp; 0xFF00) &lt;&lt; <span class="pl-c1">8</span>);</td>
      </tr>
      <tr>
        <td id="L2894" class="blob-num js-line-number" data-line-number="2894"></td>
        <td id="LC2894" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2895" class="blob-num js-line-number" data-line-number="2895"></td>
        <td id="LC2895" class="blob-code blob-code-inner js-file-line">	sc-&gt;state.<span class="pl-smi">narrow</span>[<span class="pl-c1">31</span>] = (sph_u32)out_size;</td>
      </tr>
      <tr>
        <td id="L2896" class="blob-num js-line-number" data-line-number="2896"></td>
        <td id="LC2896" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2897" class="blob-num js-line-number" data-line-number="2897"></td>
        <td id="LC2897" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2898" class="blob-num js-line-number" data-line-number="2898"></td>
        <td id="LC2898" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2899" class="blob-num js-line-number" data-line-number="2899"></td>
        <td id="LC2899" class="blob-code blob-code-inner js-file-line">	sc-&gt;count = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2900" class="blob-num js-line-number" data-line-number="2900"></td>
        <td id="LC2900" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2901" class="blob-num js-line-number" data-line-number="2901"></td>
        <td id="LC2901" class="blob-code blob-code-inner js-file-line">	sc-&gt;count_high = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2902" class="blob-num js-line-number" data-line-number="2902"></td>
        <td id="LC2902" class="blob-code blob-code-inner js-file-line">	sc-&gt;count_low = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2903" class="blob-num js-line-number" data-line-number="2903"></td>
        <td id="LC2903" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2904" class="blob-num js-line-number" data-line-number="2904"></td>
        <td id="LC2904" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2905" class="blob-num js-line-number" data-line-number="2905"></td>
        <td id="LC2905" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2906" class="blob-num js-line-number" data-line-number="2906"></td>
        <td id="LC2906" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2907" class="blob-num js-line-number" data-line-number="2907"></td>
        <td id="LC2907" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_big_core</span>(sph_groestl_big_context *sc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L2908" class="blob-num js-line-number" data-line-number="2908"></td>
        <td id="LC2908" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2909" class="blob-num js-line-number" data-line-number="2909"></td>
        <td id="LC2909" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> *buf;</td>
      </tr>
      <tr>
        <td id="L2910" class="blob-num js-line-number" data-line-number="2910"></td>
        <td id="LC2910" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> ptr;</td>
      </tr>
      <tr>
        <td id="L2911" class="blob-num js-line-number" data-line-number="2911"></td>
        <td id="LC2911" class="blob-code blob-code-inner js-file-line">	DECL_STATE_BIG</td>
      </tr>
      <tr>
        <td id="L2912" class="blob-num js-line-number" data-line-number="2912"></td>
        <td id="LC2912" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2913" class="blob-num js-line-number" data-line-number="2913"></td>
        <td id="LC2913" class="blob-code blob-code-inner js-file-line">	buf = sc-&gt;buf;</td>
      </tr>
      <tr>
        <td id="L2914" class="blob-num js-line-number" data-line-number="2914"></td>
        <td id="LC2914" class="blob-code blob-code-inner js-file-line">	ptr = sc-&gt;ptr;</td>
      </tr>
      <tr>
        <td id="L2915" class="blob-num js-line-number" data-line-number="2915"></td>
        <td id="LC2915" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (len &lt; (<span class="pl-k">sizeof</span> sc-&gt;buf) - ptr) {</td>
      </tr>
      <tr>
        <td id="L2916" class="blob-num js-line-number" data-line-number="2916"></td>
        <td id="LC2916" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(buf + ptr, data, len);</td>
      </tr>
      <tr>
        <td id="L2917" class="blob-num js-line-number" data-line-number="2917"></td>
        <td id="LC2917" class="blob-code blob-code-inner js-file-line">		ptr += len;</td>
      </tr>
      <tr>
        <td id="L2918" class="blob-num js-line-number" data-line-number="2918"></td>
        <td id="LC2918" class="blob-code blob-code-inner js-file-line">		sc-&gt;ptr = ptr;</td>
      </tr>
      <tr>
        <td id="L2919" class="blob-num js-line-number" data-line-number="2919"></td>
        <td id="LC2919" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2920" class="blob-num js-line-number" data-line-number="2920"></td>
        <td id="LC2920" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2921" class="blob-num js-line-number" data-line-number="2921"></td>
        <td id="LC2921" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2922" class="blob-num js-line-number" data-line-number="2922"></td>
        <td id="LC2922" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">READ_STATE_BIG</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2923" class="blob-num js-line-number" data-line-number="2923"></td>
        <td id="LC2923" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (len &gt; <span class="pl-c1">0</span>) {</td>
      </tr>
      <tr>
        <td id="L2924" class="blob-num js-line-number" data-line-number="2924"></td>
        <td id="LC2924" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">size_t</span> clen;</td>
      </tr>
      <tr>
        <td id="L2925" class="blob-num js-line-number" data-line-number="2925"></td>
        <td id="LC2925" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2926" class="blob-num js-line-number" data-line-number="2926"></td>
        <td id="LC2926" class="blob-code blob-code-inner js-file-line">		clen = (<span class="pl-k">sizeof</span> sc-&gt;buf) - ptr;</td>
      </tr>
      <tr>
        <td id="L2927" class="blob-num js-line-number" data-line-number="2927"></td>
        <td id="LC2927" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (clen &gt; len)</td>
      </tr>
      <tr>
        <td id="L2928" class="blob-num js-line-number" data-line-number="2928"></td>
        <td id="LC2928" class="blob-code blob-code-inner js-file-line">			clen = len;</td>
      </tr>
      <tr>
        <td id="L2929" class="blob-num js-line-number" data-line-number="2929"></td>
        <td id="LC2929" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">memcpy</span>(buf + ptr, data, clen);</td>
      </tr>
      <tr>
        <td id="L2930" class="blob-num js-line-number" data-line-number="2930"></td>
        <td id="LC2930" class="blob-code blob-code-inner js-file-line">		ptr += clen;</td>
      </tr>
      <tr>
        <td id="L2931" class="blob-num js-line-number" data-line-number="2931"></td>
        <td id="LC2931" class="blob-code blob-code-inner js-file-line">		data = (<span class="pl-k">const</span> <span class="pl-k">unsigned</span> <span class="pl-k">char</span> *)data + clen;</td>
      </tr>
      <tr>
        <td id="L2932" class="blob-num js-line-number" data-line-number="2932"></td>
        <td id="LC2932" class="blob-code blob-code-inner js-file-line">		len -= clen;</td>
      </tr>
      <tr>
        <td id="L2933" class="blob-num js-line-number" data-line-number="2933"></td>
        <td id="LC2933" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (ptr == <span class="pl-k">sizeof</span> sc-&gt;buf) {</td>
      </tr>
      <tr>
        <td id="L2934" class="blob-num js-line-number" data-line-number="2934"></td>
        <td id="LC2934" class="blob-code blob-code-inner js-file-line">			COMPRESS_BIG;</td>
      </tr>
      <tr>
        <td id="L2935" class="blob-num js-line-number" data-line-number="2935"></td>
        <td id="LC2935" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2936" class="blob-num js-line-number" data-line-number="2936"></td>
        <td id="LC2936" class="blob-code blob-code-inner js-file-line">			sc-&gt;count ++;</td>
      </tr>
      <tr>
        <td id="L2937" class="blob-num js-line-number" data-line-number="2937"></td>
        <td id="LC2937" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2938" class="blob-num js-line-number" data-line-number="2938"></td>
        <td id="LC2938" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> ((sc-&gt;count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">1</span>)) == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2939" class="blob-num js-line-number" data-line-number="2939"></td>
        <td id="LC2939" class="blob-code blob-code-inner js-file-line">				sc-&gt;count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2940" class="blob-num js-line-number" data-line-number="2940"></td>
        <td id="LC2940" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2941" class="blob-num js-line-number" data-line-number="2941"></td>
        <td id="LC2941" class="blob-code blob-code-inner js-file-line">			ptr = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2942" class="blob-num js-line-number" data-line-number="2942"></td>
        <td id="LC2942" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2943" class="blob-num js-line-number" data-line-number="2943"></td>
        <td id="LC2943" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2944" class="blob-num js-line-number" data-line-number="2944"></td>
        <td id="LC2944" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WRITE_STATE_BIG</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2945" class="blob-num js-line-number" data-line-number="2945"></td>
        <td id="LC2945" class="blob-code blob-code-inner js-file-line">	sc-&gt;ptr = ptr;</td>
      </tr>
      <tr>
        <td id="L2946" class="blob-num js-line-number" data-line-number="2946"></td>
        <td id="LC2946" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2947" class="blob-num js-line-number" data-line-number="2947"></td>
        <td id="LC2947" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2948" class="blob-num js-line-number" data-line-number="2948"></td>
        <td id="LC2948" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2949" class="blob-num js-line-number" data-line-number="2949"></td>
        <td id="LC2949" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">groestl_big_close</span>(sph_groestl_big_context *sc,</td>
      </tr>
      <tr>
        <td id="L2950" class="blob-num js-line-number" data-line-number="2950"></td>
        <td id="LC2950" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst, <span class="pl-c1">size_t</span> out_len)</td>
      </tr>
      <tr>
        <td id="L2951" class="blob-num js-line-number" data-line-number="2951"></td>
        <td id="LC2951" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2952" class="blob-num js-line-number" data-line-number="2952"></td>
        <td id="LC2952" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> *buf;</td>
      </tr>
      <tr>
        <td id="L2953" class="blob-num js-line-number" data-line-number="2953"></td>
        <td id="LC2953" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">char</span> pad[<span class="pl-c1">136</span>];</td>
      </tr>
      <tr>
        <td id="L2954" class="blob-num js-line-number" data-line-number="2954"></td>
        <td id="LC2954" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">size_t</span> ptr, pad_len, u;</td>
      </tr>
      <tr>
        <td id="L2955" class="blob-num js-line-number" data-line-number="2955"></td>
        <td id="LC2955" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2956" class="blob-num js-line-number" data-line-number="2956"></td>
        <td id="LC2956" class="blob-code blob-code-inner js-file-line">	sph_u64 count;</td>
      </tr>
      <tr>
        <td id="L2957" class="blob-num js-line-number" data-line-number="2957"></td>
        <td id="LC2957" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2958" class="blob-num js-line-number" data-line-number="2958"></td>
        <td id="LC2958" class="blob-code blob-code-inner js-file-line">	sph_u32 count_high, count_low;</td>
      </tr>
      <tr>
        <td id="L2959" class="blob-num js-line-number" data-line-number="2959"></td>
        <td id="LC2959" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2960" class="blob-num js-line-number" data-line-number="2960"></td>
        <td id="LC2960" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> z;</td>
      </tr>
      <tr>
        <td id="L2961" class="blob-num js-line-number" data-line-number="2961"></td>
        <td id="LC2961" class="blob-code blob-code-inner js-file-line">	DECL_STATE_BIG</td>
      </tr>
      <tr>
        <td id="L2962" class="blob-num js-line-number" data-line-number="2962"></td>
        <td id="LC2962" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2963" class="blob-num js-line-number" data-line-number="2963"></td>
        <td id="LC2963" class="blob-code blob-code-inner js-file-line">	buf = sc-&gt;buf;</td>
      </tr>
      <tr>
        <td id="L2964" class="blob-num js-line-number" data-line-number="2964"></td>
        <td id="LC2964" class="blob-code blob-code-inner js-file-line">	ptr = sc-&gt;ptr;</td>
      </tr>
      <tr>
        <td id="L2965" class="blob-num js-line-number" data-line-number="2965"></td>
        <td id="LC2965" class="blob-code blob-code-inner js-file-line">	z = 0x80 &gt;&gt; n;</td>
      </tr>
      <tr>
        <td id="L2966" class="blob-num js-line-number" data-line-number="2966"></td>
        <td id="LC2966" class="blob-code blob-code-inner js-file-line">	pad[<span class="pl-c1">0</span>] = ((ub &amp; -z) | z) &amp; 0xFF;</td>
      </tr>
      <tr>
        <td id="L2967" class="blob-num js-line-number" data-line-number="2967"></td>
        <td id="LC2967" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (ptr &lt; <span class="pl-c1">120</span>) {</td>
      </tr>
      <tr>
        <td id="L2968" class="blob-num js-line-number" data-line-number="2968"></td>
        <td id="LC2968" class="blob-code blob-code-inner js-file-line">		pad_len = <span class="pl-c1">128</span> - ptr;</td>
      </tr>
      <tr>
        <td id="L2969" class="blob-num js-line-number" data-line-number="2969"></td>
        <td id="LC2969" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2970" class="blob-num js-line-number" data-line-number="2970"></td>
        <td id="LC2970" class="blob-code blob-code-inner js-file-line">		count = <span class="pl-c1">SPH_T64</span>(sc-&gt;count + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2971" class="blob-num js-line-number" data-line-number="2971"></td>
        <td id="LC2971" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2972" class="blob-num js-line-number" data-line-number="2972"></td>
        <td id="LC2972" class="blob-code blob-code-inner js-file-line">		count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2973" class="blob-num js-line-number" data-line-number="2973"></td>
        <td id="LC2973" class="blob-code blob-code-inner js-file-line">		count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high);</td>
      </tr>
      <tr>
        <td id="L2974" class="blob-num js-line-number" data-line-number="2974"></td>
        <td id="LC2974" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (count_low == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2975" class="blob-num js-line-number" data-line-number="2975"></td>
        <td id="LC2975" class="blob-code blob-code-inner js-file-line">			count_high = <span class="pl-c1">SPH_T32</span>(count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2976" class="blob-num js-line-number" data-line-number="2976"></td>
        <td id="LC2976" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2977" class="blob-num js-line-number" data-line-number="2977"></td>
        <td id="LC2977" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2978" class="blob-num js-line-number" data-line-number="2978"></td>
        <td id="LC2978" class="blob-code blob-code-inner js-file-line">		pad_len = <span class="pl-c1">256</span> - ptr;</td>
      </tr>
      <tr>
        <td id="L2979" class="blob-num js-line-number" data-line-number="2979"></td>
        <td id="LC2979" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2980" class="blob-num js-line-number" data-line-number="2980"></td>
        <td id="LC2980" class="blob-code blob-code-inner js-file-line">		count = <span class="pl-c1">SPH_T64</span>(sc-&gt;count + <span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L2981" class="blob-num js-line-number" data-line-number="2981"></td>
        <td id="LC2981" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2982" class="blob-num js-line-number" data-line-number="2982"></td>
        <td id="LC2982" class="blob-code blob-code-inner js-file-line">		count_low = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_low + <span class="pl-c1">2</span>);</td>
      </tr>
      <tr>
        <td id="L2983" class="blob-num js-line-number" data-line-number="2983"></td>
        <td id="LC2983" class="blob-code blob-code-inner js-file-line">		count_high = <span class="pl-c1">SPH_T32</span>(sc-&gt;count_high);</td>
      </tr>
      <tr>
        <td id="L2984" class="blob-num js-line-number" data-line-number="2984"></td>
        <td id="LC2984" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (count_low &lt;= <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2985" class="blob-num js-line-number" data-line-number="2985"></td>
        <td id="LC2985" class="blob-code blob-code-inner js-file-line">			count_high = <span class="pl-c1">SPH_T32</span>(count_high + <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2986" class="blob-num js-line-number" data-line-number="2986"></td>
        <td id="LC2986" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2987" class="blob-num js-line-number" data-line-number="2987"></td>
        <td id="LC2987" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2988" class="blob-num js-line-number" data-line-number="2988"></td>
        <td id="LC2988" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">memset</span>(pad + <span class="pl-c1">1</span>, <span class="pl-c1">0</span>, pad_len - <span class="pl-c1">9</span>);</td>
      </tr>
      <tr>
        <td id="L2989" class="blob-num js-line-number" data-line-number="2989"></td>
        <td id="LC2989" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_64</td>
      </tr>
      <tr>
        <td id="L2990" class="blob-num js-line-number" data-line-number="2990"></td>
        <td id="LC2990" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">8</span>, count);</td>
      </tr>
      <tr>
        <td id="L2991" class="blob-num js-line-number" data-line-number="2991"></td>
        <td id="LC2991" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2992" class="blob-num js-line-number" data-line-number="2992"></td>
        <td id="LC2992" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">8</span>, count_high);</td>
      </tr>
      <tr>
        <td id="L2993" class="blob-num js-line-number" data-line-number="2993"></td>
        <td id="LC2993" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sph_enc64be</span>(pad + pad_len - <span class="pl-c1">4</span>, count_low);</td>
      </tr>
      <tr>
        <td id="L2994" class="blob-num js-line-number" data-line-number="2994"></td>
        <td id="LC2994" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2995" class="blob-num js-line-number" data-line-number="2995"></td>
        <td id="LC2995" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_core</span>(sc, pad, pad_len);</td>
      </tr>
      <tr>
        <td id="L2996" class="blob-num js-line-number" data-line-number="2996"></td>
        <td id="LC2996" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">READ_STATE_BIG</span>(sc);</td>
      </tr>
      <tr>
        <td id="L2997" class="blob-num js-line-number" data-line-number="2997"></td>
        <td id="LC2997" class="blob-code blob-code-inner js-file-line">	FINAL_BIG;</td>
      </tr>
      <tr>
        <td id="L2998" class="blob-num js-line-number" data-line-number="2998"></td>
        <td id="LC2998" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">if</span> SPH_GROESTL_64</td>
      </tr>
      <tr>
        <td id="L2999" class="blob-num js-line-number" data-line-number="2999"></td>
        <td id="LC2999" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">8</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L3000" class="blob-num js-line-number" data-line-number="3000"></td>
        <td id="LC3000" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">enc64e</span>(pad + (u &lt;&lt; <span class="pl-c1">3</span>), H[u + <span class="pl-c1">8</span>]);</td>
      </tr>
      <tr>
        <td id="L3001" class="blob-num js-line-number" data-line-number="3001"></td>
        <td id="LC3001" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3002" class="blob-num js-line-number" data-line-number="3002"></td>
        <td id="LC3002" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (u = <span class="pl-c1">0</span>; u &lt; <span class="pl-c1">16</span>; u ++)</td>
      </tr>
      <tr>
        <td id="L3003" class="blob-num js-line-number" data-line-number="3003"></td>
        <td id="LC3003" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">enc32e</span>(pad + (u &lt;&lt; <span class="pl-c1">2</span>), H[u + <span class="pl-c1">16</span>]);</td>
      </tr>
      <tr>
        <td id="L3004" class="blob-num js-line-number" data-line-number="3004"></td>
        <td id="LC3004" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3005" class="blob-num js-line-number" data-line-number="3005"></td>
        <td id="LC3005" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">memcpy</span>(dst, pad + <span class="pl-c1">64</span> - out_len, out_len);</td>
      </tr>
      <tr>
        <td id="L3006" class="blob-num js-line-number" data-line-number="3006"></td>
        <td id="LC3006" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_init</span>(sc, (<span class="pl-k">unsigned</span>)out_len &lt;&lt; <span class="pl-c1">3</span>);</td>
      </tr>
      <tr>
        <td id="L3007" class="blob-num js-line-number" data-line-number="3007"></td>
        <td id="LC3007" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3008" class="blob-num js-line-number" data-line-number="3008"></td>
        <td id="LC3008" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3009" class="blob-num js-line-number" data-line-number="3009"></td>
        <td id="LC3009" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3010" class="blob-num js-line-number" data-line-number="3010"></td>
        <td id="LC3010" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3011" class="blob-num js-line-number" data-line-number="3011"></td>
        <td id="LC3011" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl224_init</span>(<span class="pl-k">void</span> *cc)</td>
      </tr>
      <tr>
        <td id="L3012" class="blob-num js-line-number" data-line-number="3012"></td>
        <td id="LC3012" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3013" class="blob-num js-line-number" data-line-number="3013"></td>
        <td id="LC3013" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_init</span>(cc, <span class="pl-c1">224</span>);</td>
      </tr>
      <tr>
        <td id="L3014" class="blob-num js-line-number" data-line-number="3014"></td>
        <td id="LC3014" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3015" class="blob-num js-line-number" data-line-number="3015"></td>
        <td id="LC3015" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3016" class="blob-num js-line-number" data-line-number="3016"></td>
        <td id="LC3016" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3017" class="blob-num js-line-number" data-line-number="3017"></td>
        <td id="LC3017" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3018" class="blob-num js-line-number" data-line-number="3018"></td>
        <td id="LC3018" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl224</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L3019" class="blob-num js-line-number" data-line-number="3019"></td>
        <td id="LC3019" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3020" class="blob-num js-line-number" data-line-number="3020"></td>
        <td id="LC3020" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_core</span>(cc, data, len);</td>
      </tr>
      <tr>
        <td id="L3021" class="blob-num js-line-number" data-line-number="3021"></td>
        <td id="LC3021" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3022" class="blob-num js-line-number" data-line-number="3022"></td>
        <td id="LC3022" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3023" class="blob-num js-line-number" data-line-number="3023"></td>
        <td id="LC3023" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3024" class="blob-num js-line-number" data-line-number="3024"></td>
        <td id="LC3024" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3025" class="blob-num js-line-number" data-line-number="3025"></td>
        <td id="LC3025" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl224_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3026" class="blob-num js-line-number" data-line-number="3026"></td>
        <td id="LC3026" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3027" class="blob-num js-line-number" data-line-number="3027"></td>
        <td id="LC3027" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_close</span>(cc, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, dst, <span class="pl-c1">28</span>);</td>
      </tr>
      <tr>
        <td id="L3028" class="blob-num js-line-number" data-line-number="3028"></td>
        <td id="LC3028" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3029" class="blob-num js-line-number" data-line-number="3029"></td>
        <td id="LC3029" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3030" class="blob-num js-line-number" data-line-number="3030"></td>
        <td id="LC3030" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3031" class="blob-num js-line-number" data-line-number="3031"></td>
        <td id="LC3031" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3032" class="blob-num js-line-number" data-line-number="3032"></td>
        <td id="LC3032" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl224_addbits_and_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3033" class="blob-num js-line-number" data-line-number="3033"></td>
        <td id="LC3033" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3034" class="blob-num js-line-number" data-line-number="3034"></td>
        <td id="LC3034" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_close</span>(cc, ub, n, dst, <span class="pl-c1">28</span>);</td>
      </tr>
      <tr>
        <td id="L3035" class="blob-num js-line-number" data-line-number="3035"></td>
        <td id="LC3035" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3036" class="blob-num js-line-number" data-line-number="3036"></td>
        <td id="LC3036" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3037" class="blob-num js-line-number" data-line-number="3037"></td>
        <td id="LC3037" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3038" class="blob-num js-line-number" data-line-number="3038"></td>
        <td id="LC3038" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3039" class="blob-num js-line-number" data-line-number="3039"></td>
        <td id="LC3039" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl256_init</span>(<span class="pl-k">void</span> *cc)</td>
      </tr>
      <tr>
        <td id="L3040" class="blob-num js-line-number" data-line-number="3040"></td>
        <td id="LC3040" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3041" class="blob-num js-line-number" data-line-number="3041"></td>
        <td id="LC3041" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_init</span>(cc, <span class="pl-c1">256</span>);</td>
      </tr>
      <tr>
        <td id="L3042" class="blob-num js-line-number" data-line-number="3042"></td>
        <td id="LC3042" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3043" class="blob-num js-line-number" data-line-number="3043"></td>
        <td id="LC3043" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3044" class="blob-num js-line-number" data-line-number="3044"></td>
        <td id="LC3044" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3045" class="blob-num js-line-number" data-line-number="3045"></td>
        <td id="LC3045" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3046" class="blob-num js-line-number" data-line-number="3046"></td>
        <td id="LC3046" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl256</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L3047" class="blob-num js-line-number" data-line-number="3047"></td>
        <td id="LC3047" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3048" class="blob-num js-line-number" data-line-number="3048"></td>
        <td id="LC3048" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_core</span>(cc, data, len);</td>
      </tr>
      <tr>
        <td id="L3049" class="blob-num js-line-number" data-line-number="3049"></td>
        <td id="LC3049" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3050" class="blob-num js-line-number" data-line-number="3050"></td>
        <td id="LC3050" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3051" class="blob-num js-line-number" data-line-number="3051"></td>
        <td id="LC3051" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3052" class="blob-num js-line-number" data-line-number="3052"></td>
        <td id="LC3052" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3053" class="blob-num js-line-number" data-line-number="3053"></td>
        <td id="LC3053" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl256_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3054" class="blob-num js-line-number" data-line-number="3054"></td>
        <td id="LC3054" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3055" class="blob-num js-line-number" data-line-number="3055"></td>
        <td id="LC3055" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_close</span>(cc, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, dst, <span class="pl-c1">32</span>);</td>
      </tr>
      <tr>
        <td id="L3056" class="blob-num js-line-number" data-line-number="3056"></td>
        <td id="LC3056" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3057" class="blob-num js-line-number" data-line-number="3057"></td>
        <td id="LC3057" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3058" class="blob-num js-line-number" data-line-number="3058"></td>
        <td id="LC3058" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3059" class="blob-num js-line-number" data-line-number="3059"></td>
        <td id="LC3059" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3060" class="blob-num js-line-number" data-line-number="3060"></td>
        <td id="LC3060" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl256_addbits_and_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3061" class="blob-num js-line-number" data-line-number="3061"></td>
        <td id="LC3061" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3062" class="blob-num js-line-number" data-line-number="3062"></td>
        <td id="LC3062" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_small_close</span>(cc, ub, n, dst, <span class="pl-c1">32</span>);</td>
      </tr>
      <tr>
        <td id="L3063" class="blob-num js-line-number" data-line-number="3063"></td>
        <td id="LC3063" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3064" class="blob-num js-line-number" data-line-number="3064"></td>
        <td id="LC3064" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3065" class="blob-num js-line-number" data-line-number="3065"></td>
        <td id="LC3065" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3066" class="blob-num js-line-number" data-line-number="3066"></td>
        <td id="LC3066" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3067" class="blob-num js-line-number" data-line-number="3067"></td>
        <td id="LC3067" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl384_init</span>(<span class="pl-k">void</span> *cc)</td>
      </tr>
      <tr>
        <td id="L3068" class="blob-num js-line-number" data-line-number="3068"></td>
        <td id="LC3068" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3069" class="blob-num js-line-number" data-line-number="3069"></td>
        <td id="LC3069" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_init</span>(cc, <span class="pl-c1">384</span>);</td>
      </tr>
      <tr>
        <td id="L3070" class="blob-num js-line-number" data-line-number="3070"></td>
        <td id="LC3070" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3071" class="blob-num js-line-number" data-line-number="3071"></td>
        <td id="LC3071" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3072" class="blob-num js-line-number" data-line-number="3072"></td>
        <td id="LC3072" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3073" class="blob-num js-line-number" data-line-number="3073"></td>
        <td id="LC3073" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3074" class="blob-num js-line-number" data-line-number="3074"></td>
        <td id="LC3074" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl384</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L3075" class="blob-num js-line-number" data-line-number="3075"></td>
        <td id="LC3075" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3076" class="blob-num js-line-number" data-line-number="3076"></td>
        <td id="LC3076" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_core</span>(cc, data, len);</td>
      </tr>
      <tr>
        <td id="L3077" class="blob-num js-line-number" data-line-number="3077"></td>
        <td id="LC3077" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3078" class="blob-num js-line-number" data-line-number="3078"></td>
        <td id="LC3078" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3079" class="blob-num js-line-number" data-line-number="3079"></td>
        <td id="LC3079" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3080" class="blob-num js-line-number" data-line-number="3080"></td>
        <td id="LC3080" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3081" class="blob-num js-line-number" data-line-number="3081"></td>
        <td id="LC3081" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl384_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3082" class="blob-num js-line-number" data-line-number="3082"></td>
        <td id="LC3082" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3083" class="blob-num js-line-number" data-line-number="3083"></td>
        <td id="LC3083" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_close</span>(cc, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, dst, <span class="pl-c1">48</span>);</td>
      </tr>
      <tr>
        <td id="L3084" class="blob-num js-line-number" data-line-number="3084"></td>
        <td id="LC3084" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3085" class="blob-num js-line-number" data-line-number="3085"></td>
        <td id="LC3085" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3086" class="blob-num js-line-number" data-line-number="3086"></td>
        <td id="LC3086" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3087" class="blob-num js-line-number" data-line-number="3087"></td>
        <td id="LC3087" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3088" class="blob-num js-line-number" data-line-number="3088"></td>
        <td id="LC3088" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl384_addbits_and_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3089" class="blob-num js-line-number" data-line-number="3089"></td>
        <td id="LC3089" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3090" class="blob-num js-line-number" data-line-number="3090"></td>
        <td id="LC3090" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_close</span>(cc, ub, n, dst, <span class="pl-c1">48</span>);</td>
      </tr>
      <tr>
        <td id="L3091" class="blob-num js-line-number" data-line-number="3091"></td>
        <td id="LC3091" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3092" class="blob-num js-line-number" data-line-number="3092"></td>
        <td id="LC3092" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3093" class="blob-num js-line-number" data-line-number="3093"></td>
        <td id="LC3093" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3094" class="blob-num js-line-number" data-line-number="3094"></td>
        <td id="LC3094" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3095" class="blob-num js-line-number" data-line-number="3095"></td>
        <td id="LC3095" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl512_init</span>(<span class="pl-k">void</span> *cc)</td>
      </tr>
      <tr>
        <td id="L3096" class="blob-num js-line-number" data-line-number="3096"></td>
        <td id="LC3096" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3097" class="blob-num js-line-number" data-line-number="3097"></td>
        <td id="LC3097" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_init</span>(cc, <span class="pl-c1">512</span>);</td>
      </tr>
      <tr>
        <td id="L3098" class="blob-num js-line-number" data-line-number="3098"></td>
        <td id="LC3098" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3099" class="blob-num js-line-number" data-line-number="3099"></td>
        <td id="LC3099" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3100" class="blob-num js-line-number" data-line-number="3100"></td>
        <td id="LC3100" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3101" class="blob-num js-line-number" data-line-number="3101"></td>
        <td id="LC3101" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3102" class="blob-num js-line-number" data-line-number="3102"></td>
        <td id="LC3102" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl512</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">const</span> <span class="pl-k">void</span> *data, <span class="pl-c1">size_t</span> len)</td>
      </tr>
      <tr>
        <td id="L3103" class="blob-num js-line-number" data-line-number="3103"></td>
        <td id="LC3103" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3104" class="blob-num js-line-number" data-line-number="3104"></td>
        <td id="LC3104" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_core</span>(cc, data, len);</td>
      </tr>
      <tr>
        <td id="L3105" class="blob-num js-line-number" data-line-number="3105"></td>
        <td id="LC3105" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3106" class="blob-num js-line-number" data-line-number="3106"></td>
        <td id="LC3106" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3107" class="blob-num js-line-number" data-line-number="3107"></td>
        <td id="LC3107" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3108" class="blob-num js-line-number" data-line-number="3108"></td>
        <td id="LC3108" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3109" class="blob-num js-line-number" data-line-number="3109"></td>
        <td id="LC3109" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl512_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3110" class="blob-num js-line-number" data-line-number="3110"></td>
        <td id="LC3110" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3111" class="blob-num js-line-number" data-line-number="3111"></td>
        <td id="LC3111" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_close</span>(cc, <span class="pl-c1">0</span>, <span class="pl-c1">0</span>, dst, <span class="pl-c1">64</span>);</td>
      </tr>
      <tr>
        <td id="L3112" class="blob-num js-line-number" data-line-number="3112"></td>
        <td id="LC3112" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3113" class="blob-num js-line-number" data-line-number="3113"></td>
        <td id="LC3113" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3114" class="blob-num js-line-number" data-line-number="3114"></td>
        <td id="LC3114" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span> see sph_groestl.h <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L3115" class="blob-num js-line-number" data-line-number="3115"></td>
        <td id="LC3115" class="blob-code blob-code-inner js-file-line"><span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3116" class="blob-num js-line-number" data-line-number="3116"></td>
        <td id="LC3116" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">sph_groestl512_addbits_and_close</span>(<span class="pl-k">void</span> *cc, <span class="pl-k">unsigned</span> ub, <span class="pl-k">unsigned</span> n, <span class="pl-k">void</span> *dst)</td>
      </tr>
      <tr>
        <td id="L3117" class="blob-num js-line-number" data-line-number="3117"></td>
        <td id="LC3117" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3118" class="blob-num js-line-number" data-line-number="3118"></td>
        <td id="LC3118" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">groestl_big_close</span>(cc, ub, n, dst, <span class="pl-c1">64</span>);</td>
      </tr>
      <tr>
        <td id="L3119" class="blob-num js-line-number" data-line-number="3119"></td>
        <td id="LC3119" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3120" class="blob-num js-line-number" data-line-number="3120"></td>
        <td id="LC3120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3121" class="blob-num js-line-number" data-line-number="3121"></td>
        <td id="LC3121" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> __cplusplus</td>
      </tr>
      <tr>
        <td id="L3122" class="blob-num js-line-number" data-line-number="3122"></td>
        <td id="LC3122" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3123" class="blob-num js-line-number" data-line-number="3123"></td>
        <td id="LC3123" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
</table>

  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="d-none">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- '"` --><!-- </textarea></xmp> --></option></form><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>




    </div>
  </div>

  </div>

      <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links float-right">
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact GitHub</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2017 <span title="0.25084s from github-fe121-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



  

  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
    You can't perform that action at this time.
  </div>


    
    <script crossorigin="anonymous" integrity="sha256-0ZLoD9NuEtMY0oxGaomY68qdIKFaOBIvme3+RGEqA0s=" src="https://assets-cdn.github.com/assets/frameworks-d192e80fd36e12d318d28c466a8998ebca9d20a15a38122f99edfe44612a034b.js"></script>
    <script async="async" crossorigin="anonymous" integrity="sha256-fNGj+qj+sHeV1i2fElK+ZW0M2yqsJ9i3ZJws6zB6eow=" src="https://assets-cdn.github.com/assets/github-7cd1a3faa8feb07795d62d9f1252be656d0cdb2aac27d8b7649c2ceb307a7a8c.js"></script>
    
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path fill-rule="evenodd" d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"/></svg>
    </button>
  </div>
</div>


  </body>
</html>

