//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelBase.h"

@class MSImmutableColor;

__attribute__((visibility("hidden")))
@interface _MSImmutableGradientStop : MSImmutableModelBase
{
    double _position;
    MSImmutableColor *_color;
}

@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end
