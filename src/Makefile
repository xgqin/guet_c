PREFIX=.docx
objects=lab1.docx lab2.docx lab3.docx preface.docx
all: ${objects}
lab1.docx: lab1.md
	pandoc -o lab1.docx lab1.md
lab2.docx: lab2.md
	pandoc -o lab2.docx lab2.md
lab3.docx: lab3.md
	pandoc -o lab3.docx lab3.md
preface.docx: preface.md
	pandoc -o preface.docx preface.md
clean:
	rm -f ${objects}
