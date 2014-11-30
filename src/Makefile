PREFIX=.docx
objects=lab1.docx preface.docx
all: ${objects}
lab1.docx: lab1.md
	pandoc -o lab1.docx lab1.md
preface.docx: preface.md
	pandoc -o preface.docx preface.md
clean:
	rm -f ${objects}
