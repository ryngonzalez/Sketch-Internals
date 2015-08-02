//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStyledLayer.h"

@class MSImageProxy;

__attribute__((visibility("hidden")))
@interface _MSImmutableBitmapLayer : MSImmutableStyledLayer
{
    struct CGRect _clippingMask;
    MSImageProxy *_image;
    struct CGRect _nineSliceCenterRect;
}

@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) MSImageProxy *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

