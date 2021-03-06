//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSIOSConnectionController, MSIOSRefreshRenderer, NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface MSIOSRefreshCollector : NSObject
{
    NSTimer *_timer;
    NSMapTable *_dirtyRectsPerArtboard;
    MSIOSRefreshRenderer *_refreshRenderer;
    MSIOSConnectionController *_connectionController;
}

@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(retain, nonatomic) MSIOSRefreshRenderer *refreshRenderer; // @synthesize refreshRenderer=_refreshRenderer;
@property(retain, nonatomic) NSMapTable *dirtyRectsPerArtboard; // @synthesize dirtyRectsPerArtboard=_dirtyRectsPerArtboard;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)totalRectForArtboard:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)collectRefreshRect:(struct CGRect)arg1 onArtboard:(id)arg2;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldCollectRefreshes;
- (void)scheduleTimerWithInterval:(double)arg1;
- (void)dealloc;
- (id)init;

@end

