PREFIX=.docx
objects=preface.docx lab1.docx lab2.docx lab3.docx lab4.docx lab5.docx lab6.docx lab7.docx
all: ${objects}
lab1.docx: lab1.md
	pandoc -o lab1.docx lab1.md
lab2.docx: lab2.md
	pandoc -o lab2.docx lab2.md
lab3.docx: lab3.md
	pandoc -o lab3.docx lab3.md
lab4.docx: lab4.md
	pandoc -o lab4.docx lab4.md
lab5.docx: lab5.md
	pandoc -o lab5.docx lab5.md
lab6.docx: lab6.md
	pandoc -o lab6.docx lab6.md
lab7.docx: lab7.md
	pandoc -o lab7.docx lab7.md
preface.docx: preface.md
	pandoc -o preface.docx preface.md
clean:
	rm -f ${objects}
