//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSLayerContainment.h"

@class NSArray;

@interface MSLayerArray : NSObject <MSLayerContainment>
{
    NSArray *_layers;
}

+ (id)emptyArray;
+ (id)arrayWithLayers:(id)arg1;
+ (id)arrayWithLayer:(id)arg1;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByGroup;
- (BOOL)canBeContainedByDocument;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)commonArtboard;
- (id)layersSuitableForInsertingIntoGroup:(id)arg1;
- (id)layerToInsertAfter;
- (id)effectiveArtboard;
- (id)effectivePage;
- (id)effectiveParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayers:(id)arg1;
- (void)removeUnusedStylePartsOfType:(unsigned long long)arg1;
- (id)addStylePartsOfType:(unsigned long long)arg1;

@end

