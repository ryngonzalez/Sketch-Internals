production:
	cd dumps/production && mkdir $(version) && cd $(version) && class-dump /Applications/Sketch.app/Contents/MacOS/Sketch -H

beta:
	cd dumps/beta && mkdir $(version) && cd $(version) && class-dump /Applications/Sketch\ Beta.app/Contents/MacOS/Sketch\ Beta -H
