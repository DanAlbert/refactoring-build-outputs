# Repro case for rename affecting build outputs

To repro:

1. Open the project in Android Studio
2. Open app/src/main/cpp/native-lib.cpp
3. Right click on the variable named `app`, Refactor -> Rename
4. Pick any new name
5. Choose "Show uses"

The refactoring preview window shows that if I'd selected "Rename all uses", it
would have altered files in app/.cxx, which is a build output directory. Doing
this does not appear to break the build despite corrupting the ninja file, but
that means it probably does cause a full rebuild, and I can't rule out
behavior issues.
