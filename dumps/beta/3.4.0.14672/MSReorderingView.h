//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MSReorderingView : NSView <NSDraggingSource>
{
    SEL _deleteAction;
    SEL _duplicateAction;
    id _target;
    long long _reorderingTag;
}

@property(nonatomic) long long reorderingTag; // @synthesize reorderingTag=_reorderingTag;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL duplicateAction; // @synthesize duplicateAction=_duplicateAction;
@property(nonatomic) SEL deleteAction; // @synthesize deleteAction=_deleteAction;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)startDragWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

