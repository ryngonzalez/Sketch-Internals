//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"
#import "NSPasteboardWriting.h"

@class MSLayer, NSImage, NSString;

@interface MSSliceDragView : NSView <NSDraggingSource, NSPasteboardWriting>
{
    NSImage *_previewImage;
    MSLayer *_exportableLayer;
}

+ (void)initialize;
@property(retain, nonatomic) MSLayer *exportableLayer; // @synthesize exportableLayer=_exportableLayer;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (struct CGRect)imageDrawRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)imageDataInFormat:(id)arg1 colorSpace:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)beginDragWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setExportableLayer:(id)arg1 previewCompletionBlock:(CDUnknownBlockType)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

