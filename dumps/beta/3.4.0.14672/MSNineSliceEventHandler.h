//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

__attribute__((visibility("hidden")))
@interface MSNineSliceEventHandler : MSPointsEventHandler
{
    struct CGRect originalRect;
}

- (void)drawHandleLines;
- (id)snapsForShape;
- (void)didUndoNotification:(id)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)points;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

