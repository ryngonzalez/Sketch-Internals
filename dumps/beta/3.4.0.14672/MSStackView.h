//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface MSStackView : NSView
{
    long long _maximumHeight;
    NSColor *_backgroundColor;
    id _keyResponder;
}

@property(nonatomic) __weak id keyResponder; // @synthesize keyResponder=_keyResponder;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long maximumHeight; // @synthesize maximumHeight=_maximumHeight;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)adjustHeight:(unsigned long long)arg1 hasScrollViews:(BOOL)arg2;
- (unsigned long long)doStack;
- (long long)totalRequiredHeight;
- (BOOL)adjustScrollViewsToFitMaximumHeight;
- (void)stack:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)awakeFromNib;

@end

