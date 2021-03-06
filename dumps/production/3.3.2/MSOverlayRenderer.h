//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSContentDrawView, MSEventHandlerManager, MSPage;

@interface MSOverlayRenderer : NSObject
{
    MSPage *_page;
    double _zoomValue;
    MSEventHandlerManager *_eventManager;
    MSContentDrawView *_contentView;
    struct CGRect _rect;
}

+ (void)renderPage:(id)arg1 atZoom:(double)arg2 inRect:(struct CGRect)arg3 handlerManager:(id)arg4 view:(id)arg5;
+ (void)skipRenderingSelections:(BOOL)arg1;
@property(retain, nonatomic) MSContentDrawView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MSEventHandlerManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (struct CGPoint)scrollOrigin;
- (void)drawZoomTool;
- (struct CGRect)scaledArtboardRect:(id)arg1;
- (void)drawArtboardTitles;
- (id)artboardsVisibleInTileRect;
- (void)drawArtboardShadowForRect:(struct CGRect)arg1 image:(id)arg2;
- (void)drawArtboardOutline;
- (void)drawSliceOutline:(id)arg1;
- (void)drawSlicesOutlineForGroup:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawSlicesOutline;
- (BOOL)shouldDrawSlicesOutline;
- (void)drawPixelLines;
- (BOOL)shouldDrawPixelLines;
- (void)doDrawGridForRootLayer:(id)arg1;
- (void)drawGridForRootLayer:(id)arg1;
- (void)draw;

@end

