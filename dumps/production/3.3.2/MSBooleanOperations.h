//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSBooleanOperations : NSObject
{
}

+ (void)finishFinalShape:(id)arg1;
+ (void)convertLinesToOutlinesInShape:(id)arg1;
+ (void)resetSubPathsBooleanOperationsTo:(long long)arg1 onLayers:(id)arg2;
+ (void)fixTransformForSelectedLayers:(id)arg1;
+ (BOOL)layersContainShapePaths:(id)arg1;
+ (void)transformLineToOutline:(id)arg1;
+ (void)applyBooleanOperation:(long long)arg1 toShape:(id)arg2;
+ (void)mergeShapes:(id)arg1 withShape:(id)arg2 usingBooleanOp:(long long)arg3;
+ (void)doBooleanOperation:(long long)arg1 onLayers:(id)arg2;
+ (void)booleanOperation:(long long)arg1 onLayers:(id)arg2;

@end

