//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerGroup.h"

@interface _MSShapeGroup : MSLayerGroup
{
    BOOL _hasClippingMask;
    long long _clippingMaskMode;
    unsigned long long _windingRule;
}

@property(nonatomic) unsigned long long windingRule; // @synthesize windingRule=_windingRule;
@property(nonatomic) BOOL hasClippingMask; // @synthesize hasClippingMask=_hasClippingMask;
@property(nonatomic) long long clippingMaskMode; // @synthesize clippingMaskMode=_clippingMaskMode;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveWindingRule:(unsigned long long)arg1;
- (unsigned long long)primitiveWindingRule;
- (void)setPrimitiveHasClippingMask:(BOOL)arg1;
- (BOOL)primitiveHasClippingMask;
- (void)setPrimitiveClippingMaskMode:(long long)arg1;
- (long long)primitiveClippingMaskMode;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

