//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MSArtboardGroup, MSPage;

@interface MSIOSRefreshRendererOperation : NSOperation
{
    MSArtboardGroup *_artboardCopy;
    MSPage *_pageCopy;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) MSPage *pageCopy; // @synthesize pageCopy=_pageCopy;
@property(retain, nonatomic) MSArtboardGroup *artboardCopy; // @synthesize artboardCopy=_artboardCopy;
- (void).cxx_destruct;
- (id)sliceForArtboard:(id)arg1;
- (void)main;

@end

