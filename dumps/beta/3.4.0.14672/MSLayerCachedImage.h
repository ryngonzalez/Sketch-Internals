//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBitmapImageRep;

__attribute__((visibility("hidden")))
@interface MSLayerCachedImage : NSObject
{
    NSBitmapImageRep *_image;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSBitmapImageRep *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

