//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCustomShapeLayer.h"

@interface _MSStarShape : MSCustomShapeLayer
{
    long long _numberOfPoints;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) long long numberOfPoints; // @synthesize numberOfPoints=_numberOfPoints;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveRadius:(double)arg1;
- (double)primitiveRadius;
- (void)setPrimitiveNumberOfPoints:(long long)arg1;
- (long long)primitiveNumberOfPoints;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

