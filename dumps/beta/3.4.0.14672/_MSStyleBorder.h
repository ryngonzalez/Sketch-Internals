//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyleBasicFill.h"

__attribute__((visibility("hidden")))
@interface _MSStyleBorder : MSStyleBasicFill
{
    long long _position;
    double _thickness;
}

@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(nonatomic) long long position; // @synthesize position=_position;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveThickness:(double)arg1;
- (double)primitiveThickness;
- (void)setPrimitivePosition:(long long)arg1;
- (long long)primitivePosition;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

