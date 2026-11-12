# LaTeX

LaTeX is a document preparation system used to create well-structured technical and academic documents. It is especially useful when documents contain mathematics, references, tables and consistent formatting.

## Basic structure

A LaTeX document normally has a preamble and a document body:

```latex
\documentclass{article}
\usepackage{amsmath}
\begin{document}
Hello, LaTeX!
\end{document}
```

- `\documentclass{article}` selects the document type.
- `\usepackage{...}` loads additional features.
- `\begin{document}` and `\end{document}` enclose the content.
- Commands usually begin with a backslash. Environments use `\begin` and `\end`.

## Mathematics

Use `$ ... $` for inline mathematics and `\[ ... \]` for a displayed equation. The `amsmath` package provides useful environments.

```latex
Inline: $a^2+b^2=c^2$

\[
  \int_0^1 x^2\,dx = \frac{1}{3}
\]

\begin{align}
  x+y &= 10 \\
  x-y &= 2
\end{align}
```

## Tables

The `tabular` environment creates rows and columns. `&` separates columns and `\\` ends a row.

```latex
\begin{tabular}{|l|c|}
\hline
Topic & Status \\
\hline
LaTeX & Learned \\
Beamer & Learned \\
\hline
\end{tabular}
```

## Inserting an image

Load `graphicx`, then use `\includegraphics`. Keep the image file in the project folder or provide its relative path.

```latex
\usepackage{graphicx}
...
\begin{figure}[ht]
  \centering
  \includegraphics[width=0.6\textwidth]{example-image}
  \caption{An example image}
  \label{fig:example}
\end{figure}
```

Replace `example-image` with the name of an image available in the project.

## Colours

The `xcolor` package provides named colours and custom colours.

```latex
\usepackage{xcolor}
\definecolor{myblue}{RGB}{30,90,160}
...
\textcolor{myblue}{This text is blue.}
```

## Articles and reports

- `article`: suitable for short papers, assignments and technical articles. Common commands include `\title`, `\author`, `\maketitle`, `\section` and `\subsection`.
- `report`: suitable for longer documents organised into chapters. It supports `\chapter`, sections and a more extensive document structure.

## Compile

Save a source file with the `.tex` extension and compile it using pdfLaTeX (or an online LaTeX editor such as Overleaf). The sample files in this folder demonstrate the topics above.
