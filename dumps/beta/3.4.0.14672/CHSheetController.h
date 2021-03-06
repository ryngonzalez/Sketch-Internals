//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

__attribute__((visibility("hidden")))
@interface CHSheetController : NSWindowController
{
    id _object;
    id _delegate;
}

+ (id)runForWindow:(id)arg1 withObject:(id)arg2 delegate:(id)arg3;
+ (id)runForWindow:(id)arg1 withObject:(id)arg2;
+ (id)runForWindow:(id)arg1;
+ (id)runWithObject:(id)arg1;
+ (id)run;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)_init;
- (id)windowNibName;
- (void)closeSheet;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;

@end

