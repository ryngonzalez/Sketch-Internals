//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayer.h"

@class MSColor;

__attribute__((visibility("hidden")))
@interface _MSSliceLayer : MSLayer
{
    BOOL _hasBackgroundColor;
    MSColor *_backgroundColor;
}

@property(retain, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveBackgroundColor:(id)arg1;
- (id)primitiveBackgroundColor;
- (void)setPrimitiveHasBackgroundColor:(BOOL)arg1;
- (BOOL)primitiveHasBackgroundColor;
- (id)immutableModelObject;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
