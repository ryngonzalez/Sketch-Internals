//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

__attribute__((visibility("hidden")))
@interface MSAlternatingView : NSView
{
    NSView *otherView;
    BOOL didDrag;
    BOOL isInside;
    BOOL isDown;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)buttonImage;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (void)mouseUp:(id)arg1;
- (BOOL)shouldSwapColorModeForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

