# Sketch Internals
The raw dumps of Sketch internals for different versions of Sketch — useful for Sketch Plugin developers to keep track of the hidden nooks and crannies of the app runtime.

## Usage
Go checkout the headers for production versions [here](https://github.com/ryngonzalez/Sketch-Internals/blob/master/dumps/production), and the beta dumps [here](https://github.com/ryngonzalez/Sketch-Internals/blob/master/dumps/beta).

## Contributing

### 1. Install `class-dump`
Go download `class-dump` from [here](http://stevenygard.com/projects/class-dump/) and add it to your path.
```bash
mv ~/Downloads/class-dump /usr/local/bin
```

### 2. Generate headers
Use `make` to generate headers, or do it manually yourself using `class-dump`.

#### Production:
```bash
make production version=3.3.2
```
Or, do it manually
```bash
cd dumps/production && mkdir $(version) && cd $(version) && class-dump /Applications/Sketch.app/Contents/MacOS/Sketch -H
```

#### Beta:
```bash
make production version=3.4.0.build_number
```
Or, do it manually
```bash
cd dumps/beta && mkdir $(version) && cd $(version) && class-dump /Applications/Sketch\ Beta.app/Contents/MacOS/Sketch\ Beta -H
```

### 3. Contribute Back
Open up a Pull Request for review!

## License
All intellectual property of Bohemian Coding, makers of Sketch. Merely used as a learning resource for people looking to contribute to the plugin ecosystem. (Shoot me an email at ryan@ionizedmedia.com if you want to chat.)
