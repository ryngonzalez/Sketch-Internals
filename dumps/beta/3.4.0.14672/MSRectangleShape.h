//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSRectangleShape.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MSRectangleShape : _MSRectangleShape
{
}

+ (double)lastUsedFixedRadius;
- (void)multiplyBy:(double)arg1;
- (BOOL)shouldDrawLayerSelection;
- (void)resetPointsBasedOnUserInteraction;
- (void)resetPointsIfNecessary;
- (void)removePathsAndReset;
- (void)resetPathsToRoundedRect;
- (void)resetPathsToRect;
- (void)resetPoints;
- (id)defaultName;
- (id)bezierPathForCursorPreview;
- (void)didChangeValues;
- (void)willChangeValues;
- (double)floatFromNumbers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCornerRadiusFromSimpleString:(id)arg1;
- (void)setCornerRadiusFromComponents:(id)arg1;
@property(copy, nonatomic) NSString *cornerRadiusString;
- (id)rectangleNumberFormatter;
@property(nonatomic) double cornerRadiusFloat;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;

@end

