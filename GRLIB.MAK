gr_mode.obj: gr_mode.c
	CC gr_mode;

gr_pset.obj: gr_pset.c
	CC gr_pset;

gr_text.obj: gr_text.c
	CC gr_text;

gr_line.obj: gr_line.c
	CC gr_line;

gr_bar.obj: gr_bar.c
	CC gr_bar;

gr_box.obj: gr_box.c
	CC gr_box;

grlib.lib: gr_mode.obj gr_pset.obj gr_text.obj gr_line.obj gr_bar.obj gr_box.obj
	lib grlib gr_mode gr_pset gr_text gr_line gr_bar gr_box,grlib.lst;
	copy grlib.lib ..\lib
