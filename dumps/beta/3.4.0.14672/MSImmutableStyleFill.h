//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableStyleFill.h"

#import "MSImageOwner.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MSImmutableStyleFill : _MSImmutableStyleFill <MSImageOwner>
{
    double _parentLayerCachedOpacity;
}

@property(nonatomic) double parentLayerCachedOpacity; // @synthesize parentLayerCachedOpacity=_parentLayerCachedOpacity;
- (id)NSImage;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithMutableModelObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

