//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface BCCollapsableImageView : NSView
{
    NSImage *_image;
    NSLayoutConstraint *_widthConstraint;
    double _expandedWidth;
}

@property(nonatomic) double expandedWidth; // @synthesize expandedWidth=_expandedWidth;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)connectWidthConstraint;
- (void)awakeFromNib;

@end

