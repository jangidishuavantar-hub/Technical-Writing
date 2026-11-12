# Beamer

Beamer is a LaTeX document class for creating slide presentations. It is useful for academic talks because slides, equations, tables and figures can be written using LaTeX.

## Basic structure

- Select the class with `\documentclass{beamer}`.
- Each slide is created using a `frame` environment.
- `\title`, `\author` and `\date` define presentation information.
- `\titlepage` displays the title slide.
- `\itemize` and `\enumerate` create bullet and numbered lists.
- Themes control the overall appearance.

## Example

See `presentation.tex` for a small working presentation. Compile it with pdfLaTeX or an online LaTeX editor. Each `frame` becomes one slide.

## Useful commands

```latex
\begin{frame}{Slide title}
  Slide content
\end{frame}

\begin{itemize}
  \item First point
  \item Second point
\end{itemize}
```

Beamer supports mathematical equations, tables, images, colours, themes and overlays for revealing content step by step.
