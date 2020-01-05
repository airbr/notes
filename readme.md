# Law Notes 

### Hobby side project to release a set of transcribed notes from a law degree and do some text analysis/remixing 



#### Ideas:

* Create and push a Git Repository, in incredibly unlikely event these out of date notes would be useful to anyone. ✅

* License the project to be as permissive as possible - MIT?

* Perform `wc` on the notes. ✅
       * `wc` after making plain text ✅

* Commit a plain text version of the notes  ✅ 

* Find the most commonly occurring word in notes	
  * [Stack Overflow link: Get text-file word occurrence count of all words & print output sorted](https://unix.stackexchange.com/questions/39039/get-text-file-word-occurrence-count-of-all-words-print-output-sorted)  	✅ 

* Find words that occur exactly once^*^* ✅ 

* Find % of document that are citations

>	* challenge: Find all case citations (matches words immediately preceding and after a v
>	* i.e match entirety of "James v John"
>
> Create regex?

* Run Python in a Jupyter Notebook on the notes

* Create a HTML CSS only viewer of the notes

* Do something with machine learning with the notes (stretch goal)

* Create a `fortune` like Unix program or script that returns a fragment of the notes on command


## About the Notes

Transcribed from notes created 2009-2013 doing a law degree at Otago.

A huge portion of the notes are case citations without no surrounding context-  at the time it was often just a note that I am to be aware and read portions of the case.


 Word count in .doc and .docx using Pages: <b>19,366 words</b>

#### WC Output:

	notes/transcribed on master
	$ wc *
     459   22556  393728 Law notes.doc
     832    5888  198030 Law notes.docx
    3526   21737  477315 Law notes.pdf
    4817   50181 1069073 total

	notes/edited on master
	$ wc *
    2581   19284  117037 Law notes.txt


### 

#### Occurrences of words/fragments

```$ cat occurrencelist.txt 
 738 v
 522 of
 353 and
 279 the
 279 NZLR
 234 Act
 177 Ltd
 175 2
 169 1
 159 R
 154 in
 148 Law
 147 New
 132 (CA)
 131 The
 116 •
 113 s
 109 to
 104 3
  94 ss
  80 &
  78 on
  73 Zealand
  68 NZFLR
  67 for
  67 CM
  61 International
  59 Rights
  58 –
  55 J
  54 pp
  54 NZRMA
  50 a
```


## About this repo:

* `transcribed/` contains the 'original' transcribed notes delivered to me in .doc/.docx/.pdf. Ill remix them in `edited` contains edited versions including the plain text version

## About this project

 When I did my undergraduate Bachelors of Law degree (LLB) in New Zealand at Otago University there was a lot of reading assigned. I was assigned even more than I was able to finish: It is a pretty rigorous course as any graduate will tell you. Almost every course had a large printout of course materials. I have a collectors streak so I kept all my printouts and notes in a large plastic trunk well until after graduation into 2015:

![2015](images/trunkofnotes.png)

It was a heavy large trunk of paper. At the time, I paid a good friend to help me transcribe all of my handwritten notes and I recycled the printouts. I really appreciated this since my handwriting is and was terrible. I couldn't continue to lug around the scribbled notes forever.


![2015](images/handwriting2.png)

Now for some reason in 2020 I am I guess attempting to resurrect them.
 
 
## License 

TBD