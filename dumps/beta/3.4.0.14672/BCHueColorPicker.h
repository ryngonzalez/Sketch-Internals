//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCColorPickerSliderView.h"

__attribute__((visibility("hidden")))
@interface BCHueColorPicker : BCColorPickerSliderView
{
    double _hueValue;
}

@property(nonatomic) double hueValue; // @synthesize hueValue=_hueValue;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;

@end

