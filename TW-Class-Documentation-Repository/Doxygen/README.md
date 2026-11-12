# Doxygen

Doxygen is an open-source documentation generator. It extracts information from specially formatted comments in source code and creates reference documentation for functions, classes and modules. It supports languages including C, C++, Python and Java.

## Why use it?

- Produces code-linked API/reference manuals.
- Helps developers understand and maintain a codebase.
- Can generate cross-references, call graphs and inheritance diagrams.
- Supports HTML and LaTeX/PDF output, as well as RTF, XML, DocBook and man pages.

## Basic workflow

1. Add Doxygen-style comments to source code.
2. Generate a configuration file: `doxygen -g Doxyfile`.
3. Edit the configuration if needed.
4. Run: `doxygen Doxyfile`.
5. Open `html/index.html` in a browser.

Install on Windows using the installer at https://www.doxygen.nl/download.html. On Ubuntu/Debian use `sudo apt-get install doxygen`; on macOS use `brew install doxygen`. Check with `doxygen --version`.

## Common comment tags

| Tag | Purpose |
|---|---|
| `\\brief` | Short description |
| `\\param` | Describes a parameter |
| `\\return` | Describes the return value |
| `\\author` | Author information |
| `\\version` | Version information |
| `\\see` | Related item |
| `\\note` | Additional note |

See `example.cpp` for a documented C++ example and `Doxyfile` for a small configuration.

## Best practices

Document public APIs, explain the purpose and behaviour of functions, keep brief and detailed descriptions distinct, and use a consistent tag style. Keep the Doxyfile in version control and update documentation along with code changes.
