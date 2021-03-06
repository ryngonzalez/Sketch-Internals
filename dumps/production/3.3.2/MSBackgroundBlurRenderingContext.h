//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSRenderingContext.h"

@class MSLayer;

@interface MSBackgroundBlurRenderingContext : MSRenderingContext
{
    BOOL _stopDrawing;
    MSLayer *_untilLayer;
    struct CGAffineTransform _initialTransform;
}

@property(nonatomic) BOOL stopDrawing; // @synthesize stopDrawing=_stopDrawing;
@property(nonatomic) struct CGAffineTransform initialTransform; // @synthesize initialTransform=_initialTransform;
@property(retain, nonatomic) MSLayer *untilLayer; // @synthesize untilLayer=_untilLayer;
- (void).cxx_destruct;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)shouldDrawLayer:(id)arg1;

@end

