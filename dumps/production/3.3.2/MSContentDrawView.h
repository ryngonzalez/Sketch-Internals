//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseView.h"

#import "MSBasicDelegate.h"
#import "MSTileRemoveCollector.h"

@class CALayer, MSDocument, MSRulerView, MSTilePlacer, MSViewPort, NSEvent, NSMutableArray, NSString, NSTimer;

@interface MSContentDrawView : MSBaseView <MSBasicDelegate, MSTileRemoveCollector>
{
    NSEvent *lastEvent;
    struct CGPoint mouseBeforePinch;
    BOOL handToolIsActive;
    struct CGPoint handToolOriginalPoint;
    struct CGPoint handToolOriginalScrollOrigin;
    BOOL zoomToolActivatedByKey;
    struct CGPoint zoomToolStartPoint;
    struct CGPoint zoomToolEndPoint;
    BOOL didMouseDown;
    BOOL hasDraggedOutsideInitialPadding;
    struct CGPoint mouseDownPoint;
    BOOL _userDidMagnify;
    BOOL _zoomToolIsActive;
    BOOL _shouldHideOverlayControls;
    BOOL _lastActualZoomScrollOriginSaved;
    MSRulerView *_horizontalRuler;
    MSRulerView *_verticalRuler;
    MSDocument *_document;
    CALayer *_masterTileLayer;
    MSTilePlacer *_layerTiler;
    long long _animatingZoomCounter;
    double _zoomDeltaDuringPinch;
    double _zoomValueAfterAnimating;
    NSTimer *_refreshTimer;
    double _refreshDelay;
    NSMutableArray *_collectors;
    NSTimer *_scrollCleanupTimer;
    MSViewPort *_viewPortBeforeZoomOut;
    struct CGPoint _lastActualZoomScrollOrigin;
    struct CGRect _dirtyContentRect;
    struct CGRect _dirtyOverlayRect;
}

@property(retain, nonatomic) MSViewPort *viewPortBeforeZoomOut; // @synthesize viewPortBeforeZoomOut=_viewPortBeforeZoomOut;
@property(retain, nonatomic) NSTimer *scrollCleanupTimer; // @synthesize scrollCleanupTimer=_scrollCleanupTimer;
@property(retain, nonatomic) NSMutableArray *collectors; // @synthesize collectors=_collectors;
@property(nonatomic) double refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(nonatomic) struct CGRect dirtyOverlayRect; // @synthesize dirtyOverlayRect=_dirtyOverlayRect;
@property(nonatomic) struct CGRect dirtyContentRect; // @synthesize dirtyContentRect=_dirtyContentRect;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) BOOL lastActualZoomScrollOriginSaved; // @synthesize lastActualZoomScrollOriginSaved=_lastActualZoomScrollOriginSaved;
@property(nonatomic) struct CGPoint lastActualZoomScrollOrigin; // @synthesize lastActualZoomScrollOrigin=_lastActualZoomScrollOrigin;
@property(nonatomic) double zoomValueAfterAnimating; // @synthesize zoomValueAfterAnimating=_zoomValueAfterAnimating;
@property(nonatomic) double zoomDeltaDuringPinch; // @synthesize zoomDeltaDuringPinch=_zoomDeltaDuringPinch;
@property(nonatomic) long long animatingZoomCounter; // @synthesize animatingZoomCounter=_animatingZoomCounter;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(retain, nonatomic) MSTilePlacer *layerTiler; // @synthesize layerTiler=_layerTiler;
@property(retain, nonatomic) CALayer *masterTileLayer; // @synthesize masterTileLayer=_masterTileLayer;
@property(nonatomic) BOOL zoomToolIsActive; // @synthesize zoomToolIsActive=_zoomToolIsActive;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(nonatomic) __weak MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layerPositionPossiblyChanged;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)refresh;
- (void)windowDidResize:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (BOOL)canDrawConcurrently;
- (void)currentHandlerChanged;
- (void)setDelegate:(id)arg1;
- (void)setOutletsToNil;
- (void)didUndoNotification:(id)arg1;
- (void)willUndoNotification:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshViewsWithMaskImmediately:(unsigned long long)arg1;
- (void)reloadLayerList;
- (id)defaultHandler;
- (id)undoManager;
- (id)pages;
- (id)currentPage;
- (id)currentView;
- (id)selectedLayers;
- (id)selectedLayersA;
- (void)flagsChanged:(id)arg1;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)currentHandlerKey;
- (void)toggleHandlerKey:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)resetCursorRects;
- (void)addLayer:(id)arg1;
- (void)changeFont:(id)arg1;
- (BOOL)isOpaque;
- (void)setLastEvent:(id)arg1;
- (id)lastEvent;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)didFinishAnimatingZoom;
- (void)willStartAnimatingZoom;
- (struct CGRect)visibleContentRect;
- (void)setViewPort:(id)arg1;
- (void)animateToViewPort:(id)arg1;
- (void)animateScrollOriginToPoint:(struct CGPoint)arg1;
- (struct CGPoint)currentMidPointFromScrollOrigin:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (struct CGPoint)currentMidPoint;
- (void)actualSizeWithoutAnimating;
- (void)actualSize;
- (double)currentZoomValueAccountingForAnimation;
- (double)zoomValueAfterZoomOutUnCapped;
- (double)zoomValueAfterZoomOut;
- (void)zoomOut;
- (double)zoomValueAfterZoomInUnCapped;
- (double)zoomValueAfterZoomIn;
- (void)setZoomValueCenteredInCanvas:(double)arg1;
- (void)refreshOverlays;
- (void)animatedZoomDidEndAtMidPoint:(struct CGPoint)arg1;
- (void)animateToZoom:(double)arg1 fromPoint:(struct CGPoint)arg2;
- (void)animateToZoom:(double)arg1;
- (void)zoomIn;
- (id)menuForEvent:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)keyUp:(id)arg1;
- (BOOL)performActionWithName:(id)arg1;
- (BOOL)interpretKeyEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setZoomValueByOnlyScalingTiles:(double)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)reloadAllTiles;
- (void)prepare;
- (void)displayPropertiesDidChange;
- (void)resetMasterTileLayer;
- (struct CGPoint)scrollOriginAfterMagnify;
- (BOOL)userDidMagnify;
- (void)tileRemoveCollectorDidFinish:(id)arg1;
- (void)animationDidFinishAtZoomValue:(double)arg1 scrollOrigin:(struct CGPoint)arg2;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (BOOL)acceptsTouchEvents;
- (void)scrollCleanupTimer:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (id)viewPortForZoomToFitRect:(struct CGRect)arg1;
- (void)zoomToFitRect:(struct CGRect)arg1;
- (struct CGRect)totalRectForLayers:(id)arg1;
- (void)zoomToSelection;
- (void)centerSelectionInVisibleArea;
- (void)centerLayersInCanvas;
- (void)centerRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)centerRect:(struct CGRect)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)doMouseDraggedEvent:(id)arg1;
- (void)mouseDraggedOutsideCanvas;
- (BOOL)isPointOutsideCanvas:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)endRefreshCoalescing;
- (void)beginRefreshCoalescing;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)grid;
- (void)placeOriginInTopLeft;
- (void)centerDocumentAndPlaceScrollOriginInTopLeft;
- (void)centerInBounds;
- (void)refreshTiles;
- (void)scheduleRefreshTiles;
- (void)baseRefreshOfTypeImmediately:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)collectDirtyRect:(struct CGRect)arg1 ofType:(unsigned long long)arg2;
- (void)baseRefreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)setZoomValue:(double)arg1;
- (void)setScrollOrigin:(struct CGPoint)arg1 moveTiles:(BOOL)arg2;
- (void)prepareTile:(id)arg1;
- (id)newMasterTileLayer;
- (void)enableLayerBackedDrawing;
- (void)pixelGridDidChange;
- (void)screenDidChange:(id)arg1;
- (void)awakeFromNib;
- (long long)tag;
- (void)initialize;
- (void)handToolMouseUp;
- (void)handToolMouseDragged:(id)arg1;
- (void)handToolMouseDown:(id)arg1;
- (void)endHandToolMode;
- (void)beginHandToolMode;
- (void)drawZoomTool;
- (BOOL)shouldZoomIntoRect;
- (void)zoomToolMouseUp:(id)arg1;
- (struct CGRect)zoomRect;
- (void)applyZoomCursor;
- (void)zoomToolMouseDragged:(id)arg1;
- (void)zoomTooMouseMoved;
- (void)zoomToolMouseDown:(id)arg1;
- (void)zoomToolFlagsChanged;
- (struct CGPoint)zoomPointFromEvent:(id)arg1;
- (void)endZoomToolMode;
- (void)beginZoomToolMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

