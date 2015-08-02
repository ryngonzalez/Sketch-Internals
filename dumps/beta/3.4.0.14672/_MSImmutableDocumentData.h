//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelBase.h"

@class MSImmutableArray, MSImmutableAssetCollection, MSImmutableSharedLayerContainer, MSImmutableSharedLayerStyleContainer, MSImmutableSharedLayerTextStyleContainer;

__attribute__((visibility("hidden")))
@interface _MSImmutableDocumentData : MSImmutableModelBase
{
    unsigned long long _currentPageIndex;
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    MSImmutableArray *_pages;
    MSImmutableAssetCollection *_assets;
    MSImmutableSharedLayerStyleContainer *_layerStyles;
    MSImmutableSharedLayerContainer *_layerSymbols;
    MSImmutableSharedLayerTextStyleContainer *_layerTextStyles;
}

@property(retain, nonatomic) MSImmutableSharedLayerTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSImmutableSharedLayerContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSImmutableSharedLayerStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSImmutableAssetCollection *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) MSImmutableArray *pages; // @synthesize pages=_pages;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

