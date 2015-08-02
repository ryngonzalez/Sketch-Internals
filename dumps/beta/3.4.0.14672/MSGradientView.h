//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSGradient;

__attribute__((visibility("hidden")))
@interface MSGradientView : NSView
{
    BOOL _topBorder;
    BOOL _leftBorder;
    BOOL _rightBorder;
    BOOL _bottomBorder;
    float _gradientAngle;
    float _borderSize;
    NSColor *_topColour;
    NSColor *_bottomColour;
    NSColor *_borderColour;
    NSGradient *_gradient;
}

@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) BOOL bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) BOOL rightBorder; // @synthesize rightBorder=_rightBorder;
@property(nonatomic) BOOL leftBorder; // @synthesize leftBorder=_leftBorder;
@property(nonatomic) BOOL topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) float borderSize; // @synthesize borderSize=_borderSize;
@property(nonatomic) float gradientAngle; // @synthesize gradientAngle=_gradientAngle;
@property(retain, nonatomic) NSColor *borderColour; // @synthesize borderColour=_borderColour;
@property(retain, nonatomic) NSColor *bottomColour; // @synthesize bottomColour=_bottomColour;
@property(retain, nonatomic) NSColor *topColour; // @synthesize topColour=_topColour;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)prepareForDisplay;
- (void)prepareDefaults;
- (id)initWithCoder:(id)arg1;

@end
