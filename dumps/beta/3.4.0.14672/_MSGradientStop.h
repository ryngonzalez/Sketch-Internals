//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSModelBase.h"

@class MSColor;

__attribute__((visibility("hidden")))
@interface _MSGradientStop : MSModelBase
{
    double _position;
    MSColor *_color;
}

@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveColor:(id)arg1;
- (id)primitiveColor;
- (void)setPrimitivePosition:(double)arg1;
- (double)primitivePosition;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

