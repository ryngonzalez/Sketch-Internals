//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSColor.h"

#import "MSAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MSColor : _MSColor <MSAsset>
{
}

+ (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromHexValue:(id)arg4;
+ (id)hexValueForRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)exportingColorSpace;
+ (id)screenColorSpace;
+ (id)colorWithNSColor:(id)arg1;
+ (id)safeNSColor:(id)arg1;
+ (id)availableRGBColorSpaces;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (void)setForcedColorSpace:(id)arg1;
+ (id)colorWithRGBADictionary:(id)arg1;
+ (id)colorFromSVGColor:(id)arg1;
+ (id)colorWithSVGString:(id)arg1;
- (id)colorWithAlpha:(double)arg1;
- (BOOL)isBlack;
- (BOOL)isWhite;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (id)stringValueWithAlpha:(BOOL)arg1 alphaMultiplication:(double)arg2;
- (id)stringValueWithAlpha:(BOOL)arg1;
- (id)hexValue;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
- (id)HSBColor;
@property(readonly, copy) NSString *description;
- (id)NSColorWithColorSpace:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)treeAsDictionary;
- (id)RGBADictionary;
- (BOOL)isAssetEqual:(id)arg1;
- (unsigned long long)assetType;
- (id)NSColorForContext:(id)arg1;
- (id)svgRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

