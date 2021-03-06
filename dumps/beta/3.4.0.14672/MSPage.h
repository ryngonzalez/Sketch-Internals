//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSPage.h"

#import "MSRootLayer.h"

@class MSArtboardGroup, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MSPage : _MSPage <MSRootLayer>
{
    long long ignoreLayerSelectionDidChangeNotificationsCounter;
    BOOL _hasBlendedLayer;
    BOOL _shouldSkipCalculatingLayerBlending;
    BOOL _skipCalculatingBlending;
    id <MSPageDelegate> _pageDelegate;
    MSArtboardGroup *_currentArtboard;
    NSArray *_cachedArtboards;
    NSArray *_cachedExportableLayers;
}

+ (unsigned long long)traits;
+ (id)page;
@property(nonatomic) BOOL skipCalculatingBlending; // @synthesize skipCalculatingBlending=_skipCalculatingBlending;
@property(retain, nonatomic) NSArray *cachedExportableLayers; // @synthesize cachedExportableLayers=_cachedExportableLayers;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
@property(nonatomic) BOOL shouldSkipCalculatingLayerBlending; // @synthesize shouldSkipCalculatingLayerBlending=_shouldSkipCalculatingLayerBlending;
@property(nonatomic) BOOL hasBlendedLayer; // @synthesize hasBlendedLayer=_hasBlendedLayer;
@property(nonatomic) __weak MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(nonatomic) __weak id <MSPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
- (void).cxx_destruct;
- (BOOL)shouldDrawSelection;
- (BOOL)hasClickThrough;
- (id)allAncestorsOfLayers:(id)arg1;
- (id)currentVerticalRulerData;
- (id)currentHorizontalRulerData;
- (void)moveLayersToArtboards;
- (double)defaultZoomValue;
- (void)scheduleCalculateHasBlendedLayer;
- (BOOL)canContainLayer:(id)arg1;
- (id)ancestorsOfLayer:(id)arg1 inContainer:(id)arg2;
- (id)ancestorsOfLayer:(id)arg1;
- (void)skipLayerBlendingCalculationInBlock:(CDUnknownBlockType)arg1;
- (void)ignoreLayerSelectionDidChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)rectSizeDidChange:(id)arg1;
- (void)layerSelectionDidChange;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
@property(readonly, nonatomic) __weak NSArray *artboards;
- (void)setCurrentLayout:(id)arg1;
- (id)currentLayout;
- (void)setCurrentGrid:(id)arg1;
- (id)currentGrid;
- (id)parentRoot;
- (id)currentRoot;
- (id)ancestorTransforms;
- (id)ancestors;
- (id)parentPage;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (BOOL)resizeRoot:(BOOL)arg1;
- (BOOL)layers:(id)arg1 fitOnArtboard:(id)arg2;
- (id)destinationArtboardForLayers:(id)arg1 artboards:(id)arg2;
- (void)addOrRemoveLayerFromArtboardIfNecessary:(id)arg1;
- (void)tryToMoveLayer:(id)arg1 toArtboards:(id)arg2;
- (void)tryToMoveLayerToArtboard:(id)arg1;
- (id)exportableLayers;
- (id)symbolLayersInGroup:(id)arg1;
- (id)artboardForSlice:(id)arg1 inArtboards:(id)arg2;
- (void)prepareObjectCopy:(id)arg1;
- (void)childDidChangeNotification:(id)arg1;
@property(nonatomic) struct CGPoint rulerBase;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (id)transform;
- (void)invalidateLightweightCopy:(id)arg1;
- (void)setZoomValue:(double)arg1;
- (void)setScrollOrigin:(struct CGPoint)arg1;
- (void)setName:(id)arg1;
- (BOOL)canBeContainedByDocument;
- (void)dealloc;
- (id)defaultName;
- (id)selectedLayers;
- (id)parentGroup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (BOOL)canBeHovered;
- (id)displayName;
- (id)cloneForDocument:(id)arg1;
- (BOOL)isExportableViaDragAndDrop;
- (id)badgeMap;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)previewImages;
- (void)duplicate:(id)arg1;
- (unsigned long long)displayType;
- (BOOL)parentOrSelfIsSymbol;
- (BOOL)transparencyLayerUseRectCondition;
- (unsigned long long)shouldDraw;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (BOOL)shouldIncludeLayerInSlice:(id)arg1;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

