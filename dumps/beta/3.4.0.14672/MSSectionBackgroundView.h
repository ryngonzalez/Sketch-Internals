//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

__attribute__((visibility("hidden")))
@interface MSSectionBackgroundView : NSView
{
}

+ (long long)requiredHeightForViews:(id)arg1;
+ (id)separatorBetweenView:(id)arg1 andView:(id)arg2 controller:(id)arg3;
+ (id)sectionBackgroundWithController:(id)arg1;
- (BOOL)isFlipped;
- (void)drawWhiteHeader;
- (void)drawRect:(struct CGRect)arg1;
- (void)stackSubviews;
- (void)recalculateHeight;

@end
