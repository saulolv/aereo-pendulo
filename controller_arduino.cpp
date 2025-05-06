<!DOCTYPE html>
<!-- saved from url=(0065)https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54 -->
<html lang="en" data-color-mode="auto" data-light-theme="light" data-dark-theme="dark" data-a11y-animated-images="system" data-a11y-link-underlines="true" class="js-focus-visible" data-js-focus-visible="" data-turbo-loaded=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style>.ͼ1.cm-focused {outline: 1px dotted #212121;}
.ͼ1 {position: relative !important; box-sizing: border-box; display: flex !important; flex-direction: column;}
.ͼ1 .cm-scroller {display: flex !important; align-items: flex-start !important; font-family: monospace; line-height: 1.4; height: 100%; overflow-x: auto; position: relative; z-index: 0;}
.ͼ1 .cm-content[contenteditable=true] {-webkit-user-modify: read-write-plaintext-only;}
.ͼ1 .cm-content {margin: 0; flex-grow: 2; flex-shrink: 0; display: block; white-space: pre; word-wrap: normal; box-sizing: border-box; padding: 4px 0; outline: none;}
.ͼ1 .cm-lineWrapping {white-space: pre-wrap; white-space: break-spaces; word-break: break-word; overflow-wrap: anywhere; flex-shrink: 1;}
.ͼ2 .cm-content {caret-color: black;}
.ͼ3 .cm-content {caret-color: white;}
.ͼ1 .cm-line {display: block; padding: 0 2px 0 6px;}
.ͼ1 .cm-layer > * {position: absolute;}
.ͼ1 .cm-layer {position: absolute; left: 0; top: 0; contain: size style;}
.ͼ2 .cm-selectionBackground {background: #d9d9d9;}
.ͼ3 .cm-selectionBackground {background: #222;}
.ͼ2.cm-focused .cm-selectionBackground {background: #d7d4f0;}
.ͼ3.cm-focused .cm-selectionBackground {background: #233;}
.ͼ1 .cm-cursorLayer {pointer-events: none;}
.ͼ1.cm-focused .cm-cursorLayer {animation: steps(1) cm-blink 1.2s infinite;}
@keyframes cm-blink {50% {opacity: 0;}}
@keyframes cm-blink2 {50% {opacity: 0;}}
.ͼ1 .cm-cursor, .ͼ1 .cm-dropCursor {border-left: 1.2px solid black; margin-left: -0.6px; pointer-events: none;}
.ͼ1 .cm-cursor {display: none;}
.ͼ3 .cm-cursor {border-left-color: #444;}
.ͼ1 .cm-dropCursor {position: absolute;}
.ͼ1.cm-focused .cm-cursor {display: block;}
.ͼ2 .cm-activeLine {background-color: #cceeff44;}
.ͼ3 .cm-activeLine {background-color: #99eeff33;}
.ͼ2 .cm-specialChar {color: red;}
.ͼ3 .cm-specialChar {color: #f78;}
.ͼ1 .cm-gutters {flex-shrink: 0; display: flex; height: 100%; box-sizing: border-box; left: 0; z-index: 200;}
.ͼ2 .cm-gutters {background-color: #f5f5f5; color: #6c6c6c; border-right: 1px solid #ddd;}
.ͼ3 .cm-gutters {background-color: #333338; color: #ccc;}
.ͼ1 .cm-gutter {display: flex !important; flex-direction: column; flex-shrink: 0; box-sizing: border-box; min-height: 100%; overflow: hidden;}
.ͼ1 .cm-gutterElement {box-sizing: border-box;}
.ͼ1 .cm-lineNumbers .cm-gutterElement {padding: 0 3px 0 5px; min-width: 20px; text-align: right; white-space: nowrap;}
.ͼ2 .cm-activeLineGutter {background-color: #e2f2ff;}
.ͼ3 .cm-activeLineGutter {background-color: #222227;}
.ͼ1 .cm-panels {box-sizing: border-box; position: sticky; left: 0; right: 0;}
.ͼ2 .cm-panels {background-color: #f5f5f5; color: black;}
.ͼ2 .cm-panels-top {border-bottom: 1px solid #ddd;}
.ͼ2 .cm-panels-bottom {border-top: 1px solid #ddd;}
.ͼ3 .cm-panels {background-color: #333338; color: white;}
.ͼ1 .cm-tab {display: inline-block; overflow: hidden; vertical-align: bottom;}
.ͼ1 .cm-widgetBuffer {vertical-align: text-top; height: 1em; width: 0; display: inline;}
.ͼ1 .cm-placeholder {color: #888; display: inline-block; vertical-align: top;}
.ͼ1 .cm-highlightSpace:before {content: attr(data-display); position: absolute; pointer-events: none; color: #888;}
.ͼ1 .cm-highlightTab {background-image: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg" width="200" height="20"><path stroke="%23888" stroke-width="1" fill="none" d="M1 10H196L190 5M190 15L196 10M197 4L197 16"/></svg>'); background-size: auto 100%; background-position: right 90%; background-repeat: no-repeat;}
.ͼ1 .cm-trailingSpace {background-color: #ff332255;}
.ͼ1 .cm-button {vertical-align: middle; color: inherit; font-size: 70%; padding: .2em 1em; border-radius: 1px;}
.ͼ2 .cm-button:active {background-image: linear-gradient(#b4b4b4, #d0d3d6);}
.ͼ2 .cm-button {background-image: linear-gradient(#eff1f5, #d9d9df); border: 1px solid #888;}
.ͼ3 .cm-button:active {background-image: linear-gradient(#111, #333);}
.ͼ3 .cm-button {background-image: linear-gradient(#393939, #111); border: 1px solid #888;}
.ͼ1 .cm-textfield {vertical-align: middle; color: inherit; font-size: 70%; border: 1px solid silver; padding: .2em .5em;}
.ͼ2 .cm-textfield {background-color: white;}
.ͼ3 .cm-textfield {border: 1px solid #555; background-color: inherit;}
.ͼ1 .cm-panel.cm-search [name=close] {position: absolute; top: 0; right: 4px; background-color: inherit; border: none; font: inherit; padding: 0; margin: 0;}
.ͼ1 .cm-panel.cm-search input, .ͼ1 .cm-panel.cm-search button, .ͼ1 .cm-panel.cm-search label {margin: .2em .6em .2em 0;}
.ͼ1 .cm-panel.cm-search input[type=checkbox] {margin-right: .2em;}
.ͼ1 .cm-panel.cm-search label {font-size: 80%; white-space: pre;}
.ͼ1 .cm-panel.cm-search {padding: 2px 6px 4px; position: relative;}
.ͼ2 .cm-searchMatch {background-color: #ffff0054;}
.ͼ3 .cm-searchMatch {background-color: #00ffff8a;}
.ͼ2 .cm-searchMatch-selected {background-color: #ff6a0054;}
.ͼ3 .cm-searchMatch-selected {background-color: #ff00ff8a;}
.ͼ1.cm-focused .cm-matchingBracket {background-color: #328c8252;}
.ͼ1.cm-focused .cm-nonmatchingBracket {background-color: #bb555544;}
.ͼ7fh {color: var(--codeMirror-syntax-fgColor-keyword, var(--color-codemirror-syntax-keyword));}
.ͼ7fi {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ7fj {color: var(--codeMirror-matchingBracket-fgColor, var(--color-codemirror-matchingbracket-text));}
.ͼ7fk {color: var(--codeMirror-syntax-fgColor-string, var(--color-codemirror-syntax-string));}
.ͼ7fl {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ7fm {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ7fn {color: var(--codeMirror-syntax-fgColor-entity, var(--color-codemirror-syntax-entity));}
.ͼ7fo {color: var(--codeMirror-syntax-fgColor-variable, var(--color-codemirror-syntax-variable));}
.ͼ7fp {color: inherit;}
.ͼ7fq {font-weight: bold; color: inherit !important;}
.ͼ7fr {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ7fs {text-decoration: underline;}
.ͼ7ft {font-style: italic;}
.ͼ7fu {font-weight: bold;}
.ͼ7fv {text-decoration: line-through;}
.ͼ7fg {background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--codeMirror-fgColor, var(--color-codemirror-text)); cursor: text;}
.ͼ7fg .cm-gutters {background: var(--codeMirror-gutters-bgColor, var(--color-codemirror-gutters-bg)); border-right-width: 0;}
.ͼ7fg .cm-lineNumbers .cm-gutterElement {color: var(--codeMirror-lineNumber-fgColor, var(--color-codemirror-linenumber-text)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-gutter-fontSize, var(--codeMirror-content-fontSize, 12px)); line-height: 20px; padding: 0 16px 0 16px;}
.ͼ7fg .cm-content {caret-color: var(--codeMirror-cursor-fgColor, var(--color-codemirror-cursor)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-content-fontSize, 12px); background: var(--codeMirror-lines-bgColor, var(--color-codemirror-lines-bg)); line-height: 20px; padding-top: 8px;}
.ͼ7fg.cm-focused .cm-selectionBackground, .ͼ7fg .cm-selectionBackground, .ͼ7fg .cm-content ::selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ7fg.cm-focused {outline: none;}
.ͼ7fg.hide-help-until-focus.cm-focused .cm-panels-bottom {display: block;}
.ͼ7fg.hide-help-until-focus .cm-panels-bottom {display: none;}
.ͼ7fg.hide-help .cm-panels-top {display: none; position: absolute;}
.ͼ7fg .cm-content ::-moz-selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ7fg .cm-activeLine {background-color: var(--codeMirror-activeline-bgColor, var(--color-codemirror-activeline-bg));}
.ͼ7fg .cm-line {padding-left: 16px;}
.ͼ7fg .cm-help-panel {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 7px 10px; margin: 0; font-size: 13px; line-height: 16px; color: var(--fgColor-muted, var(--color-fg-muted)); cursor: default;}
.ͼ7fg .cm-panels-bottom {border-top: var(--borderWidth-thin, 1px) solid var(--borderColor-default, var(--color-border-default)); background: none;}
.js-upload-markdown-image .ͼ7fg .cm-panels-bottom {bottom: 30px !important;}
.ͼ7fg .cm-panel.cm-search {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 8px; font-size: 16px;}
.ͼ7fg .cm-panel.cm-search > button {border-radius: 6px; padding: 4px 8px; background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--button-default-fgColor-rest, var(--color-btn-text)); border: 1px solid var(--button-default-borderColor-rest, var(--color-btn-border)); text-transform: capitalize;}
.ͼ7fg .cm-panel.cm-search > label {color: var(--fgColor-default, var(--color-fg-default)); text-transform: capitalize; font-size: 12px;}
.ͼ7fg .cm-panel.cm-search > input {border-radius: 6px; padding: 4px 8px; background: var(--bgColor-default, var(--color-canvas-default)); color: var(--fgColor-default, var(--color-fg-default)); border: 1px solid var(--borderColor-default, var(--color-border-default)); font-size: 12px;}
.ͼ7fg .cm-panel.cm-search > button[name="close"] {padding: 4px;}
.ͼ7fg .cm-panels-top {border-bottom: var(--borderWidth-thin, 1px) solid var(--color-border-default); background: none;}
.ͼ7fg .cm-panel.cm-search input, .ͼ7fg .cm-panel.cm-search button, .ͼ7fg .cm-panel.cm-search label {margin-right: 8px; margin-bottom: 4px; margin-top: 4px; margin-left: 0;}
.ͼ7fg .cm-lintRange {cursor: help; background-image: none !important;}
.ͼ7fg .cm-placeholder {height: 1em; color: var(--fgColor-muted);}
.ͼ7fg.custom-tooltips .cm-tooltip {border: none !important; background-color: transparent !important;}
.ͼ7fg.custom-tooltips .cm-diagnostic {padding: 0; margin-left: 0 !important; border-left: none !important; white-space: unset;}
.ͼ96p {height: 100%; min-height: ; width: 100%;}
.ͼ968 {height: 100%; min-height: ; width: 100%;}
.ͼ95r {height: 100%; min-height: ; width: 100%;}
.ͼ95a {height: 100%; min-height: ; width: 100%;}
.ͼ94t {height: 100%; min-height: ; width: 100%;}
.ͼ94c {height: 100%; min-height: ; width: 100%;}
.ͼ93v {height: 100%; min-height: ; width: 100%;}
.ͼ93e {height: 100%; min-height: ; width: 100%;}
.ͼ92x {height: 100%; min-height: ; width: 100%;}
.ͼ92g {height: 100%; min-height: ; width: 100%;}
.ͼ91z {height: 100%; min-height: ; width: 100%;}
.ͼ91i {height: 100%; min-height: ; width: 100%;}
.ͼ911 {height: 100%; min-height: ; width: 100%;}
.ͼ90k {height: 100%; min-height: ; width: 100%;}
.ͼ903 {height: 100%; min-height: ; width: 100%;}
.ͼ8zm {height: 100%; min-height: ; width: 100%;}
.ͼ8z5 {height: 100%; min-height: ; width: 100%;}
.ͼ8yo {height: 100%; min-height: ; width: 100%;}
.ͼ8y7 {height: 100%; min-height: ; width: 100%;}
.ͼ8xq {height: 100%; min-height: ; width: 100%;}
.ͼ8x9 {height: 100%; min-height: ; width: 100%;}
.ͼ8ws {height: 100%; min-height: ; width: 100%;}
.ͼ8wb {height: 100%; min-height: ; width: 100%;}
.ͼ8vu {height: 100%; min-height: ; width: 100%;}
.ͼ8vd {height: 100%; min-height: ; width: 100%;}
.ͼ8uw {height: 100%; min-height: ; width: 100%;}
.ͼ8uf {height: 100%; min-height: ; width: 100%;}
.ͼ8ty {height: 100%; min-height: ; width: 100%;}
.ͼ8th {height: 100%; min-height: ; width: 100%;}
.ͼ8t0 {height: 100%; min-height: ; width: 100%;}
.ͼ8sj {height: 100%; min-height: ; width: 100%;}
.ͼ8s2 {height: 100%; min-height: ; width: 100%;}
.ͼ8rl {height: 100%; min-height: ; width: 100%;}
.ͼ8r4 {height: 100%; min-height: ; width: 100%;}
.ͼ8qn {height: 100%; min-height: ; width: 100%;}
.ͼ8q6 {height: 100%; min-height: ; width: 100%;}
.ͼ8pp {height: 100%; min-height: ; width: 100%;}
.ͼ8p8 {height: 100%; min-height: ; width: 100%;}
.ͼ8or {height: 100%; min-height: ; width: 100%;}
.ͼ8oa {height: 100%; min-height: ; width: 100%;}
.ͼ8nt {height: 100%; min-height: ; width: 100%;}
.ͼ8nc {height: 100%; min-height: ; width: 100%;}
.ͼ8mv {height: 100%; min-height: ; width: 100%;}
.ͼ8me {height: 100%; min-height: ; width: 100%;}
.ͼ8lx {height: 100%; min-height: ; width: 100%;}
.ͼ8lg {height: 100%; min-height: ; width: 100%;}
.ͼ8kz {height: 100%; min-height: ; width: 100%;}
.ͼ8ki {height: 100%; min-height: ; width: 100%;}
.ͼ8k1 {height: 100%; min-height: ; width: 100%;}
.ͼ8jk {height: 100%; min-height: ; width: 100%;}
.ͼ8j3 {height: 100%; min-height: ; width: 100%;}
.ͼ8im {height: 100%; min-height: ; width: 100%;}
.ͼ8i5 {height: 100%; min-height: ; width: 100%;}
.ͼ8ho {height: 100%; min-height: ; width: 100%;}
.ͼ8h7 {height: 100%; min-height: ; width: 100%;}
.ͼ8gq {height: 100%; min-height: ; width: 100%;}
.ͼ8g9 {height: 100%; min-height: ; width: 100%;}
.ͼ8fs {height: 100%; min-height: ; width: 100%;}
.ͼ8fb {height: 100%; min-height: ; width: 100%;}
.ͼ8eu {height: 100%; min-height: ; width: 100%;}
.ͼ8ed {height: 100%; min-height: ; width: 100%;}
.ͼ8dw {height: 100%; min-height: ; width: 100%;}
.ͼ8df {height: 100%; min-height: ; width: 100%;}
.ͼ8cy {height: 100%; min-height: ; width: 100%;}
.ͼ8ch {height: 100%; min-height: ; width: 100%;}
.ͼ8c0 {height: 100%; min-height: ; width: 100%;}
.ͼ8bj {height: 100%; min-height: ; width: 100%;}
.ͼ8b2 {height: 100%; min-height: ; width: 100%;}
.ͼ8al {height: 100%; min-height: ; width: 100%;}
.ͼ8a4 {height: 100%; min-height: ; width: 100%;}
.ͼ89n {height: 100%; min-height: ; width: 100%;}
.ͼ896 {height: 100%; min-height: ; width: 100%;}
.ͼ88p {height: 100%; min-height: ; width: 100%;}
.ͼ888 {height: 100%; min-height: ; width: 100%;}
.ͼ87r {height: 100%; min-height: ; width: 100%;}
.ͼ87a {height: 100%; min-height: ; width: 100%;}
.ͼ86t {height: 100%; min-height: ; width: 100%;}
.ͼ86c {height: 100%; min-height: ; width: 100%;}
.ͼ85v {height: 100%; min-height: ; width: 100%;}
.ͼ85e {height: 100%; min-height: ; width: 100%;}
.ͼ84x {height: 100%; min-height: ; width: 100%;}
.ͼ84g {height: 100%; min-height: ; width: 100%;}
.ͼ83z {height: 100%; min-height: ; width: 100%;}
.ͼ83i {height: 100%; min-height: ; width: 100%;}
.ͼ831 {height: 100%; min-height: ; width: 100%;}
.ͼ82k {height: 100%; min-height: ; width: 100%;}
.ͼ823 {height: 100%; min-height: ; width: 100%;}
.ͼ81m {height: 100%; min-height: ; width: 100%;}
.ͼ815 {height: 100%; min-height: ; width: 100%;}
.ͼ80o {height: 100%; min-height: ; width: 100%;}
.ͼ807 {height: 100%; min-height: ; width: 100%;}
.ͼ7zq {height: 100%; min-height: ; width: 100%;}
.ͼ7z9 {height: 100%; min-height: ; width: 100%;}
.ͼ7ys {height: 100%; min-height: ; width: 100%;}
.ͼ7yb {height: 100%; min-height: ; width: 100%;}
.ͼ7xu {height: 100%; min-height: ; width: 100%;}
.ͼ7xd {height: 100%; min-height: ; width: 100%;}
.ͼ7ww {height: 100%; min-height: ; width: 100%;}
.ͼ7wf {height: 100%; min-height: ; width: 100%;}
.ͼ7vy {height: 100%; min-height: ; width: 100%;}
.ͼ7vh {height: 100%; min-height: ; width: 100%;}
.ͼ7v0 {height: 100%; min-height: ; width: 100%;}
.ͼ7uj {height: 100%; min-height: ; width: 100%;}
.ͼ7u2 {height: 100%; min-height: ; width: 100%;}
.ͼ7tl {height: 100%; min-height: ; width: 100%;}
.ͼ7t4 {height: 100%; min-height: ; width: 100%;}
.ͼ7sn {height: 100%; min-height: ; width: 100%;}
.ͼ7s6 {height: 100%; min-height: ; width: 100%;}
.ͼ7rp {height: 100%; min-height: ; width: 100%;}
.ͼ7r8 {height: 100%; min-height: ; width: 100%;}
.ͼ7qr {height: 100%; min-height: ; width: 100%;}
.ͼ7qa {height: 100%; min-height: ; width: 100%;}
.ͼ7pt {height: 100%; min-height: ; width: 100%;}
.ͼ7pc {height: 100%; min-height: ; width: 100%;}
.ͼ7ov {height: 100%; min-height: ; width: 100%;}
.ͼ7oe {height: 100%; min-height: ; width: 100%;}
.ͼ7nx {height: 100%; min-height: ; width: 100%;}
.ͼ7ng {height: 100%; min-height: ; width: 100%;}
.ͼ7mz {height: 100%; min-height: ; width: 100%;}
.ͼ7mi {height: 100%; min-height: ; width: 100%;}
.ͼ7m1 {height: 100%; min-height: ; width: 100%;}
.ͼ7lk {height: 100%; min-height: ; width: 100%;}
.ͼ7l3 {height: 100%; min-height: ; width: 100%;}
.ͼ7km {height: 100%; min-height: ; width: 100%;}
.ͼ7k5 {height: 100%; min-height: ; width: 100%;}
.ͼ7jo {height: 100%; min-height: ; width: 100%;}
.ͼ7j7 {height: 100%; min-height: ; width: 100%;}
.ͼ7iq {height: 100%; min-height: ; width: 100%;}
.ͼ7i9 {height: 100%; min-height: ; width: 100%;}
.ͼ7hs {height: 100%; min-height: ; width: 100%;}
.ͼ7hb {height: 100%; min-height: ; width: 100%;}
.ͼ7gu {height: 100%; min-height: ; width: 100%;}
.ͼ7gd {height: 100%; min-height: ; width: 100%;}
.ͼ7fw {height: 100%; min-height: ; width: 100%;}
.ͼ7ff {height: 100%; min-height: ; width: 100%;}
.ͼ6cr {color: var(--codeMirror-syntax-fgColor-keyword, var(--color-codemirror-syntax-keyword));}
.ͼ6cs {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ6ct {color: var(--codeMirror-matchingBracket-fgColor, var(--color-codemirror-matchingbracket-text));}
.ͼ6cu {color: var(--codeMirror-syntax-fgColor-string, var(--color-codemirror-syntax-string));}
.ͼ6cv {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ6cw {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ6cx {color: var(--codeMirror-syntax-fgColor-entity, var(--color-codemirror-syntax-entity));}
.ͼ6cy {color: var(--codeMirror-syntax-fgColor-variable, var(--color-codemirror-syntax-variable));}
.ͼ6cz {color: inherit;}
.ͼ6d0 {font-weight: bold; color: inherit !important;}
.ͼ6d1 {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ6d2 {text-decoration: underline;}
.ͼ6d3 {font-style: italic;}
.ͼ6d4 {font-weight: bold;}
.ͼ6d5 {text-decoration: line-through;}
.ͼ6cq {background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--codeMirror-fgColor, var(--color-codemirror-text)); cursor: text;}
.ͼ6cq .cm-gutters {background: var(--codeMirror-gutters-bgColor, var(--color-codemirror-gutters-bg)); border-right-width: 0;}
.ͼ6cq .cm-lineNumbers .cm-gutterElement {color: var(--codeMirror-lineNumber-fgColor, var(--color-codemirror-linenumber-text)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-gutter-fontSize, var(--codeMirror-content-fontSize, 12px)); line-height: 20px; padding: 0 16px 0 16px;}
.ͼ6cq .cm-content {caret-color: var(--codeMirror-cursor-fgColor, var(--color-codemirror-cursor)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-content-fontSize, 12px); background: var(--codeMirror-lines-bgColor, var(--color-codemirror-lines-bg)); line-height: 20px; padding-top: 8px;}
.ͼ6cq.cm-focused .cm-selectionBackground, .ͼ6cq .cm-selectionBackground, .ͼ6cq .cm-content ::selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ6cq.cm-focused {outline: none;}
.ͼ6cq.hide-help-until-focus.cm-focused .cm-panels-bottom {display: block;}
.ͼ6cq.hide-help-until-focus .cm-panels-bottom {display: none;}
.ͼ6cq.hide-help .cm-panels-top {display: none; position: absolute;}
.ͼ6cq .cm-content ::-moz-selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ6cq .cm-activeLine {background-color: var(--codeMirror-activeline-bgColor, var(--color-codemirror-activeline-bg));}
.ͼ6cq .cm-line {padding-left: 16px;}
.ͼ6cq .cm-help-panel {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 7px 10px; margin: 0; font-size: 13px; line-height: 16px; color: var(--fgColor-muted, var(--color-fg-muted)); cursor: default;}
.ͼ6cq .cm-panels-bottom {border-top: var(--borderWidth-thin, 1px) solid var(--borderColor-default, var(--color-border-default)); background: none;}
.js-upload-markdown-image .ͼ6cq .cm-panels-bottom {bottom: 30px !important;}
.ͼ6cq .cm-panel.cm-search {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 8px; font-size: 16px;}
.ͼ6cq .cm-panel.cm-search > button {border-radius: 6px; padding: 4px 8px; background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--button-default-fgColor-rest, var(--color-btn-text)); border: 1px solid var(--button-default-borderColor-rest, var(--color-btn-border)); text-transform: capitalize;}
.ͼ6cq .cm-panel.cm-search > label {color: var(--fgColor-default, var(--color-fg-default)); text-transform: capitalize; font-size: 12px;}
.ͼ6cq .cm-panel.cm-search > input {border-radius: 6px; padding: 4px 8px; background: var(--bgColor-default, var(--color-canvas-default)); color: var(--fgColor-default, var(--color-fg-default)); border: 1px solid var(--borderColor-default, var(--color-border-default)); font-size: 12px;}
.ͼ6cq .cm-panel.cm-search > button[name="close"] {padding: 4px;}
.ͼ6cq .cm-panels-top {border-bottom: var(--borderWidth-thin, 1px) solid var(--color-border-default); background: none;}
.ͼ6cq .cm-panel.cm-search input, .ͼ6cq .cm-panel.cm-search button, .ͼ6cq .cm-panel.cm-search label {margin-right: 8px; margin-bottom: 4px; margin-top: 4px; margin-left: 0;}
.ͼ6cq .cm-lintRange {cursor: help; background-image: none !important;}
.ͼ6cq .cm-placeholder {height: 1em; color: var(--fgColor-muted);}
.ͼ6cq.custom-tooltips .cm-tooltip {border: none !important; background-color: transparent !important;}
.ͼ6cq.custom-tooltips .cm-diagnostic {padding: 0; margin-left: 0 !important; border-left: none !important; white-space: unset;}
.ͼ7ey {height: 100%; min-height: ; width: 100%;}
.ͼ7eh {height: 100%; min-height: ; width: 100%;}
.ͼ7e0 {height: 100%; min-height: ; width: 100%;}
.ͼ7dj {height: 100%; min-height: ; width: 100%;}
.ͼ7d2 {height: 100%; min-height: ; width: 100%;}
.ͼ7cl {height: 100%; min-height: ; width: 100%;}
.ͼ7c4 {height: 100%; min-height: ; width: 100%;}
.ͼ7bn {height: 100%; min-height: ; width: 100%;}
.ͼ7b6 {height: 100%; min-height: ; width: 100%;}
.ͼ7ap {height: 100%; min-height: ; width: 100%;}
.ͼ7a8 {height: 100%; min-height: ; width: 100%;}
.ͼ79r {height: 100%; min-height: ; width: 100%;}
.ͼ79a {height: 100%; min-height: ; width: 100%;}
.ͼ78t {height: 100%; min-height: ; width: 100%;}
.ͼ78c {height: 100%; min-height: ; width: 100%;}
.ͼ77v {height: 100%; min-height: ; width: 100%;}
.ͼ77e {height: 100%; min-height: ; width: 100%;}
.ͼ76x {height: 100%; min-height: ; width: 100%;}
.ͼ76g {height: 100%; min-height: ; width: 100%;}
.ͼ75z {height: 100%; min-height: ; width: 100%;}
.ͼ75i {height: 100%; min-height: ; width: 100%;}
.ͼ751 {height: 100%; min-height: ; width: 100%;}
.ͼ74k {height: 100%; min-height: ; width: 100%;}
.ͼ743 {height: 100%; min-height: ; width: 100%;}
.ͼ73m {height: 100%; min-height: ; width: 100%;}
.ͼ735 {height: 100%; min-height: ; width: 100%;}
.ͼ72o {height: 100%; min-height: ; width: 100%;}
.ͼ727 {height: 100%; min-height: ; width: 100%;}
.ͼ71q {height: 100%; min-height: ; width: 100%;}
.ͼ719 {height: 100%; min-height: ; width: 100%;}
.ͼ70s {height: 100%; min-height: ; width: 100%;}
.ͼ70b {height: 100%; min-height: ; width: 100%;}
.ͼ6zu {height: 100%; min-height: ; width: 100%;}
.ͼ6zd {height: 100%; min-height: ; width: 100%;}
.ͼ6yw {height: 100%; min-height: ; width: 100%;}
.ͼ6yf {height: 100%; min-height: ; width: 100%;}
.ͼ6xy {height: 100%; min-height: ; width: 100%;}
.ͼ6xh {height: 100%; min-height: ; width: 100%;}
.ͼ6x0 {height: 100%; min-height: ; width: 100%;}
.ͼ6wj {height: 100%; min-height: ; width: 100%;}
.ͼ6w2 {height: 100%; min-height: ; width: 100%;}
.ͼ6vl {height: 100%; min-height: ; width: 100%;}
.ͼ6v4 {height: 100%; min-height: ; width: 100%;}
.ͼ6un {height: 100%; min-height: ; width: 100%;}
.ͼ6u6 {height: 100%; min-height: ; width: 100%;}
.ͼ6tp {height: 100%; min-height: ; width: 100%;}
.ͼ6t8 {height: 100%; min-height: ; width: 100%;}
.ͼ6sr {height: 100%; min-height: ; width: 100%;}
.ͼ6sa {height: 100%; min-height: ; width: 100%;}
.ͼ6rt {height: 100%; min-height: ; width: 100%;}
.ͼ6rc {height: 100%; min-height: ; width: 100%;}
.ͼ6qv {height: 100%; min-height: ; width: 100%;}
.ͼ6qe {height: 100%; min-height: ; width: 100%;}
.ͼ6px {height: 100%; min-height: ; width: 100%;}
.ͼ6pg {height: 100%; min-height: ; width: 100%;}
.ͼ6oz {height: 100%; min-height: ; width: 100%;}
.ͼ6oi {height: 100%; min-height: ; width: 100%;}
.ͼ6o1 {height: 100%; min-height: ; width: 100%;}
.ͼ6nk {height: 100%; min-height: ; width: 100%;}
.ͼ6n3 {height: 100%; min-height: ; width: 100%;}
.ͼ6mm {height: 100%; min-height: ; width: 100%;}
.ͼ6m5 {height: 100%; min-height: ; width: 100%;}
.ͼ6lo {height: 100%; min-height: ; width: 100%;}
.ͼ6l7 {height: 100%; min-height: ; width: 100%;}
.ͼ6kq {height: 100%; min-height: ; width: 100%;}
.ͼ6k9 {height: 100%; min-height: ; width: 100%;}
.ͼ6js {height: 100%; min-height: ; width: 100%;}
.ͼ6jb {height: 100%; min-height: ; width: 100%;}
.ͼ6iu {height: 100%; min-height: ; width: 100%;}
.ͼ6id {height: 100%; min-height: ; width: 100%;}
.ͼ6hw {height: 100%; min-height: ; width: 100%;}
.ͼ6hf {height: 100%; min-height: ; width: 100%;}
.ͼ6gy {height: 100%; min-height: ; width: 100%;}
.ͼ6gh {height: 100%; min-height: ; width: 100%;}
.ͼ6g0 {height: 100%; min-height: ; width: 100%;}
.ͼ6fj {height: 100%; min-height: ; width: 100%;}
.ͼ6f2 {height: 100%; min-height: ; width: 100%;}
.ͼ6el {height: 100%; min-height: ; width: 100%;}
.ͼ6e4 {height: 100%; min-height: ; width: 100%;}
.ͼ6dn {height: 100%; min-height: ; width: 100%;}
.ͼ6d6 {height: 100%; min-height: ; width: 100%;}
.ͼ6cp {height: 100%; min-height: ; width: 100%;}
.ͼ1hk {color: var(--codeMirror-syntax-fgColor-keyword, var(--color-codemirror-syntax-keyword));}
.ͼ1hl {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ1hm {color: var(--codeMirror-matchingBracket-fgColor, var(--color-codemirror-matchingbracket-text));}
.ͼ1hn {color: var(--codeMirror-syntax-fgColor-string, var(--color-codemirror-syntax-string));}
.ͼ1ho {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ1hp {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼ1hq {color: var(--codeMirror-syntax-fgColor-entity, var(--color-codemirror-syntax-entity));}
.ͼ1hr {color: var(--codeMirror-syntax-fgColor-variable, var(--color-codemirror-syntax-variable));}
.ͼ1hs {color: inherit;}
.ͼ1ht {font-weight: bold; color: inherit !important;}
.ͼ1hu {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ1hv {text-decoration: underline;}
.ͼ1hw {font-style: italic;}
.ͼ1hx {font-weight: bold;}
.ͼ1hy {text-decoration: line-through;}
.ͼ1hj {background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--codeMirror-fgColor, var(--color-codemirror-text)); cursor: text;}
.ͼ1hj .cm-gutters {background: var(--codeMirror-gutters-bgColor, var(--color-codemirror-gutters-bg)); border-right-width: 0;}
.ͼ1hj .cm-lineNumbers .cm-gutterElement {color: var(--codeMirror-lineNumber-fgColor, var(--color-codemirror-linenumber-text)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-gutter-fontSize, var(--codeMirror-content-fontSize, 12px)); line-height: 20px; padding: 0 16px 0 16px;}
.ͼ1hj .cm-content {caret-color: var(--codeMirror-cursor-fgColor, var(--color-codemirror-cursor)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-content-fontSize, 12px); background: var(--codeMirror-lines-bgColor, var(--color-codemirror-lines-bg)); line-height: 20px; padding-top: 8px;}
.ͼ1hj.cm-focused .cm-selectionBackground, .ͼ1hj .cm-selectionBackground, .ͼ1hj .cm-content ::selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ1hj.cm-focused {outline: none;}
.ͼ1hj.hide-help-until-focus.cm-focused .cm-panels-bottom {display: block;}
.ͼ1hj.hide-help-until-focus .cm-panels-bottom {display: none;}
.ͼ1hj.hide-help .cm-panels-top {display: none; position: absolute;}
.ͼ1hj .cm-content ::-moz-selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ1hj .cm-activeLine {background-color: var(--codeMirror-activeline-bgColor, var(--color-codemirror-activeline-bg));}
.ͼ1hj .cm-line {padding-left: 16px;}
.ͼ1hj .cm-help-panel {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 7px 10px; margin: 0; font-size: 13px; line-height: 16px; color: var(--fgColor-muted, var(--color-fg-muted)); cursor: default;}
.ͼ1hj .cm-panels-bottom {border-top: var(--borderWidth-thin, 1px) solid var(--borderColor-default, var(--color-border-default)); background: none;}
.js-upload-markdown-image .ͼ1hj .cm-panels-bottom {bottom: 30px !important;}
.ͼ1hj .cm-panel.cm-search {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 8px; font-size: 16px;}
.ͼ1hj .cm-panel.cm-search > button {border-radius: 6px; padding: 4px 8px; background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--button-default-fgColor-rest, var(--color-btn-text)); border: 1px solid var(--button-default-borderColor-rest, var(--color-btn-border)); text-transform: capitalize;}
.ͼ1hj .cm-panel.cm-search > label {color: var(--fgColor-default, var(--color-fg-default)); text-transform: capitalize; font-size: 12px;}
.ͼ1hj .cm-panel.cm-search > input {border-radius: 6px; padding: 4px 8px; background: var(--bgColor-default, var(--color-canvas-default)); color: var(--fgColor-default, var(--color-fg-default)); border: 1px solid var(--borderColor-default, var(--color-border-default)); font-size: 12px;}
.ͼ1hj .cm-panel.cm-search > button[name="close"] {padding: 4px;}
.ͼ1hj .cm-panels-top {border-bottom: var(--borderWidth-thin, 1px) solid var(--color-border-default); background: none;}
.ͼ1hj .cm-panel.cm-search input, .ͼ1hj .cm-panel.cm-search button, .ͼ1hj .cm-panel.cm-search label {margin-right: 8px; margin-bottom: 4px; margin-top: 4px; margin-left: 0;}
.ͼ1hj .cm-lintRange {cursor: help; background-image: none !important;}
.ͼ1hj .cm-placeholder {height: 1em; color: var(--fgColor-muted);}
.ͼ1hj.custom-tooltips .cm-tooltip {border: none !important; background-color: transparent !important;}
.ͼ1hj.custom-tooltips .cm-diagnostic {padding: 0; margin-left: 0 !important; border-left: none !important; white-space: unset;}
.ͼ6c8 {height: 100%; min-height: ; width: 100%;}
.ͼ6br {height: 100%; min-height: ; width: 100%;}
.ͼ6ba {height: 100%; min-height: ; width: 100%;}
.ͼ6at {height: 100%; min-height: ; width: 100%;}
.ͼ6ac {height: 100%; min-height: ; width: 100%;}
.ͼ69v {height: 100%; min-height: ; width: 100%;}
.ͼ69e {height: 100%; min-height: ; width: 100%;}
.ͼ68x {height: 100%; min-height: ; width: 100%;}
.ͼ68g {height: 100%; min-height: ; width: 100%;}
.ͼ67z {height: 100%; min-height: ; width: 100%;}
.ͼ67i {height: 100%; min-height: ; width: 100%;}
.ͼ671 {height: 100%; min-height: ; width: 100%;}
.ͼ66k {height: 100%; min-height: ; width: 100%;}
.ͼ663 {height: 100%; min-height: ; width: 100%;}
.ͼ65m {height: 100%; min-height: ; width: 100%;}
.ͼ655 {height: 100%; min-height: ; width: 100%;}
.ͼ64o {height: 100%; min-height: ; width: 100%;}
.ͼ647 {height: 100%; min-height: ; width: 100%;}
.ͼ63q {height: 100%; min-height: ; width: 100%;}
.ͼ639 {height: 100%; min-height: ; width: 100%;}
.ͼ62s {height: 100%; min-height: ; width: 100%;}
.ͼ62b {height: 100%; min-height: ; width: 100%;}
.ͼ61u {height: 100%; min-height: ; width: 100%;}
.ͼ61d {height: 100%; min-height: ; width: 100%;}
.ͼ60w {height: 100%; min-height: ; width: 100%;}
.ͼ60f {height: 100%; min-height: ; width: 100%;}
.ͼ5zy {height: 100%; min-height: ; width: 100%;}
.ͼ5zh {height: 100%; min-height: ; width: 100%;}
.ͼ5z0 {height: 100%; min-height: ; width: 100%;}
.ͼ5yj {height: 100%; min-height: ; width: 100%;}
.ͼ5y2 {height: 100%; min-height: ; width: 100%;}
.ͼ5xl {height: 100%; min-height: ; width: 100%;}
.ͼ5x4 {height: 100%; min-height: ; width: 100%;}
.ͼ5wn {height: 100%; min-height: ; width: 100%;}
.ͼ5w6 {height: 100%; min-height: ; width: 100%;}
.ͼ5vp {height: 100%; min-height: ; width: 100%;}
.ͼ5v8 {height: 100%; min-height: ; width: 100%;}
.ͼ5ur {height: 100%; min-height: ; width: 100%;}
.ͼ5ua {height: 100%; min-height: ; width: 100%;}
.ͼ5tt {height: 100%; min-height: ; width: 100%;}
.ͼ5tc {height: 100%; min-height: ; width: 100%;}
.ͼ5sv {height: 100%; min-height: ; width: 100%;}
.ͼ5se {height: 100%; min-height: ; width: 100%;}
.ͼ5rx {height: 100%; min-height: ; width: 100%;}
.ͼ5rg {height: 100%; min-height: ; width: 100%;}
.ͼ5qz {height: 100%; min-height: ; width: 100%;}
.ͼ5qi {height: 100%; min-height: ; width: 100%;}
.ͼ5q1 {height: 100%; min-height: ; width: 100%;}
.ͼ5pk {height: 100%; min-height: ; width: 100%;}
.ͼ5p3 {height: 100%; min-height: ; width: 100%;}
.ͼ5om {height: 100%; min-height: ; width: 100%;}
.ͼ5o5 {height: 100%; min-height: ; width: 100%;}
.ͼ5no {height: 100%; min-height: ; width: 100%;}
.ͼ5n7 {height: 100%; min-height: ; width: 100%;}
.ͼ5mq {height: 100%; min-height: ; width: 100%;}
.ͼ5m9 {height: 100%; min-height: ; width: 100%;}
.ͼ5ls {height: 100%; min-height: ; width: 100%;}
.ͼ5lb {height: 100%; min-height: ; width: 100%;}
.ͼ5ku {height: 100%; min-height: ; width: 100%;}
.ͼ5kd {height: 100%; min-height: ; width: 100%;}
.ͼ5jw {height: 100%; min-height: ; width: 100%;}
.ͼ5jf {height: 100%; min-height: ; width: 100%;}
.ͼ5iy {height: 100%; min-height: ; width: 100%;}
.ͼ5ih {height: 100%; min-height: ; width: 100%;}
.ͼ5i0 {height: 100%; min-height: ; width: 100%;}
.ͼ5hj {height: 100%; min-height: ; width: 100%;}
.ͼ5h2 {height: 100%; min-height: ; width: 100%;}
.ͼ5gl {height: 100%; min-height: ; width: 100%;}
.ͼ5g4 {height: 100%; min-height: ; width: 100%;}
.ͼ5fn {height: 100%; min-height: ; width: 100%;}
.ͼ5f6 {height: 100%; min-height: ; width: 100%;}
.ͼ5ep {height: 100%; min-height: ; width: 100%;}
.ͼ5e8 {height: 100%; min-height: ; width: 100%;}
.ͼ5dr {height: 100%; min-height: ; width: 100%;}
.ͼ5da {height: 100%; min-height: ; width: 100%;}
.ͼ5ct {height: 100%; min-height: ; width: 100%;}
.ͼ5cc {height: 100%; min-height: ; width: 100%;}
.ͼ5bv {height: 100%; min-height: ; width: 100%;}
.ͼ5be {height: 100%; min-height: ; width: 100%;}
.ͼ5ax {height: 100%; min-height: ; width: 100%;}
.ͼ5ag {height: 100%; min-height: ; width: 100%;}
.ͼ59z {height: 100%; min-height: ; width: 100%;}
.ͼ59i {height: 100%; min-height: ; width: 100%;}
.ͼ591 {height: 100%; min-height: ; width: 100%;}
.ͼ58k {height: 100%; min-height: ; width: 100%;}
.ͼ583 {height: 100%; min-height: ; width: 100%;}
.ͼ57m {height: 100%; min-height: ; width: 100%;}
.ͼ575 {height: 100%; min-height: ; width: 100%;}
.ͼ56o {height: 100%; min-height: ; width: 100%;}
.ͼ567 {height: 100%; min-height: ; width: 100%;}
.ͼ55q {height: 100%; min-height: ; width: 100%;}
.ͼ559 {height: 100%; min-height: ; width: 100%;}
.ͼ54s {height: 100%; min-height: ; width: 100%;}
.ͼ54b {height: 100%; min-height: ; width: 100%;}
.ͼ53u {height: 100%; min-height: ; width: 100%;}
.ͼ53d {height: 100%; min-height: ; width: 100%;}
.ͼ52w {height: 100%; min-height: ; width: 100%;}
.ͼ52f {height: 100%; min-height: ; width: 100%;}
.ͼ51y {height: 100%; min-height: ; width: 100%;}
.ͼ51h {height: 100%; min-height: ; width: 100%;}
.ͼ510 {height: 100%; min-height: ; width: 100%;}
.ͼ50j {height: 100%; min-height: ; width: 100%;}
.ͼ502 {height: 100%; min-height: ; width: 100%;}
.ͼ4zl {height: 100%; min-height: ; width: 100%;}
.ͼ4z4 {height: 100%; min-height: ; width: 100%;}
.ͼ4yn {height: 100%; min-height: ; width: 100%;}
.ͼ4y6 {height: 100%; min-height: ; width: 100%;}
.ͼ4xp {height: 100%; min-height: ; width: 100%;}
.ͼ4x8 {height: 100%; min-height: ; width: 100%;}
.ͼ4wr {height: 100%; min-height: ; width: 100%;}
.ͼ4wa {height: 100%; min-height: ; width: 100%;}
.ͼ4vt {height: 100%; min-height: ; width: 100%;}
.ͼ4vc {height: 100%; min-height: ; width: 100%;}
.ͼ4uv {height: 100%; min-height: ; width: 100%;}
.ͼ4ue {height: 100%; min-height: ; width: 100%;}
.ͼ4tx {height: 100%; min-height: ; width: 100%;}
.ͼ4tg {height: 100%; min-height: ; width: 100%;}
.ͼ4sz {height: 100%; min-height: ; width: 100%;}
.ͼ4si {height: 100%; min-height: ; width: 100%;}
.ͼ4s1 {height: 100%; min-height: ; width: 100%;}
.ͼ4rk {height: 100%; min-height: ; width: 100%;}
.ͼ4r3 {height: 100%; min-height: ; width: 100%;}
.ͼ4qm {height: 100%; min-height: ; width: 100%;}
.ͼ4q5 {height: 100%; min-height: ; width: 100%;}
.ͼ4po {height: 100%; min-height: ; width: 100%;}
.ͼ4p7 {height: 100%; min-height: ; width: 100%;}
.ͼ4oq {height: 100%; min-height: ; width: 100%;}
.ͼ4o9 {height: 100%; min-height: ; width: 100%;}
.ͼ4ns {height: 100%; min-height: ; width: 100%;}
.ͼ4nb {height: 100%; min-height: ; width: 100%;}
.ͼ4mu {height: 100%; min-height: ; width: 100%;}
.ͼ4md {height: 100%; min-height: ; width: 100%;}
.ͼ4lw {height: 100%; min-height: ; width: 100%;}
.ͼ4lf {height: 100%; min-height: ; width: 100%;}
.ͼ4ky {height: 100%; min-height: ; width: 100%;}
.ͼ4kh {height: 100%; min-height: ; width: 100%;}
.ͼ4k0 {height: 100%; min-height: ; width: 100%;}
.ͼ4jj {height: 100%; min-height: ; width: 100%;}
.ͼ4j2 {height: 100%; min-height: ; width: 100%;}
.ͼ4il {height: 100%; min-height: ; width: 100%;}
.ͼ4i4 {height: 100%; min-height: ; width: 100%;}
.ͼ4hn {height: 100%; min-height: ; width: 100%;}
.ͼ4h6 {height: 100%; min-height: ; width: 100%;}
.ͼ4gp {height: 100%; min-height: ; width: 100%;}
.ͼ4g8 {height: 100%; min-height: ; width: 100%;}
.ͼ4fr {height: 100%; min-height: ; width: 100%;}
.ͼ4fa {height: 100%; min-height: ; width: 100%;}
.ͼ4et {height: 100%; min-height: ; width: 100%;}
.ͼ4ec {height: 100%; min-height: ; width: 100%;}
.ͼ4dv {height: 100%; min-height: ; width: 100%;}
.ͼ4de {height: 100%; min-height: ; width: 100%;}
.ͼ4cx {height: 100%; min-height: ; width: 100%;}
.ͼ4cg {height: 100%; min-height: ; width: 100%;}
.ͼ4bz {height: 100%; min-height: ; width: 100%;}
.ͼ4bi {height: 100%; min-height: ; width: 100%;}
.ͼ4b1 {height: 100%; min-height: ; width: 100%;}
.ͼ4ak {height: 100%; min-height: ; width: 100%;}
.ͼ4a3 {height: 100%; min-height: ; width: 100%;}
.ͼ49m {height: 100%; min-height: ; width: 100%;}
.ͼ495 {height: 100%; min-height: ; width: 100%;}
.ͼ48o {height: 100%; min-height: ; width: 100%;}
.ͼ487 {height: 100%; min-height: ; width: 100%;}
.ͼ47q {height: 100%; min-height: ; width: 100%;}
.ͼ479 {height: 100%; min-height: ; width: 100%;}
.ͼ46s {height: 100%; min-height: ; width: 100%;}
.ͼ46b {height: 100%; min-height: ; width: 100%;}
.ͼ45u {height: 100%; min-height: ; width: 100%;}
.ͼ45d {height: 100%; min-height: ; width: 100%;}
.ͼ44w {height: 100%; min-height: ; width: 100%;}
.ͼ44f {height: 100%; min-height: ; width: 100%;}
.ͼ43y {height: 100%; min-height: ; width: 100%;}
.ͼ43h {height: 100%; min-height: ; width: 100%;}
.ͼ430 {height: 100%; min-height: ; width: 100%;}
.ͼ42j {height: 100%; min-height: ; width: 100%;}
.ͼ422 {height: 100%; min-height: ; width: 100%;}
.ͼ41l {height: 100%; min-height: ; width: 100%;}
.ͼ414 {height: 100%; min-height: ; width: 100%;}
.ͼ40n {height: 100%; min-height: ; width: 100%;}
.ͼ406 {height: 100%; min-height: ; width: 100%;}
.ͼ3zp {height: 100%; min-height: ; width: 100%;}
.ͼ3z8 {height: 100%; min-height: ; width: 100%;}
.ͼ3yr {height: 100%; min-height: ; width: 100%;}
.ͼ3ya {height: 100%; min-height: ; width: 100%;}
.ͼ3xt {height: 100%; min-height: ; width: 100%;}
.ͼ3xc {height: 100%; min-height: ; width: 100%;}
.ͼ3wv {height: 100%; min-height: ; width: 100%;}
.ͼ3we {height: 100%; min-height: ; width: 100%;}
.ͼ3vx {height: 100%; min-height: ; width: 100%;}
.ͼ3vg {height: 100%; min-height: ; width: 100%;}
.ͼ3uz {height: 100%; min-height: ; width: 100%;}
.ͼ3ui {height: 100%; min-height: ; width: 100%;}
.ͼ3u1 {height: 100%; min-height: ; width: 100%;}
.ͼ3tk {height: 100%; min-height: ; width: 100%;}
.ͼ3t3 {height: 100%; min-height: ; width: 100%;}
.ͼ3sm {height: 100%; min-height: ; width: 100%;}
.ͼ3s5 {height: 100%; min-height: ; width: 100%;}
.ͼ3ro {height: 100%; min-height: ; width: 100%;}
.ͼ3r7 {height: 100%; min-height: ; width: 100%;}
.ͼ3qq {height: 100%; min-height: ; width: 100%;}
.ͼ3q9 {height: 100%; min-height: ; width: 100%;}
.ͼ3ps {height: 100%; min-height: ; width: 100%;}
.ͼ3pb {height: 100%; min-height: ; width: 100%;}
.ͼ3ou {height: 100%; min-height: ; width: 100%;}
.ͼ3od {height: 100%; min-height: ; width: 100%;}
.ͼ3nw {height: 100%; min-height: ; width: 100%;}
.ͼ3nf {height: 100%; min-height: ; width: 100%;}
.ͼ3my {height: 100%; min-height: ; width: 100%;}
.ͼ3mh {height: 100%; min-height: ; width: 100%;}
.ͼ3m0 {height: 100%; min-height: ; width: 100%;}
.ͼ3lj {height: 100%; min-height: ; width: 100%;}
.ͼ3l2 {height: 100%; min-height: ; width: 100%;}
.ͼ3kl {height: 100%; min-height: ; width: 100%;}
.ͼ3k4 {height: 100%; min-height: ; width: 100%;}
.ͼ3jn {height: 100%; min-height: ; width: 100%;}
.ͼ3j6 {height: 100%; min-height: ; width: 100%;}
.ͼ3ip {height: 100%; min-height: ; width: 100%;}
.ͼ3i8 {height: 100%; min-height: ; width: 100%;}
.ͼ3hr {height: 100%; min-height: ; width: 100%;}
.ͼ3ha {height: 100%; min-height: ; width: 100%;}
.ͼ3gt {height: 100%; min-height: ; width: 100%;}
.ͼ3gc {height: 100%; min-height: ; width: 100%;}
.ͼ3fv {height: 100%; min-height: ; width: 100%;}
.ͼ3fe {height: 100%; min-height: ; width: 100%;}
.ͼ3ex {height: 100%; min-height: ; width: 100%;}
.ͼ3eg {height: 100%; min-height: ; width: 100%;}
.ͼ3dz {height: 100%; min-height: ; width: 100%;}
.ͼ3di {height: 100%; min-height: ; width: 100%;}
.ͼ3d1 {height: 100%; min-height: ; width: 100%;}
.ͼ3ck {height: 100%; min-height: ; width: 100%;}
.ͼ3c3 {height: 100%; min-height: ; width: 100%;}
.ͼ3bm {height: 100%; min-height: ; width: 100%;}
.ͼ3b5 {height: 100%; min-height: ; width: 100%;}
.ͼ3ao {height: 100%; min-height: ; width: 100%;}
.ͼ3a7 {height: 100%; min-height: ; width: 100%;}
.ͼ39q {height: 100%; min-height: ; width: 100%;}
.ͼ399 {height: 100%; min-height: ; width: 100%;}
.ͼ38s {height: 100%; min-height: ; width: 100%;}
.ͼ38b {height: 100%; min-height: ; width: 100%;}
.ͼ37u {height: 100%; min-height: ; width: 100%;}
.ͼ37d {height: 100%; min-height: ; width: 100%;}
.ͼ36w {height: 100%; min-height: ; width: 100%;}
.ͼ36f {height: 100%; min-height: ; width: 100%;}
.ͼ35y {height: 100%; min-height: ; width: 100%;}
.ͼ35h {height: 100%; min-height: ; width: 100%;}
.ͼ350 {height: 100%; min-height: ; width: 100%;}
.ͼ34j {height: 100%; min-height: ; width: 100%;}
.ͼ342 {height: 100%; min-height: ; width: 100%;}
.ͼ33l {height: 100%; min-height: ; width: 100%;}
.ͼ334 {height: 100%; min-height: ; width: 100%;}
.ͼ32n {height: 100%; min-height: ; width: 100%;}
.ͼ326 {height: 100%; min-height: ; width: 100%;}
.ͼ31p {height: 100%; min-height: ; width: 100%;}
.ͼ318 {height: 100%; min-height: ; width: 100%;}
.ͼ30r {height: 100%; min-height: ; width: 100%;}
.ͼ30a {height: 100%; min-height: ; width: 100%;}
.ͼ2zt {height: 100%; min-height: ; width: 100%;}
.ͼ2zc {height: 100%; min-height: ; width: 100%;}
.ͼ2yv {height: 100%; min-height: ; width: 100%;}
.ͼ2ye {height: 100%; min-height: ; width: 100%;}
.ͼ2xx {height: 100%; min-height: ; width: 100%;}
.ͼ2xg {height: 100%; min-height: ; width: 100%;}
.ͼ2wz {height: 100%; min-height: ; width: 100%;}
.ͼ2wi {height: 100%; min-height: ; width: 100%;}
.ͼ2w1 {height: 100%; min-height: ; width: 100%;}
.ͼ2vk {height: 100%; min-height: ; width: 100%;}
.ͼ2v3 {height: 100%; min-height: ; width: 100%;}
.ͼ2um {height: 100%; min-height: ; width: 100%;}
.ͼ2u5 {height: 100%; min-height: ; width: 100%;}
.ͼ2to {height: 100%; min-height: ; width: 100%;}
.ͼ2t7 {height: 100%; min-height: ; width: 100%;}
.ͼ2sq {height: 100%; min-height: ; width: 100%;}
.ͼ2s9 {height: 100%; min-height: ; width: 100%;}
.ͼ2rs {height: 100%; min-height: ; width: 100%;}
.ͼ2rb {height: 100%; min-height: ; width: 100%;}
.ͼ2qu {height: 100%; min-height: ; width: 100%;}
.ͼ2qd {height: 100%; min-height: ; width: 100%;}
.ͼ2pw {height: 100%; min-height: ; width: 100%;}
.ͼ2pf {height: 100%; min-height: ; width: 100%;}
.ͼ2oy {height: 100%; min-height: ; width: 100%;}
.ͼ2oh {height: 100%; min-height: ; width: 100%;}
.ͼ2o0 {height: 100%; min-height: ; width: 100%;}
.ͼ2nj {height: 100%; min-height: ; width: 100%;}
.ͼ2n2 {height: 100%; min-height: ; width: 100%;}
.ͼ2ml {height: 100%; min-height: ; width: 100%;}
.ͼ2m4 {height: 100%; min-height: ; width: 100%;}
.ͼ2ln {height: 100%; min-height: ; width: 100%;}
.ͼ2l6 {height: 100%; min-height: ; width: 100%;}
.ͼ2kp {height: 100%; min-height: ; width: 100%;}
.ͼ2k8 {height: 100%; min-height: ; width: 100%;}
.ͼ2jr {height: 100%; min-height: ; width: 100%;}
.ͼ2ja {height: 100%; min-height: ; width: 100%;}
.ͼ2it {height: 100%; min-height: ; width: 100%;}
.ͼ2ic {height: 100%; min-height: ; width: 100%;}
.ͼ2hv {height: 100%; min-height: ; width: 100%;}
.ͼ2he {height: 100%; min-height: ; width: 100%;}
.ͼ2gx {height: 100%; min-height: ; width: 100%;}
.ͼ2gg {height: 100%; min-height: ; width: 100%;}
.ͼ2fz {height: 100%; min-height: ; width: 100%;}
.ͼ2fi {height: 100%; min-height: ; width: 100%;}
.ͼ2f1 {height: 100%; min-height: ; width: 100%;}
.ͼ2ek {height: 100%; min-height: ; width: 100%;}
.ͼ2e3 {height: 100%; min-height: ; width: 100%;}
.ͼ2dm {height: 100%; min-height: ; width: 100%;}
.ͼ2d5 {height: 100%; min-height: ; width: 100%;}
.ͼ2co {height: 100%; min-height: ; width: 100%;}
.ͼ2c7 {height: 100%; min-height: ; width: 100%;}
.ͼ2bq {height: 100%; min-height: ; width: 100%;}
.ͼ2b9 {height: 100%; min-height: ; width: 100%;}
.ͼ2as {height: 100%; min-height: ; width: 100%;}
.ͼ2ab {height: 100%; min-height: ; width: 100%;}
.ͼ29u {height: 100%; min-height: ; width: 100%;}
.ͼ29d {height: 100%; min-height: ; width: 100%;}
.ͼ28w {height: 100%; min-height: ; width: 100%;}
.ͼ28f {height: 100%; min-height: ; width: 100%;}
.ͼ27y {height: 100%; min-height: ; width: 100%;}
.ͼ27h {height: 100%; min-height: ; width: 100%;}
.ͼ270 {height: 100%; min-height: ; width: 100%;}
.ͼ26j {height: 100%; min-height: ; width: 100%;}
.ͼ262 {height: 100%; min-height: ; width: 100%;}
.ͼ25l {height: 100%; min-height: ; width: 100%;}
.ͼ254 {height: 100%; min-height: ; width: 100%;}
.ͼ24n {height: 100%; min-height: ; width: 100%;}
.ͼ246 {height: 100%; min-height: ; width: 100%;}
.ͼ23p {height: 100%; min-height: ; width: 100%;}
.ͼ238 {height: 100%; min-height: ; width: 100%;}
.ͼ22r {height: 100%; min-height: ; width: 100%;}
.ͼ22a {height: 100%; min-height: ; width: 100%;}
.ͼ21t {height: 100%; min-height: ; width: 100%;}
.ͼ21c {height: 100%; min-height: ; width: 100%;}
.ͼ20v {height: 100%; min-height: ; width: 100%;}
.ͼ20e {height: 100%; min-height: ; width: 100%;}
.ͼ1zx {height: 100%; min-height: ; width: 100%;}
.ͼ1zg {height: 100%; min-height: ; width: 100%;}
.ͼ1yz {height: 100%; min-height: ; width: 100%;}
.ͼ1yi {height: 100%; min-height: ; width: 100%;}
.ͼ1y1 {height: 100%; min-height: ; width: 100%;}
.ͼ1xk {height: 100%; min-height: ; width: 100%;}
.ͼ1x3 {height: 100%; min-height: ; width: 100%;}
.ͼ1wm {height: 100%; min-height: ; width: 100%;}
.ͼ1w5 {height: 100%; min-height: ; width: 100%;}
.ͼ1vo {height: 100%; min-height: ; width: 100%;}
.ͼ1v7 {height: 100%; min-height: ; width: 100%;}
.ͼ1uq {height: 100%; min-height: ; width: 100%;}
.ͼ1u9 {height: 100%; min-height: ; width: 100%;}
.ͼ1ts {height: 100%; min-height: ; width: 100%;}
.ͼ1tb {height: 100%; min-height: ; width: 100%;}
.ͼ1su {height: 100%; min-height: ; width: 100%;}
.ͼ1sd {height: 100%; min-height: ; width: 100%;}
.ͼ1rw {height: 100%; min-height: ; width: 100%;}
.ͼ1rf {height: 100%; min-height: ; width: 100%;}
.ͼ1qy {height: 100%; min-height: ; width: 100%;}
.ͼ1qh {height: 100%; min-height: ; width: 100%;}
.ͼ1q0 {height: 100%; min-height: ; width: 100%;}
.ͼ1pj {height: 100%; min-height: ; width: 100%;}
.ͼ1p2 {height: 100%; min-height: ; width: 100%;}
.ͼ1ol {height: 100%; min-height: ; width: 100%;}
.ͼ1o4 {height: 100%; min-height: ; width: 100%;}
.ͼ1nn {height: 100%; min-height: ; width: 100%;}
.ͼ1n6 {height: 100%; min-height: ; width: 100%;}
.ͼ1mp {height: 100%; min-height: ; width: 100%;}
.ͼ1m8 {height: 100%; min-height: ; width: 100%;}
.ͼ1lr {height: 100%; min-height: ; width: 100%;}
.ͼ1la {height: 100%; min-height: ; width: 100%;}
.ͼ1kt {height: 100%; min-height: ; width: 100%;}
.ͼ1kc {height: 100%; min-height: ; width: 100%;}
.ͼ1jv {height: 100%; min-height: ; width: 100%;}
.ͼ1je {height: 100%; min-height: ; width: 100%;}
.ͼ1ix {height: 100%; min-height: ; width: 100%;}
.ͼ1ig {height: 100%; min-height: ; width: 100%;}
.ͼ1hz {height: 100%; min-height: ; width: 100%;}
.ͼ1hi {height: 100%; min-height: ; width: 100%;}
.ͼuf {color: var(--codeMirror-syntax-fgColor-keyword, var(--color-codemirror-syntax-keyword));}
.ͼug {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼuh {color: var(--codeMirror-matchingBracket-fgColor, var(--color-codemirror-matchingbracket-text));}
.ͼui {color: var(--codeMirror-syntax-fgColor-string, var(--color-codemirror-syntax-string));}
.ͼuj {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼuk {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼul {color: var(--codeMirror-syntax-fgColor-entity, var(--color-codemirror-syntax-entity));}
.ͼum {color: var(--codeMirror-syntax-fgColor-variable, var(--color-codemirror-syntax-variable));}
.ͼun {color: inherit;}
.ͼuo {font-weight: bold; color: inherit !important;}
.ͼup {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼuq {text-decoration: underline;}
.ͼur {font-style: italic;}
.ͼus {font-weight: bold;}
.ͼut {text-decoration: line-through;}
.ͼue {background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--codeMirror-fgColor, var(--color-codemirror-text)); cursor: text;}
.ͼue .cm-gutters {background: var(--codeMirror-gutters-bgColor, var(--color-codemirror-gutters-bg)); border-right-width: 0;}
.ͼue .cm-lineNumbers .cm-gutterElement {color: var(--codeMirror-lineNumber-fgColor, var(--color-codemirror-linenumber-text)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-gutter-fontSize, var(--codeMirror-content-fontSize, 12px)); line-height: 20px; padding: 0 16px 0 16px;}
.ͼue .cm-content {caret-color: var(--codeMirror-cursor-fgColor, var(--color-codemirror-cursor)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-content-fontSize, 12px); background: var(--codeMirror-lines-bgColor, var(--color-codemirror-lines-bg)); line-height: 20px; padding-top: 8px;}
.ͼue.cm-focused .cm-selectionBackground, .ͼue .cm-selectionBackground, .ͼue .cm-content ::selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼue.cm-focused {outline: none;}
.ͼue.hide-help-until-focus.cm-focused .cm-panels-bottom {display: block;}
.ͼue.hide-help-until-focus .cm-panels-bottom {display: none;}
.ͼue.hide-help .cm-panels-top {display: none; position: absolute;}
.ͼue .cm-content ::-moz-selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼue .cm-activeLine {background-color: var(--codeMirror-activeline-bgColor, var(--color-codemirror-activeline-bg));}
.ͼue .cm-line {padding-left: 16px;}
.ͼue .cm-help-panel {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 7px 10px; margin: 0; font-size: 13px; line-height: 16px; color: var(--fgColor-muted, var(--color-fg-muted)); cursor: default;}
.ͼue .cm-panels-bottom {border-top: var(--borderWidth-thin, 1px) solid var(--borderColor-default, var(--color-border-default)); background: none;}
.js-upload-markdown-image .ͼue .cm-panels-bottom {bottom: 30px !important;}
.ͼue .cm-panel.cm-search {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 8px; font-size: 16px;}
.ͼue .cm-panel.cm-search > button {border-radius: 6px; padding: 4px 8px; background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--button-default-fgColor-rest, var(--color-btn-text)); border: 1px solid var(--button-default-borderColor-rest, var(--color-btn-border)); text-transform: capitalize;}
.ͼue .cm-panel.cm-search > label {color: var(--fgColor-default, var(--color-fg-default)); text-transform: capitalize; font-size: 12px;}
.ͼue .cm-panel.cm-search > input {border-radius: 6px; padding: 4px 8px; background: var(--bgColor-default, var(--color-canvas-default)); color: var(--fgColor-default, var(--color-fg-default)); border: 1px solid var(--borderColor-default, var(--color-border-default)); font-size: 12px;}
.ͼue .cm-panel.cm-search > button[name="close"] {padding: 4px;}
.ͼue .cm-panels-top {border-bottom: var(--borderWidth-thin, 1px) solid var(--color-border-default); background: none;}
.ͼue .cm-panel.cm-search input, .ͼue .cm-panel.cm-search button, .ͼue .cm-panel.cm-search label {margin-right: 8px; margin-bottom: 4px; margin-top: 4px; margin-left: 0;}
.ͼue .cm-lintRange {cursor: help; background-image: none !important;}
.ͼue .cm-placeholder {height: 1em; color: var(--fgColor-muted);}
.ͼue.custom-tooltips .cm-tooltip {border: none !important; background-color: transparent !important;}
.ͼue.custom-tooltips .cm-diagnostic {padding: 0; margin-left: 0 !important; border-left: none !important; white-space: unset;}
.ͼ1h1 {height: 100%; min-height: ; width: 100%;}
.ͼ1gk {height: 100%; min-height: ; width: 100%;}
.ͼ1g3 {height: 100%; min-height: ; width: 100%;}
.ͼ1fm {height: 100%; min-height: ; width: 100%;}
.ͼ1f5 {height: 100%; min-height: ; width: 100%;}
.ͼ1eo {height: 100%; min-height: ; width: 100%;}
.ͼ1e7 {height: 100%; min-height: ; width: 100%;}
.ͼ1dq {height: 100%; min-height: ; width: 100%;}
.ͼ1d9 {height: 100%; min-height: ; width: 100%;}
.ͼ1cs {height: 100%; min-height: ; width: 100%;}
.ͼ1cb {height: 100%; min-height: ; width: 100%;}
.ͼ1bu {height: 100%; min-height: ; width: 100%;}
.ͼ1bd {height: 100%; min-height: ; width: 100%;}
.ͼ1aw {height: 100%; min-height: ; width: 100%;}
.ͼ1af {height: 100%; min-height: ; width: 100%;}
.ͼ19y {height: 100%; min-height: ; width: 100%;}
.ͼ19h {height: 100%; min-height: ; width: 100%;}
.ͼ190 {height: 100%; min-height: ; width: 100%;}
.ͼ18j {height: 100%; min-height: ; width: 100%;}
.ͼ182 {height: 100%; min-height: ; width: 100%;}
.ͼ17l {height: 100%; min-height: ; width: 100%;}
.ͼ174 {height: 100%; min-height: ; width: 100%;}
.ͼ16n {height: 100%; min-height: ; width: 100%;}
.ͼ166 {height: 100%; min-height: ; width: 100%;}
.ͼ15p {height: 100%; min-height: ; width: 100%;}
.ͼ158 {height: 100%; min-height: ; width: 100%;}
.ͼ14r {height: 100%; min-height: ; width: 100%;}
.ͼ14a {height: 100%; min-height: ; width: 100%;}
.ͼ13t {height: 100%; min-height: ; width: 100%;}
.ͼ13c {height: 100%; min-height: ; width: 100%;}
.ͼ12v {height: 100%; min-height: ; width: 100%;}
.ͼ12e {height: 100%; min-height: ; width: 100%;}
.ͼ11x {height: 100%; min-height: ; width: 100%;}
.ͼ11g {height: 100%; min-height: ; width: 100%;}
.ͼ10z {height: 100%; min-height: ; width: 100%;}
.ͼ10i {height: 100%; min-height: ; width: 100%;}
.ͼ101 {height: 100%; min-height: ; width: 100%;}
.ͼzk {height: 100%; min-height: ; width: 100%;}
.ͼz3 {height: 100%; min-height: ; width: 100%;}
.ͼym {height: 100%; min-height: ; width: 100%;}
.ͼy5 {height: 100%; min-height: ; width: 100%;}
.ͼxo {height: 100%; min-height: ; width: 100%;}
.ͼx7 {height: 100%; min-height: ; width: 100%;}
.ͼwq {height: 100%; min-height: ; width: 100%;}
.ͼw9 {height: 100%; min-height: ; width: 100%;}
.ͼvs {height: 100%; min-height: ; width: 100%;}
.ͼvb {height: 100%; min-height: ; width: 100%;}
.ͼuu {height: 100%; min-height: ; width: 100%;}
.ͼud {height: 100%; min-height: ; width: 100%;}
.ͼ7 {color: var(--codeMirror-syntax-fgColor-keyword, var(--color-codemirror-syntax-keyword));}
.ͼ8 {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼ9 {color: var(--codeMirror-matchingBracket-fgColor, var(--color-codemirror-matchingbracket-text));}
.ͼa {color: var(--codeMirror-syntax-fgColor-string, var(--color-codemirror-syntax-string));}
.ͼb {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼc {color: var(--codeMirror-syntax-fgColor-constant, var(--color-codemirror-syntax-constant));}
.ͼd {color: var(--codeMirror-syntax-fgColor-entity, var(--color-codemirror-syntax-entity));}
.ͼe {color: var(--codeMirror-syntax-fgColor-variable, var(--color-codemirror-syntax-variable));}
.ͼf {color: inherit;}
.ͼg {font-weight: bold; color: inherit !important;}
.ͼh {color: var(--codeMirror-syntax-fgColor-comment, var(--color-codemirror-syntax-comment));}
.ͼi {text-decoration: underline;}
.ͼj {font-style: italic;}
.ͼk {font-weight: bold;}
.ͼl {text-decoration: line-through;}
.ͼ6 {background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--codeMirror-fgColor, var(--color-codemirror-text)); cursor: text;}
.ͼ6 .cm-gutters {background: var(--codeMirror-gutters-bgColor, var(--color-codemirror-gutters-bg)); border-right-width: 0;}
.ͼ6 .cm-lineNumbers .cm-gutterElement {color: var(--codeMirror-lineNumber-fgColor, var(--color-codemirror-linenumber-text)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-gutter-fontSize, var(--codeMirror-content-fontSize, 12px)); line-height: 20px; padding: 0 16px 0 16px;}
.ͼ6 .cm-content {caret-color: var(--codeMirror-cursor-fgColor, var(--color-codemirror-cursor)); font-family: var(--fontStack-monospace); font-size: var(--codeMirror-content-fontSize, 12px); background: var(--codeMirror-lines-bgColor, var(--color-codemirror-lines-bg)); line-height: 20px; padding-top: 8px;}
.ͼ6.cm-focused .cm-selectionBackground, .ͼ6 .cm-selectionBackground, .ͼ6 .cm-content ::selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ6.cm-focused {outline: none;}
.ͼ6.hide-help-until-focus.cm-focused .cm-panels-bottom {display: block;}
.ͼ6.hide-help-until-focus .cm-panels-bottom {display: none;}
.ͼ6.hide-help .cm-panels-top {display: none; position: absolute;}
.ͼ6 .cm-content ::-moz-selection {background-color: var(--codeMirror-selection-bgColor, var(--color-codemirror-selection-bg, #d7d4f0));}
.ͼ6 .cm-activeLine {background-color: var(--codeMirror-activeline-bgColor, var(--color-codemirror-activeline-bg));}
.ͼ6 .cm-line {padding-left: 16px;}
.ͼ6 .cm-help-panel {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 7px 10px; margin: 0; font-size: 13px; line-height: 16px; color: var(--fgColor-muted, var(--color-fg-muted)); cursor: default;}
.ͼ6 .cm-panels-bottom {border-top: var(--borderWidth-thin, 1px) solid var(--borderColor-default, var(--color-border-default)); background: none;}
.js-upload-markdown-image .ͼ6 .cm-panels-bottom {bottom: 30px !important;}
.ͼ6 .cm-panel.cm-search {background: var(--bgColor-muted, var(--color-canvas-subtle)); padding: 8px; font-size: 16px;}
.ͼ6 .cm-panel.cm-search > button {border-radius: 6px; padding: 4px 8px; background: var(--codeMirror-bgColor, var(--color-codemirror-bg)); color: var(--button-default-fgColor-rest, var(--color-btn-text)); border: 1px solid var(--button-default-borderColor-rest, var(--color-btn-border)); text-transform: capitalize;}
.ͼ6 .cm-panel.cm-search > label {color: var(--fgColor-default, var(--color-fg-default)); text-transform: capitalize; font-size: 12px;}
.ͼ6 .cm-panel.cm-search > input {border-radius: 6px; padding: 4px 8px; background: var(--bgColor-default, var(--color-canvas-default)); color: var(--fgColor-default, var(--color-fg-default)); border: 1px solid var(--borderColor-default, var(--color-border-default)); font-size: 12px;}
.ͼ6 .cm-panel.cm-search > button[name="close"] {padding: 4px;}
.ͼ6 .cm-panels-top {border-bottom: var(--borderWidth-thin, 1px) solid var(--color-border-default); background: none;}
.ͼ6 .cm-panel.cm-search input, .ͼ6 .cm-panel.cm-search button, .ͼ6 .cm-panel.cm-search label {margin-right: 8px; margin-bottom: 4px; margin-top: 4px; margin-left: 0;}
.ͼ6 .cm-lintRange {cursor: help; background-image: none !important;}
.ͼ6 .cm-placeholder {height: 1em; color: var(--fgColor-muted);}
.ͼ6.custom-tooltips .cm-tooltip {border: none !important; background-color: transparent !important;}
.ͼ6.custom-tooltips .cm-diagnostic {padding: 0; margin-left: 0 !important; border-left: none !important; white-space: unset;}
.ͼtw {height: 100%; min-height: ; width: 100%;}
.ͼtf {height: 100%; min-height: ; width: 100%;}
.ͼsy {height: 100%; min-height: ; width: 100%;}
.ͼsh {height: 100%; min-height: ; width: 100%;}
.ͼs0 {height: 100%; min-height: ; width: 100%;}
.ͼrj {height: 100%; min-height: ; width: 100%;}
.ͼr2 {height: 100%; min-height: ; width: 100%;}
.ͼql {height: 100%; min-height: ; width: 100%;}
.ͼq4 {height: 100%; min-height: ; width: 100%;}
.ͼpn {height: 100%; min-height: ; width: 100%;}
.ͼp6 {height: 100%; min-height: ; width: 100%;}
.ͼop {height: 100%; min-height: ; width: 100%;}
.ͼo8 {height: 100%; min-height: ; width: 100%;}
.ͼnr {height: 100%; min-height: ; width: 100%;}
.ͼna {height: 100%; min-height: ; width: 100%;}
.ͼmt {height: 100%; min-height: ; width: 100%;}
.ͼmc {height: 100%; min-height: ; width: 100%;}
.ͼlv {height: 100%; min-height: ; width: 100%;}
.ͼle {height: 100%; min-height: ; width: 100%;}
.ͼkx {height: 100%; min-height: ; width: 100%;}
.ͼkg {height: 100%; min-height: ; width: 100%;}
.ͼjz {height: 100%; min-height: ; width: 100%;}
.ͼji {height: 100%; min-height: ; width: 100%;}
.ͼj1 {height: 100%; min-height: ; width: 100%;}
.ͼik {height: 100%; min-height: ; width: 100%;}
.ͼi3 {height: 100%; min-height: ; width: 100%;}
.ͼhm {height: 100%; min-height: ; width: 100%;}
.ͼh5 {height: 100%; min-height: ; width: 100%;}
.ͼgo {height: 100%; min-height: ; width: 100%;}
.ͼg7 {height: 100%; min-height: ; width: 100%;}
.ͼfq {height: 100%; min-height: ; width: 100%;}
.ͼf9 {height: 100%; min-height: ; width: 100%;}
.ͼes {height: 100%; min-height: ; width: 100%;}
.ͼeb {height: 100%; min-height: ; width: 100%;}
.ͼdu {height: 100%; min-height: ; width: 100%;}
.ͼdd {height: 100%; min-height: ; width: 100%;}
.ͼcw {height: 100%; min-height: ; width: 100%;}
.ͼcf {height: 100%; min-height: ; width: 100%;}
.ͼby {height: 100%; min-height: ; width: 100%;}
.ͼbh {height: 100%; min-height: ; width: 100%;}
.ͼb0 {height: 100%; min-height: ; width: 100%;}
.ͼaj {height: 100%; min-height: ; width: 100%;}
.ͼa2 {height: 100%; min-height: ; width: 100%;}
.ͼ9l {height: 100%; min-height: ; width: 100%;}
.ͼ94 {height: 100%; min-height: ; width: 100%;}
.ͼ8n {height: 100%; min-height: ; width: 100%;}
.ͼ86 {height: 100%; min-height: ; width: 100%;}
.ͼ7p {height: 100%; min-height: ; width: 100%;}
.ͼ78 {height: 100%; min-height: ; width: 100%;}
.ͼ6r {height: 100%; min-height: ; width: 100%;}
.ͼ6a {height: 100%; min-height: ; width: 100%;}
.ͼ5t {height: 100%; min-height: ; width: 100%;}
.ͼ5c {height: 100%; min-height: ; width: 100%;}
.ͼ4v {height: 100%; min-height: ; width: 100%;}
.ͼ4e {height: 100%; min-height: ; width: 100%;}
.ͼ3x {height: 100%; min-height: ; width: 100%;}
.ͼ3g {height: 100%; min-height: ; width: 100%;}
.ͼ2z {height: 100%; min-height: ; width: 100%;}
.ͼ2i {height: 100%; min-height: ; width: 100%;}
.ͼ21 {height: 100%; min-height: ; width: 100%;}
.ͼ1k {height: 100%; min-height: ; width: 100%;}
.ͼ13 {height: 100%; min-height: ; width: 100%;}
.ͼm {height: 100%; min-height: ; width: 100%;}
.ͼ5 {height: 100%; min-height: ; width: 100%;}
</style><style type="text/css">.turbo-progress-bar {
  position: fixed;
  display: block;
  top: 0;
  left: 0;
  height: 3px;
  background: #0076ff;
  z-index: 2147483647;
  transition:
    width 300ms ease-out,
    opacity 150ms 150ms ease-in;
  transform: translate3d(0, 0, 0);
}
</style>
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">
  <link rel="preconnect" href="https://github.githubassets.com/" crossorigin="">
  <link rel="preconnect" href="https://avatars.githubusercontent.com/">

  


  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/light-74231a1f3bbb.css"><link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/dark-8a995f0bacd4.css"><link data-color-theme="light_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_high_contrast-83beb16e0ecf.css"><link data-color-theme="light_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind-f91b0f603451.css"><link data-color-theme="light_colorblind_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind_high_contrast-5aebfa54b215.css"><link data-color-theme="light_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia-6e122dab64fc.css"><link data-color-theme="light_tritanopia_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia_high_contrast-b32664e28b79.css"><link data-color-theme="dark_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_high_contrast-9ac301c3ebe5.css"><link data-color-theme="dark_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind-cd826e8636dc.css"><link data-color-theme="dark_colorblind_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind_high_contrast-131d53fe187c.css"><link data-color-theme="dark_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia-18119e682df0.css"><link data-color-theme="dark_tritanopia_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia_high_contrast-63c0358957ba.css"><link data-color-theme="dark_dimmed" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed-f37fb7684b1f.css"><link data-color-theme="dark_dimmed_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed_high_contrast-8f371c75debd.css">

    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-primitives-225433424a87.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-cba26849680f.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/global-d579beef0491.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/github-864568fbf430.css">
  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/copilot-markdown-rendering-f6845e8f5d6b.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/code-3853118a3cf5.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/copilot-immersive-c45d29d9b5a7.css">

  


  <script type="application/json" id="client-env">{"locale":"en","featureFlags":["alternate_user_config_repo","billing_sku_level_budgets","codespaces_prebuild_region_target_update","contentful_lp_flex_features_actions","contentful_lp_flex_features_code_review","contentful_lp_flex_features_code_search","contentful_lp_flex_features_codespaces","contentful_lp_flex_features_discussions","contentful_lp_flex_features_issues","contentful_lp_footnotes","copilot_chat_attach_images","copilot_chat_attachments","copilot_chat_custom_instructions","copilot_chat_opening_thread_switch","copilot_chat_repo_custom_instructions_preview","copilot_chat_vision_in_claude","copilot_chat_wholearea_dd","copilot_custom_copilots_filter_references","copilot_default_4_1_preview","copilot_dotcom_chat_file_upload","copilot_duplicate_thread","copilot_free_to_paid_telem","copilot_immersive_issue_preview","copilot_new_immersive_references_ui","copilot_no_floating_button","copilot_read_shared_conversation","copilot_share_active_subthread","copilot_share_forbidden_error","copilot_task_oriented_assistive_prompts","copilot_topics_as_references","copilot_ui_refs","direct_to_salesforce","dotcom_chat_client_side_skills","ghost_pilot_confidence_truncation_25","ghost_pilot_confidence_truncation_40","github_models_o3_mini_streaming","insert_before_patch","issues_dashboard_no_redirects","issues_react_blur_item_picker_on_close","issues_react_create_milestone","issues_react_dashboard_save_query_refresh","issues_react_prohibit_title_fallback","issues_react_remove_placeholders","lifecycle_label_name_updates","link_contact_sales_swp_marketo","marketing_pages_search_explore_provider","memex_mwl_filter_field_delimiter","memex_roadmap_drag_style","nonreporting_relay_graphql_status_codes","primer_react_css_modules_ga","primer_react_select_panel_with_modern_action_list","remove_child_patch","repository_suggester_elastic_search","sample_network_conn_type","site_proxima_australia_update","swp_enterprise_contact_form","use_paginated_org_picker_cost_center_form","use_paginated_repo_picker_cost_center_form","viewscreen_sandbox"],"login":"saulolv"}</script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/wp-runtime-d116e557813e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_oddbird_popover-polyfill_dist_popover-fn_js-81211bd82278.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_stacktrace-parser_dist_s-1d3d52-4be8ffe9a34a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_failbot_failbot_ts-9d1ab2cdab0d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/environment-cc191d9d2324.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_primer_behaviors_dist_esm_index_mjs-0dbb79f97f8f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_selector-observer_dist_index_esm_js-f690fd9ae3d5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_relative-time-element_dist_index_js-62d275b7ddd9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_auto-complete-element_dist_index_js-node_modules_github_catalyst_-8e9f78-a90ac05d2469.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_text-expander-element_dist_index_js-78748950cb0c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_filter-input-element_dist_index_js-node_modules_github_remote-inp-d8c643-f5192902810f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_markdown-toolbar-element_dist_index_js-ceef33f593fa.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_file-attachment-element_dist_index_js-node_modules_primer_view-co-07e635-2bb803cf8a63.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/github-elements-570ce1abc70b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/element-registry-60ac18e3a4d7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_braintree_browser-detection_dist_browser-detection_js-node_modules_githu-bb80ec-72267f4e3ff9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_lit-html_lit-html_js-be8cb88f481b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_morphdom_dist_morphdom-esm_js-0c08218c7d5f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_fzy_js_index_js-node_modules_github_paste-markdown_dist_index_js-6c00013a3dc4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_turbo_dist_turbo_es2017-esm_js-a03ee12d659a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_delegated-events_dist_inde-893f9f-b6294cf703b7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_color-convert_index_js-e3180fe3bcb3.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_quote-selection_dist_index_js-node_modules_github_session-resume_-c1aa61-97c8ff49bc41.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_updatable-content_updatable-content_ts-62f3e9c52ece.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/app_assets_modules_github_behaviors_task-list_ts-app_assets_modules_github_sso_ts-ui_packages-900dde-768abe60b1f8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/app_assets_modules_github_sticky-scroll-into-view_ts-3e000c5d31a9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/app_assets_modules_github_behaviors_ajax-error_ts-app_assets_modules_github_behaviors_include-d0d0a6-7cc66dc86dd7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/app_assets_modules_github_behaviors_commenting_edit_ts-app_assets_modules_github_behaviors_ht-83c235-4bcbbbfbe1d4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/behaviors-d8856fe93b65.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_catalyst_lib_index_js-f6223d90c7ba.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/notifications-global-01e85cd1be94.js.download"></script>
  
  <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/primer-react-185cf474198e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/react-core-2b73d1f40839.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/react-lib-80430c87778a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/octicons-react-cf2f2ab8dab4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/react-profiling-93a0cff6ba2b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_emotion_is-prop-valid_dist_emotion-is-prop-valid_esm_js-node_modules_emo-b1c483-23083d170518.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_catalyst_lib_index_js-node_modules_tanstack_react-query_build_mod-3b1f5d-85b60118c668.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_dompurify_dist_purify_es_mjs-dd1d3ea6a436.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_lodash-es__Stack_js-node_modules_lodash-es__Uint8Array_js-node_modules_l-4faaa6-4a736fde5c2f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_date-fns_format_mjs-6e4d0f904632.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_date-fns_addWeeks_mjs-node_modules_date-fns_addYears_mjs-node_modules_da-827f4f-cf37cd06c24f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_focus-visible_dist_focus-visible_js-node_modules_lodash-es__isIterateeCa-89abd9-d3df7265bde5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_tanstack_query-core_build_modern_queryObserver_js-node_modules_tanstack_-defd52-9743ca933872.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_hotkey_dist_index_js-node_modules_primer_live-region-element_dist-d840e2-d674dd60e969.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_lodash-es_isEqual_js-92a85ab8c568.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_dnd-kit_modifiers_dist_modifiers_esm_js-node_modules_dnd-kit_sortable_di-72228e-c0b5ab72cffa.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_react-relay_index_js-137de9a77ac9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_d3-interpolate_src_value_js-node_modules_d3-selection_src_select_js-99e71477aaf0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_remark-gfm_lib_index_js-node_modules_remark-parse_lib_index_js-node_modu-44d0fc-3771aaaad894.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_highlight_js_es_core_js-node_modules_lowlight_lib_all_js-be89bc04c72d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_hastscript_lib_index_js-node_modules_react-markdown_lib_index_js-node_mo-68849e-87072326f2b3.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_buffer_index_js-10e8d21796f0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_codemirror_autocomplete_dist_index_js-node_modules_codemirror_search_dis-aafe81-0a25fc93d458.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_codemirror_commands_dist_index_js-node_modules_codemirror_language-data_-92b5c9-ecd3beba517a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_mini-throttle_dist_decorators_js-node_modules_accname_dist_access-690142-94b1a9f6329d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_js-yaml_index_js-8a440af5bbc0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_d3-dag_bundle_d3-dag_esm_min_js-node_modules_github_combobox-nav_dist_in-b802f8-bd035767b1d3.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/vendors-node_modules_github_quote-selection_dist_index_js-node_modules_react-relay_hooks_js-n-1cfcd1-d57bc995c970.js.download"></script>

<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_ui-commands_ui-commands_ts-0e6cfc813d47.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_date-picker_date-picker_ts-ffa6d304e65d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_drag-and-drop_drag-and-drop_ts-ui_packages_hydro-analytics_hydro-analytics_ts-8a41576dfae8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_item-picker_components_RepositoryPicker_tsx-09ffb8d343c8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_copilot-chat_utils_copilot-chat-helpers_ts-a372f4523543.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_comment-box_api_file-upload_ts-ui_packages_comment-box_api_preview_ts-ui_packages-a6d8e9-9e081dcaf309.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_copilot-markdown_MarkdownRenderer_tsx-5d5c9ca598b7.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_hovercards_hovercards_ts-ui_packages_reaction-viewer_utils_ReactionGroups_ts-ui_p-b74207-5455dc3e8605.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_copilot-chat_utils_CopilotChatContext_tsx-5def239c7d99.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_app-uuid_app-uuid_ts-ui_packages_document-metadata_document-metadata_ts-ui_packag-e98b75-6c32a94dd33a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_copilot-chat_components_CopilotIconAnimation_tsx-ui_packages_copilot-chat_compone-8be2e4-29cba9b72de9.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_issue-viewer_components_IssueViewer_tsx-ui_packages_issue-viewer_contexts_IssueVi-a3a625-b3c57f174541.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_promise-with-resolvers-polyfill_promise-with-resolvers-polyfill_ts-ui_packages_re-024ade-bf7ed523a599.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_custom-copilots_components_MultiFilePicker_tsx-f6e46fdf3c3c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/copilot-immersive-v1-f8c7b4d95417.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-react.6b23a886449aa3fc98d8.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/ui_packages_issue-viewer_components_IssueViewer_tsx-ui_packages_issue-viewer_contexts_IssueVi-a3a625.71764ea43b722a01af15.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/ui_packages_promise-with-resolvers-polyfill_promise-with-resolvers-polyfill_ts-ui_packages_re-024ade.67bbb3afa809a3743a3c.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/copilot-immersive-v1.1f49e99ec85113593259.module.css">


  <title>New conversation · GitHub Copilot</title>



  <meta name="route-pattern" content="/copilot(.:format)" data-turbo-transient="">
  <meta name="route-controller" content="copilot_immersive" data-turbo-transient="">
  <meta name="route-action" content="show" data-turbo-transient="">
  <meta name="fetch-nonce" content="eb095625-7c5b-293e-3895-6524fe486473">

    
  <meta name="current-catalog-service-hash" content="e0ea8650e35c596561f0136a5a08f4520d7f88b6155baf2f9eb211dd469350ca">


  <meta name="request-id" content="F18A:16EC3F:47D33:50EB7:6819F961" data-turbo-transient="true"><meta name="html-safe-nonce" content="8eb959916dd876b48dbbaa06d3664a3293359c92636b66ffe35c09b3e5553161" data-turbo-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9jb3BpbG90L2MvOTM0MGZmZTItZDU2OC00MDc0LWFlYjctZWVkOTMxMDIxZDU0IiwicmVxdWVzdF9pZCI6IkYxOEE6MTZFQzNGOjQ3RDMzOjUwRUI3OjY4MTlGOTYxIiwidmlzaXRvcl9pZCI6IjUxNzA0MzQzOTYwNjYyMjIwNTIiLCJyZWdpb25fZWRnZSI6ImJyYXppbHNvdXRoIiwicmVnaW9uX3JlbmRlciI6ImlhZCJ9" data-turbo-transient="true"><meta name="visitor-hmac" content="b3da0af9d87bf1dc2c3859c37ec29e3768e8fd8aa84029720898197e1fbdd62c" data-turbo-transient="true">




  <meta name="github-keyboard-shortcuts" content="" data-turbo-transient="true">
  

  <meta name="selected-link" value="/copilot" data-turbo-transient="">
  <link rel="assets" href="https://github.githubassets.com/">

    <meta name="google-site-verification" content="Apib7-x98H0j5cPqHWwSMm6dNU4GmODRoqxLiDzdx9I">

<meta name="octolytics-url" content="https://collector.github.com/github/collect"><meta name="octolytics-actor-id" content="74679488"><meta name="octolytics-actor-login" content="saulolv"><meta name="octolytics-actor-hash" content="ae7c6c944b7209cb27ff3cfc1ab924998af2163e20f525a1c82af0719a20df84">

  

  




    <meta name="user-login" content="saulolv">

  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

    <meta name="viewport" content="width=device-width">

    

      <meta name="description" content="GitHub is where people build software. More than 150 million people use GitHub to discover, fork, and contribute to over 420 million projects.">

      <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">

    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <meta property="fb:app_id" content="1401488693436528">
    <meta name="apple-itunes-app" content="app-id=1477376905, app-argument=https://github.com/copilot">

      <meta property="og:url" content="https://github.com">
  <meta property="og:site_name" content="GitHub">
  <meta property="og:title" content="Build software better, together">
  <meta property="og:description" content="GitHub is where people build software. More than 150 million people use GitHub to discover, fork, and contribute to over 420 million projects.">
  <meta property="og:image" content="https://github.githubassets.com/assets/github-logo-55c5b9a1fe52.png">
  <meta property="og:image:type" content="image/png">
  <meta property="og:image:width" content="1200">
  <meta property="og:image:height" content="1200">
  <meta property="og:image" content="https://github.githubassets.com/assets/github-mark-57519b92ca4e.png">
  <meta property="og:image:type" content="image/png">
  <meta property="og:image:width" content="1200">
  <meta property="og:image:height" content="620">
  <meta property="og:image" content="https://github.githubassets.com/assets/github-octocat-13c86b8b336d.png">
  <meta property="og:image:type" content="image/png">
  <meta property="og:image:width" content="1200">
  <meta property="og:image:height" content="620">

  <meta property="twitter:site" content="github">
  <meta property="twitter:site:id" content="13334762">
  <meta property="twitter:creator" content="github">
  <meta property="twitter:creator:id" content="13334762">
  <meta property="twitter:card" content="summary_large_image">
  <meta property="twitter:title" content="GitHub">
  <meta property="twitter:description" content="GitHub is where people build software. More than 150 million people use GitHub to discover, fork, and contribute to over 420 million projects.">
  <meta property="twitter:image" content="https://github.githubassets.com/assets/github-logo-55c5b9a1fe52.png">
  <meta property="twitter:image:width" content="1200">
  <meta property="twitter:image:height" content="1200">


      <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/74679488/ws?session=eyJ2IjoiVjMiLCJ1Ijo3NDY3OTQ4OCwicyI6MTY0NzY3NTE3NCwiYyI6MTQ4NDUxNjUwOCwidCI6MTc0NjUzMjcwNX0=--e1d8259f42644f1cfa6d447865ea681a7b4ae15d149d194e005f2c19b9def517" data-refresh-url="/_alive" data-session-id="576dc68c603c8b53a787bdef64cab996eb987a3ee1b8b3e332eb274533d94adc">
      <link rel="shared-web-socket-src" href="https://github.com/assets-cdn/worker/socket-worker-eff89a71ae86.js">


      <meta name="hostname" content="github.com">


      <meta name="keyboard-shortcuts-preference" content="all">
      <meta name="hovercards-preference" content="true">
      <meta name="announcement-preference-hovercard" content="true">

        <meta name="expected-hostname" content="github.com">


  <meta http-equiv="x-pjax-version" content="9b51d3454410fb83fd2e6be36716d048cd9295cb5950b904d0804ccbaf7c49fe" data-turbo-track="reload">
  <meta http-equiv="x-pjax-csp-version" content="85b6422658a0538052402e57c709f8f89c8e1cf3c97a3dd4d80d781bd96b050f" data-turbo-track="reload">
  <meta http-equiv="x-pjax-css-version" content="c5a28babfb5d8a5876ab14a9f05d0a12c19137c5eeb273b7a6d6b2a25b72d40f" data-turbo-track="reload">
  <meta http-equiv="x-pjax-js-version" content="4fc5b5b8a482ec1c967316987b35ebb3cbd7ecfd2ad205ba343fd0c5736c75b8" data-turbo-track="reload">

  <meta name="turbo-cache-control" content="no-preview" data-turbo-transient="">

      <meta name="turbo-cache-control" content="no-cache" data-turbo-transient="">




    

    <meta name="turbo-body-classes" content="logged-in env-production page-responsive copilotImmersive">


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <meta name="release" content="8532a2d94d2669507c275c024a6cdc73d7662f65">

  <link rel="mask-icon" href="https://github.githubassets.com/assets/pinned-octocat-093da3e6fa40.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.com/favicons/favicon-copilot-dark.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.com/favicons/favicon-copilot-dark.svg" data-base-href="https://github.githubassets.com/favicons/favicon">

<meta name="theme-color" content="#1e2327">
<meta name="color-scheme" content="light dark">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  <style id="ms-consent-banner-main-styles">.w8hcgFksdo30C8w-bygqu{color:#000}.ydkKdaztSS0AeHWIeIHsQ a{color:#0067B8}.erL690_8JwUW-R4bJRcfl{background-color:#EBEBEB;border:none;color:#000}.erL690_8JwUW-R4bJRcfl:enabled:hover{color:#000;background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}.erL690_8JwUW-R4bJRcfl:enabled:focus{background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}.erL690_8JwUW-R4bJRcfl:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2);border:none}._1zNQOqxpBFSokeCLGi_hGr{border:none;background-color:#0067B8;color:#fff}._1zNQOqxpBFSokeCLGi_hGr:enabled:hover{color:#fff;background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}._1zNQOqxpBFSokeCLGi_hGr:enabled:focus{background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}._1zNQOqxpBFSokeCLGi_hGr:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,120,215,0.2);border:none}._23tra1HsiiP6cT-Cka-ycB{position:relative;display:flex;z-index:9999;width:100%;background-color:#F2F2F2;justify-content:space-between;text-align:left}div[dir="rtl"]._23tra1HsiiP6cT-Cka-ycB{text-align:right}._1Upc2NjY8AlDn177YoVj0y{margin:0;padding-left:5%;padding-top:8px;padding-bottom:8px}div[dir="rtl"] ._1Upc2NjY8AlDn177YoVj0y{margin:0;padding:8px 5% 8px 0;float:none}._23tra1HsiiP6cT-Cka-ycB svg{fill:none;max-width:none;max-height:none}._1V_hlU-7jdtPiooHMu89BB{display:table-cell;padding:12px;width:24px;height:24px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:24px;line-height:0}.f6QKJD7fhSbnJLarTL-W-{display:table-cell;vertical-align:middle;padding:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:16px}.f6QKJD7fhSbnJLarTL-W- a{text-decoration:underline}._2j0fmugLb1FgYz6KPuB91w{display:inline-block;margin-left:5%;margin-right:5%;min-width:40%;min-width:calc((150px + 3 * 4px) * 2 + 150px);min-width:-webkit-fit-content;min-width:-moz-fit-content;min-width:fit-content;align-self:center;position:relative}._1XuCi2WhiqeWRUVp3pnFG3{margin:4px;padding:5px;min-width:150px;min-height:36px;vertical-align:top;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._1XuCi2WhiqeWRUVp3pnFG3:focus{box-sizing:border-box}._1XuCi2WhiqeWRUVp3pnFG3:disabled{cursor:not-allowed}._2bvsb3ubApyZ0UGoQA9O9T{display:block;position:fixed;z-index:10000;top:0;left:0;width:100%;height:100%;background-color:rgba(255,255,255,0.6);overflow:auto;text-align:left}div[dir="rtl"]._2bvsb3ubApyZ0UGoQA9O9T{text-align:right}div[dir="rtl"] ._2bvsb3ubApyZ0UGoQA9O9T{left:auto;right:0}.AFsJE948muYyzCMktdzuk{position:relative;top:8%;margin-bottom:40px;margin-left:auto;margin-right:auto;box-sizing:border-box;width:640px;background-color:#fff;border:1px solid #0067B8}._3kWyBRbW_dgnMiEyx06Fu4{float:right;z-index:1;margin:2px;padding:12px;border:none;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:13px;display:flex;align-items:center;text-align:center;color:#666;background-color:#fff}div[dir="rtl"] ._3kWyBRbW_dgnMiEyx06Fu4{margin:2px;padding:12px;float:left}.uCYvKvHXrhjNgflv1VqdD{position:static;margin-top:36px;margin-left:36px;margin-right:36px}._17pX1m9O_W--iZbDt3Ta5r{margin-top:0;margin-bottom:12px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:20px;line-height:24px;text-transform:none}._1kBkHQ1V1wu3kl-YcLgUr6{height:446px;overflow:auto}._20_nXDf6uFs9Q6wxRXG-I-{margin-top:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._20_nXDf6uFs9Q6wxRXG-I- a{text-decoration:underline}dl._2a0NH_GDQEQe5Ynfo7suVH{margin-top:36px;margin-bottom:0;padding:0;list-style:none;text-transform:none}dt._3j_LCPv7fyXv3A8FIXVwZ4{margin-top:20px;float:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;list-style:none}.k-vxTGFbdq1aOZB2HHpjh{margin:0;padding:0;border:none}._2Bucyy75c_ogoU1g-liB5R{margin:0;padding:0;border-bottom:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;text-transform:none}._63gwfzV8dclrsl2cfd90r{display:inline-block;margin-top:0;margin-bottom:13px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._1l8wM_4mRYGz3Iu7l3BZR7{display:block}._2UE03QS02aZGkslegN_F-i{display:inline-block;position:relative;left:5px;margin-bottom:13px;margin-right:34px;padding:3px}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{margin:0 0 13px 34px;padding:3px;float:none}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{left:auto;right:5px}._23tra1HsiiP6cT-Cka-ycB *::before,._2bvsb3ubApyZ0UGoQA9O9T *::before,._23tra1HsiiP6cT-Cka-ycB *::after,._2bvsb3ubApyZ0UGoQA9O9T *::after{box-sizing:inherit}._1HSFn0HzGo6w4ADApV8-c4{outline:2px solid rgba(0,0,0,0.8)}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2{display:inline-block;position:relative;margin-top:0;margin-left:0;margin-right:0;height:0;width:0;border-radius:0;cursor:pointer;outline:none;box-sizing:border-box;-webkit-appearance:none;-moz-appearance:none;appearance:none}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{display:block;position:absolute;top:5px;left:3px;height:19px;width:19px;content:"";border-radius:50%;border:1px solid #000;background-color:#fff}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{left:auto;right:3px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:rgba(0,0,0,0.8)}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label{cursor:not-allowed}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label::before{border:1px solid rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2)}._3RJzeL3l9Rl_lAQEm6VwdX{display:block;position:static;float:right;margin-top:0;margin-bottom:0;margin-left:19px;margin-right:0;padding-top:0;padding-bottom:0;padding-left:8px;padding-right:0;width:80%;width:calc(100% - 19px);font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-transform:none;cursor:pointer;box-sizing:border-box}div[dir="rtl"] ._3RJzeL3l9Rl_lAQEm6VwdX{margin:0 19px 0 0;padding:0 8px 0 0;float:left}.nohp3sIG12ZBhzcMnPala{margin-top:20px;margin-bottom:48px}._2uhaEsmeotZ3P-M0AXo2kF{padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._2uhaEsmeotZ3P-M0AXo2kF:focus{box-sizing:border-box}._2uhaEsmeotZ3P-M0AXo2kF:disabled{cursor:not-allowed}._3tOu1FJ59c_xz_PmI1lKV5{float:right;padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._3tOu1FJ59c_xz_PmI1lKV5:focus{box-sizing:border-box}._3tOu1FJ59c_xz_PmI1lKV5:disabled{cursor:not-allowed}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0;padding:0;float:left}@media only screen and (max-width: 768px){._2j0fmugLb1FgYz6KPuB91w,._1Upc2NjY8AlDn177YoVj0y{padding-top:8px;padding-bottom:12px;padding-left:3.75%;padding-right:3.75%;margin:0;width:92.5%}._23tra1HsiiP6cT-Cka-ycB{display:block}._1XuCi2WhiqeWRUVp3pnFG3{margin-bottom:8px;margin-left:0;margin-right:0;width:100%}._2bvsb3ubApyZ0UGoQA9O9T{overflow:hidden}.AFsJE948muYyzCMktdzuk{top:1.8%;width:93.33%;height:96.4%;overflow:hidden}.uCYvKvHXrhjNgflv1VqdD{margin-top:24px;margin-left:24px;margin-right:24px;height:100%}._1kBkHQ1V1wu3kl-YcLgUr6{height:62%;height:calc(100% - 188px);min-height:50%}._2uhaEsmeotZ3P-M0AXo2kF{width:100%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:12px;margin-left:0;width:100%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 12px 0;padding:0;float:none}}@media only screen and (max-width: 768px) and (orientation: landscape), only screen and (max-height: 260px), only screen and (max-width: 340px){.AFsJE948muYyzCMktdzuk{overflow:auto}}@media only screen and (max-height: 260px), only screen and (max-width: 340px){._1XuCi2WhiqeWRUVp3pnFG3{min-width:0}._3kWyBRbW_dgnMiEyx06Fu4{padding:3%}.uCYvKvHXrhjNgflv1VqdD{margin-top:3%;margin-left:3%;margin-right:3%}._17pX1m9O_W--iZbDt3Ta5r{margin-bottom:3%}._1kBkHQ1V1wu3kl-YcLgUr6{height:calc(79% - 64px)}.nohp3sIG12ZBhzcMnPala{margin-top:5%;margin-bottom:10%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:3%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 3% 0;padding:0;float:none}}
</style><style type="text/css" id="ms-consent-banner-theme-styles">._23tra1HsiiP6cT-Cka-ycB {
            background-color: #24292f !important;
        }.w8hcgFksdo30C8w-bygqu {
            color: #ffffff !important;
        }.ydkKdaztSS0AeHWIeIHsQ a {
            color: #d8b9ff !important;
        }._2bvsb3ubApyZ0UGoQA9O9T {
            background-color: rgba(23, 23, 23, 0.8) !important;
        }.AFsJE948muYyzCMktdzuk {
            background-color: #24292f !important;
            border: 1px solid #d8b9ff !important;
        }._3kWyBRbW_dgnMiEyx06Fu4 {
            color: #d8b9ff !important;
            background-color: #24292f !important;
        }._1zNQOqxpBFSokeCLGi_hGr {
            border: 1px solid #ffffff !important;
            background-color: #ffffff !important;
            color: #1f2328 !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:hover {
            color: #1f2328 !important;
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 1px solid transparent !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:focus {
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 2px solid #ffffff !important;
        }._1zNQOqxpBFSokeCLGi_hGr:disabled {
            opacity: 0.5 !important;
            color: #1f2328 !important;
            background-color: #ffffff !important;
            border: 1px solid transparent !important;
        }.erL690_8JwUW-R4bJRcfl {
            border: 1px solid #eaeef2 !important;
            background-color: #32383f !important;
            color: #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:hover {
            color: #ffffff !important;
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 1px solid #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:focus {
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 2px solid #6e7781 !important;
        }.erL690_8JwUW-R4bJRcfl:disabled {
            opacity: 0.5 !important;
            color: #ffffff !important;
            background-color: #424a53 !important;
            border: 1px solid #6e7781 !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label::before {
            border: 1px solid #d8b9ff !important;
            background-color: #24292f !important;
        }._1HSFn0HzGo6w4ADApV8-c4 {
            outline: 2px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked + label::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::after {
            background-color: #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled + label::before {
            border: 1px solid rgba(227, 227, 227, 0.2) !important;
            background-color: rgba(227, 227, 227, 0.2) !important;
        }</style><style data-styled="active" data-styled-version="5.3.11"></style><script type="text/x-sre-config">{ "json": "/static/javascripts/mathjax/mathmaps"}</script><script src="./controller_arduino_files/safe.js.download" charset="UTF-8"></script><style type="text/css">.CtxtMenu_InfoClose {  top:.2em; right:.2em;}
.CtxtMenu_InfoContent {  overflow:auto; text-align:left; font-size:80%;  padding:.4em .6em; border:1px inset; margin:1em 0px;  max-height:20em; max-width:30em; background-color:#EEEEEE;  white-space:normal;}
.CtxtMenu_Info.CtxtMenu_MousePost {outline:none;}
.CtxtMenu_Info {  position:fixed; left:50%; width:auto; text-align:center;  border:3px outset; padding:1em 2em; background-color:#DDDDDD;  color:black;  cursor:default; font-family:message-box; font-size:120%;  font-style:normal; text-indent:0; text-transform:none;  line-height:normal; letter-spacing:normal; word-spacing:normal;  word-wrap:normal; white-space:nowrap; float:none; z-index:201;  border-radius: 15px;                     /* Opera 10.5 and IE9 */  -webkit-border-radius:15px;               /* Safari and Chrome */  -moz-border-radius:15px;                  /* Firefox */  -khtml-border-radius:15px;                /* Konqueror */  box-shadow:0px 10px 20px #808080;         /* Opera 10.5 and IE9 */  -webkit-box-shadow:0px 10px 20px #808080; /* Safari 3 & Chrome */  -moz-box-shadow:0px 10px 20px #808080;    /* Forefox 3.5 */  -khtml-box-shadow:0px 10px 20px #808080;  /* Konqueror */  filter:progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color="gray", Positive="true"); /* IE */}
</style><style type="text/css">.CtxtMenu_MenuClose {  position:absolute;  cursor:pointer;  display:inline-block;  border:2px solid #AAA;  border-radius:18px;  -webkit-border-radius: 18px;             /* Safari and Chrome */  -moz-border-radius: 18px;                /* Firefox */  -khtml-border-radius: 18px;              /* Konqueror */  font-family: "Courier New", Courier;  font-size:24px;  color:#F0F0F0}
.CtxtMenu_MenuClose span {  display:block; background-color:#AAA; border:1.5px solid;  border-radius:18px;  -webkit-border-radius: 18px;             /* Safari and Chrome */  -moz-border-radius: 18px;                /* Firefox */  -khtml-border-radius: 18px;              /* Konqueror */  line-height:0;  padding:8px 0 6px     /* may need to be browser-specific */}
.CtxtMenu_MenuClose:hover {  color:white!important;  border:2px solid #CCC!important}
.CtxtMenu_MenuClose:hover span {  background-color:#CCC!important}
.CtxtMenu_MenuClose:hover:focus {  outline:none}
</style><style type="text/css">.CtxtMenu_Menu {  position:absolute;  background-color:white;  color:black;  width:auto; padding:5px 0px;  border:1px solid #CCCCCC; margin:0; cursor:default;  font: menu; text-align:left; text-indent:0; text-transform:none;  line-height:normal; letter-spacing:normal; word-spacing:normal;  word-wrap:normal; white-space:nowrap; float:none; z-index:201;  border-radius: 5px;                     /* Opera 10.5 and IE9 */  -webkit-border-radius: 5px;             /* Safari and Chrome */  -moz-border-radius: 5px;                /* Firefox */  -khtml-border-radius: 5px;              /* Konqueror */  box-shadow:0px 10px 20px #808080;         /* Opera 10.5 and IE9 */  -webkit-box-shadow:0px 10px 20px #808080; /* Safari 3 & Chrome */  -moz-box-shadow:0px 10px 20px #808080;    /* Forefox 3.5 */  -khtml-box-shadow:0px 10px 20px #808080;  /* Konqueror */}
.CtxtMenu_MenuItem {  padding: 1px 2em;  background:transparent;}
.CtxtMenu_MenuArrow {  position:absolute; right:.5em; padding-top:.25em; color:#666666;  font-family: null; font-size: .75em}
.CtxtMenu_MenuActive .CtxtMenu_MenuArrow {color:white}
.CtxtMenu_MenuArrow.CtxtMenu_RTL {left:.5em; right:auto}
.CtxtMenu_MenuCheck {  position:absolute; left:.7em;  font-family: null}
.CtxtMenu_MenuCheck.CtxtMenu_RTL { right:.7em; left:auto }
.CtxtMenu_MenuRadioCheck {  position:absolute; left: .7em;}
.CtxtMenu_MenuRadioCheck.CtxtMenu_RTL {  right: .7em; left:auto}
.CtxtMenu_MenuInputBox {  padding-left: 1em; right:.5em; color:#666666;  font-family: null;}
.CtxtMenu_MenuInputBox.CtxtMenu_RTL {  left: .1em;}
.CtxtMenu_MenuComboBox {  left:.1em; padding-bottom:.5em;}
.CtxtMenu_MenuSlider {  left: .1em;}
.CtxtMenu_SliderValue {  position:absolute; right:.1em; padding-top:.25em; color:#333333;  font-size: .75em}
.CtxtMenu_SliderBar {  outline: none; background: #d3d3d3}
.CtxtMenu_MenuLabel {  padding: 1px 2em 3px 1.33em;  font-style:italic}
.CtxtMenu_MenuRule {  border-top: 1px solid #DDDDDD;  margin: 4px 3px;}
.CtxtMenu_MenuDisabled {  color:GrayText}
.CtxtMenu_MenuActive {  background-color: #606872;  color: white;}
.CtxtMenu_MenuDisabled:focus {  background-color: #E8E8E8}
.CtxtMenu_MenuLabel:focus {  background-color: #E8E8E8}
.CtxtMenu_ContextMenu:focus {  outline:none}
.CtxtMenu_ContextMenu .CtxtMenu_MenuItem:focus {  outline:none}
.CtxtMenu_SelectionMenu {  position:relative; float:left;  border-bottom: none; -webkit-box-shadow:none; -webkit-border-radius:0px; }
.CtxtMenu_SelectionItem {  padding-right: 1em;}
.CtxtMenu_Selection {  right: 40%; width:50%; }
.CtxtMenu_SelectionBox {  padding: 0em; max-height:20em; max-width: none;  background-color:#FFFFFF;}
.CtxtMenu_SelectionDivider {  clear: both; border-top: 2px solid #000000;}
.CtxtMenu_Menu .CtxtMenu_MenuClose {  top:-10px; left:-10px}
</style></head>

  <body class="logged-in env-production page-responsive copilotImmersive" style="overflow-wrap: break-word; --dialog-scrollgutter: 0px;">
    <div data-turbo-body="" class="logged-in env-production page-responsive copilotImmersive" style="word-wrap: break-word;">
      



    <div class="position-relative header-wrapper js-header-wrapper ">
      <a href="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54#start-of-content" data-skip-target-assigned="false" class="p-3 color-bg-accent-emphasis color-fg-on-emphasis show-on-focus js-skip-to-content">Skip to content</a>

      <span data-view-component="true" class="progress-pjax-loader Progress position-fixed width-full">
    <span style="width: 0%;" data-view-component="true" class="Progress-item progress-pjax-loader-bar left-0 top-0 color-bg-accent-emphasis"></span>
</span>      
      
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/keyboard-shortcuts-dialog-8eef249f0ef9.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-react.6b23a886449aa3fc98d8.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/keyboard-shortcuts-dialog.f6b05f49f1105425afd0.module.css">

<react-partial partial-name="keyboard-shortcuts-dialog" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"docsUrl":"https://docs.github.com/get-started/accessibility/keyboard-shortcuts"}}</script>
  <div data-target="react-partial.reactRoot"><div class="d-none"></div><script type="application/json" id="__PRIMER_DATA_:r11:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>




      

          

              <header class="AppHeader" role="banner">
  <h2 class="sr-only">Navigation Menu</h2>


    

    <div class="AppHeader-globalBar  js-global-bar">
      <div class="AppHeader-globalBar-start">
        <div class="">
            <deferred-side-panel data-url="/_side-panels/global" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment" data-nonce="eb095625-7c5b-293e-3895-6524fe486473" data-view-component="true"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
      <button aria-label="Open global navigation menu" data-action="click:deferred-side-panel#loadPanel click:deferred-side-panel#panelOpened" data-show-dialog-id="dialog-9e616957-9496-4d2a-bb38-588d1d464303" id="dialog-show-dialog-9e616957-9496-4d2a-bb38-588d1d464303" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button p-0 color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-three-bars Button-visual">
    <path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75Zm0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75ZM1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5Z"></path>
</svg>
</button>

<dialog-helper>
  <dialog data-target="deferred-side-panel.panel" id="dialog-9e616957-9496-4d2a-bb38-588d1d464303" aria-modal="true" aria-labelledby="dialog-9e616957-9496-4d2a-bb38-588d1d464303-title" aria-describedby="dialog-9e616957-9496-4d2a-bb38-588d1d464303-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-small-portrait Overlay--motion-scaleFade Overlay--placement-left SidePanel Overlay--disableScroll">
    <div styles="flex-direction: row;" data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title sr-only" id="dialog-9e616957-9496-4d2a-bb38-588d1d464303-title">
        Global navigation
      </h1>
            <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="AppHeader-logo position-relative">
        <svg aria-hidden="true" height="24" viewBox="0 0 24 24" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M12 1C5.9225 1 1 5.9225 1 12C1 16.8675 4.14875 20.9787 8.52125 22.4362C9.07125 22.5325 9.2775 22.2025 9.2775 21.9137C9.2775 21.6525 9.26375 20.7862 9.26375 19.865C6.5 20.3737 5.785 19.1912 5.565 18.5725C5.44125 18.2562 4.905 17.28 4.4375 17.0187C4.0525 16.8125 3.5025 16.3037 4.42375 16.29C5.29 16.2762 5.90875 17.0875 6.115 17.4175C7.105 19.0812 8.68625 18.6137 9.31875 18.325C9.415 17.61 9.70375 17.1287 10.02 16.8537C7.5725 16.5787 5.015 15.63 5.015 11.4225C5.015 10.2262 5.44125 9.23625 6.1425 8.46625C6.0325 8.19125 5.6475 7.06375 6.2525 5.55125C6.2525 5.55125 7.17375 5.2625 9.2775 6.67875C10.1575 6.43125 11.0925 6.3075 12.0275 6.3075C12.9625 6.3075 13.8975 6.43125 14.7775 6.67875C16.8813 5.24875 17.8025 5.55125 17.8025 5.55125C18.4075 7.06375 18.0225 8.19125 17.9125 8.46625C18.6138 9.23625 19.04 10.2125 19.04 11.4225C19.04 15.6437 16.4688 16.5787 14.0213 16.8537C14.42 17.1975 14.7638 17.8575 14.7638 18.8887C14.7638 20.36 14.75 21.5425 14.75 21.9137C14.75 22.2025 14.9563 22.5462 15.5063 22.4362C19.8513 20.9787 23 16.8537 23 12C23 5.9225 18.0775 1 12 1Z"></path>
</svg>
</div></div>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="dialog-9e616957-9496-4d2a-bb38-588d1d464303" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="dialog-9e616957-9496-4d2a-bb38-588d1d464303-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body d-flex flex-column px-2">    <div data-view-component="true" class="d-flex flex-column mb-3">
        <nav aria-label="Site navigation" data-view-component="true" class="ActionList">
  
  <nav-list data-catalyst="">
    <ul data-target="nav-list.topLevelList" data-view-component="true" class="ActionListWrap">
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g d" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;HOME&quot;,&quot;label&quot;:null}" id="item-88bfab1c-7422-4de6-96c1-f40b2d4d52d3" href="https://github.com/dashboard" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-home">
    <path d="M6.906.664a1.749 1.749 0 0 1 2.187 0l5.25 4.2c.415.332.657.835.657 1.367v7.019A1.75 1.75 0 0 1 13.25 15h-3.5a.75.75 0 0 1-.75-.75V9H7v5.25a.75.75 0 0 1-.75.75h-3.5A1.75 1.75 0 0 1 1 13.25V6.23c0-.531.242-1.034.657-1.366l5.25-4.2Zm1.25 1.171a.25.25 0 0 0-.312 0l-5.25 4.2a.25.25 0 0 0-.094.196v7.019c0 .138.112.25.25.25H5.5V8.25a.75.75 0 0 1 .75-.75h3.5a.75.75 0 0 1 .75.75v5.25h2.75a.25.25 0 0 0 .25-.25V6.23a.25.25 0 0 0-.094-.195Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Home
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES&quot;,&quot;label&quot;:null}" id="item-61552d29-2e3b-4fa6-9a21-9f7682f0cf41" href="https://github.com/issues" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS&quot;,&quot;label&quot;:null}" id="item-313d11b4-eac9-4370-b331-71025eaeecea" href="https://github.com/pulls" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PROJECTS&quot;,&quot;label&quot;:null}" id="item-13b660d1-c790-4829-ba08-413c9a1bd159" href="https://github.com/projects" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Projects
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;DISCUSSIONS&quot;,&quot;label&quot;:null}" id="item-3e8d9966-6fdb-43b1-a926-2824ec9afca9" href="https://github.com/discussions" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-comment-discussion">
    <path d="M1.75 1h8.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 10.25 10H7.061l-2.574 2.573A1.458 1.458 0 0 1 2 11.543V10h-.25A1.75 1.75 0 0 1 0 8.25v-5.5C0 1.784.784 1 1.75 1ZM1.5 2.75v5.5c0 .138.112.25.25.25h1a.75.75 0 0 1 .75.75v2.19l2.72-2.72a.749.749 0 0 1 .53-.22h3.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25Zm13 2a.25.25 0 0 0-.25-.25h-.5a.75.75 0 0 1 0-1.5h.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 14.25 12H14v1.543a1.458 1.458 0 0 1-2.487 1.03L9.22 12.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.22 2.22v-2.19a.75.75 0 0 1 .75-.75h1a.25.25 0 0 0 .25-.25Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Discussions
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;CODESPACES&quot;,&quot;label&quot;:null}" id="item-fa30fd29-0e64-4497-8fcc-a0fe61c3cf66" href="https://github.com/codespaces" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-codespaces">
    <path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Codespaces
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem ActionListItem--navActive">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;COPILOT&quot;,&quot;label&quot;:null}" id="item-10585093-0ba1-4283-ae7a-a3fee5ce87c4" href="https://github.com/copilot" aria-current="page" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copilot">
    <path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Copilot
</span>      
</a>
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;EXPLORE&quot;,&quot;label&quot;:null}" id="item-88d72df9-7df5-460a-8b49-bfa13c785994" href="https://github.com/explore" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-telescope">
    <path d="M14.184 1.143v-.001l1.422 2.464a1.75 1.75 0 0 1-.757 2.451L3.104 11.713a1.75 1.75 0 0 1-2.275-.702l-.447-.775a1.75 1.75 0 0 1 .53-2.32L11.682.573a1.748 1.748 0 0 1 2.502.57Zm-4.709 9.32h-.001l2.644 3.863a.75.75 0 1 1-1.238.848l-1.881-2.75v2.826a.75.75 0 0 1-1.5 0v-2.826l-1.881 2.75a.75.75 0 1 1-1.238-.848l2.049-2.992a.746.746 0 0 1 .293-.253l1.809-.87a.749.749 0 0 1 .944.252ZM9.436 3.92h-.001l-4.97 3.39.942 1.63 5.42-2.61Zm3.091-2.108h.001l-1.85 1.26 1.505 2.605 2.016-.97a.247.247 0 0 0 .13-.151.247.247 0 0 0-.022-.199l-1.422-2.464a.253.253 0 0 0-.161-.119.254.254 0 0 0-.197.038ZM1.756 9.157a.25.25 0 0 0-.075.33l.447.775a.25.25 0 0 0 .325.1l1.598-.769-.83-1.436-1.465 1Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Explore
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;MARKETPLACE&quot;,&quot;label&quot;:null}" id="item-974d3f81-f572-45ad-92b2-6a69d2200e78" href="https://github.com/marketplace" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gift">
    <path d="M2 2.75A2.75 2.75 0 0 1 4.75 0c.983 0 1.873.42 2.57 1.232.268.318.497.668.68 1.042.183-.375.411-.725.68-1.044C9.376.42 10.266 0 11.25 0a2.75 2.75 0 0 1 2.45 4h.55c.966 0 1.75.784 1.75 1.75v2c0 .698-.409 1.301-1 1.582v4.918A1.75 1.75 0 0 1 13.25 16H2.75A1.75 1.75 0 0 1 1 14.25V9.332C.409 9.05 0 8.448 0 7.75v-2C0 4.784.784 4 1.75 4h.55c-.192-.375-.3-.8-.3-1.25ZM7.25 9.5H2.5v4.75c0 .138.112.25.25.25h4.5Zm1.5 0v5h4.5a.25.25 0 0 0 .25-.25V9.5Zm0-4V8h5.5a.25.25 0 0 0 .25-.25v-2a.25.25 0 0 0-.25-.25Zm-7 0a.25.25 0 0 0-.25.25v2c0 .138.112.25.25.25h5.5V5.5h-5.5Zm3-4a1.25 1.25 0 0 0 0 2.5h2.309c-.233-.818-.542-1.401-.878-1.793-.43-.502-.915-.707-1.431-.707ZM8.941 4h2.309a1.25 1.25 0 0 0 0-2.5c-.516 0-1 .205-1.43.707-.337.392-.646.975-.879 1.793Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Marketplace
</span>      
</a>
  
</li>

</ul>  </nav-list>
</nav>

        <div data-view-component="true" class="my-3 d-flex flex-justify-center height-full">
          <span data-view-component="true">
  <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>
</div>
</div>
      <div data-view-component="true" class="flex-1"></div>


      <div data-view-component="true" class="px-2">      <p class="color-fg-subtle text-small text-light">© 2025 GitHub, Inc.</p>

      <div data-view-component="true" class="d-flex flex-wrap text-small text-light">
          <a target="_blank" href="https://github.com/about" data-view-component="true" class="Link mr-2">About</a>
          <a target="_blank" href="https://github.blog/" data-view-component="true" class="Link mr-2">Blog</a>
          <a target="_blank" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link mr-2">Terms</a>
          <a target="_blank" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link mr-2">Privacy</a>
          <a target="_blank" href="https://github.com/security" data-view-component="true" class="Link mr-2">Security</a>
          <a target="_blank" href="https://www.githubstatus.com/" data-view-component="true" class="Link mr-3">Status</a>

</div></div>
</div>
      </scrollable-region>
      
</dialog></dialog-helper>

</include-fragment></deferred-side-panel>
        </div>

        <a class="AppHeader-logo ml-1 " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-turbo="false" data-analytics-event="{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;}">
          <svg height="32" aria-hidden="true" viewBox="0 0 24 24" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle">
    <path d="M12 1C5.9225 1 1 5.9225 1 12C1 16.8675 4.14875 20.9787 8.52125 22.4362C9.07125 22.5325 9.2775 22.2025 9.2775 21.9137C9.2775 21.6525 9.26375 20.7862 9.26375 19.865C6.5 20.3737 5.785 19.1912 5.565 18.5725C5.44125 18.2562 4.905 17.28 4.4375 17.0187C4.0525 16.8125 3.5025 16.3037 4.42375 16.29C5.29 16.2762 5.90875 17.0875 6.115 17.4175C7.105 19.0812 8.68625 18.6137 9.31875 18.325C9.415 17.61 9.70375 17.1287 10.02 16.8537C7.5725 16.5787 5.015 15.63 5.015 11.4225C5.015 10.2262 5.44125 9.23625 6.1425 8.46625C6.0325 8.19125 5.6475 7.06375 6.2525 5.55125C6.2525 5.55125 7.17375 5.2625 9.2775 6.67875C10.1575 6.43125 11.0925 6.3075 12.0275 6.3075C12.9625 6.3075 13.8975 6.43125 14.7775 6.67875C16.8813 5.24875 17.8025 5.55125 17.8025 5.55125C18.4075 7.06375 18.0225 8.19125 17.9125 8.46625C18.6138 9.23625 19.04 10.2125 19.04 11.4225C19.04 15.6437 16.4688 16.5787 14.0213 16.8537C14.42 17.1975 14.7638 17.8575 14.7638 18.8887C14.7638 20.36 14.75 21.5425 14.75 21.9137C14.75 22.2025 14.9563 22.5462 15.5063 22.4362C19.8513 20.9787 23 16.8537 23 12C23 5.9225 18.0775 1 12 1Z"></path>
</svg>
        </a>

          <context-region-observer class="AppHeader-context" data-catalyst="">
  <div class="AppHeader-context-compact" data-target="context-region-observer.compactContainer">
        <a class="AppHeader-context-compact-trigger no-underline" href="https://github.com/copilot" aria-current="page" data-target="context-region-observer.compactContextRegion" data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;compact_context_region_dialog_button&quot;,&quot;label&quot;:&quot;Copilot&quot;}">
      <strong class="AppHeader-context-compact-mainItem d-flex flex-items-center Truncate">
  <span class="Truncate-text ">Copilot</span>

</strong>

    </a>

  </div>

  <div class="AppHeader-context-full">
    <nav role="navigation" aria-label="Page context">
      
<context-region role="list" data-action="context-region-changed:context-region-observer#crumbsChanged" data-catalyst="">
    
<context-region-crumb data-catalyst="" data-label="Copilot" data-href="/copilot" role="listitem" data-targets="context-region.crumbs">
        <a class="AppHeader-context-item" data-target="context-region-crumb.linkElement" href="https://github.com/copilot">
          <span class="AppHeader-context-item-label" data-target="context-region-crumb.labelElement"> Copilot </span>
        </a>
      <context-region-divider data-target="context-region-crumb.dividerElement" data-catalyst="">
        <span class="AppHeader-context-item-separator">
          <span class="sr-only">/</span>
          <svg width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg" aria-hidden="true">
            <path d="M10.956 1.27994L6.06418 14.7201L5 14.7201L9.89181 1.27994L10.956 1.27994Z" fill="currentcolor"></path>
          </svg>
        </span>
      </context-region-divider></context-region-crumb></context-region>

    </nav>
  </div>
</context-region-observer>

      </div>
      <div class="AppHeader-globalBar-end">
          <div class="AppHeader-search">
              


<qbsearch-input class="search-input" data-scope="" data-custom-scopes-path="/search/custom_scopes" data-delete-custom-scopes-csrf="ZcXeqGeAxX4-Jyuv_wdTQjc3YuOJevSkj_W11OxctqMW9ia6EXkkU9viA8ED7NZvnYufTePH27V6nmpLUneGXw" data-max-custom-scopes="10" data-header-redesign-enabled="true" data-initial-value="" data-blackbird-suggestions-path="/search/suggestions" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" data-current-repository="" data-current-org="" data-current-owner="" data-logged-in="true" data-copilot-chat-enabled="true" data-nl-search-enabled="false" data-catalyst="">
  <div class="search-input-container search-with-dialog position-relative d-flex flex-row flex-items-center height-auto color-bg-transparent border-0 color-fg-subtle mx-0" data-action="click:qbsearch-input#searchInputContainerClicked">
      
            <button type="button" data-action="click:qbsearch-input#handleExpand" class="AppHeader-button AppHeader-search-whenNarrow" aria-label="Search or jump to…" aria-expanded="false" aria-haspopup="dialog">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </button>


<div class="AppHeader-search-whenRegular">
  <div class="AppHeader-search-wrap AppHeader-search-wrap--hasTrailing">
    <div class="AppHeader-search-control AppHeader-search-control-overflow">
      <label for="AppHeader-searchInput" aria-label="Search or jump to…" class="AppHeader-search-visual--leading">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
      </label>

                <button type="button" data-target="qbsearch-input.inputButton" data-action="click:qbsearch-input#handleExpand" class="AppHeader-searchButton form-control input-contrast text-left color-fg-subtle no-wrap placeholder" data-hotkey="s,/" data-analytics-event="{&quot;location&quot;:&quot;navbar&quot;,&quot;action&quot;:&quot;searchbar&quot;,&quot;context&quot;:&quot;global&quot;,&quot;tag&quot;:&quot;input&quot;,&quot;label&quot;:&quot;searchbar_input_global_navbar&quot;}" aria-describedby="search-error-message-flash">
            <div class="overflow-hidden">
              <span id="qb-input-query" data-target="qbsearch-input.inputButtonText">
                  Type <kbd class="AppHeader-search-kbd">/</kbd> to search
              </span>
            </div>
          </button>

    </div>


  </div>
</div>

    <input type="hidden" name="type" class="js-site-search-type-field">

    
<div class="Overlay--hidden " data-modal-dialog-overlay="">
  <modal-dialog data-action="close:qbsearch-input#handleClose cancel:qbsearch-input#handleClose" data-target="qbsearch-input.searchSuggestionsDialog" role="dialog" id="search-suggestions-dialog" aria-modal="true" aria-labelledby="search-suggestions-dialog-header" data-view-component="true" class="Overlay Overlay--width-medium Overlay--height-auto">
      <h1 id="search-suggestions-dialog-header" class="sr-only">Search code, repositories, users, issues, pull requests...</h1>
    <div class="Overlay-body Overlay-body--paddingNone">
      
          <div data-view-component="true">        <div class="search-suggestions position-absolute width-full color-shadow-large border color-fg-default color-bg-default overflow-hidden d-flex flex-column query-builder-container" style="border-radius: 12px;" data-target="qbsearch-input.queryBuilderContainer" hidden="">
          <!-- '"` --><!-- </textarea></xmp> --><form id="query-builder-test-form" action="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54" accept-charset="UTF-8" method="get">
  <query-builder data-target="qbsearch-input.queryBuilder" id="query-builder-query-builder-test" data-filter-key=":" data-view-component="true" class="QueryBuilder search-query-builder" data-min-width="300" data-catalyst="">
    <div class="FormControl FormControl--fullWidth">
      <label id="query-builder-test-label" for="query-builder-test" class="FormControl-label sr-only">
        Search
      </label>
      <div class="QueryBuilder-StyledInput width-fit " data-target="query-builder.styledInput">
          <span id="query-builder-test-leadingvisual-wrap" class="FormControl-input-leadingVisualWrap QueryBuilder-leadingVisualWrap">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search FormControl-input-leadingVisual">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </span>
        <div data-target="query-builder.styledInputContainer" class="QueryBuilder-StyledInputContainer">
          <div aria-hidden="true" class="QueryBuilder-StyledInputContent" data-target="query-builder.styledInputContent"></div>
          <div class="QueryBuilder-InputWrapper">
            <div aria-hidden="true" class="QueryBuilder-Sizer" data-target="query-builder.sizer"><span></span></div>
            <input id="query-builder-test" name="query-builder-test" value="" autocomplete="off" type="text" role="combobox" spellcheck="false" aria-expanded="false" aria-describedby="validation-b90be704-1962-44bb-b767-ed4c1e92614f" data-target="query-builder.input" data-action="
          input:query-builder#inputChange
          blur:query-builder#inputBlur
          keydown:query-builder#inputKeydown
          focus:query-builder#inputFocus
        " data-view-component="true" class="FormControl-input QueryBuilder-Input FormControl-medium" aria-controls="query-builder-test-results" aria-autocomplete="list" aria-haspopup="listbox" style="width: 300px;">
          </div>
        </div>
          <span class="sr-only" id="query-builder-test-clear">Clear</span>
          <button role="button" id="query-builder-test-clear-button" aria-labelledby="query-builder-test-clear query-builder-test-label" data-target="query-builder.clearButton" data-action="
                click:query-builder#clear
                focus:query-builder#clearButtonFocus
                blur:query-builder#clearButtonBlur
              " variant="small" hidden="" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium mr-1 px-2 py-0 d-flex flex-items-center rounded-1 color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x-circle-fill Button-visual">
    <path d="M2.343 13.657A8 8 0 1 1 13.658 2.343 8 8 0 0 1 2.343 13.657ZM6.03 4.97a.751.751 0 0 0-1.042.018.751.751 0 0 0-.018 1.042L6.94 8 4.97 9.97a.749.749 0 0 0 .326 1.275.749.749 0 0 0 .734-.215L8 9.06l1.97 1.97a.749.749 0 0 0 1.275-.326.749.749 0 0 0-.215-.734L9.06 8l1.97-1.97a.749.749 0 0 0-.326-1.275.749.749 0 0 0-.734.215L8 6.94Z"></path>
</svg>
</button>

      </div>
      <template id="search-icon"></template>

<template id="code-icon"></template>

<template id="file-code-icon"></template>

<template id="history-icon"></template>

<template id="repo-icon"></template>

<template id="bookmark-icon"></template>

<template id="plus-circle-icon"></template>

<template id="circle-icon"></template>

<template id="trash-icon"></template>

<template id="team-icon"></template>

<template id="project-icon"></template>

<template id="pencil-icon"></template>

<template id="copilot-icon"></template>

<template id="copilot-error-icon"></template>

<template id="workflow-icon"></template>

<template id="book-icon"></template>

<template id="code-review-icon"></template>

<template id="codespaces-icon"></template>

<template id="comment-icon"></template>

<template id="comment-discussion-icon"></template>

<template id="organization-icon"></template>

<template id="rocket-icon"></template>

<template id="shield-check-icon"></template>

<template id="heart-icon"></template>

<template id="server-icon"></template>

<template id="globe-icon"></template>

<template id="issue-opened-icon"></template>

<template id="device-mobile-icon"></template>

<template id="package-icon"></template>

<template id="credit-card-icon"></template>

<template id="play-icon"></template>

<template id="gift-icon"></template>

<template id="code-square-icon"></template>

<template id="device-desktop-icon"></template>

        <div class="position-relative">
                <ul role="listbox" class="ActionListWrap QueryBuilder-ListWrap" aria-label="Suggestions" data-action="
                    combobox-commit:query-builder#comboboxCommit
                    mousedown:query-builder#resultsMousedown
                  " data-target="query-builder.resultsList" data-persist-list="false" id="query-builder-test-results"></ul>
        </div>
      <div class="FormControl-inlineValidation" id="validation-b90be704-1962-44bb-b767-ed4c1e92614f" hidden="hidden">
        <span class="FormControl-inlineValidation--visual">
          <svg aria-hidden="true" height="12" viewBox="0 0 12 12" version="1.1" width="12" data-view-component="true" class="octicon octicon-alert-fill">
    <path d="M4.855.708c.5-.896 1.79-.896 2.29 0l4.675 8.351a1.312 1.312 0 0 1-1.146 1.954H1.33A1.313 1.313 0 0 1 .183 9.058ZM7 7V3H5v4Zm-1 3a1 1 0 1 0 0-2 1 1 0 0 0 0 2Z"></path>
</svg>
        </span>
        <span></span>
</div>    </div>
    <div data-target="query-builder.screenReaderFeedback" aria-live="polite" aria-atomic="true" class="sr-only">0 suggestions.</div>
</query-builder></form>
          <div class="d-flex flex-row color-fg-muted px-3 text-small color-bg-default search-feedback-prompt">
            <a target="_blank" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax" data-view-component="true" class="Link color-fg-accent text-normal ml-2">Search syntax tips</a>            <div class="d-flex flex-1"></div>
              <button data-action="click:qbsearch-input#showFeedbackDialog" type="button" data-view-component="true" class="Button--link Button--medium Button color-fg-accent text-normal ml-2">  <span class="Button-content">
    <span class="Button-label">Give feedback</span>
  </span>
</button>
          </div>
        </div>
</div>

    </div>
</modal-dialog></div>
  </div>
  <div data-action="click:qbsearch-input#retract" class="dark-backdrop position-fixed" hidden="" data-target="qbsearch-input.darkBackdrop"></div>
  <div class="color-fg-default">
    
<dialog-helper>
  <dialog data-target="qbsearch-input.feedbackDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="feedback-dialog" aria-modal="true" aria-labelledby="feedback-dialog-title" aria-describedby="feedback-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade Overlay--disableScroll">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="feedback-dialog-title">
        Provide feedback
      </h1>
        
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="feedback-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="feedback-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <!-- '"` --><!-- </textarea></xmp> --><form id="code-search-feedback-form" data-turbo="false" action="https://github.com/search/feedback" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="0Qpa2hA0xuJRYVxsIPbOcx42bkHSJ5FfahtLwcJ2J3RTrnm6rxorMYR7NYT9xh_2SJkdvjBtzMP1geknFEI_qw">
          <p>We read every piece of feedback, and take your input very seriously.</p>
          <textarea name="feedback" class="form-control width-full mb-2" style="height: 120px" id="feedback"></textarea>
          <input name="include_email" id="include_email" aria-label="Include my email address so I can be contacted" class="form-control mr-2" type="checkbox">
          <label for="include_email" style="font-weight: normal">Include my email address so I can be contacted</label>
</form></div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd">          <button data-close-dialog-id="feedback-dialog" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="code-search-feedback-form" data-action="click:qbsearch-input#submitFeedback" type="submit" data-view-component="true" class="btn-primary btn">    Submit feedback
</button>
</div>
</dialog></dialog-helper>

    <custom-scopes data-target="qbsearch-input.customScopesManager" data-catalyst="">
    
<dialog-helper>
  <dialog data-target="custom-scopes.customScopesModalDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="custom-scopes-dialog" aria-modal="true" aria-labelledby="custom-scopes-dialog-title" aria-describedby="custom-scopes-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade Overlay--disableScroll">
    <div data-view-component="true" class="Overlay-header Overlay-header--divided">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="custom-scopes-dialog-title">
        Saved searches
      </h1>
        <h2 id="custom-scopes-dialog-description" class="Overlay-description">Use saved searches to filter your results more quickly</h2>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="custom-scopes-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="custom-scopes-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

        <div hidden="" class="create-custom-scope-form" data-target="custom-scopes.createCustomScopeForm">
        <!-- '"` --><!-- </textarea></xmp> --><form id="custom-scopes-dialog-form" data-turbo="false" action="https://github.com/search/custom_scopes" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="YpIZ3L2eiQmFt-Hj8dtMlfItbu_wZpNFI93Qmee6wQboCDsvBxknIdQPSeHSBX_ZZKXtVoyVHByAsCis2aON2A">
          <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

          <input type="hidden" id="custom_scope_id" name="custom_scope_id" data-target="custom-scopes.customScopesIdField">

          <div class="form-group">
            <label for="custom_scope_name">Name</label>
            <auto-check src="/search/custom_scopes/check_name" required="">
              <input type="text" name="custom_scope_name" id="custom_scope_name" data-target="custom-scopes.customScopesNameField" class="form-control" autocomplete="off" placeholder="github-ruby" required="" maxlength="50" spellcheck="false">
              <input type="hidden" value="Vsjc4GHMrumDfIKh0bGuoCb5ixcumDZEuBjfhvjtOWuuiAp8XTha0shrpynXY1czatqM4v2kbtVkw9HDaUWYuA" data-csrf="true">
            </auto-check>
          </div>

          <div class="form-group">
            <label for="custom_scope_query">Query</label>
            <input type="text" name="custom_scope_query" id="custom_scope_query" data-target="custom-scopes.customScopesQueryField" class="form-control" autocomplete="off" placeholder="(repo:mona/a OR repo:mona/b) AND lang:python" required="" maxlength="500">
          </div>

          <p class="text-small color-fg-muted">
            To see all available qualifiers, see our <a class="Link--inTextBlock" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax">documentation</a>.
          </p>
</form>        </div>

        <div data-target="custom-scopes.manageCustomScopesForm">
          <div data-target="custom-scopes.list"></div>
        </div>

</div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd Overlay-footer--divided">          <button data-action="click:custom-scopes#customScopesCancel" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="custom-scopes-dialog-form" data-action="click:custom-scopes#customScopesSubmit" data-target="custom-scopes.customScopesSubmitButton" type="submit" data-view-component="true" class="btn-primary btn">    Create saved search
</button>
</div>
</dialog></dialog-helper>
    </custom-scopes>
  </div>
</qbsearch-input>  <input type="hidden" value="90CZxQOgvZhXCSOeuwGXC14r6h7WMLnvbUS5ViUSJfMIfyI2EvV6Jxqx05ZYbL8qxqB5pDJ_HhRTZ-QwT4BjZQ" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">


          </div>

        

        <div class="AppHeader-actions position-relative">
             <react-partial-anchor data-catalyst="">
      <button id="global-create-menu-anchor" aria-label="Create something new" data-target="react-partial-anchor.anchor" type="button" data-view-component="true" class="AppHeader-button global-create-button Button--secondary Button--medium Button width-auto color-fg-muted" aria-describedby="tooltip-2e1194c2-c157-4729-bd6c-886210086f78" aria-expanded="false" aria-haspopup="true">  <span class="Button-content">
      <span class="Button-visual Button-leadingVisual">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-plus">
    <path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path>
</svg>
      </span>
    <span class="Button-label"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg></span>
  </span>
</button><tool-tip id="tooltip-2e1194c2-c157-4729-bd6c-886210086f78" for="global-create-menu-anchor" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="sr-only position-absolute" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Create new...</tool-tip>

      
    
        <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/ui_packages_promise-with-resolvers-polyfill_promise-with-resolvers-polyfill_ts-ui_packages_re-8d43b0-38904ba80bb3.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/global-create-menu-d2bf404bb248.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-react.6b23a886449aa3fc98d8.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/global-create-menu.b1ee6a6bae56a89148b1.module.css">

<react-partial partial-name="global-create-menu" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"createRepo":true,"importRepo":true,"codespaces":true,"spark":false,"gist":true,"createOrg":true,"createProject":true,"createProjectUrl":"/saulolv?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":null,"repo":null}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r13:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

      </react-partial-anchor>


            <a href="https://github.com/issues" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-1372f6d9-8702-4d2c-8b8c-43a77aeb6a3b" aria-labelledby="tooltip-a77714c5-b94f-4cef-abe6-54c46a5872e1" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened Button-visual">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
</a><tool-tip id="tooltip-a77714c5-b94f-4cef-abe6-54c46a5872e1" for="icon-button-1372f6d9-8702-4d2c-8b8c-43a77aeb6a3b" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Your issues</tool-tip>

            <a href="https://github.com/pulls" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-a839c7ef-1e81-44f0-9092-9077f7f172d7" aria-labelledby="tooltip-076098b0-31b6-4106-992e-1e00f318b117" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request Button-visual">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
</a><tool-tip id="tooltip-076098b0-31b6-4106-992e-1e00f318b117" for="icon-button-a839c7ef-1e81-44f0-9092-9077f7f172d7" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Your pull requests</tool-tip>

        </div>

          <notification-indicator data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6NzQ2Nzk0ODgiLCJ0IjoxNzQ2NTMyNzA1fQ==--0e1ded1cab742ba85bd4569c6147ece183631ecdfad64200c6f8253d545934cd" data-indicator-mode="global" data-tooltip-global="You have unread notifications" data-tooltip-unavailable="Notifications are unavailable at the moment." data-tooltip-none="You have no unread notifications" data-header-redesign-enabled="true" data-fetch-indicator-src="/notifications/indicator" data-fetch-indicator-enabled="true" data-view-component="true" class="js-socket-channel" data-fetch-retry-delay-time="500" data-catalyst="">
    <a id="AppHeader-notifications-button" href="https://github.com/notifications" aria-labelledby="notification-indicator-tooltip" data-hotkey="g n" data-target="notification-indicator.link" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;NOTIFICATIONS_HEADER&quot;,&quot;label&quot;:&quot;icon:unread&quot;}" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted AppHeader-button--hasIndicator">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-inbox Button-visual">
    <path d="M2.8 2.06A1.75 1.75 0 0 1 4.41 1h7.18c.7 0 1.333.417 1.61 1.06l2.74 6.395c.04.093.06.194.06.295v4.5A1.75 1.75 0 0 1 14.25 15H1.75A1.75 1.75 0 0 1 0 13.25v-4.5c0-.101.02-.202.06-.295Zm1.61.44a.25.25 0 0 0-.23.152L1.887 8H4.75a.75.75 0 0 1 .6.3L6.625 10h2.75l1.275-1.7a.75.75 0 0 1 .6-.3h2.863L11.82 2.652a.25.25 0 0 0-.23-.152Zm10.09 7h-2.875l-1.275 1.7a.75.75 0 0 1-.6.3h-3.5a.75.75 0 0 1-.6-.3L4.375 9.5H1.5v3.75c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25Z"></path>
</svg>
</a>

    <tool-tip id="notification-indicator-tooltip" data-target="notification-indicator.tooltip" for="AppHeader-notifications-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>You have unread notifications</tool-tip>
</notification-indicator>

        <div class="AppHeader-user">
          <deferred-side-panel data-url="/_side-panels/user" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment" data-nonce="eb095625-7c5b-293e-3895-6524fe486473" data-view-component="true"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
    <react-partial-anchor data-catalyst="">
  <button data-target="react-partial-anchor.anchor" data-login="saulolv" aria-label="Open user navigation menu" type="button" data-view-component="true" class="Button--invisible Button--medium Button Button--invisible-noVisuals color-bg-transparent p-0" aria-expanded="false" aria-haspopup="true">  <span class="Button-content">
    <span class="Button-label"><img src="./controller_arduino_files/74679488" alt="" size="32" height="32" width="32" data-view-component="true" class="avatar circle"></span>
  </span>
</button>
  

    <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./controller_arduino_files/global-user-nav-drawer-6a1f0052a17f.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/primer-react.6b23a886449aa3fc98d8.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./controller_arduino_files/global-user-nav-drawer.eeb7d39a21c5b49acbe0.module.css">

<react-partial partial-name="global-user-nav-drawer" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"owner":{"login":"saulolv","name":"Saulo","avatarUrl":"https://avatars.githubusercontent.com/u/74679488?v=4"},"drawerId":"global-user-nav-drawer","lazyLoadItemDataFetchUrl":"/_side-panels/user.json","canAddAccount":true,"addAccountPath":"/login?add_account=1\u0026return_to=https%3A%2F%2Fgithub.com%2Fcopilot","switchAccountPath":"/switch_account","loginAccountPath":"/login?add_account=1","projectsPath":"/saulolv?tab=projects","gistsUrl":"https://gist.github.com/mine","docsUrl":"https://docs.github.com","yourEnterpriseUrl":null,"enterpriseSettingsUrl":null,"supportUrl":"https://support.github.com","showAccountSwitcher":true,"showCopilot":true,"showEnterprises":true,"showEnterprise":false,"showGists":true,"showOrganizations":true,"showSponsors":true,"showUpgrade":true,"showFeaturesPreviews":true,"showEnterpriseSettings":false,"createMenuProps":{"createRepo":true,"importRepo":true,"codespaces":true,"spark":false,"gist":true,"createOrg":true,"createProject":true,"createProjectUrl":"/saulolv?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":null,"repo":null}}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r16:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

  </react-partial-anchor>

</include-fragment></deferred-side-panel>
        </div>

        <div class="position-absolute mt-2">
            
<site-header-logged-in-user-menu data-catalyst="">

</site-header-logged-in-user-menu>

        </div>
      </div>
    </div>


</header>


      <div hidden="hidden" data-view-component="true" class="js-stale-session-flash stale-session-flash flash flash-warn flash-full">
  
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a class="Link--inTextBlock" href="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a class="Link--inTextBlock" href="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-switched" hidden="">You switched accounts on another tab or window. <a class="Link--inTextBlock" href="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54">Reload</a> to refresh your session.</span>

    <button id="icon-button-bc41c07d-4a54-48bd-bfdc-e073cdd2eba1" aria-labelledby="tooltip-1fa8d699-11cf-41d7-8e98-9f9f7b31b71c" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium flash-close js-flash-close">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x Button-visual">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
</button><tool-tip id="tooltip-1fa8d699-11cf-41d7-8e98-9f9f7b31b71c" for="icon-button-bc41c07d-4a54-48bd-bfdc-e073cdd2eba1" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Dismiss alert</tool-tip>


  
</div>
          
    </div>

  <div id="start-of-content" class="show-on-focus"></div>








    <div id="js-flash-container" class="flash-container" data-turbo-replace="">




  <template class="js-flash-template"></template>
</div>


    
  <notification-shelf-watcher data-base-url="https://github.com/notifications/beta/shelf" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6NzQ2Nzk0ODgiLCJ0IjoxNzQ2NTMyNzA1fQ==--0e1ded1cab742ba85bd4569c6147ece183631ecdfad64200c6f8253d545934cd" data-view-component="true" class="js-socket-channel" data-refresh-delay="500" data-catalyst="" data-throttle-delay="5000"></notification-shelf-watcher>
  <div hidden="" data-initial="" data-target="notification-shelf-watcher.placeholder"></div>






  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="" data-project-hovercards-enabled="">
      <main>
        








<react-app app-name="copilot-immersive-v1" initial-path="/copilot" style="display: block; min-height: calc(100vh - 64px);" data-attempted-ssr="false" data-ssr="false" data-lazy="false" data-alternate="false" data-data-router-enabled="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-app.embeddedData">{"payload":{},"title":"New conversation · GitHub Copilot","appPayload":{"copilotChatSettingEnabled":true,"searchWorkerFilePath":"/assets-cdn/worker/find-file-worker-7d7eb7c71814.js","requestedTopic":null,"ssoOrganizations":[],"copilotUpsellBannerDismissed":false,"icebreakers":[{"type":"functional","data":[{"id":"open-issues-in-react","message":"Get a list of the latest open issues in the facebook/react repository, including all their labels.","titleHtml":"Open issues in \u003cspan class=\"fgColor-muted\"\u003efacebook/react\u003c/span\u003e","icon":"issue-opened","color":"var(--display-green-fgColor)"},{"id":"pulls-in-vscode","message":"Retrieve pull requests in microsoft/vscode.","titleHtml":"Pull requests in \u003cspan class=\"fgColor-muted\"\u003emicrosoft/vscode\u003c/span\u003e","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"commits-in-linux","message":"Show recent commits in torvalds/linux.","titleHtml":"Recent commits in \u003cspan class=\"fgColor-muted\"\u003etorvalds/linux\u003c/span\u003e","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"my-latest-issues","message":"Find the five latest issues assigned to me.","titleHtml":"Find issues assigned to me","icon":"issue-opened","color":"var(--display-green-fgColor)"},{"id":"latest-node-release","message":"Fetch the latest release of nodejs/node and highlight the changes.","titleHtml":"Latest \u003cspan class=\"fgColor-muted\"\u003enodejs/node\u003c/span\u003e release","icon":"tag","color":"var(--display-purple-fgColor)"},{"id":"create-profile-readme","message":"Create a profile README for $$USERNAME$$.","titleHtml":"Create a profile README for me","icon":"rocket","color":"var(--display-pink-fgColor)"},{"id":"bugs-in-primer","message":"Show recent bugs in primer/react.","titleHtml":"Recent bugs in \u003cspan class=\"fgColor-muted\"\u003eprimer/react\u003c/span\u003e","icon":"bug","color":"var(--display-purple-fgColor)"},{"id":"my-open-pulls","message":"Find my open pull requests.","titleHtml":"My open pull requests","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"generate-html-calculator","message":"Generate a simple calculator using HTML, CSS, and JavaScript.","titleHtml":"Generate an HTML/JS calculator","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-strong-password-endpoint","message":"Generate a Python endpoint for signing up that only allows strong passwords.","titleHtml":"Python password endpoint","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"rails-auth-endpoint","message":"Generate a Rails endpoint for authenticating with email and password.","titleHtml":"Rails authentication endpoint","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-pandas-data-analysis","message":"Write a Python script that analyzes a dataset using Pandas.","titleHtml":"Python Panda data analysis","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-restful-basics","message":"Explain REST architectural principles and how to implement RESTful web services.","titleHtml":"Explain RESTful basics","icon":"book","color":"var(--display-blue-fgColor)"},{"id":"compare-http-post-vs-put","message":"Compare HTTP POST and PUT methods, explaining their proper usage in RESTful APIs.","titleHtml":"Compare HTTP POST vs PUT","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-json-content-types","message":"Explain proper JSON MIME types and content-type headers for different scenarios and platforms.","titleHtml":"Explain JSON content types","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-dates-and-times","message":"Explain strategies for accurately comparing dates and times across different timezones and formats.","titleHtml":"Compare dates and times","icon":"clock","color":"var(--display-blue-fgColor)"},{"id":"compare-json-comment-options","message":"Explain JSON syntax limitations regarding comments and alternative approaches for documentation.","titleHtml":"Compare JSON comment options","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-stack-and-heap-memory","message":"Compare stack and heap memory allocation, their characteristics, and use cases in programming.","titleHtml":"Explain stack and heap memory","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-api-version-strategies","message":"Explain different approaches to API versioning including URL, header, and content negotiation.","titleHtml":"Compare API version strategies","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-fix-git-submodules","message":"Troubleshoot and resolve issues with uninitialized Git submodules, explaining initialization commands and common pitfalls.","titleHtml":"How to fix Git submodules","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"compare-git-fork-and-clone","message":"Compare and contrast Git clones versus forks, explaining their technical differences, use cases, and relationship to original repositories.","titleHtml":"Compare Git fork and clone","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"explain-pull-request-basics","message":"Walk through the complete process of creating, submitting, and managing pull requests on GitHub, from forking to merging.","titleHtml":"Explain pull request basics","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"git-history-cleanup-guide","message":"Provide a complete guide to permanently removing files from Git history, including BFG and filter-repo approaches with safety considerations.","titleHtml":"Git history cleanup guide","icon":"trash","color":"var(--display-blue-fgColor)"},{"id":"git-credential-management","message":"Explain the different methods for caching HTTPS credentials when pushing Git commits, including credential helpers, personal access tokens, and their security implications.","titleHtml":"Git credential management","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-origin-and-upstream","message":"Explain the conceptual and functional differences between origin and upstream remote repositories in Git, with examples of how they're used in workflow.","titleHtml":"Compare origin and upstream","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"how-to-download-github-folders","message":"Describe various methods to download specific folders from GitHub repositories without cloning the entire project.","titleHtml":"How to download GitHub folders","icon":"download","color":"var(--display-blue-fgColor)"},{"id":"git-path-configurations","message":"Provide cross-platform instructions for properly configuring GitHub Desktop to include Git in the system PATH, enabling command-line Git operations alongside the GUI client on Windows, macOS, and Linux systems.","titleHtml":"Git PATH configurations","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-fork-sync-process","message":"Provide step-by-step instructions for synchronizing a forked GitHub repository with its original upstream repository, including both command line methods and GitHub interface options.","titleHtml":"Explain fork sync process","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"list-git-history-danger-zones","message":"List and explain potentially dangerous Git commands that can alter repository history, with guidelines on when and how to use them safely.","titleHtml":"List Git history danger zones","icon":"history","color":"var(--display-blue-fgColor)"},{"id":"explain-cli-repository-setup","message":"Explain methods for creating GitHub repositories entirely from the command line using GitHub CLI, API tokens, and other headless approaches.","titleHtml":"Explain CLI repository setup","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-migrate-git-remote","message":"Detail the process of migrating an existing Git repository to a different remote server while preserving history, branches, and tags, with command examples.","titleHtml":"How to migrate Git remote","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"compare-git-and-github","message":"Explain the fundamental differences between Git (the distributed version control system) and GitHub (the web-based hosting service), clarifying their relationship, unique features, and how they complement each other in modern development workflows.","titleHtml":"Compare Git and GitHub","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"learn-git-multi-remote-setup","message":"Explain the process of configuring a Git repository to push commits simultaneously to multiple remote repositories, including setting up multiple remotes and creating automated push workflows.","titleHtml":"Learn Git multi remote setup","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"convert-single-branch-clone","message":"Explain methods for converting a single-branch Git clone into a full repository clone with access to all remote branches, including fetch commands and configuration changes.","titleHtml":"Convert single branch clone","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"multiple-github-account-guide","message":"Provide step-by-step instructions for configuring and managing multiple GitHub accounts on a single computer, including SSH key setup and Git configuration.","titleHtml":"Multiple GitHub account guide","icon":"mark-github","color":"var(--display-purple-fgColor)"},{"id":"explore-java-map-iterations","message":"Compare different methods for efficiently iterating over Map entries in Java.","titleHtml":"Explore Java Map Iterations","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"understand-java-access-levels","message":"Explain differences between Java's access modifiers with practical examples.","titleHtml":"Understand Java access levels","icon":"lock","color":"var(--display-purple-fgColor)"},{"id":"compare-java-password-types","message":"Compare char[] vs String for password storage in Java with security implications.","titleHtml":"Compare Java password types","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-java-hashmap-hashtable","message":"Compare HashMap and Hashtable in Java, explaining their key differences including thread safety, null handling, synchronization overhead, and performance characteristics with practical examples.","titleHtml":"Compare Java HashMap/Hashtable","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-array-sorting-perf","message":"Explain how CPU branch prediction and cache optimization affect Java array processing performance, demonstrating the speed difference between sorted and unsorted arrays with examples.","titleHtml":"Learn Java array sorting perf","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-operator-casting-basics","message":"Explain why compound assignment operators in Java don't require explicit casting.","titleHtml":"Java operator casting basics","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-java-char-for-password","message":"Explain why char[] is preferred over String for passwords in Java, including security implications.","titleHtml":"Explain Java char[] for password","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-java-pass-by-value-ref","message":"Explain whether Java is pass-by-reference or pass-by-value with examples.","titleHtml":"Compare Java pass by value/ref","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-import-patterns","message":"Explain different approaches to importing JavaScript files, including modern ES6 modules.","titleHtml":"Learn JS import patterns","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-js-array-loops","message":"Compare different methods for iterating over arrays in JavaScript with use cases.","titleHtml":"Explore JS array loops","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"understand-js-strict-mode-usage","message":"Explain the purpose and benefits of strict mode in JavaScript, including common pitfalls it prevents.","titleHtml":"Understand JS strict mode usage","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-closures","message":"Explain JavaScript closure concept with practical examples showing scope and data privacy.","titleHtml":"Learn JS closures","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-js-equality-operators","message":"Compare the behavior and use cases of == and === operators in JavaScript, explaining type coercion and best practices.","titleHtml":"Compare JS equality operators","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-sleep-function","message":"Explain how to implement delay/sleep functionality in JavaScript using promises and async/await.","titleHtml":"Learn JS sleep function","icon":"clock","color":"var(--display-blue-fgColor)"},{"id":"compare-js-substring-checks","message":"Compare methods for checking substrings in JavaScript strings, with performance considerations.","titleHtml":"Compare JS substring checks","icon":"search","color":"var(--display-blue-fgColor)"},{"id":"how-to-handle-js-async-response","message":"Explain handling asynchronous operations in JavaScript using promises, async/await, and callbacks.","titleHtml":"How to handle JS async response","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-slice-syntax","message":"Explain Python's list slicing syntax, including step values and negative indices.","titleHtml":"Python slice syntax","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-flatten-lists-in-python","message":"Compare methods for flattening nested lists in Python, from simple to complex cases.","titleHtml":"How to flatten lists in Python","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-main-check","message":"Explain the purpose and usage of if name == \"main\" in Python, including module behavior and best practices.","titleHtml":"Learn Python main check","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-env-variables-guide","message":"Explain how to access and manage environment variables in Python applications.","titleHtml":"Python env variables guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-star-operators","message":"Explain the difference between single and double asterisk operators in Python for parameter packing and unpacking.","titleHtml":"Learn Python star operators","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-python-yield","message":"Explain Python generators and the yield keyword with examples of memory-efficient iteration.","titleHtml":"Explain Python yield","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-variable-passing-guide","message":"Explain Python's pass-by-object-reference behavior with examples of mutable and immutable objects.","titleHtml":"Python variable passing guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"generate-curl-json-post","message":"Demonstrate how to send JSON data using cURL, including headers and authentication.","titleHtml":"Generate cURL JSON POST","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"show-linux-text-search","message":"Demonstrate commands and techniques for searching text within files on Linux systems.","titleHtml":"Show Linux text search","icon":"search","color":"var(--display-blue-fgColor)"},{"id":"learn-to-check-visibility-in-js","message":"Demonstrate methods for detecting hidden elements in JavaScript, including various visibility states.","titleHtml":"Learn to check visibility in JS","icon":"eye","color":"var(--display-purple-fgColor)"},{"id":"find-bash-script-location","message":"Show methods for determining a Bash script's directory location during execution.","titleHtml":"Find Bash script location","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"explain-special-char-escape","message":"Demonstrate different methods for escaping special characters in various programming contexts.","titleHtml":"Explain special char escape","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"show-directory-exists","message":"Show different methods for checking directory existence in Bash with error handling.","titleHtml":"Show directory exists","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"webpage-redirect-methods","message":"Show different techniques for implementing webpage redirects using HTML, JavaScript and server-side approaches.","titleHtml":"Webpage redirect methods","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"branch-sync-patterns","message":"Demonstrate Git commands for synchronizing branches, including reset, rebase, and merge techniques with their implications.","titleHtml":"Branch sync patterns","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"how-to-recover-deleted-git-files","message":"Demonstrate techniques for locating and recovering files that were deleted in previous commits, including Git log commands, filtering options, and restoration methods.","titleHtml":"How to recover deleted Git files","icon":"history","color":"var(--display-blue-fgColor)"},{"id":"how-to-load-remote-js-script","message":"Provide code examples and best practices for linking to and executing JavaScript files hosted on GitHub in web applications.","titleHtml":"How to load remote JS script","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-npm-install-from-github","message":"Demonstrate different methods for installing npm packages directly from GitHub repositories, including syntax examples and troubleshooting tips.","titleHtml":"How to npm install from GitHub","icon":"package","color":"var(--display-blue-fgColor)"},{"id":"demo-java-linkedlist-arraylist","message":"Show different methods for initializing ArrayLists in Java in a single line.","titleHtml":"Demo Java LinkedList/ArrayList","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-memory-issues","message":"Demonstrate common causes of memory leaks in Java and how to prevent them.","titleHtml":"Learn Java memory issues","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-stream-conversion","message":"Show different methods for converting an InputStream to a String in Java, comparing performance.","titleHtml":"Learn Java stream conversion","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-null-handling-patterns","message":"Demonstrate best practices for handling null values in Java using Optional and other patterns.","titleHtml":"Java null handling patterns","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-list-conversion-guide","message":"Show different approaches to convert arrays to ArrayLists in Java with examples.","titleHtml":"Java List conversion guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"js-email-validation-guide","message":"Demonstrate robust email validation techniques in JavaScript, from regex patterns to validation APIs.","titleHtml":"JS email validation guide","icon":"mail","color":"var(--display-blue-fgColor)"},{"id":"prototype-js-array-iteration","message":"Demonstrate methods for removing specific items from JavaScript arrays with examples.","titleHtml":"Prototype JS array iteration","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-js-object-checks","message":"Show different methods for detecting empty objects in JavaScript, considering various edge cases.","titleHtml":"Explore JS object checks","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-js-remove-object-props","message":"Demonstrate different methods for removing properties from JavaScript objects and their implications.","titleHtml":"How to JS remove object props","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-merge-python-dicts","message":"Show different methods for merging Python dictionaries, including dictionary unpacking and update methods.","titleHtml":"How to merge Python dicts","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-python-ternary-syntax","message":"Demonstrate Python's ternary conditional operator with examples comparing it to traditional if-else statements.","titleHtml":"Explore Python ternary syntax","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"demo-python-loop-with-index","message":"Demonstrate different ways to access index values in Python for loops using enumerate and range.","titleHtml":"Demo Python loop with index","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"demo-sorting-python-dictionary","message":"Demonstrate methods for sorting Python dictionaries by values using different approaches and sorting criteria.","titleHtml":"Demo sorting Python dictionary","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-file-checks","message":"Show methods for checking file existence in Python without raising exceptions.","titleHtml":"Learn Python file checks","icon":"file","color":"var(--display-blue-fgColor)"},{"id":"demo-python-run-system-command","message":"Demonstrate various methods for executing system commands in Python using subprocess and other modules.","titleHtml":"Demo Python run system command","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"compare-python-method-decorators","message":"Compare @staticmethod and @classmethod decorators in Python, explaining their use cases.","titleHtml":"Compare Python method decorators","icon":"code","color":"var(--display-gray-fgColor)"}]},{"type":"instructional","data":[{"id":"what-can-i-do-with-github-copilot-chat","message":"What can I do with GitHub Copilot Chat?","titleHtml":"What can I do here?","icon":"light-bulb","color":"var(--display-purple-fgColor)"}]},{"type":"interactional","data":[{"id":"to-do-app-local-storage","message":"Create a to-do list application with local storage functionality.","titleHtml":"To-do list with local storage","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"digital-clock-time-zones","message":"Create a digital clock that displays the current time in different time zones.","titleHtml":"A digital time zone clock","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"weather-dashboard-app","message":"Develop a weather dashboard that fetches data from a public weather API.","titleHtml":"Develop a weather dashboard","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"create-joke-generator","message":"Create a random joke generator using an external API.","titleHtml":"Create a joke generator","icon":"code","color":"var(--display-gray-fgColor)"}]}],"graphqlApiUrl":"/copilot/loops/loops_execution","previewUrl":"https://viewscreen.githubusercontent.com","helpUrl":"https://docs.github.com","apiVersion":null,"sharedThreadChannel":null,"agentsPath":"/github-copilot/chat/agents","apiURL":"https://api.individual.githubcopilot.com","currentUserLogin":"saulolv","customInstructions":null,"renderKnowledgeBases":false,"optedInToPreviewFeatures":true,"optedInToUserFeedback":true,"renderAttachKnowledgeBaseHerePopover":true,"renderKnowledgeBaseAttachedToChatPopover":true,"personalInstructions":null,"renderBetaLabel":false,"reviewLab":false,"realIp":null,"scrollToTop":false,"hasCEorCBAccess":false,"licenseType":"licensed_full","plan":null,"quotas":null,"canShareThread":false,"enabled_features":{"copilot_pipes_react_nodes":false,"copilot_pipes_github_graphql_nodes":true,"copilot_pipes_pipeline_nodes":false,"copilot_loops_post_staff_ship_features":false,"copilot_pro_plus_animation":false,"copilot_premium_request_quotas":false}}}</script>
  <div data-target="react-app.reactRoot"><div class="Layout-module__container--ON_wj" data-testid="chat-layout" data-hpc="true"><span data-favicon-override="/favicons/favicon-copilot.svg"></span><div class="Layout-module__left--LHTG3"><aside aria-labelledby=":r1:-copilot-navigation" class="Sidebar-module__container--s585U"><div class="Sidebar-module__header--uOLk8"><h2 id=":r1:-copilot-navigation" class="sr-only">Copilot navigation</h2><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r3:-loading-announcement" aria-labelledby=":r2:"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-collapse" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M6.823 7.823a.25.25 0 0 1 0 .354l-2.396 2.396A.25.25 0 0 1 4 10.396V5.604a.25.25 0 0 1 .427-.177Z"></path><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0ZM1.5 1.75v12.5c0 .138.112.25.25.25H9.5v-13H1.75a.25.25 0 0 0-.25.25ZM11 14.5h3.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r2:" popover="auto">Open conversations</span><a data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r5:-loading-announcement" aria-labelledby=":r4:" href="https://github.com/copilot"><svg aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16"><path fill="currentColor" fill-rule="evenodd" d="M14.515.456a1.555 1.555 0 00-2.2 0L6.58 6.19a1.556 1.556 0 00-.396.673l-.825 2.89a.667.667 0 00.824.824l2.89-.826c.254-.072.485-.209.672-.396l5.735-5.734a1.556 1.556 0 000-2.2l-.965-.965zm-1.257.942a.222.222 0 01.314 0l.965.966a.222.222 0 010 .314L13.415 3.8l-1.28-1.28 1.123-1.122zm-2.065 2.066l1.279 1.279-3.67 3.67a.221.221 0 01-.096.056l-1.736.496.496-1.736c.01-.036.03-.07.057-.096l3.67-3.67zM1.639 4.778a2.25 2.25 0 012.25-2.25h3.154a.75.75 0 000-1.5H3.889a3.75 3.75 0 00-3.75 3.75v7.333a3.75 3.75 0 003.75 3.75h7.333a3.75 3.75 0 003.75-3.75V8.445a.75.75 0 00-1.5 0v3.666a2.25 2.25 0 01-2.25 2.25H3.889a2.25 2.25 0 01-2.25-2.25V4.778z" clip-rule="evenodd"></path></svg></a><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r4:" popover="auto" style="top: 116px; left: 20.3125px;">New conversation</span></div><div class="Sidebar-module__sidebar--sn0TN"><div class="Sidebar-module__conversations--NEO0w"><nav aria-labelledby=":r1:-quick-links" class="Sidebar-module__quicklinks--wbmcD"><h3 id=":r1:-quick-links" class="sr-only">Quick links</h3></nav><nav aria-labelledby=":r6:-conversations" id=":r6:-conversation-list" tabindex="-1" class="ConversationList-module__ConversationList__container--rX8fM"><div class="ConversationList-module__ConversationList__section--ihwdi"><h3 id=":r6:-conversations" class="sr-only">Conversations</h3><div><h4 id=":r6:_Today" class="ConversationList-module__ConversationList__title--IHb4U">Today</h4><ul class="ConversationList-module__ConversationList--LAVA0"><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" aria-current="page" href="https://github.com/copilot/c/9340ffe2-d568-4074-aeb7-eed931021d54"><span class="ConversationList-module__ConversationList__text--YbHpv">New conversation</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r31:-loading-announcement" aria-labelledby=":r33:" id=":r31:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r33:" popover="auto">Manage conversation</span></span></li></ul></div><div><h4 id=":r6:_Yesterday" class="ConversationList-module__ConversationList__title--IHb4U">Yesterday</h4><ul class="ConversationList-module__ConversationList--LAVA0"><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/f159d8a5-2632-4b19-8c42-08cb6d6483dc"><span class="ConversationList-module__ConversationList__text--YbHpv">Creating a Cart microservice for e-commerce</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1a:-loading-announcement" aria-labelledby=":r1c:" id=":r1a:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r1c:" popover="auto">Manage conversation</span></span></li></ul></div><div><h4 id=":r6:_Last 30 days" class="ConversationList-module__ConversationList__title--IHb4U">Last 30 days</h4><ul class="ConversationList-module__ConversationList--LAVA0"><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/613a47ae-d2dc-4274-b59e-b54d907bbf86"><span class="ConversationList-module__ConversationList__text--YbHpv">Unauthorized error in Spring Security configuration</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1e:-loading-announcement" aria-labelledby=":r1g:" id=":r1e:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r1g:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/d27ade02-539b-4e51-ac6d-c0e1be9f0c64"><span class="ConversationList-module__ConversationList__text--YbHpv">Ajustando tabela LaTeX para caber no</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1i:-loading-announcement" aria-labelledby=":r1k:" id=":r1i:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r1k:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/a607de4e-899f-443e-88a6-da044cc2b203"><span class="ConversationList-module__ConversationList__text--YbHpv">Customer microservice with authentication in Java Spring Boot</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1m:-loading-announcement" aria-labelledby=":r1o:" id=":r1m:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r1o:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/e47cd23f-50e3-4a34-9109-0b35cc0c5ca5"><span class="ConversationList-module__ConversationList__text--YbHpv">Microserviço de clientes com autenticação robusta</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1q:-loading-announcement" aria-labelledby=":r1s:" id=":r1q:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r1s:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/09b5df0d-36cc-4bfb-9599-338b3da9cc03"><span class="ConversationList-module__ConversationList__text--YbHpv">Building a React frontend for a barber shop application</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r1u:-loading-announcement" aria-labelledby=":r20:" id=":r1u:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r20:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/9e8e3a25-be9a-4d6c-89ae-f98d299042fe"><span class="ConversationList-module__ConversationList__text--YbHpv">Build errors in Java module 'accounts'</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r22:-loading-announcement" aria-labelledby=":r24:" id=":r22:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r24:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/3f8ef1ff-f245-49ea-8007-e19455327fd1"><span class="ConversationList-module__ConversationList__text--YbHpv">New conversation</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r26:-loading-announcement" aria-labelledby=":r28:" id=":r26:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r28:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/6ba40a42-bb92-44fb-970e-80b56874d2ef"><span class="ConversationList-module__ConversationList__text--YbHpv">New conversation</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r2a:-loading-announcement" aria-labelledby=":r2c:" id=":r2a:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r2c:" popover="auto">Manage conversation</span></span></li><li class="ConversationList-module__ConversationList__item--dD6z4"><a class="ConversationList-module__ConversationList__link--Byc2c" href="https://github.com/copilot/c/6d0911f3-aa17-4598-a996-78e8bc27fa2a"><span class="ConversationList-module__ConversationList__text--YbHpv">Adding a Technologies section to README</span></a><span class="ConversationList-module__ConversationList__context--SK6Jb"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r2e:-loading-announcement" aria-labelledby=":r2g:" id=":r2e:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r2g:" popover="auto">Manage conversation</span></span></li></ul></div></div></nav></div></div></aside><div class="Layout-module__main--JKQM5"><div class="Header-module__header--ufLgW"><div class="Header-module__centerControls--R1eiB"><div><button type="button" aria-label="Switch model" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI" data-loading="false" data-size="medium" data-variant="invisible" aria-describedby=":r35:-loading-announcement" id=":r35:"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x"><span class="sr-only">Model: </span>GPT-4.1</span></span><span data-component="trailingAction" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></button></div></div><div class="Header-module__rightControls--Ce65x"><div class="Box-sc-g0xbh4-0" data-loading-wrapper="true"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r38:-loading-announcement" aria-labelledby=":r3a:" id=":r38:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r3a:" popover="auto">Menu</span></div></div><div class="Layout-module__content--s7QoY"><div class="ChatScrollContainer-module__container--b73rS ImmersiveChat-module__container--Q4j2R"><div class="ImmersiveChat-module__messageContent--fpzTL"><div><div class="sr-only"><h1>Copilot Chat</h1><h2>New conversation</h2></div><div style=""><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: medições (em malha aberta) do protótipo rodando</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">medições (em malha aberta) do protótipo rodando (entrada x, saída y)
- plot do gráfico (matlab ou python)

eu preciso fazer isso em python para o meu sistema de controle, eu tenho um sistema Gs = 4,326 / (s^2 + 1,195s + 45,207)

o meu sistema é um aereo pendulo
</div><div class="ChatMessage-module__messageSubthreadIndicator--DJyyk" data-testid="chat-paging-indicator">3/3</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8v:-loading-announcement" aria-labelledby=":r8u:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r8u:" popover="auto">Edit message</span><div class="ChatPagingComponent-module__container--nH9hp" data-testid="chat-paging-component"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r7j:-loading-announcement" aria-labelledby=":r7i:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-left" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M9.78 12.78a.75.75 0 0 1-1.06 0L4.47 8.53a.75.75 0 0 1 0-1.06l4.25-4.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L6.06 8l3.72 3.72a.75.75 0 0 1 0 1.06Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r7i:" popover="auto">Previous response</span><span class="ChatPagingComponent-module__pageIndicator--HoVKG">3/3</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ChatPagingComponent-module__disabledButton--hCGPC prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r7l:-loading-announcement" aria-labelledby=":r7k:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-right" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M6.22 3.22a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L9.94 8 6.22 4.28a.75.75 0 0 1 0-1.06Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r7k:" popover="auto">Next response</span></div></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Ótimo! Você já tem a função de</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Ótimo! </span><span node="[object Object]">Você </span><span node="[object Object]">já </span><span node="[object Object]">tem </span><span node="[object Object]">a </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">transferência </span><span node="[object Object]">do </span><span node="[object Object]">seu </span><span node="[object Object]">sistema </span><span node="[object Object]">em </span><span node="[object Object]">malha </span><span node="[object Object]">aberta:</span></p>
<p><math-renderer data-static-url="https://github.githubassets.com/" class="js-display-math" data-catalyst="" style="display: block; text-align: center;"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mi>G</mi>
  <mo stretchy="false">(</mo>
  <mi>s</mi>
  <mo stretchy="false">)</mo>
</math></math-renderer></p>
<p><span node="[object Object]">Vou </span><span node="[object Object]">te </span><span node="[object Object]">mostrar </span><span node="[object Object]">como </span><span node="[object Object]">fazer </span><span node="[object Object]">isso </span><span node="[object Object]">em </span><span node="[object Object]">Python </span><span node="[object Object]">usando </span><span node="[object Object]">o </span><span node="[object Object]">pacote </span><code node="[object Object]"><span node="[object Object]">matplotlib</span></code> <span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">gráfico </span><span node="[object Object]">e </span><code node="[object Object]"><span node="[object Object]">scipy</span></code> <span node="[object Object]">para </span><span node="[object Object]">simular </span><span node="[object Object]">a </span><span node="[object Object]">resposta </span><span node="[object Object]">ao </span><span node="[object Object]">degrau </span><span node="[object Object]">(ou </span><span node="[object Object]">outro </span><span node="[object Object]">tipo </span><span node="[object Object]">de </span><span node="[object Object]">entrada, </span><span node="[object Object]">caso </span><span node="[object Object]">prefira).</span></p>
<h3><span node="[object Object]">1. </span><span node="[object Object]">Instale </span><span node="[object Object]">as </span><span node="[object Object]">bibliotecas </span><span node="[object Object]">necessárias</span></h3>
<p><span node="[object Object]">Se </span><span node="[object Object]">ainda </span><span node="[object Object]">não </span><span node="[object Object]">tem, </span><span node="[object Object]">instale </span><span node="[object Object]">com:</span></p>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":r7q:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C"></span><span id=":r7q:" class="CodeBlock-module__languageName--ZLWCa">bash</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r7s:-loading-announcement" aria-labelledby=":r7r:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r7r:" popover="auto">Wrap</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r7v:-loading-announcement" aria-labelledby=":r7t:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":r7t:" popover="auto">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span node="[object Object]">pip </span><span node="[object Object]">install </span><span node="[object Object]">numpy </span><span node="[object Object]">matplotlib </span><span node="[object Object]">scipy
</span></code></pre></div></figure>
<h3><span node="[object Object]">2. </span><span node="[object Object]">Código </span><span node="[object Object]">para </span><span node="[object Object]">plotar </span><span node="[object Object]">a </span><span node="[object Object]">resposta </span><span node="[object Object]">do </span><span node="[object Object]">sistema</span></h3>
<div class="position-relative"><button class="FileBlock-module__container--zWu5c" aria-label="View file: pendulo_aereo_openloop.py" data-testid="chat-message-view-file-pendulo_aereo_openloop.py"><div class="FileBlock-module__header--X7DLN"><div class="FileBlock-module__language--fbEB2"><svg aria-hidden="true" focusable="false" class="octicon octicon-code MarkdownRenderer-module__noFade--Lfwdr" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg><span class="FileBlock-module__name--rkkGx">pendulo_aereo_openloop.py</span></div><div class="FileBlock-module__expandIconContainer--JwHHA"><svg width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg" role="presentation"><g clip-path="url(#clip0_6911_7629)" fill="currentColor"><path d="M14.722 6.047a.75.75 0 11-1.5 0V3.615L10.2 6.638a.75.75 0 01-1.06-1.06l3.023-3.024H9.729a.75.75 0 010-1.499h4.243a.75.75 0 01.75.75v4.242zM1.278 9.953a.75.75 0 111.5 0v2.432L5.8 9.362a.75.75 0 011.06 1.06l-3.023 3.024h2.433a.75.75 0 010 1.499H2.028a.75.75 0 01-.75-.75V9.953z"></path></g><defs><clippath id="clip0_6911_7629"><path fill="#fff" d="M0 0H16V16H0z"></path></clippath></defs></svg></div></div><pre class="FileBlock-module__previewCode--EieE9 FileBlock-module__isClipped--Z6AMg" aria-hidden="true"><code><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">numpy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">np
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">matplotlib.pyplot </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">plt
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">from</span></span> <span node="[object Object]">scipy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">signal

</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]"># </span><span node="[object Object]">Parâmetros </span><span node="[object Object]">do </span><span node="[object Object]">sistema</span></span><span node="[object Object]">
num </span><span node="[object Object]">= </span><span node="[object Object]">[</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">4.326</span></span><span node="[object Object]">] </span>  <span class="hljs-comment" node="[object Object]"><span node="[object Object]"># </span><span node="[object Object]">Numerador</span></span>
</code></pre></button></div>
<hr>
<h3><span node="[object Object]">Como </span><span node="[object Object]">usar</span></h3>
<ol>
<li><strong><span node="[object Object]">Salve </span><span node="[object Object]">o </span><span node="[object Object]">código </span><span node="[object Object]">acima </span><span node="[object Object]">em </span><span node="[object Object]">um </span><span node="[object Object]">arquivo</span></strong> <span node="[object Object]">(por </span><span node="[object Object]">exemplo: </span><code node="[object Object]"><span node="[object Object]">pendulo_aereo_openloop.py</span></code><span node="[object Object]">).</span></li>
<li><strong><span node="[object Object]">Execute </span><span node="[object Object]">o </span><span node="[object Object]">script</span></strong> <span node="[object Object]">com </span><code node="[object Object]"><span node="[object Object]">python </span><span node="[object Object]">pendulo_aereo_openloop.py</span></code><span node="[object Object]">.</span></li>
<li><span node="[object Object]">O </span><span node="[object Object]">gráfico </span><span node="[object Object]">exibirá </span><span node="[object Object]">a </span><span node="[object Object]">resposta </span><span node="[object Object]">do </span><span node="[object Object]">seu </span><span node="[object Object]">sistema </span><span node="[object Object]">em </span><span node="[object Object]">malha </span><span node="[object Object]">aberta </span><span node="[object Object]">para </span><span node="[object Object]">uma </span><span node="[object Object]">entrada </span><span node="[object Object]">degrau </span><span node="[object Object]">(entrada </span><code node="[object Object]"><span node="[object Object]">x</span></code> <span node="[object Object]">= </span><span node="[object Object]">degrau, </span><span node="[object Object]">saída </span><code node="[object Object]"><span node="[object Object]">y</span></code><span node="[object Object]">).</span></li>
</ol>
<p><span node="[object Object]">Se </span><span node="[object Object]">você </span><span node="[object Object]">quiser </span><span node="[object Object]">simular </span><span node="[object Object]">outra </span><span node="[object Object]">entrada </span><span node="[object Object]">(por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">um </span><span node="[object Object]">impulso </span><span node="[object Object]">ou </span><span node="[object Object]">um </span><span node="[object Object]">sinal </span><span node="[object Object]">arbitrário), </span><span node="[object Object]">me </span><span node="[object Object]">avise </span><span node="[object Object]">que </span><span node="[object Object]">te </span><span node="[object Object]">mostro </span><span node="[object Object]">como </span><span node="[object Object]">fazer!</span></p>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">comparar </span><span node="[object Object]">com </span><span node="[object Object]">dados </span><span node="[object Object]">reais </span><span node="[object Object]">de </span><span node="[object Object]">medição, </span><span node="[object Object]">basta </span><span node="[object Object]">substituir </span><span node="[object Object]">o </span><span node="[object Object]">vetor </span><code node="[object Object]"><span node="[object Object]">y</span></code> <span node="[object Object]">pelos </span><span node="[object Object]">seus </span><span node="[object Object]">dados </span><span node="[object Object]">e </span><span node="[object Object]">usar </span><code node="[object Object]"><span node="[object Object]">plt.plot(t, </span><span node="[object Object]">y_medidos, </span><span node="[object Object]">label="Medição </span><span node="[object Object]">real")</span></code> <span node="[object Object]">no </span><span node="[object Object]">mesmo </span><span node="[object Object]">gráfico.</span></p>
<p><span node="[object Object]">Se </span><span node="[object Object]">precisar </span><span node="[object Object]">de </span><span node="[object Object]">mais </span><span node="[object Object]">alguma </span><span node="[object Object]">coisa, </span><span node="[object Object]">só </span><span node="[object Object]">pedir!</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8g:-loading-announcement" aria-labelledby=":r8f:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r8f:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8i:-loading-announcement" aria-labelledby=":r8h:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r8h:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8l:-loading-announcement" aria-labelledby=":r8j:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":r8j:" popover="auto">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":r8m:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8p:-loading-announcement" aria-labelledby=":r8o:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r8o:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r8r:-loading-announcement" aria-labelledby=":r8q:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r8q:" popover="auto">Retry with…</span></div></div></div></div></div></div></div><div style=""><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: e se eu quiser fazer a simulação</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">e se eu quiser fazer a simulação com um controle pid?</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9v:-loading-announcement" aria-labelledby=":r9u:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9u:" popover="auto">Edit message</span></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Ótima pergunta! Para simular o seu sistema</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Ótima </span><span node="[object Object]">pergunta! </span><span node="[object Object]">Para </span><span node="[object Object]">simular </span><span node="[object Object]">o </span><span node="[object Object]">seu </span><span node="[object Object]">sistema </span><span node="[object Object]">com </span><span node="[object Object]">um </span><span node="[object Object]">controle </span><span node="[object Object]">PID </span><span node="[object Object]">em </span><span node="[object Object]">Python, </span><span node="[object Object]">você </span><span node="[object Object]">pode </span><span node="[object Object]">usar </span><span node="[object Object]">novamente </span><span node="[object Object]">as </span><span node="[object Object]">bibliotecas </span><code node="[object Object]"><span node="[object Object]">scipy</span></code> <span node="[object Object]">e </span><code node="[object Object]"><span node="[object Object]">matplotlib</span></code><span node="[object Object]">. </span><span node="[object Object]">O </span><span node="[object Object]">PID </span><span node="[object Object]">pode </span><span node="[object Object]">ser </span><span node="[object Object]">modelado </span><span node="[object Object]">como </span><span node="[object Object]">outro </span><span node="[object Object]">sistema </span><span node="[object Object]">de </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">transferência, </span><span node="[object Object]">e </span><span node="[object Object]">em </span><span node="[object Object]">seguida </span><span node="[object Object]">você </span><span node="[object Object]">conecta </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">com </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">em </span><span node="[object Object]">malha </span><span node="[object Object]">fechada.</span></p>
<p><span node="[object Object]">Vou </span><span node="[object Object]">te </span><span node="[object Object]">mostrar </span><span node="[object Object]">um </span><span node="[object Object]">exemplo </span><span node="[object Object]">básico </span><span node="[object Object]">de </span><span node="[object Object]">como </span><span node="[object Object]">fazer </span><span node="[object Object]">isso:</span></p>
<hr>
<h2><span node="[object Object]">1. </span><span node="[object Object]">Defina </span><span node="[object Object]">seu </span><span node="[object Object]">sistema </span><span node="[object Object]">e </span><span node="[object Object]">o </span><span node="[object Object]">PID</span></h2>
<p><span node="[object Object]">Vamos </span><span node="[object Object]">supor </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">arbitrários </span><span node="[object Object]">(ajuste </span><span node="[object Object]">conforme </span><span node="[object Object]">sua </span><span node="[object Object]">necessidade):</span></p>
<ul>
<li><math-renderer data-static-url="https://github.githubassets.com/" class="js-inline-math" data-catalyst="" style="display: inline-block;"><math xmlns="http://www.w3.org/1998/Math/MathML">
  <msub>
    <mi>K</mi>
    <mi>p</mi>
  </msub>
</math></math-renderer></li>
<li><math-renderer data-static-url="https://github.githubassets.com/" class="js-inline-math" data-catalyst="" style="display: inline-block;"><math xmlns="http://www.w3.org/1998/Math/MathML">
  <msub>
    <mi>K</mi>
    <mi>i</mi>
  </msub>
</math></math-renderer></li>
<li><math-renderer data-static-url="https://github.githubassets.com/" class="js-inline-math" data-catalyst="" style="display: inline-block;"><math xmlns="http://www.w3.org/1998/Math/MathML">
  <msub>
    <mi>K</mi>
    <mi>d</mi>
  </msub>
</math></math-renderer></li>
</ul>
<p><span node="[object Object]">A </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">transferência </span><span node="[object Object]">do </span><span node="[object Object]">PID </span><span node="[object Object]">é:</span></p>
<p><math-renderer data-static-url="https://github.githubassets.com/" class="js-display-math" data-catalyst="" style="display: block; text-align: center;"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <msub>
    <mi>G</mi>
    <mrow data-mjx-texclass="ORD">
      <mi>P</mi>
      <mi>I</mi>
      <mi>D</mi>
    </mrow>
  </msub>
  <mo stretchy="false">(</mo>
  <mi>s</mi>
  <mo stretchy="false">)</mo>
</math></math-renderer></p>
<hr>
<h2><span node="[object Object]">2. </span><span node="[object Object]">Código </span><span node="[object Object]">completo </span><span node="[object Object]">para </span><span node="[object Object]">simulação </span><span node="[object Object]">PID </span><span node="[object Object]">+ </span><span node="[object Object]">planta</span></h2>
<div class="position-relative"><button class="FileBlock-module__container--zWu5c" aria-label="View file: simulacao_pid_pendulo.py" data-testid="chat-message-view-file-simulacao_pid_pendulo.py"><div class="FileBlock-module__header--X7DLN"><div class="FileBlock-module__language--fbEB2"><svg aria-hidden="true" focusable="false" class="octicon octicon-code MarkdownRenderer-module__noFade--Lfwdr" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg><span class="FileBlock-module__name--rkkGx">simulacao_pid_pendulo.py</span></div><div class="FileBlock-module__expandIconContainer--JwHHA"><svg width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg" role="presentation"><g clip-path="url(#clip0_6911_7629)" fill="currentColor"><path d="M14.722 6.047a.75.75 0 11-1.5 0V3.615L10.2 6.638a.75.75 0 01-1.06-1.06l3.023-3.024H9.729a.75.75 0 010-1.499h4.243a.75.75 0 01.75.75v4.242zM1.278 9.953a.75.75 0 111.5 0v2.432L5.8 9.362a.75.75 0 011.06 1.06l-3.023 3.024h2.433a.75.75 0 010 1.499H2.028a.75.75 0 01-.75-.75V9.953z"></path></g><defs><clippath id="clip0_6911_7629"><path fill="#fff" d="M0 0H16V16H0z"></path></clippath></defs></svg></div></div><pre class="FileBlock-module__previewCode--EieE9 FileBlock-module__isClipped--Z6AMg" aria-hidden="true"><code><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">numpy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">np
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">matplotlib.pyplot </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">plt
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">from</span></span> <span node="[object Object]">scipy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">signal

</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]"># </span><span node="[object Object]">Função </span><span node="[object Object]">de </span><span node="[object Object]">transferência </span><span node="[object Object]">da </span><span node="[object Object]">planta</span></span><span node="[object Object]">
num_plant </span><span node="[object Object]">= </span><span node="[object Object]">[</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">4.326</span></span><span node="[object Object]">]
</span></code></pre></button><div class="FileBlock-module__insightsButtonContainer--BRMgP"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r9e:-loading-announcement" aria-labelledby=":r9d:"><svg aria-hidden="true" focusable="false" class="octicon octicon-shield" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9d:" popover="auto">Code insights</span></div></div>
<hr>
<h3><strong><span node="[object Object]">Como </span><span node="[object Object]">usar</span></strong></h3>
<ol>
<li><span node="[object Object]">Salve </span><span node="[object Object]">este </span><span node="[object Object]">código </span><span node="[object Object]">em </span><span node="[object Object]">um </span><span node="[object Object]">arquivo </span><span node="[object Object]">(ex: </span><code node="[object Object]"><span node="[object Object]">simulacao_pid_pendulo.py</span></code><span node="[object Object]">).</span></li>
<li><span node="[object Object]">Execute </span><span node="[object Object]">com </span><code node="[object Object]"><span node="[object Object]">python </span><span node="[object Object]">simulacao_pid_pendulo.py</span></code><span node="[object Object]">.</span></li>
<li><span node="[object Object]">O </span><span node="[object Object]">gráfico </span><span node="[object Object]">mostrará </span><span node="[object Object]">a </span><span node="[object Object]">resposta </span><span node="[object Object]">do </span><span node="[object Object]">sistema </span><span node="[object Object]">controlado </span><span node="[object Object]">por </span><span node="[object Object]">PID.</span></li>
</ol>
<hr>
<h3><strong><span node="[object Object]">Ajuste </span><span node="[object Object]">dos </span><span node="[object Object]">parâmetros</span></strong></h3>
<p><span node="[object Object]">Os </span><span node="[object Object]">valores </span><span node="[object Object]">de </span><span node="[object Object]">Kp, </span><span node="[object Object]">Ki </span><span node="[object Object]">e </span><span node="[object Object]">Kd </span><span node="[object Object]">devem </span><span node="[object Object]">ser </span><span node="[object Object]">ajustados </span><span node="[object Object]">conforme </span><span node="[object Object]">o </span><span node="[object Object]">comportamento </span><span node="[object Object]">desejado </span><span node="[object Object]">do </span><span node="[object Object]">seu </span><span node="[object Object]">sistema.</span></p>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">simular </span><span node="[object Object]">para </span><span node="[object Object]">valores </span><span node="[object Object]">específicos, </span><span node="[object Object]">é </span><span node="[object Object]">só </span><span node="[object Object]">falar </span><span node="[object Object]">quais </span><span node="[object Object]">deseja! </span><span node="[object Object]">Posso </span><span node="[object Object]">também </span><span node="[object Object]">te </span><span node="[object Object]">mostrar </span><span node="[object Object]">como </span><span node="[object Object]">fazer </span><span node="[object Object]">o </span><span node="[object Object]">ajuste </span><span node="[object Object]">automático </span><span node="[object Object]">(sintonia) </span><span node="[object Object]">do </span><span node="[object Object]">PID </span><span node="[object Object]">se </span><span node="[object Object]">quiser.</span></p>
<p><span node="[object Object]">Se </span><span node="[object Object]">precisar </span><span node="[object Object]">simular </span><span node="[object Object]">outros </span><span node="[object Object]">tipos </span><span node="[object Object]">de </span><span node="[object Object]">entrada </span><span node="[object Object]">(senoidal, </span><span node="[object Object]">impulso, </span><span node="[object Object]">rampa), </span><span node="[object Object]">só </span><span node="[object Object]">pedir!</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9g:-loading-announcement" aria-labelledby=":r9f:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9f:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9i:-loading-announcement" aria-labelledby=":r9h:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9h:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9l:-loading-announcement" aria-labelledby=":r9j:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":r9j:" popover="auto">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":r9m:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9p:-loading-announcement" aria-labelledby=":r9o:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9o:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r9r:-loading-announcement" aria-labelledby=":r9q:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r9q:" popover="auto">Retry with…</span></div></div></div></div></div></div></div><div style=""><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: eu quero que o ajuste seja automatico,</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">eu quero que o ajuste seja automatico, que eu coloque a entrada que eu desejo para que o aereo pendalo se mova e o controle sirva pra isso</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rav:-loading-announcement" aria-labelledby=":rau:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rau:" popover="auto">Edit message</span></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Perfeito! O que você está pedindo é</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Perfeito! </span><span node="[object Object]">O </span><span node="[object Object]">que </span><span node="[object Object]">você </span><span node="[object Object]">está </span><span node="[object Object]">pedindo </span><span node="[object Object]">é </span><strong><span node="[object Object]">sintonia </span><span node="[object Object]">automática </span><span node="[object Object]">do </span><span node="[object Object]">PID</span></strong> <span node="[object Object]">para </span><span node="[object Object]">que </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">siga </span><span node="[object Object]">uma </span><span node="[object Object]">referência </span><span node="[object Object]">(entrada </span><span node="[object Object]">desejada) </span><span node="[object Object]">— </span><span node="[object Object]">por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">você </span><span node="[object Object]">define </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">final </span><span node="[object Object]">do </span><span node="[object Object]">pêndulo </span><span node="[object Object]">aéreo </span><span node="[object Object]">e </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">é </span><span node="[object Object]">ajustado </span><span node="[object Object]">automaticamente </span><span node="[object Object]">para </span><span node="[object Object]">atingir </span><span node="[object Object]">esse </span><span node="[object Object]">valor.</span></p>
<p><span node="[object Object]">Você </span><span node="[object Object]">pode </span><span node="[object Object]">usar </span><span node="[object Object]">o </span><span node="[object Object]">método </span><strong><code node="[object Object]"><span node="[object Object]">scipy.signal.step</span></code></strong> <span node="[object Object]">para </span><span node="[object Object]">simular </span><span node="[object Object]">a </span><span node="[object Object]">resposta, </span><span node="[object Object]">e </span><span node="[object Object]">para </span><span node="[object Object]">ajuste </span><span node="[object Object]">automático </span><span node="[object Object]">de </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">pode </span><span node="[object Object]">usar </span><span node="[object Object]">técnicas </span><span node="[object Object]">como </span><strong><span node="[object Object]">Ziegler-Nichols</span></strong><span node="[object Object]">, </span><strong><span node="[object Object]">Cohen-Coon</span></strong> <span node="[object Object]">ou </span><span node="[object Object]">até </span><span node="[object Object]">algoritmos </span><span node="[object Object]">como </span><strong><code node="[object Object]"><span node="[object Object]">scipy.optimize</span></code></strong> <span node="[object Object]">para </span><span node="[object Object]">minimizar </span><span node="[object Object]">o </span><span node="[object Object]">erro </span><span node="[object Object]">entre </span><span node="[object Object]">a </span><span node="[object Object]">saída </span><span node="[object Object]">e </span><span node="[object Object]">a </span><span node="[object Object]">referência.</span></p>
<p><span node="[object Object]">A </span><span node="[object Object]">seguir, </span><span node="[object Object]">um </span><span node="[object Object]">exemplo </span><span node="[object Object]">usando </span><span node="[object Object]">otimização </span><span node="[object Object]">com </span><code node="[object Object]"><span node="[object Object]">scipy.optimize.minimize</span></code> <span node="[object Object]">para </span><span node="[object Object]">encontrar </span><span node="[object Object]">os </span><span node="[object Object]">melhores </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">(Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd) </span><strong><span node="[object Object]">automaticamente</span></strong><span node="[object Object]">:</span></p>
<hr>
<div class="position-relative"><button class="FileBlock-module__container--zWu5c" aria-label="View file: sintonia_pid_otima.py" data-testid="chat-message-view-file-sintonia_pid_otima.py"><div class="FileBlock-module__header--X7DLN"><div class="FileBlock-module__language--fbEB2"><svg aria-hidden="true" focusable="false" class="octicon octicon-code MarkdownRenderer-module__noFade--Lfwdr" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg><span class="FileBlock-module__name--rkkGx">sintonia_pid_otima.py</span></div><div class="FileBlock-module__expandIconContainer--JwHHA"><svg width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg" role="presentation"><g clip-path="url(#clip0_6911_7629)" fill="currentColor"><path d="M14.722 6.047a.75.75 0 11-1.5 0V3.615L10.2 6.638a.75.75 0 01-1.06-1.06l3.023-3.024H9.729a.75.75 0 010-1.499h4.243a.75.75 0 01.75.75v4.242zM1.278 9.953a.75.75 0 111.5 0v2.432L5.8 9.362a.75.75 0 011.06 1.06l-3.023 3.024h2.433a.75.75 0 010 1.499H2.028a.75.75 0 01-.75-.75V9.953z"></path></g><defs><clippath id="clip0_6911_7629"><path fill="#fff" d="M0 0H16V16H0z"></path></clippath></defs></svg></div></div><pre class="FileBlock-module__previewCode--EieE9 FileBlock-module__isClipped--Z6AMg" aria-hidden="true"><code><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">numpy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">np
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">matplotlib.pyplot </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">plt
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">from</span></span> <span node="[object Object]">scipy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">signal, </span><span node="[object Object]">optimize

</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]"># </span><span node="[object Object]">Função </span><span node="[object Object]">de </span><span node="[object Object]">transferência </span><span node="[object Object]">da </span><span node="[object Object]">planta</span></span><span node="[object Object]">
num_plant </span><span node="[object Object]">= </span><span node="[object Object]">[</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">4.326</span></span><span node="[object Object]">]
</span></code></pre></button><div class="FileBlock-module__insightsButtonContainer--BRMgP"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rae:-loading-announcement" aria-labelledby=":rad:"><svg aria-hidden="true" focusable="false" class="octicon octicon-shield" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rad:" popover="auto">Code insights</span></div></div>
<hr>
<h3><strong><span node="[object Object]">O </span><span node="[object Object]">que </span><span node="[object Object]">esse </span><span node="[object Object]">código </span><span node="[object Object]">faz</span></strong></h3>
<ul>
<li><span node="[object Object]">Sintonia </span><span node="[object Object]">automática </span><span node="[object Object]">dos </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">para </span><span node="[object Object]">minimizar </span><span node="[object Object]">o </span><span node="[object Object]">erro </span><span node="[object Object]">entre </span><span node="[object Object]">a </span><span node="[object Object]">saída </span><span node="[object Object]">e </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">desejado </span><span node="[object Object]">(referência).</span></li>
<li><span node="[object Object]">Exibe </span><span node="[object Object]">o </span><span node="[object Object]">gráfico </span><span node="[object Object]">da </span><span node="[object Object]">resposta </span><span node="[object Object]">do </span><span node="[object Object]">sistema </span><span node="[object Object]">com </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">ajustado </span><span node="[object Object]">automaticamente.</span></li>
<li><span node="[object Object]">Mostra </span><span node="[object Object]">os </span><span node="[object Object]">melhores </span><span node="[object Object]">valores </span><span node="[object Object]">encontrados </span><span node="[object Object]">para </span><span node="[object Object]">Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd.</span></li>
</ul>
<hr>
<h3><strong><span node="[object Object]">Como </span><span node="[object Object]">usar</span></strong></h3>
<ol>
<li><span node="[object Object]">Salve </span><span node="[object Object]">como </span><code node="[object Object]"><span node="[object Object]">sintonia_pid_otima.py</span></code><span node="[object Object]">.</span></li>
<li><span node="[object Object]">Execute: </span><code node="[object Object]"><span node="[object Object]">python </span><span node="[object Object]">sintonia_pid_otima.py</span></code></li>
<li><span node="[object Object]">O </span><span node="[object Object]">sistema </span><span node="[object Object]">será </span><span node="[object Object]">simulado </span><span node="[object Object]">e </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">ótimos </span><span node="[object Object]">serão </span><span node="[object Object]">mostrados.</span></li>
</ol>
<hr>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">mudar </span><span node="[object Object]">a </span><span node="[object Object]">referência </span><span node="[object Object]">(posição </span><span node="[object Object]">alvo </span><span node="[object Object]">do </span><span node="[object Object]">pêndulo </span><span node="[object Object]">aéreo), </span><span node="[object Object]">basta </span><span node="[object Object]">ajustar </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">da </span><span node="[object Object]">variável </span><code node="[object Object]"><span node="[object Object]">ref</span></code><span node="[object Object]">.</span></p>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">otimizar </span><span node="[object Object]">para </span><span node="[object Object]">outro </span><span node="[object Object]">tipo </span><span node="[object Object]">de </span><span node="[object Object]">entrada, </span><span node="[object Object]">ou </span><span node="[object Object]">adicionar </span><span node="[object Object]">restrições </span><span node="[object Object]">(por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">minimizar </span><span node="[object Object]">o </span><span node="[object Object]">tempo </span><span node="[object Object]">de </span><span node="[object Object]">acomodação), </span><span node="[object Object]">me </span><span node="[object Object]">avise </span><span node="[object Object]">e </span><span node="[object Object]">eu </span><span node="[object Object]">ajusto </span><span node="[object Object]">o </span><span node="[object Object]">código </span><span node="[object Object]">para </span><span node="[object Object]">você!</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rag:-loading-announcement" aria-labelledby=":raf:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":raf:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rai:-loading-announcement" aria-labelledby=":rah:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rah:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":ral:-loading-announcement" aria-labelledby=":raj:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":raj:" popover="auto">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":ram:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rap:-loading-announcement" aria-labelledby=":rao:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rao:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rar:-loading-announcement" aria-labelledby=":raq:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":raq:" popover="auto">Retry with…</span></div></div></div></div></div></div></div><div style=""><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: eu quero dá a posição em graus</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">eu quero dá a posição em graus</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbv:-loading-announcement" aria-labelledby=":rbu:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbu:" popover="auto">Edit message</span></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Ótimo! Para dar a posição em graus</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Ótimo! </span><span node="[object Object]">Para </span><span node="[object Object]">dar </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">em </span><span node="[object Object]">graus </span><span node="[object Object]">como </span><span node="[object Object]">referência </span><span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">PID, </span><span node="[object Object]">basta </span><span node="[object Object]">definir </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">da </span><span node="[object Object]">referência </span><span node="[object Object]">em </span><span node="[object Object]">graus </span><span node="[object Object]">e </span><span node="[object Object]">converter </span><span node="[object Object]">para </span><span node="[object Object]">radianos </span><span node="[object Object]">dentro </span><span node="[object Object]">do </span><span node="[object Object]">código </span><span node="[object Object]">(já </span><span node="[object Object]">que </span><span node="[object Object]">a </span><span node="[object Object]">maioria </span><span node="[object Object]">dos </span><span node="[object Object]">sistemas </span><span node="[object Object]">dinâmicos </span><span node="[object Object]">usa </span><span node="[object Object]">radianos).</span></p>
<p><span node="[object Object]">Aqui </span><span node="[object Object]">está </span><span node="[object Object]">como </span><span node="[object Object]">modificar </span><span node="[object Object]">o </span><span node="[object Object]">código </span><span node="[object Object]">para </span><span node="[object Object]">permitir </span><span node="[object Object]">que </span><span node="[object Object]">você </span><span node="[object Object]">escolha </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">desejada </span><span node="[object Object]">em </span><span node="[object Object]">graus, </span><span node="[object Object]">e </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">se </span><span node="[object Object]">ajusta </span><span node="[object Object]">para </span><span node="[object Object]">alcançar </span><span node="[object Object]">essa </span><span node="[object Object]">posição:</span></p>
<div class="position-relative"><button class="FileBlock-module__container--zWu5c" aria-label="View file: sintonia_pid_otima_graus.py" data-testid="chat-message-view-file-sintonia_pid_otima_graus.py"><div class="FileBlock-module__header--X7DLN"><div class="FileBlock-module__language--fbEB2"><svg aria-hidden="true" focusable="false" class="octicon octicon-code MarkdownRenderer-module__noFade--Lfwdr" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg><span class="FileBlock-module__name--rkkGx">sintonia_pid_otima_graus.py</span></div><div class="FileBlock-module__expandIconContainer--JwHHA"><svg width="16" height="16" viewBox="0 0 16 16" fill="none" xmlns="http://www.w3.org/2000/svg" role="presentation"><g clip-path="url(#clip0_6911_7629)" fill="currentColor"><path d="M14.722 6.047a.75.75 0 11-1.5 0V3.615L10.2 6.638a.75.75 0 01-1.06-1.06l3.023-3.024H9.729a.75.75 0 010-1.499h4.243a.75.75 0 01.75.75v4.242zM1.278 9.953a.75.75 0 111.5 0v2.432L5.8 9.362a.75.75 0 011.06 1.06l-3.023 3.024h2.433a.75.75 0 010 1.499H2.028a.75.75 0 01-.75-.75V9.953z"></path></g><defs><clippath id="clip0_6911_7629"><path fill="#fff" d="M0 0H16V16H0z"></path></clippath></defs></svg></div></div><pre class="FileBlock-module__previewCode--EieE9 FileBlock-module__isClipped--Z6AMg" aria-hidden="true"><code><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">numpy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">np
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">matplotlib.pyplot </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">as</span></span> <span node="[object Object]">plt
</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">from</span></span> <span node="[object Object]">scipy </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">import</span></span> <span node="[object Object]">signal, </span><span node="[object Object]">optimize

</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]"># </span><span node="[object Object]">Função </span><span node="[object Object]">de </span><span node="[object Object]">transferência </span><span node="[object Object]">da </span><span node="[object Object]">planta</span></span><span node="[object Object]">
num_plant </span><span node="[object Object]">= </span><span node="[object Object]">[</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">4.326</span></span><span node="[object Object]">]
</span></code></pre></button><div class="FileBlock-module__insightsButtonContainer--BRMgP"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rbe:-loading-announcement" aria-labelledby=":rbd:"><svg aria-hidden="true" focusable="false" class="octicon octicon-shield" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbd:" popover="auto">Code insights</span></div></div>
<hr>
<h3><span node="[object Object]">O </span><span node="[object Object]">que </span><span node="[object Object]">mudou?</span></h3>
<ul>
<li><strong><span node="[object Object]">A </span><span node="[object Object]">referência </span><span node="[object Object]">agora </span><span node="[object Object]">é </span><span node="[object Object]">dada </span><span node="[object Object]">em </span><span node="[object Object]">graus</span></strong><span node="[object Object]">.</span></li>
<li><strong><span node="[object Object]">O </span><span node="[object Object]">gráfico </span><span node="[object Object]">mostra </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">em </span><span node="[object Object]">graus</span></strong><span node="[object Object]">.</span></li>
<li><span node="[object Object]">Ao </span><span node="[object Object]">alterar </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">de </span><code node="[object Object]"><span node="[object Object]">ref_graus</span></code><span node="[object Object]">, </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">irá </span><span node="[object Object]">ajustar </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">para </span><span node="[object Object]">chegar </span><span node="[object Object]">naquela </span><span node="[object Object]">posição.</span></li>
</ul>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">simular </span><span node="[object Object]">para </span><span node="[object Object]">diferentes </span><span node="[object Object]">ângulos, </span><span node="[object Object]">basta </span><span node="[object Object]">mudar </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">de </span><code node="[object Object]"><span node="[object Object]">ref_graus</span></code><span node="[object Object]">! </span><span node="[object Object]">Se </span><span node="[object Object]">precisar </span><span node="[object Object]">para </span><span node="[object Object]">múltiplas </span><span node="[object Object]">referências </span><span node="[object Object]">ou </span><span node="[object Object]">perfis </span><span node="[object Object]">de </span><span node="[object Object]">movimento </span><span node="[object Object]">(por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">trajetória </span><span node="[object Object]">em </span><span node="[object Object]">rampa), </span><span node="[object Object]">é </span><span node="[object Object]">só </span><span node="[object Object]">avisar.</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbg:-loading-announcement" aria-labelledby=":rbf:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbf:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbi:-loading-announcement" aria-labelledby=":rbh:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbh:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbl:-loading-announcement" aria-labelledby=":rbj:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":rbj:" popover="auto">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":rbm:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbp:-loading-announcement" aria-labelledby=":rbo:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbo:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rbr:-loading-announcement" aria-labelledby=":rbq:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rbq:" popover="auto">Retry with…</span></div></div></div></div></div></div></div><div style=""><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: como eu faço para enviar já para</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">como eu faço para enviar já para o meu arduino e conseguir controlar meu projeto fisicamente? considerando o projeto real onde tem o sensor lendo a posição</div><div class="ChatMessage-module__messageSubthreadIndicator--DJyyk" data-testid="chat-paging-indicator">3/3</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rh4:-loading-announcement" aria-labelledby=":rh3:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rh3:" popover="auto">Edit message</span><div class="ChatPagingComponent-module__container--nH9hp" data-testid="chat-paging-component"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rfg:-loading-announcement" aria-labelledby=":rff:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-left" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M9.78 12.78a.75.75 0 0 1-1.06 0L4.47 8.53a.75.75 0 0 1 0-1.06l4.25-4.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L6.06 8l3.72 3.72a.75.75 0 0 1 0 1.06Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rff:" popover="auto">Previous response</span><span class="ChatPagingComponent-module__pageIndicator--HoVKG">3/3</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ChatPagingComponent-module__disabledButton--hCGPC prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rfi:-loading-announcement" aria-labelledby=":rfh:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-chevron-right" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M6.22 3.22a.75.75 0 0 1 1.06 0l4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L9.94 8 6.22 4.28a.75.75 0 0 1 0-1.06Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rfh:" popover="auto">Next response</span></div></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Ótima pergunta! Para controlar seu pêndulo aéreo</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Ótima </span><span node="[object Object]">pergunta! </span><span node="[object Object]">Para </span><span node="[object Object]">controlar </span><span node="[object Object]">seu </span><span node="[object Object]">pêndulo </span><span node="[object Object]">aéreo </span><span node="[object Object]">real </span><span node="[object Object]">com </span><span node="[object Object]">Arduino, </span><span node="[object Object]">você </span><span node="[object Object]">precisa </span><span node="[object Object]">fazer </span><span node="[object Object]">o </span><span node="[object Object]">controle </span><span node="[object Object]">“em </span><span node="[object Object]">tempo </span><span node="[object Object]">real” </span><span node="[object Object]">no </span><span node="[object Object]">microcontrolador, </span><span node="[object Object]">usando </span><span node="[object Object]">o </span><span node="[object Object]">sensor </span><span node="[object Object]">para </span><span node="[object Object]">ler </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">e </span><span node="[object Object]">atuando </span><span node="[object Object]">sobre </span><span node="[object Object]">o </span><span node="[object Object]">motor.</span><br>
<span node="[object Object]">Veja </span><span node="[object Object]">um </span><span node="[object Object]">passo </span><span node="[object Object]">a </span><span node="[object Object]">passo </span><span node="[object Object]">geral </span><span node="[object Object]">de </span><span node="[object Object]">como </span><span node="[object Object]">fazer </span><span node="[object Object]">isso:</span></p>
<hr>
<h2><span node="[object Object]">1. </span><strong><span node="[object Object]">Leitura </span><span node="[object Object]">do </span><span node="[object Object]">Sensor</span></strong></h2>
<p><span node="[object Object]">O </span><span node="[object Object]">Arduino </span><span node="[object Object]">deve </span><span node="[object Object]">ler </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">do </span><span node="[object Object]">pêndulo </span><span node="[object Object]">(por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">usando </span><span node="[object Object]">um </span><span node="[object Object]">encoder, </span><span node="[object Object]">potenciômetro </span><span node="[object Object]">ou </span><span node="[object Object]">IMU).</span><br>
<span node="[object Object]">Exemplo </span><span node="[object Object]">para </span><span node="[object Object]">um </span><span node="[object Object]">potenciômetro </span><span node="[object Object]">(ajuste </span><span node="[object Object]">conforme </span><span node="[object Object]">seu </span><span node="[object Object]">sensor):</span></p>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":rfs:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C" style="background-color: rgb(243, 75, 125);"></span><span id=":rfs:" class="CodeBlock-module__languageName--ZLWCa">C++</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rfu:-loading-announcement" aria-labelledby=":rft:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rft:" popover="auto">Wrap</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rg1:-loading-announcement" aria-labelledby=":rfv:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rfv:" popover="auto" style="top: 342.775px; left: 692.475px;">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span class="hljs-type" node="[object Object]"><span node="[object Object]">int</span></span> <span node="[object Object]">sensorPin </span><span node="[object Object]">= </span><span node="[object Object]">A0;
</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">leituraSensor </span><span node="[object Object]">= </span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">analogRead</span></span><span node="[object Object]">(sensorPin);
</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Converter </span><span node="[object Object]">leitura </span><span node="[object Object]">para </span><span node="[object Object]">ângulo </span><span node="[object Object]">(graus </span><span node="[object Object]">ou </span><span node="[object Object]">radianos)</span></span>
</code></pre></div></figure>
<hr>
<h2><span node="[object Object]">2. </span><strong><span node="[object Object]">Implementação </span><span node="[object Object]">do </span><span node="[object Object]">Controle </span><span node="[object Object]">PID </span><span node="[object Object]">no </span><span node="[object Object]">Arduino</span></strong></h2>
<p><span node="[object Object]">Você </span><span node="[object Object]">pode </span><span node="[object Object]">programar </span><span node="[object Object]">o </span><span node="[object Object]">algoritmo </span><span node="[object Object]">PID </span><span node="[object Object]">direto </span><span node="[object Object]">no </span><span node="[object Object]">Arduino. </span><span node="[object Object]">Existe </span><span node="[object Object]">uma </span><span node="[object Object]">biblioteca </span><span node="[object Object]">pronta </span><span node="[object Object]">chamada </span><code node="[object Object]"><span node="[object Object]">PID</span></code> <span node="[object Object]">(</span><a href="https://playground.arduino.cc/Code/PIDLibrary/" target="_blank" rel="noopener noreferrer"><span node="[object Object]">Arduino </span><span node="[object Object]">PID </span><span node="[object Object]">Library</span></a><span node="[object Object]">), </span><span node="[object Object]">mas </span><span node="[object Object]">também </span><span node="[object Object]">é </span><span node="[object Object]">possível </span><span node="[object Object]">implementar </span><span node="[object Object]">manualmente:</span></p>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":rg2:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C" style="background-color: rgb(243, 75, 125);"></span><span id=":rg2:" class="CodeBlock-module__languageName--ZLWCa">C++</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rg4:-loading-announcement" aria-labelledby=":rg3:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rg3:" popover="auto">Wrap</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rg7:-loading-announcement" aria-labelledby=":rg5:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rg5:" popover="auto">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">setpoint </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">30</span></span><span node="[object Object]">; </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">posição </span><span node="[object Object]">desejada </span><span node="[object Object]">em </span><span node="[object Object]">graus</span></span>
<span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">Kp </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">1.0</span></span><span node="[object Object]">, </span><span node="[object Object]">Ki </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0.5</span></span><span node="[object Object]">, </span><span node="[object Object]">Kd </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0.1</span></span><span node="[object Object]">; </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">coloque </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">encontrados </span><span node="[object Object]">na </span><span node="[object Object]">simulação</span></span>
<span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">erro, </span><span node="[object Object]">erroAnterior </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0</span></span><span node="[object Object]">, </span><span node="[object Object]">integral </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0</span></span><span node="[object Object]">;
</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">saidaPID;

</span><span class="hljs-function" node="[object Object]"><span class="hljs-type" node="[object Object]"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">loop</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">()</span></span> </span><span node="[object Object]">{
 </span> <span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">posicao </span><span node="[object Object]">= </span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">lerSensor</span></span><span node="[object Object]">(); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">sua </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">leitura</span></span>
  <span node="[object Object]">erro </span><span node="[object Object]">= </span><span node="[object Object]">setpoint </span><span node="[object Object]">- </span><span node="[object Object]">posicao;
 </span> <span node="[object Object]">integral </span><span node="[object Object]">+= </span><span node="[object Object]">erro;
 </span> <span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">derivada </span><span node="[object Object]">= </span><span node="[object Object]">erro </span><span node="[object Object]">- </span><span node="[object Object]">erroAnterior;
 </span> <span node="[object Object]">saidaPID </span><span node="[object Object]">= </span><span node="[object Object]">Kp*erro </span><span node="[object Object]">+ </span><span node="[object Object]">Ki*integral </span><span node="[object Object]">+ </span><span node="[object Object]">Kd*derivada;
 </span> <span node="[object Object]">erroAnterior </span><span node="[object Object]">= </span><span node="[object Object]">erro;

 </span> <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">acionaMotor</span></span><span node="[object Object]">(saidaPID); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">sua </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">controle </span><span node="[object Object]">do </span><span node="[object Object]">motor</span></span>
  <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">delay</span></span><span node="[object Object]">(</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">10</span></span><span node="[object Object]">); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">ajuste </span><span node="[object Object]">conforme </span><span node="[object Object]">necessário</span></span><span node="[object Object]">
}
</span></code></pre></div></figure>
<p><span node="[object Object]">Se </span><span node="[object Object]">preferir, </span><span node="[object Object]">use </span><span node="[object Object]">a </span><span node="[object Object]">biblioteca </span><span node="[object Object]">PID </span><span node="[object Object]">para </span><span node="[object Object]">facilitar </span><span node="[object Object]">a </span><span node="[object Object]">vida:</span></p>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":rg8:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C" style="background-color: rgb(243, 75, 125);"></span><span id=":rg8:" class="CodeBlock-module__languageName--ZLWCa">C++</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rga:-loading-announcement" aria-labelledby=":rg9:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rg9:" popover="auto" style="top: 322.075px; left: 665.462px;">Wrap</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rgd:-loading-announcement" aria-labelledby=":rgb:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rgb:" popover="auto" style="top: 322.075px; left: 692.475px;">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span class="hljs-meta" node="[object Object]"><span node="[object Object]">#</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">include</span></span> <span class="hljs-string" node="[object Object]"><span node="[object Object]">&lt;PID_v1.h&gt;</span></span></span>
<span class="hljs-type" node="[object Object]"><span node="[object Object]">double</span></span> <span node="[object Object]">setpoint, </span><span node="[object Object]">input, </span><span node="[object Object]">output;
</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">double</span></span> <span node="[object Object]">Kp=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">2</span></span><span node="[object Object]">, </span><span node="[object Object]">Ki=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">5</span></span><span node="[object Object]">, </span><span node="[object Object]">Kd=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">1</span></span><span node="[object Object]">; </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">ajuste </span><span node="[object Object]">aqui!</span></span>
<span class="hljs-function" node="[object Object]"><span node="[object Object]">PID </span><span class="hljs-title" node="[object Object]"><span node="[object Object]">myPID</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">(&amp;input, </span><span node="[object Object]">&amp;output, </span><span node="[object Object]">&amp;setpoint, </span><span node="[object Object]">Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd, </span><span node="[object Object]">DIRECT)</span></span></span><span node="[object Object]">;

</span><span class="hljs-function" node="[object Object]"><span class="hljs-type" node="[object Object]"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">setup</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">()</span></span> </span><span node="[object Object]">{
 </span> <span node="[object Object]">setpoint </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">30</span></span><span node="[object Object]">; </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">graus</span></span>
  <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetMode</span></span><span node="[object Object]">(AUTOMATIC);
}

</span><span class="hljs-function" node="[object Object]"><span class="hljs-type" node="[object Object]"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">loop</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">()</span></span> </span><span node="[object Object]">{
 </span> <span node="[object Object]">input </span><span node="[object Object]">= </span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">lerSensor</span></span><span node="[object Object]">();
 </span> <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">Compute</span></span><span node="[object Object]">();
 </span> <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">acionaMotor</span></span><span node="[object Object]">(output);
 </span> <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">delay</span></span><span node="[object Object]">(</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">10</span></span><span node="[object Object]">);
}
</span></code></pre></div></figure>
<hr>
<h2><span node="[object Object]">3. </span><strong><span node="[object Object]">Controle </span><span node="[object Object]">do </span><span node="[object Object]">Motor</span></strong></h2>
<p><span node="[object Object]">Acione </span><span node="[object Object]">seu </span><span node="[object Object]">motor </span><span node="[object Object]">(via </span><span node="[object Object]">PWM, </span><span node="[object Object]">ponte </span><span node="[object Object]">H, </span><span node="[object Object]">etc) </span><span node="[object Object]">usando </span><span node="[object Object]">o </span><span node="[object Object]">valor </span><span node="[object Object]">de </span><span node="[object Object]">saída </span><span node="[object Object]">do </span><span node="[object Object]">PID.</span></p>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":rge:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C" style="background-color: rgb(243, 75, 125);"></span><span id=":rge:" class="CodeBlock-module__languageName--ZLWCa">C++</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rgg:-loading-announcement" aria-labelledby=":rgf:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rgf:" popover="auto" style="top: 384.875px; left: 665.462px;">Wrap</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rgj:-loading-announcement" aria-labelledby=":rgh:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rgh:" popover="auto" style="top: 384.875px; left: 692.475px;">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span class="hljs-function" node="[object Object]"><span class="hljs-type" node="[object Object]"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">acionaMotor</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">(</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">float</span></span> <span node="[object Object]">pid_output)</span></span> </span><span node="[object Object]">{
 </span> <span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Exemplo: </span><span node="[object Object]">PWM </span><span node="[object Object]">entre </span><span node="[object Object]">0 </span><span node="[object Object]">e </span><span node="[object Object]">255</span></span>
  <span class="hljs-type" node="[object Object]"><span node="[object Object]">int</span></span> <span node="[object Object]">pwm </span><span node="[object Object]">= </span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">constrain</span></span><span node="[object Object]">(</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">int</span></span><span node="[object Object]">(pid_output), </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0</span></span><span node="[object Object]">, </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">255</span></span><span node="[object Object]">);
 </span> <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">analogWrite</span></span><span node="[object Object]">(motorPin, </span><span node="[object Object]">pwm);
}
</span></code></pre></div></figure>
<p><span node="[object Object]">Adapte </span><span node="[object Object]">para </span><span node="[object Object]">seu </span><span node="[object Object]">hardware.</span></p>
<hr>
<h2><span node="[object Object]">4. </span><strong><span node="[object Object]">Ajuste </span><span node="[object Object]">dos </span><span node="[object Object]">Ganhos</span></strong></h2>
<ul>
<li><span node="[object Object]">Use </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">que </span><span node="[object Object]">encontrou </span><span node="[object Object]">na </span><span node="[object Object]">simulação </span><span node="[object Object]">do </span><span node="[object Object]">Python.</span></li>
<li><span node="[object Object]">Você </span><span node="[object Object]">pode </span><span node="[object Object]">refiná-los </span><span node="[object Object]">empiricamente </span><span node="[object Object]">no </span><span node="[object Object]">Arduino </span><span node="[object Object]">caso </span><span node="[object Object]">o </span><span node="[object Object]">comportamento </span><span node="[object Object]">real </span><span node="[object Object]">seja </span><span node="[object Object]">diferente </span><span node="[object Object]">do </span><span node="[object Object]">simulado.</span></li>
</ul>
<hr>
<h2><span node="[object Object]">5. </span><strong><span node="[object Object]">Dicas </span><span node="[object Object]">adicionais</span></strong></h2>
<ul>
<li><span node="[object Object]">Se </span><span node="[object Object]">possível, </span><span node="[object Object]">envie </span><span node="[object Object]">os </span><span node="[object Object]">dados </span><span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">PC </span><span node="[object Object]">via </span><span node="[object Object]">Serial </span><span node="[object Object]">para </span><span node="[object Object]">monitorar </span><span node="[object Object]">resposta </span><span node="[object Object]">real.</span></li>
<li><span node="[object Object]">O </span><span node="[object Object]">ciclo </span><span node="[object Object]">de </span><span node="[object Object]">controle </span><span node="[object Object]">(</span><code node="[object Object]"><span node="[object Object]">loop</span></code><span node="[object Object]">) </span><span node="[object Object]">deve </span><span node="[object Object]">ser </span><span node="[object Object]">rápido </span><span node="[object Object]">e </span><span node="[object Object]">regular </span><span node="[object Object]">(use </span><code node="[object Object]"><span node="[object Object]">millis()</span></code> <span node="[object Object]">para </span><span node="[object Object]">garantir </span><span node="[object Object]">um </span><span node="[object Object]">período </span><span node="[object Object]">fixo </span><span node="[object Object]">se </span><span node="[object Object]">necessário).</span></li>
<li><span node="[object Object]">Converta </span><span node="[object Object]">corretamente </span><span node="[object Object]">a </span><span node="[object Object]">unidade </span><span node="[object Object]">da </span><span node="[object Object]">posição </span><span node="[object Object]">lida </span><span node="[object Object]">pelo </span><span node="[object Object]">sensor </span><span node="[object Object]">(exemplo: </span><span node="[object Object]">se </span><span node="[object Object]">o </span><span node="[object Object]">sensor </span><span node="[object Object]">retorna </span><span node="[object Object]">volts/ADC, </span><span node="[object Object]">converta </span><span node="[object Object]">para </span><span node="[object Object]">graus).</span></li>
</ul>
<hr>
<h2><strong><span node="[object Object]">Resumo </span><span node="[object Object]">do </span><span node="[object Object]">Fluxo</span></strong></h2>
<ol>
<li><span node="[object Object]">Arduino </span><span node="[object Object]">lê </span><span node="[object Object]">a </span><span node="[object Object]">posição </span><span node="[object Object]">do </span><span node="[object Object]">sensor.</span></li>
<li><span node="[object Object]">Calcula </span><span node="[object Object]">erro </span><span node="[object Object]">= </span><span node="[object Object]">posição </span><span node="[object Object]">desejada </span><span node="[object Object]">– </span><span node="[object Object]">posição </span><span node="[object Object]">atual.</span></li>
<li><span node="[object Object]">PID </span><span node="[object Object]">calcula </span><span node="[object Object]">o </span><span node="[object Object]">comando </span><span node="[object Object]">de </span><span node="[object Object]">controle.</span></li>
<li><span node="[object Object]">Arduino </span><span node="[object Object]">envia </span><span node="[object Object]">comando </span><span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">motor.</span></li>
<li><span node="[object Object]">Repete </span><span node="[object Object]">em </span><span node="[object Object]">alta </span><span node="[object Object]">frequência </span><span node="[object Object]">(ex: </span><span node="[object Object]">100Hz).</span></li>
</ol>
<hr>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">um </span><span node="[object Object]">exemplo </span><span node="[object Object]">de </span><span node="[object Object]">código </span><span node="[object Object]">completo </span><span node="[object Object]">para </span><span node="[object Object]">um </span><span node="[object Object]">sensor </span><span node="[object Object]">e </span><span node="[object Object]">motor </span><span node="[object Object]">específicos, </span><span node="[object Object]">me </span><span node="[object Object]">fale </span><span node="[object Object]">qual </span><span node="[object Object]">hardware </span><span node="[object Object]">você </span><span node="[object Object]">está </span><span node="[object Object]">usando </span><span node="[object Object]">(tipo </span><span node="[object Object]">de </span><span node="[object Object]">sensor </span><span node="[object Object]">e </span><span node="[object Object]">motor).</span><br>
<span node="[object Object]">Se </span><span node="[object Object]">precisar </span><span node="[object Object]">de </span><span node="[object Object]">integração </span><span node="[object Object]">com </span><span node="[object Object]">o </span><span node="[object Object]">Python </span><span node="[object Object]">(por </span><span node="[object Object]">exemplo, </span><span node="[object Object]">ajuste </span><span node="[object Object]">dos </span><span node="[object Object]">ganhos </span><span node="[object Object]">via </span><span node="[object Object]">Serial), </span><span node="[object Object]">posso </span><span node="[object Object]">te </span><span node="[object Object]">mostrar </span><span node="[object Object]">também!</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rgl:-loading-announcement" aria-labelledby=":rgk:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rgk:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rgn:-loading-announcement" aria-labelledby=":rgm:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rgm:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rgq:-loading-announcement" aria-labelledby=":rgo:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":rgo:" popover="auto" style="top: 600.375px; left: 94.6813px;">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":rgr:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rgu:-loading-announcement" aria-labelledby=":rgt:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rgt:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rh0:-loading-announcement" aria-labelledby=":rgv:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rgv:" popover="auto">Retry with…</span></div></div></div></div></div></div></div><div style="min-height: calc(492px);"><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__user--UoWHh"><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">You said: eu quero no arduino ajustar os ganhos</h3><div class="UserMessage-module__container--cAvvK ChatMessage-module__userMessage--xvIFp">eu quero no arduino ajustar os ganhos automaticamente?</div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rh6:-loading-announcement" aria-labelledby=":rh5:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" popover="auto"><span id=":rh5:">Edit message<span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">(up arrow)</span></span><span class="prc-TooltipV2-KeybindingHintContainer-iabqv prc-TooltipV2-HasTextBefore-cCzYC" aria-hidden="true"><kbd class="prc-KeybindingHint-KeybindingHint-0pyit prc-Text-Text-0ima0" data-testid="keybinding-hint"><span class="Box-sc-g0xbh4-0 fcLLHm prc-Text-Text-0ima0"> <span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">up arrow</span><span aria-hidden="true">↑</span></span></kbd></span></span></div></div></div><div class="message-container ChatMessage-module__chatMessage--rtt38 ChatMessage-module__ai--WrCO3 ChatMessage-module__latest--IZwZP"><div class="CopilotBadgeV2-module__copilotBadge--OJjfk ChatMessage-module__avatar--KYI8V" aria-label="Copilot badge" role="img"><div class="Box-sc-g0xbh4-0 bBSqbm"><div class="CopilotBadgeV2-module__animation--cRY_E CopilotAnimation-module__copilotAnimationHolder--PENiT" style="--copilot-animation-scale: 1;"><div class="CopilotAnimation-module__copilotAnimation--vECRp"><svg xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 32 32" class="Static-module__static--oWkk1" data-animation-state="idle" fill="currentColor" aria-hidden="true"><path d="M24.4234,12.3467c0.3362,0.7559,0.7565,1.5491,0.9952,2.4495c0.1135,0.0555,0.2374,0.1299,0.3706,0.1789
	c0.8842,0.2974,1.3559,1.1355,1.9365,1.8026c0.1649,0.1994,0.2584,0.422,0.2678,0.6836c0.0413,1.1443,0.0624,2.2883,0.0029,3.4631
	c-0.6753,0.7723-1.449,1.4885-2.3765,1.9693c-3.1853,1.8194-6.8046,3.0855-10.5179,2.832c-3.285-0.2064-6.3894-1.461-9.1773-3.1601
	c-0.7035-0.4234-1.253-1.0217-1.8087-1.6122c-0.1135-1.2862-0.0529-2.5526,0.0189-3.8306c0.3847-0.5719,0.8017-1.1182,1.2948-1.597
	c0.2046-0.1987,0.4711-0.3372,0.7201-0.4851c0.141-0.0837,0.3036-0.1308,0.4825-0.2053C6.8,14.1966,7.089,13.5988,7.3427,12.9865
	c0.061-0.1471,0.0493-0.325,0.0672-0.4892c0.0539-0.4957,0.0858-0.9948,0.1633-1.4868c0.4092-2.2852,2.9859-3.047,4.9763-3.3911
	c0.2453-0.0431,0.4933-0.0819,0.7314-0.152c0.8436-0.2484,1.71-0.3751,2.5811-0.435c0.4507-0.031,0.9127,0.0487,1.3652,0.1108
	c0.6186,0.0849,1.2287,0.2162,1.8271,0.4023c0.2772,0.0862,0.5662,0.1347,0.8501,0.1992c1.8413,0.3699,4.0361,1.2775,4.3531,3.3627
	C24.3225,11.4967,24.3631,11.8903,24.4234,12.3467z M15.8919,14.1586c-0.0426,0.066-0.062,0.1308-0.0695,0.1618
	c-0.1831,0.7602-0.7055,1.2032-1.3938,1.4831c-1.2536,0.5223-2.305,0.6827-3.6581,0.464c-0.7066-0.0938-1.3877-0.2665-2.0016-0.6484
	C8.6851,15.567,8.591,15.5313,8.472,15.4736C8.3827,15.6471,8.3226,15.8214,8.2659,16c-0.1095,0.4798-0.1569,0.9623-0.2015,1.4359
	c-0.1387,1.4755-0.1276,2.949,0.2564,4.396c0.9351,0.8712,2.9937,1.4525,4.2539,1.6793c2.5378,0.5104,5.1618,0.4682,7.6677-0.1919
	c1.203-0.2951,2.3396-0.7659,3.3709-1.4657c0.4204-2.0163,0.3328-4.0708-0.0087-6.0888c-0.0525-0.1475-0.1015-0.24-0.2734-0.3328
	c-0.0687,0.0394-0.1607,0.0844-0.2443,0.1417c-0.7293,0.5211-1.6237,0.6161-2.4849,0.735
	c-1.2181,0.1849-2.3555-0.1068-3.4502-0.6074c-0.5734-0.2622-0.9848-0.6881-1.1545-1.3161
	C15.9834,14.3334,15.917,14.2115,15.8919,14.1586z M22.5311,11.9853c-0.0127-0.2285-0.0359-0.4571-0.0357-0.6856
	c0.0004-0.4685-0.2251-0.7932-0.6299-0.9945c-0.2972-0.1477-0.5982-0.3009-0.9145-0.3936
	c-0.8578-0.2411-1.7336-0.4754-2.6331-0.4328c-0.5807-0.0051-0.968,0.5502-0.9921,1.0879
	c-0.0273,0.7684-0.0533,1.5369,0.0271,2.3063c0.0809,0.7746,0.49,1.2587,1.214,1.4984c0.7991,0.2646,1.624,0.3614,2.4603,0.3329
	C22.3974,14.6943,22.5663,13.0471,22.5311,11.9853z M14.4839,11.6733c-0.0015,0-0.0031,0-0.0046,0
	c0-0.354,0.0163-0.709-0.0036-1.0619c-0.0446-0.9827-0.9257-1.2007-1.7562-1.0471c-0.5525,0.0996-1.1022,0.2194-1.6476,0.3531
	c-0.4265,0.1046-0.8221,0.2948-1.1985,0.5215c-0.2862,0.1723-0.4586,0.4217-0.4861,0.7575
	c-0.0976,0.9281-0.1167,1.8906,0.2578,2.7653c0.2175,0.5783,0.8094,0.7647,1.3858,0.7497c0.8479-0.0267,1.7193-0.1092,2.4985-0.4675
	C14.5481,13.8163,14.4949,12.6065,14.4839,11.6733z"></path><path d="M18.0801,17.2702c0.613,0,0.884,0.4186,0.9043,1.0525c0.0186,0.5818,0.0107,1.1647,0.001,1.7469
	c0.0028,0.5809-0.3434,1.0967-0.9639,1.0498c-0.3573-0.0341-0.6566-0.2979-0.7439-0.6594
	c-0.0145-0.0602-0.0223-0.1234-0.0226-0.1853c-0.0031-0.7071-0.0137-1.4145-0.0018-2.1214
	C17.2531,17.6478,17.5713,17.2702,18.0801,17.2702z"></path><path d="M14.4848,20.4914c0,0.4172-0.4046,0.6532-0.7945,0.6624c-0.6615-0.0026-0.9038-0.3537-0.9038-1.1018
	c-0.0176-0.5595-0.0267-1.1193-0.0327-1.679c-0.0013-0.1231,0.0084-0.2504,0.0389-0.369c0.2189-0.8966,1.5327-0.8795,1.6719,0.0652
	c0.0328,0.2029,0.0225,0.4132,0.0263,0.6202c0.0038,0.2073,0.0008,0.4147,0.0008,0.622
	C14.4974,19.3114,14.4848,20.1128,14.4848,20.4914z"></path></svg></div></div></div></div><div class="ChatMessage-module__content--MYneF"><div class="js-snippet-clipboard-copy-unpositioned ChatMessage-module__messageArea--CoOmf"><h3 class="sr-only">Copilot said: Ótima dúvida!  
No Arduino puro, **ajustar</h3><div class="markdown-body MarkdownRenderer-module__container--wIGWk" data-copilot-markdown="true" style="--MarkdownRenderer_streaming-fade-duration: 750ms;"><p><span node="[object Object]">Ótima </span><span node="[object Object]">dúvida!</span><br>
<span node="[object Object]">No </span><span node="[object Object]">Arduino </span><span node="[object Object]">puro, </span><strong><span node="[object Object]">ajustar </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">automaticamente</span></strong> <span node="[object Object]">(ou </span><span node="[object Object]">seja, </span><span node="[object Object]">autotuning) </span><span node="[object Object]">não </span><span node="[object Object]">é </span><span node="[object Object]">trivial </span><span node="[object Object]">como </span><span node="[object Object]">no </span><span node="[object Object]">Python, </span><span node="[object Object]">pois </span><span node="[object Object]">o </span><span node="[object Object]">Arduino </span><span node="[object Object]">tem </span><span node="[object Object]">recursos </span><span node="[object Object]">computacionais </span><span node="[object Object]">limitados </span><span node="[object Object]">e </span><span node="[object Object]">não </span><span node="[object Object]">possui </span><span node="[object Object]">bibliotecas </span><span node="[object Object]">robustas </span><span node="[object Object]">de </span><span node="[object Object]">otimização </span><span node="[object Object]">como </span><span node="[object Object]">o </span><code node="[object Object]"><span node="[object Object]">scipy.optimize</span></code><span node="[object Object]">.</span><br>
<span node="[object Object]">No </span><span node="[object Object]">entanto, </span><strong><span node="[object Object]">existem </span><span node="[object Object]">opções </span><span node="[object Object]">práticas</span></strong><span node="[object Object]">:</span></p>
<hr>
<h2><span node="[object Object]">1. </span><strong><span node="[object Object]">Usar </span><span node="[object Object]">Bibliotecas </span><span node="[object Object]">de </span><span node="[object Object]">Autotuning </span><span node="[object Object]">para </span><span node="[object Object]">Arduino</span></strong></h2>
<p><span node="[object Object]">A </span><span node="[object Object]">biblioteca </span><a href="https://playground.arduino.cc/Code/PIDLibrary/" target="_blank" rel="noopener noreferrer"><span node="[object Object]">Arduino </span><span node="[object Object]">PID </span><span node="[object Object]">Library</span></a> <span node="[object Object]">tem </span><span node="[object Object]">um </span><span node="[object Object]">complemento </span><span node="[object Object]">chamado </span><strong><span node="[object Object]">PID-AutoTune</span></strong><span node="[object Object]">.</span><br>
<span node="[object Object]">Você </span><span node="[object Object]">pode </span><span node="[object Object]">usar </span><span node="[object Object]">o </span><a href="https://github.com/br3ttb/Arduino-PID-AutoTune-Library" target="_blank" rel="noopener noreferrer"><span node="[object Object]">PID_AutoTune </span><span node="[object Object]">Library</span></a> <span node="[object Object]">para </span><span node="[object Object]">buscar </span><span node="[object Object]">automaticamente </span><span node="[object Object]">os </span><span node="[object Object]">melhores </span><span node="[object Object]">ganhos </span><span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">seu </span><span node="[object Object]">sistema </span><span node="[object Object]">físico!</span></p>
<h3><span node="[object Object]">Exemplo </span><span node="[object Object]">básico </span><span node="[object Object]">de </span><span node="[object Object]">uso:</span></h3>
<figure class="CodeBlock-module__container--BRsgk CodeBlock-module__immersive--vxBb6" aria-labelledby=":rh9:"><div class="CodeBlock-module__header--RMUQr"><span class="LanguageDot-module__languageDot--h8s9C" style="background-color: rgb(243, 75, 125);"></span><span id=":rh9:" class="CodeBlock-module__languageName--ZLWCa">C++</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rhb:-loading-announcement" aria-labelledby=":rha:"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="none" viewBox="0 0 16 16" aria-hidden="true"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M1 13h3M1 3h14"></path><path fill="currentColor" fill-rule="evenodd" d="M1 7.25a.75.75 0 0 0 0 1.5h11.5a1.75 1.75 0 1 1 0 3.5H9.536v-.464a.679.679 0 0 0-1.086-.543l-1.619 1.214a.68.68 0 0 0 0 1.086l1.619 1.214a.679.679 0 0 0 1.086-.543v-.464H12.5a3.25 3.25 0 0 0 0-6.5z" clip-rule="evenodd"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rha:" popover="auto">Wrap</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rhg:-loading-announcement" aria-labelledby=":rhf:"><svg aria-hidden="true" focusable="false" class="octicon octicon-shield" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rhf:" popover="auto">Code insights</span></div><div class="CodeBlock-module__copyContainer--HAOPj"><div class="CodeBlock-module__copyContent--RfUYZ"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI CodeBlock-module__copyButton--zcOKE prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rhe:-loading-announcement" aria-labelledby=":rhc:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rhc:" popover="auto">Copy code</span></div></div><div class="CodeBlock-module__codeContainer--dAEis"><pre class="CodeBlock-module__code--KUcqT" tabindex="0"><code class=""><span class="hljs-meta" node="[object Object]"><span node="[object Object]">#</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">include</span></span> <span node="[object Object]" class="hljs-string"><span node="[object Object]">&lt;PID_v1.h&gt;</span></span></span>
<span class="hljs-meta" node="[object Object]"><span node="[object Object]">#</span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">include</span></span> <span class="hljs-string" node="[object Object]"><span node="[object Object]">&lt;PID_AutoTune_v0.h&gt;</span></span></span>

<span class="hljs-type" node="[object Object]"><span node="[object Object]">double</span></span> <span node="[object Object]">Setpoint, </span><span node="[object Object]">Input, </span><span node="[object Object]">Output;
</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">double</span></span> <span node="[object Object]">Kp=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">2</span></span><span node="[object Object]">, </span><span node="[object Object]">Ki=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">5</span></span><span node="[object Object]">, </span><span node="[object Object]">Kd=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">1</span></span><span node="[object Object]">;

</span><span class="hljs-function" node="[object Object]"><span node="[object Object]">PID </span><span class="hljs-title" node="[object Object]"><span node="[object Object]">myPID</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">(&amp;Input, </span><span node="[object Object]">&amp;Output, </span><span node="[object Object]">&amp;Setpoint, </span><span node="[object Object]">Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd, </span><span node="[object Object]">DIRECT)</span></span></span><span node="[object Object]">;

</span><span class="hljs-function" node="[object Object]"><span node="[object Object]">PID_ATune </span><span class="hljs-title" node="[object Object]"><span node="[object Object]">aTune</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">(&amp;Input, </span><span node="[object Object]">&amp;Output)</span></span></span><span node="[object Object]">;

</span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Parâmetros </span><span node="[object Object]">de </span><span node="[object Object]">autotune</span></span>
<span class="hljs-type" node="[object Object]"><span node="[object Object]">double</span></span> <span node="[object Object]">aTuneStep=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">50</span></span><span node="[object Object]">, </span><span node="[object Object]">aTuneNoise=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">1</span></span><span node="[object Object]">, </span><span node="[object Object]">aTuneStartValue=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">100</span></span><span node="[object Object]">;
</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">unsigned</span></span> <span class="hljs-type" node="[object Object]"><span node="[object Object]">int</span></span> <span node="[object Object]">aTuneLookBack=</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">20</span></span><span node="[object Object]">;

</span><span class="hljs-function" node="[object Object]"><span node="[object Object]" class="hljs-type"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">setup</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">()</span></span> </span><span node="[object Object]">{
 </span> <span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">begin</span></span><span node="[object Object]">(</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">9600</span></span><span node="[object Object]">);
 </span> <span node="[object Object]">Setpoint </span><span node="[object Object]">= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">30</span></span><span node="[object Object]">; </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">graus</span></span>
  <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetMode</span></span><span node="[object Object]">(MANUAL); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Deixe </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">em </span><span node="[object Object]">manual </span><span node="[object Object]">durante </span><span node="[object Object]">autotune</span></span>
  <span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetOutputStep</span></span><span node="[object Object]">(aTuneStep);
 </span> <span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetNoiseBand</span></span><span node="[object Object]">(aTuneNoise);
 </span> <span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetLookbackSec</span></span><span node="[object Object]">((</span><span class="hljs-type" node="[object Object]"><span node="[object Object]">int</span></span><span node="[object Object]">)aTuneLookBack);
 </span> <span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetControlType</span></span><span node="[object Object]">(</span><span class="hljs-number" node="[object Object]"><span node="[object Object]">1</span></span><span node="[object Object]">); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">PID</span></span><span node="[object Object]">
}

</span><span class="hljs-function" node="[object Object]"><span class="hljs-type" node="[object Object]"><span node="[object Object]">void</span></span> <span class="hljs-title" node="[object Object]"><span node="[object Object]">loop</span></span><span class="hljs-params" node="[object Object]"><span node="[object Object]">()</span></span> </span><span node="[object Object]">{
 </span> <span node="[object Object]">Input </span><span node="[object Object]">= </span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">lerSensor</span></span><span node="[object Object]">(); </span><span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Sua </span><span node="[object Object]">função </span><span node="[object Object]">de </span><span node="[object Object]">leitura</span></span>
  <span class="hljs-keyword" node="[object Object]"><span node="[object Object]">if</span></span> <span node="[object Object]">(autoTuneActive) </span><span node="[object Object]">{
 </span>   <span class="hljs-keyword" node="[object Object]"><span node="[object Object]">if</span></span> <span node="[object Object]">(aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">Runtime</span></span><span node="[object Object]">() </span><span node="[object Object]">!= </span><span class="hljs-number" node="[object Object]"><span node="[object Object]">0</span></span><span node="[object Object]">) </span><span node="[object Object]">{
 </span>     <span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Autotune </span><span node="[object Object]">terminou, </span><span node="[object Object]">pega </span><span node="[object Object]">os </span><span node="[object Object]">ganhos</span></span>
      <span node="[object Object]">Kp </span><span node="[object Object]">= </span><span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">GetKp</span></span><span node="[object Object]">();
 </span>     <span node="[object Object]">Ki </span><span node="[object Object]">= </span><span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">GetKi</span></span><span node="[object Object]">();
 </span>     <span node="[object Object]">Kd </span><span node="[object Object]">= </span><span node="[object Object]">aTune.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">GetKd</span></span><span node="[object Object]">();

 </span>     <span class="hljs-comment" node="[object Object]"><span node="[object Object]">// </span><span node="[object Object]">Atualiza </span><span node="[object Object]">o </span><span node="[object Object]">PID </span><span node="[object Object]">com </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">ajustados</span></span>
      <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetTunings</span></span><span node="[object Object]">(Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd);
 </span>     <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">SetMode</span></span><span node="[object Object]">(AUTOMATIC);
 </span>     <span node="[object Object]">autoTuneActive </span><span node="[object Object]">= </span><span class="hljs-literal" node="[object Object]"><span node="[object Object]">false</span></span><span node="[object Object]">;
 </span>     <span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">println</span></span><span node="[object Object]">(</span><span class="hljs-string" node="[object Object]"><span node="[object Object]">"Autotune </span><span node="[object Object]">finalizado!"</span></span><span node="[object Object]">);
 </span>     <span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">print</span></span><span node="[object Object]">(</span><span class="hljs-string" node="[object Object]"><span node="[object Object]">"Kp: </span><span node="[object Object]">"</span></span><span node="[object Object]">); </span><span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">println</span></span><span node="[object Object]">(Kp);
 </span>     <span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">print</span></span><span node="[object Object]">(</span><span class="hljs-string" node="[object Object]"><span node="[object Object]">"Ki: </span><span node="[object Object]">"</span></span><span node="[object Object]">); </span><span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">println</span></span><span node="[object Object]">(Ki);
 </span>     <span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">print</span></span><span node="[object Object]">(</span><span class="hljs-string" node="[object Object]"><span node="[object Object]">"Kd: </span><span node="[object Object]">"</span></span><span node="[object Object]">); </span><span node="[object Object]">Serial.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">println</span></span><span node="[object Object]">(Kd);
 </span>   <span node="[object Object]">}
 </span> <span node="[object Object]">} </span><span class="hljs-keyword" node="[object Object]"><span node="[object Object]">else</span></span> <span node="[object Object]">{
 </span>   <span node="[object Object]">myPID.</span><span class="hljs-built_in" node="[object Object]"><span node="[object Object]">Compute</span></span><span node="[object Object]">();
 </span>   <span class="hljs-built_in" node="[object Object]"><span node="[object Object]">acionaMotor</span></span><span node="[object Object]">(Output);
 </span> <span node="[object Object]">}
}
</span></code></pre></div></figure>
<ul>
<li><span node="[object Object]">Para </span><span node="[object Object]">iniciar </span><span node="[object Object]">o </span><span node="[object Object]">autotune, </span><span node="[object Object]">defina </span><code node="[object Object]"><span node="[object Object]">autoTuneActive </span><span node="[object Object]">= </span><span node="[object Object]">true</span></code> <span node="[object Object]">(faça </span><span node="[object Object]">isso </span><span node="[object Object]">por </span><span node="[object Object]">comando </span><span node="[object Object]">Serial, </span><span node="[object Object]">botão, </span><span node="[object Object]">etc).</span></li>
<li><span node="[object Object]">Quando </span><span node="[object Object]">o </span><span node="[object Object]">autotune </span><span node="[object Object]">terminar, </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">PID </span><span node="[object Object]">serão </span><span node="[object Object]">atualizados </span><span node="[object Object]">automaticamente.</span></li>
</ul>
<hr>
<h2><span node="[object Object]">2. </span><strong><span node="[object Object]">Ajuste </span><span node="[object Object]">externo </span><span node="[object Object]">via </span><span node="[object Object]">Serial </span><span node="[object Object]">(opcional)</span></strong></h2>
<p><span node="[object Object]">Você </span><span node="[object Object]">pode </span><span node="[object Object]">também </span><span node="[object Object]">implementar </span><span node="[object Object]">um </span><span node="[object Object]">protocolo </span><span node="[object Object]">para </span><span node="[object Object]">enviar </span><span node="[object Object]">valores </span><span node="[object Object]">de </span><span node="[object Object]">Kp, </span><span node="[object Object]">Ki, </span><span node="[object Object]">Kd </span><span node="[object Object]">do </span><span node="[object Object]">PC </span><span node="[object Object]">(Python) </span><span node="[object Object]">para </span><span node="[object Object]">o </span><span node="[object Object]">Arduino </span><span node="[object Object]">via </span><span node="[object Object]">Serial, </span><span node="[object Object]">permitindo </span><span node="[object Object]">ajuste </span><span node="[object Object]">externo, </span><span node="[object Object]">de </span><span node="[object Object]">modo </span><span node="[object Object]">iterativo </span><span node="[object Object]">ou </span><span node="[object Object]">até </span><span node="[object Object]">usando </span><span node="[object Object]">otimização </span><span node="[object Object]">no </span><span node="[object Object]">Python.</span></p>
<hr>
<h2><span node="[object Object]">3. </span><strong><span node="[object Object]">Limitações</span></strong></h2>
<ul>
<li><span node="[object Object]">O </span><span node="[object Object]">autotune </span><span node="[object Object]">funciona </span><span node="[object Object]">bem </span><span node="[object Object]">para </span><span node="[object Object]">sistemas </span><span node="[object Object]">estáveis </span><span node="[object Object]">e </span><span node="[object Object]">pouco </span><span node="[object Object]">ruidosos.</span></li>
<li><span node="[object Object]">Para </span><span node="[object Object]">sistemas </span><span node="[object Object]">muito </span><span node="[object Object]">rápidos </span><span node="[object Object]">ou </span><span node="[object Object]">muito </span><span node="[object Object]">lentos, </span><span node="[object Object]">pode </span><span node="[object Object]">ser </span><span node="[object Object]">necessário </span><span node="[object Object]">ajustar </span><span node="[object Object]">os </span><span node="[object Object]">parâmetros </span><span node="[object Object]">de </span><span node="[object Object]">autotune </span><span node="[object Object]">(step, </span><span node="[object Object]">lookback, </span><span node="[object Object]">etc).</span></li>
<li><span node="[object Object]">O </span><span node="[object Object]">autotune </span><span node="[object Object]">é </span><span node="[object Object]">feito </span><strong><span node="[object Object]">com </span><span node="[object Object]">o </span><span node="[object Object]">sistema </span><span node="[object Object]">real</span></strong> <span node="[object Object]">rodando </span><span node="[object Object]">— </span><span node="[object Object]">tome </span><span node="[object Object]">cuidado </span><span node="[object Object]">para </span><span node="[object Object]">não </span><span node="[object Object]">causar </span><span node="[object Object]">movimentos </span><span node="[object Object]">bruscos </span><span node="[object Object]">perigosos!</span></li>
</ul>
<hr>
<h3><strong><span node="[object Object]">Resumo</span></strong></h3>
<ul>
<li><span node="[object Object]">Use </span><span node="[object Object]">a </span><span node="[object Object]">biblioteca </span><a href="https://github.com/br3ttb/Arduino-PID-AutoTune-Library" target="_blank" rel="noopener noreferrer"><span node="[object Object]">PID_AutoTune</span></a> <span node="[object Object]">para </span><span node="[object Object]">autotuning </span><span node="[object Object]">direto </span><span node="[object Object]">no </span><span node="[object Object]">Arduino.</span></li>
<li><span node="[object Object]">Inicie </span><span node="[object Object]">o </span><span node="[object Object]">autotune </span><span node="[object Object]">e, </span><span node="[object Object]">quando </span><span node="[object Object]">ele </span><span node="[object Object]">terminar, </span><span node="[object Object]">os </span><span node="[object Object]">ganhos </span><span node="[object Object]">serão </span><span node="[object Object]">ajustados </span><span node="[object Object]">automaticamente.</span></li>
</ul>
<p><span node="[object Object]">Se </span><span node="[object Object]">quiser </span><span node="[object Object]">um </span><span node="[object Object]">exemplo </span><span node="[object Object]">completo </span><span node="[object Object]">voltado </span><span node="[object Object]">para </span><span node="[object Object]">seu </span><span node="[object Object]">sensor/motor, </span><span node="[object Object]">me </span><span node="[object Object]">fale </span><span node="[object Object]">qual </span><span node="[object Object]">hardware </span><span node="[object Object]">você </span><span node="[object Object]">usa!</span></p></div></div><div class="ChatMessage-module__actions--Jllb6" role="toolbar" aria-label="Message tools" data-testid="nonshared-toolbar"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rhi:-loading-announcement" aria-labelledby=":rhh:" tabindex="0"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsup" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8.347.631A.75.75 0 0 1 9.123.26l.238.04a3.25 3.25 0 0 1 2.591 4.098L11.494 6h.665a3.25 3.25 0 0 1 3.118 4.167l-1.135 3.859A2.751 2.751 0 0 1 11.503 16H6.586a3.75 3.75 0 0 1-2.184-.702A1.75 1.75 0 0 1 3 16H1.75A1.75 1.75 0 0 1 0 14.25v-6.5C0 6.784.784 6 1.75 6h3.417a.25.25 0 0 0 .217-.127ZM4.75 13.649l.396.33c.404.337.914.521 1.44.521h4.917a1.25 1.25 0 0 0 1.2-.897l1.135-3.859A1.75 1.75 0 0 0 12.159 7.5H10.5a.75.75 0 0 1-.721-.956l.731-2.558a1.75 1.75 0 0 0-1.127-2.14L6.69 6.611a1.75 1.75 0 0 1-1.523.889H4.75ZM3.25 7.5h-1.5a.25.25 0 0 0-.25.25v6.5c0 .138.112.25.25.25H3a.25.25 0 0 0 .25-.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rhh:" popover="auto">Good response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI feedback-action prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rhk:-loading-announcement" aria-labelledby=":rhj:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-thumbsdown" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M7.653 15.369a.75.75 0 0 1-.776.371l-.238-.04a3.25 3.25 0 0 1-2.591-4.099L4.506 10h-.665A3.25 3.25 0 0 1 .723 5.833l1.135-3.859A2.75 2.75 0 0 1 4.482 0H9.43c.78.003 1.538.25 2.168.702A1.752 1.752 0 0 1 12.989 0h1.272A1.75 1.75 0 0 1 16 1.75v6.5A1.75 1.75 0 0 1 14.25 10h-3.417a.25.25 0 0 0-.217.127ZM11.25 2.351l-.396-.33a2.248 2.248 0 0 0-1.44-.521H4.496a1.25 1.25 0 0 0-1.199.897L2.162 6.256A1.75 1.75 0 0 0 3.841 8.5H5.5a.75.75 0 0 1 .721.956l-.731 2.558a1.75 1.75 0 0 0 1.127 2.14L9.31 9.389a1.75 1.75 0 0 1 1.523-.889h.417Zm1.5 6.149h1.5a.25.25 0 0 0 .25-.25v-6.5a.25.25 0 0 0-.25-.25H13a.25.25 0 0 0-.25.25Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rhj:" popover="auto">Bad response</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI d-flex flex-items-center prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rhn:-loading-announcement" aria-labelledby=":rhl:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy to clipboard" aria-hidden="true" id=":rhl:" popover="auto">Copy to clipboard</span><div><div class="Box-sc-g0xbh4-0 ModelPicker-module__messageRetryButtonGroup--LwA2d prc-ButtonGroup-ButtonGroup-vcMeG" aria-label="Retry with model" id=":rho:" aria-haspopup="true" aria-expanded="false" tabindex="-1"><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryButton--AuxIi prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rhr:-loading-announcement" aria-labelledby=":rhq:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-sync" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M1.705 8.005a.75.75 0 0 1 .834.656 5.5 5.5 0 0 0 9.592 2.97l-1.204-1.204a.25.25 0 0 1 .177-.427h3.646a.25.25 0 0 1 .25.25v3.646a.25.25 0 0 1-.427.177l-1.38-1.38A7.002 7.002 0 0 1 1.05 8.84a.75.75 0 0 1 .656-.834ZM8 2.5a5.487 5.487 0 0 0-4.131 1.869l1.204 1.204A.25.25 0 0 1 4.896 6H1.25A.25.25 0 0 1 1 5.75V2.104a.25.25 0 0 1 .427-.177l1.38 1.38A7.002 7.002 0 0 1 14.95 7.16a.75.75 0 0 1-1.49.178A5.5 5.5 0 0 0 8 2.5Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rhq:" popover="auto">Retry with GPT-4.1</span></div><div><div class="ModelPicker-module__messageRetryDivider--ueL1f"></div></div><div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ModelPicker-module__messageRetryMenuButton--C2DRW prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rht:-loading-announcement" aria-labelledby=":rhs:" tabindex="-1"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rhs:" popover="auto">Retry with…</span></div></div></div></div></div></div></div></div><button data-component="IconButton" type="button" tabindex="-1" aria-hidden="true" class="prc-Button-ButtonBase-c50BI ImmersiveChat-module__scrollToBottomButton--MQEF2 prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r4e:-loading-announcement" aria-labelledby=":r4d:"><svg aria-hidden="true" focusable="false" class="octicon octicon-arrow-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M13.03 8.22a.75.75 0 0 1 0 1.06l-4.25 4.25a.75.75 0 0 1-1.06 0L3.47 9.28a.751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018l2.97 2.97V3.75a.75.75 0 0 1 1.5 0v7.44l2.97-2.97a.75.75 0 0 1 1.06 0Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="n" aria-hidden="true" id=":r4d:" popover="auto" style="top: 540.5px; left: 336.244px;">Scroll to bottom</span><div></div></div><div class="Box-sc-g0xbh4-0 hCIkaU"></div><div style="height: 1px; margin-top: -1px;"></div></div></div><div class="Layout-module__footer--raJHn"><div class="Layout-module__chatInputContainer--DXrKy"><div style="display: contents;"><form class="ChatInput-module__container--NFzCy"><div class="ChatInput-module__inputContainer--BcExV" style="height: 48px;"><div class="InlineAutocomplete-module__container--UwGMb InlineAutocomplete-module__fullWidth--X6eXo"><textarea id="copilot-chat-textarea" class="ChatInput-module__input--iApWs" autocomplete="off" autocorrect="off" spellcheck="false" aria-multiline="true" placeholder="Ask Copilot" data-react-autofocus="true" style="height: 48px;"></textarea></div><div id="copilot-chat-textarea-preview" aria-hidden="true" class="ChatInput-module__inputPreview--f_0H3" role="presentation" style="height: 48px;"></div></div><div class="ChatInput-module__trailingActions--q2BNB"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r3n:-loading-announcement" aria-labelledby=":r3m:"><svg aria-hidden="true" focusable="false" class="octicon octicon-paperclip" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M12.212 3.02a1.753 1.753 0 0 0-2.478.003l-5.83 5.83a3.007 3.007 0 0 0-.88 2.127c0 .795.315 1.551.88 2.116.567.567 1.333.89 2.126.89.79 0 1.548-.321 2.116-.89l5.48-5.48a.75.75 0 0 1 1.061 1.06l-5.48 5.48a4.492 4.492 0 0 1-3.177 1.33c-1.2 0-2.345-.487-3.187-1.33a4.483 4.483 0 0 1-1.32-3.177c0-1.195.475-2.341 1.32-3.186l5.83-5.83a3.25 3.25 0 0 1 5.553 2.297c0 .863-.343 1.691-.953 2.301L7.439 12.39c-.375.377-.884.59-1.416.593a1.998 1.998 0 0 1-1.412-.593 1.992 1.992 0 0 1 0-2.828l5.48-5.48a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-5.48 5.48a.492.492 0 0 0 0 .707.499.499 0 0 0 .352.154.51.51 0 0 0 .356-.154l5.833-5.827a1.755 1.755 0 0 0 0-2.481Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="n" aria-hidden="true" popover="auto"><span id=":r3m:">Add attachment<span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">(control shift at)</span></span><span class="prc-TooltipV2-KeybindingHintContainer-iabqv prc-TooltipV2-HasTextBefore-cCzYC" aria-hidden="true"><kbd class="prc-KeybindingHint-KeybindingHint-0pyit prc-Text-Text-0ima0" data-testid="keybinding-hint"><span class="Box-sc-g0xbh4-0 fcLLHm prc-Text-Text-0ima0"> <span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">control</span><span aria-hidden="true">⌃</span> <span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">shift</span><span aria-hidden="true">⇧</span> <span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">at</span><span aria-hidden="true">@</span></span></kbd></span></span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rhv:-loading-announcement" aria-labelledby=":rhu:"><svg aria-hidden="true" focusable="false" class="octicon octicon-paper-airplane" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M.989 8 .064 2.68a1.342 1.342 0 0 1 1.85-1.462l13.402 5.744a1.13 1.13 0 0 1 0 2.076L1.913 14.782a1.343 1.343 0 0 1-1.85-1.463L.99 8Zm.603-5.288L2.38 7.25h4.87a.75.75 0 0 1 0 1.5H2.38l-.788 4.538L13.929 8Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="n" aria-hidden="true" popover="auto"><span id=":rhu:">Send now<span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">(enter)</span></span><span class="prc-TooltipV2-KeybindingHintContainer-iabqv prc-TooltipV2-HasTextBefore-cCzYC" aria-hidden="true"><kbd class="prc-KeybindingHint-KeybindingHint-0pyit prc-Text-Text-0ima0" data-testid="keybinding-hint"><span class="Box-sc-g0xbh4-0 fcLLHm prc-Text-Text-0ima0"> <span class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi">enter</span><span aria-hidden="true">⏎</span></span></kbd></span></span></div></form></div><div><input id="image-uploader" hidden="" type="file" accept=".jpeg,.png,.webp,.gif,.jpg,"><div><dialog aria-labelledby=":r3s:--title" aria-describedby=":r3s:--description" data-variant="modal" data-width-large="" data-height-fit-content="" data-max-height-xlarge="" data-visibility-undefined="" class="prc-SelectPanel2-Overlay-ZMksW prc-Overlay-Overlay-dVyJl" style="--max-height: 600px; --position-top: 0px; --position-left: 0px; visibility: hidden; display: flex;"></dialog></div><div><dialog aria-labelledby=":r3t:--title" aria-describedby=":r3t:--description" data-variant="modal" data-width-large="" data-height-fit-content="" data-max-height-xlarge="" data-visibility-undefined="" class="prc-SelectPanel2-Overlay-ZMksW prc-Overlay-Overlay-dVyJl" style="--max-height: 600px; --position-top: 0px; --position-left: 0px; visibility: hidden; display: flex;"></dialog></div><div><dialog aria-labelledby=":r3u:--title" aria-describedby=":r3u:--description" data-variant="modal" data-width-large="" data-height-fit-content="" data-max-height-xlarge="" data-visibility-undefined="" class="prc-SelectPanel2-Overlay-ZMksW prc-Overlay-Overlay-dVyJl" style="--max-height: 600px; --position-top: 0px; --position-left: 0px; visibility: hidden; display: flex;"></dialog></div></div></div></div></div></div><div class="Layout-module__previewPane--vF1ZO Layout-module__active--nDCtU"><div class="Layout-module__viewer--M_UyD"><aside aria-labelledby=":rq:" class="ContentPreview-module__container--bV98v" tabindex="-1" data-testid="content-preview"><h2 id=":rq:" class="sr-only">Workbench</h2><div class="ContentPreview-module__toolbar--b58FL"><div class="ContentPreview-module__actions--AGnBu ContentPreview-module__rightDivider--Ta3Js"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rv:-loading-announcement" aria-labelledby=":ru:"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-collapse" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M6.823 7.823a.25.25 0 0 1 0 .354l-2.396 2.396A.25.25 0 0 1 4 10.396V5.604a.25.25 0 0 1 .427-.177Z"></path><path d="M1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25V1.75C0 .784.784 0 1.75 0ZM1.5 1.75v12.5c0 .138.112.25.25.25H9.5v-13H1.75a.25.25 0 0 0-.25.25ZM11 14.5h3.25a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":ru:" popover="auto">Close workbench</span></div><div class="ContentPreview-module__tabsContainer--bNywg"><div class="ContentPreview-module__tabs--Si9sh" role="tablist" aria-label="Workbench items" tabindex="-1"><div class="ContentPreviewTab-module__tabContainer--TyGLZ"><div class="ContentPreviewTab-module__tabContent--zNIXv"><button class="ContentPreviewTab-module__mainButton--Y_fZZ" type="button" role="tab" aria-describedby=":rt:" tabindex="0"><span class="ContentPreviewTab-module__icon--Ff5yz"><svg aria-hidden="true" focusable="false" class="octicon octicon-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg></span><span class="ContentPreviewTab-module__title--WZajJ" data-title="pendulo_aereo_openloop.py" data-testid="content-preview-tab-file:pendulo_aereo_openloop.py#6.18">pendulo_aereo_openloop.py</span></button><div class="ContentPreviewTab-module__closeButton--DACs7"><button data-component="IconButton" type="button" aria-label="Close pendulo_aereo_openloop.py" aria-hidden="true" tabindex="-1" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r88:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-x" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path></svg></button></div></div></div><div class="ContentPreviewTab-module__tabContainer--TyGLZ"><div class="ContentPreviewTab-module__tabContent--zNIXv"><button class="ContentPreviewTab-module__mainButton--Y_fZZ" type="button" role="tab" aria-describedby=":rt:" tabindex="-1"><span class="ContentPreviewTab-module__icon--Ff5yz"><svg aria-hidden="true" focusable="false" class="octicon octicon-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg></span><span class="ContentPreviewTab-module__title--WZajJ" data-title="simulacao_pid_pendulo.py" data-testid="content-preview-tab-file:simulacao_pid_pendulo.py#8.25">simulacao_pid_pendulo.py</span></button><div class="ContentPreviewTab-module__closeButton--DACs7"><button data-component="IconButton" type="button" aria-label="Close simulacao_pid_pendulo.py" aria-hidden="true" tabindex="-1" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r9c:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-x" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path></svg></button></div></div></div><div class="ContentPreviewTab-module__tabContainer--TyGLZ"><div class="ContentPreviewTab-module__tabContent--zNIXv"><button class="ContentPreviewTab-module__mainButton--Y_fZZ" type="button" role="tab" aria-describedby=":rt:" tabindex="-1"><span class="ContentPreviewTab-module__icon--Ff5yz"><svg aria-hidden="true" focusable="false" class="octicon octicon-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg></span><span class="ContentPreviewTab-module__title--WZajJ" data-title="sintonia_pid_otima.py" data-testid="content-preview-tab-file:sintonia_pid_otima.py#10.9">sintonia_pid_otima.py</span></button><div class="ContentPreviewTab-module__closeButton--DACs7"><button data-component="IconButton" type="button" aria-label="Close sintonia_pid_otima.py" aria-hidden="true" tabindex="-1" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rac:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-x" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path></svg></button></div></div></div><div class="ContentPreviewTab-module__tabContainer--TyGLZ"><div class="ContentPreviewTab-module__tabContent--zNIXv"><button class="ContentPreviewTab-module__mainButton--Y_fZZ" type="button" role="tab" aria-describedby=":rt:" tabindex="-1"><span class="ContentPreviewTab-module__icon--Ff5yz"><svg aria-hidden="true" focusable="false" class="octicon octicon-code" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path></svg></span><span class="ContentPreviewTab-module__title--WZajJ" data-title="sintonia_pid_otima_graus.py" data-testid="content-preview-tab-file:sintonia_pid_otima_graus.py#12.5">sintonia_pid_otima_graus.py</span></button><div class="ContentPreviewTab-module__closeButton--DACs7"><button data-component="IconButton" type="button" aria-label="Close sintonia_pid_otima_graus.py" aria-hidden="true" tabindex="-1" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":rbc:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-x" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path></svg></button></div></div></div><span id=":rt:" aria-hidden="true" class="sr-only">Press Delete to close.</span><span></span></div></div><div class="ContentPreview-module__actions--AGnBu ContentPreview-module__leftDivider--X7WDV"><button data-component="IconButton" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":r4k:-loading-announcement" aria-labelledby=":r4m:" id=":r4k:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":r4m:" popover="auto">More options</span></div> </div><div class="ContentPreview-module__content--o15no" role="tabpanel" id=":rs:" aria-labelledby=":rr:"><div class="FilePreview-module__container--_pENP"><div class="FilePreview-module__toolbar--toYCM"><div class="FilePreview-module__toolbarLeft--FG_Fy"><p class="FilePreview-module__toolbarLoC--cjBe0">27 lines · 629 bytes</p></div><div class="FilePreview-module__toolbarActions--GZPSm"><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rfo:-loading-announcement" aria-labelledby=":rfm:"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Copy code" aria-hidden="true" id=":rfm:" popover="auto">Copy code</span><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":rfq:-loading-announcement" aria-labelledby=":rfp:"><svg aria-hidden="true" focusable="false" class="octicon octicon-download" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"></path><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.749.749 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06l1.97 1.969Z"></path></svg></button><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-hidden="true" id=":rfp:" popover="auto">Download code</span></div></div><span id=":rfr:" class="sr-only">pendulo_aereo_openloop.py file contents</span><div class="FilePreview-module__codeMirrorContainer--bIVZV"><div class="cm-editor ͼ1 ͼ2 ͼ96p ͼ7fg hide-help  js-codemirror-editor" data-testid="codemirror-editor"><div class="cm-panels cm-panels-top" style="top: 0px;"><div class="cm-help-panel cm-panel" id="focus-trap-help-panel">Use <kbd>Control + Shift + m</kbd> to toggle the <kbd>tab</kbd> key moving focus. Alternatively, use <kbd>esc</kbd> then <kbd>tab</kbd> to move to the next interactive element on the page.</div></div><div aria-live="polite" style="position: fixed; top: -10000px;"></div><div tabindex="0" class="cm-scroller" role="region" aria-labelledby=":rfr:"><div class="cm-gutters" aria-hidden="true" style="min-height: 552px; position: sticky;"><div class="cm-gutter cm-lineNumbers"><div class="cm-gutterElement" style="height: 0px; visibility: hidden; pointer-events: none;"> 99</div><div class="cm-gutterElement" style="height: 20px; margin-top: 8px;">  1</div><div class="cm-gutterElement" style="height: 20px;">  2</div><div class="cm-gutterElement" style="height: 20px;">  3</div><div class="cm-gutterElement" style="height: 20px;">  4</div><div class="cm-gutterElement" style="height: 20px;">  5</div><div class="cm-gutterElement" style="height: 20px;">  6</div><div class="cm-gutterElement" style="height: 20px;">  7</div><div class="cm-gutterElement" style="height: 20px;">  8</div><div class="cm-gutterElement" style="height: 20px;">  9</div><div class="cm-gutterElement" style="height: 20px;"> 10</div><div class="cm-gutterElement" style="height: 20px;"> 11</div><div class="cm-gutterElement" style="height: 20px;"> 12</div><div class="cm-gutterElement" style="height: 20px;"> 13</div><div class="cm-gutterElement" style="height: 20px;"> 14</div><div class="cm-gutterElement" style="height: 20px;"> 15</div><div class="cm-gutterElement" style="height: 20px;"> 16</div><div class="cm-gutterElement" style="height: 20px;"> 17</div><div class="cm-gutterElement" style="height: 20px;"> 18</div><div class="cm-gutterElement" style="height: 20px;"> 19</div><div class="cm-gutterElement" style="height: 20px;"> 20</div><div class="cm-gutterElement" style="height: 20px;"> 21</div><div class="cm-gutterElement" style="height: 20px;"> 22</div><div class="cm-gutterElement" style="height: 20px;"> 23</div><div class="cm-gutterElement" style="height: 20px;"> 24</div><div class="cm-gutterElement" style="height: 20px;"> 25</div><div class="cm-gutterElement" style="height: 20px;"> 26</div><div class="cm-gutterElement" style="height: 20px;"> 27</div></div></div><div spellcheck="false" autocorrect="off" autocapitalize="off" translate="no" contenteditable="true" class="cm-content" style="tab-size: 2;" role="textbox" aria-multiline="true" aria-labelledby=":rfr: focus-trap-help-panel" data-language="python"><div class="cm-line"><span class="ͼ7fh">import</span> numpy <span class="ͼ7fh">as</span> np</div><div class="cm-line"><span class="ͼ7fh">import</span> matplotlib.pyplot <span class="ͼ7fh">as</span> plt</div><div class="cm-line"><span class="ͼ7fh">from</span> scipy <span class="ͼ7fh">import</span> signal</div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ7fi"># Parâmetros do sistema</span></div><div class="cm-line">num = <span class="ͼ7fj">[</span><span class="ͼ7fm">4.326</span><span class="ͼ7fj">]</span>   <span class="ͼ7fi"># Numerador</span></div><div class="cm-line">den = <span class="ͼ7fj">[</span><span class="ͼ7fm">1</span>, <span class="ͼ7fm">1.195</span>, <span class="ͼ7fm">45.207</span><span class="ͼ7fj">]</span>  <span class="ͼ7fi"># Denominador</span></div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ7fi"># Cria o sistema</span></div><div class="cm-line">system = signal.<span class="ͼ7fl">TransferFunction</span><span class="ͼ7fj">(</span>num, den<span class="ͼ7fj">)</span></div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ7fi"># Gera o tempo de simulação</span></div><div class="cm-line">t = np.<span class="ͼ7fl">linspace</span><span class="ͼ7fj">(</span><span class="ͼ7fm">0</span>, <span class="ͼ7fm">10</span>, <span class="ͼ7fm">1000</span><span class="ͼ7fj">)</span>  <span class="ͼ7fi"># 0 a 10 segundos, 1000 pontos</span></div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ7fi"># Simula a resposta ao degrau</span></div><div class="cm-line">t, y = signal.<span class="ͼ7fl">step</span><span class="ͼ7fj">(</span>system, T=t<span class="ͼ7fj">)</span></div><div class="cm-line"><br></div><div class="cm-line"><span class="ͼ7fi"># Plota resultado</span></div><div class="cm-line">plt.<span class="ͼ7fl">figure</span><span class="ͼ7fj">(</span>figsize=<span class="ͼ7fj">(</span><span class="ͼ7fm">8</span>, <span class="ͼ7fm">4</span><span class="ͼ7fj">)</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">plot</span><span class="ͼ7fj">(</span>t, y, label=<span class="ͼ7fk">'Saída y(t)'</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">xlabel</span><span class="ͼ7fj">(</span><span class="ͼ7fk">'Tempo [s]'</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">ylabel</span><span class="ͼ7fj">(</span><span class="ͼ7fk">'Saída'</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">title</span><span class="ͼ7fj">(</span><span class="ͼ7fk">'Resposta ao Degrau do Sistema em Malha Aberta'</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">grid</span><span class="ͼ7fj">(</span><span class="ͼ7fm">True</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">legend</span><span class="ͼ7fj">(</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">tight_layout</span><span class="ͼ7fj">(</span><span class="ͼ7fj">)</span></div><div class="cm-line">plt.<span class="ͼ7fl">show</span><span class="ͼ7fj">(</span><span class="ͼ7fj">)</span></div></div></div></div></div></div></div></aside></div></div></div><script type="application/json" id="__PRIMER_DATA_:r0:__">{"resolvedServerColorMode":"night"}</script></div>
</react-app>


      </main>
  </div>


    <ghcc-consent id="ghcc" class="position-fixed bottom-0 left-0" style="z-index: 999999" data-initial-cookie-consent-allowed="" data-cookie-consent-required="true" data-catalyst=""></ghcc-consent>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
    </button>
    You can’t perform that action at this time.
  </div>

    <template id="site-details-dialog"></template>

    <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box color-shadow-large" style="width:360px;"></div>
</div>

    <template id="snippet-clipboard-copy-button"></template>
<template id="snippet-clipboard-copy-button-unpositioned"></template>


    <style>
      .user-mention[href$="/saulolv"] {
        color: var(--color-user-mention-fg);
        background-color: var(--bgColor-attention-muted, var(--color-attention-subtle));
        border-radius: 2px;
        margin-left: -2px;
        margin-right: -2px;
      }
      .user-mention[href$="/saulolv"]:before,
      .user-mention[href$="/saulolv"]:after {
        content: '';
        display: inline-block;
        width: 2px;
      }
    </style>


    </div>

    <div id="js-global-screen-reader-notice" class="sr-only mt-n1" aria-live="polite" aria-atomic="true">Copilot said: Ótima dúvida! No Arduino puro, **ajustar

Ótima dúvida!
No Arduino puro, ajustar os ganhos PID automaticamente (ou seja, autotuning) não é trivial como no Python, pois o Arduino tem recursos computacionais limitados e não possui bibliotecas robustas de otimização como o scipy.optimize.
No entanto, existem opções práticas:

1. Usar Bibliotecas de Autotuning para Arduino

A biblioteca Arduino PID Library tem um complemento chamado PID-AutoTune.
Você pode usar o PID_AutoTune Library para buscar automaticamente os melhores ganhos para o seu sistema físico!

Exemplo básico de uso:
C++
#include &lt;PID_v1.h&gt;
#include &lt;PID_AutoTune_v0.h&gt;

double Setpoint, Input, Output;
double Kp=2, Ki=5, Kd=1;

PID myPID(&amp;Input, &amp;Output, &amp;Setpoint, Kp, Ki, Kd, DIRECT);

PID_ATune aTune(&amp;Input, &amp;Output);

// Parâmetros de autotune
double aTuneStep=50, aTuneNoise=1, aTuneStartValue=100;
unsigned int aTuneLookBack=20;

void setup() {
  Serial.begin(9600);
  Setpoint = 30; // graus
  myPID.SetMode(MANUAL); // Deixe o PID em manual durante autotune
  aTune.SetOutputStep(aTuneStep);
  aTune.SetNoiseBand(aTuneNoise);
  aTune.SetLookbackSec((int)aTuneLookBack);
  aTune.SetControlType(1); // PID
}

void loop() {
  Input = lerSensor(); // Sua função de leitura
  if (autoTuneActive) {
    if (aTune.Runtime() != 0) {
      // Autotune terminou, pega os ganhos
      Kp = aTune.GetKp();
      Ki = aTune.GetKi();
      Kd = aTune.GetKd();

      // Atualiza o PID com os ganhos ajustados
      myPID.SetTunings(Kp, Ki, Kd);
      myPID.SetMode(AUTOMATIC);
      autoTuneActive = false;
      Serial.println("Autotune finalizado!");
      Serial.print("Kp: "); Serial.println(Kp);
      Serial.print("Ki: "); Serial.println(Ki);
      Serial.print("Kd: "); Serial.println(Kd);
    }
  } else {
    myPID.Compute();
    acionaMotor(Output);
  }
}

Para iniciar o autotune, defina autoTuneActive = true (faça isso por comando Serial, botão, etc).
Quando o autotune terminar, os ganhos PID serão atualizados automaticamente.
2. Ajuste externo via Serial (opcional)

Você pode também implementar um protocolo para enviar valores de Kp, Ki, Kd do PC (Python) para o Arduino via Serial, permitindo ajuste externo, de modo iterativo ou até usando otimização no Python.

3. Limitações
O autotune funciona bem para sistemas estáveis e pouco ruidosos.
Para sistemas muito rápidos ou muito lentos, pode ser necessário ajustar os parâmetros de autotune (step, lookback, etc).
O autotune é feito com o sistema real rodando — tome cuidado para não causar movimentos bruscos perigosos!
Resumo
Use a biblioteca PID_AutoTune para autotuning direto no Arduino.
Inicie o autotune e, quando ele terminar, os ganhos serão ajustados automaticamente.

Se quiser um exemplo completo voltado para seu sensor/motor, me fale qual hardware você usa!</div>
    <div id="js-global-screen-reader-notice-assertive" class="sr-only mt-n1" aria-live="assertive" aria-atomic="true"></div>
  

<div id="__primerPortalRoot__" style="position: absolute; top: 0px; left: 0px;"><div style="position: relative; z-index: 1;"><span aria-live="assertive" aria-atomic="true" style="clip-path: circle(0px); position: absolute;"></span></div></div></body></html>