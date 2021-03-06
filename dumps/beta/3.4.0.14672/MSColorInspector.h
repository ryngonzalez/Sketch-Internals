//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BCPopoverContentController.h"
#import "MSColorInspectorSectionDelegate.h"
#import "MSModeModePickerDelegate.h"

@class BCHSBColorPicker, MSColorInspectorSectionColor, MSColorInspectorSectionGradient, MSColorInspectorSectionNoise, MSColorInspectorSectionPattern, MSDocumentData, MSEventHandlerManager, MSModePickerView, MSPersistentAssetCollection, NSArray, NSString, NSView;

__attribute__((visibility("hidden")))
@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, MSModeModePickerDelegate, BCPopoverContentController>
{
    NSArray *_styleParts;
    id <MSColorInspectorDelegate> _delegate;
    MSModePickerView *_borderColorTypePicker;
    MSModePickerView *_fillColorTypePicker;
    BCHSBColorPicker *_colorPicker;
    NSView *_emptyTopView;
    NSView *_colorPickerView;
    NSView *_shadowBlendingView;
    NSView *_borderBlendingOpacityView;
    MSColorInspectorSectionColor *_colorSection;
    MSColorInspectorSectionGradient *_gradientSection;
    MSColorInspectorSectionPattern *_patternSection;
    MSColorInspectorSectionNoise *_noiseSection;
    MSEventHandlerManager *_eventHandler;
    MSDocumentData *_documentData;
    MSPersistentAssetCollection *_globalAssets;
}

@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSEventHandlerManager *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) MSColorInspectorSectionNoise *noiseSection; // @synthesize noiseSection=_noiseSection;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(retain, nonatomic) NSView *borderBlendingOpacityView; // @synthesize borderBlendingOpacityView=_borderBlendingOpacityView;
@property(retain, nonatomic) NSView *shadowBlendingView; // @synthesize shadowBlendingView=_shadowBlendingView;
@property(retain, nonatomic) NSView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) NSView *emptyTopView; // @synthesize emptyTopView=_emptyTopView;
@property(retain, nonatomic) BCHSBColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) MSModePickerView *fillColorTypePicker; // @synthesize fillColorTypePicker=_fillColorTypePicker;
@property(retain, nonatomic) MSModePickerView *borderColorTypePicker; // @synthesize borderColorTypePicker=_borderColorTypePicker;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)dealloc;
- (void)colorMagnifierAction:(id)arg1;
- (void)pickerViewChanged:(id)arg1;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (id)filteredStyleParts:(id)arg1;
- (void)close;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)colorPickerAction:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)popoverWillClose;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)currentSection;
- (long long)initialColorTypePickerMode;
- (void)fixFirstResponder;
- (id)viewsByAddingSeparatorsToViews:(id)arg1;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findFrequentColors;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (void)applyBackgroundArrowColor;
- (void)awakeFromNib;
- (id)nibName;
- (id)currentModePicker;
- (void)inspectorSectionDidUpdate:(id)arg1;
- (id)documentAssets;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)initWithSender:(id)arg1 document:(id)arg2 handlerManager:(id)arg3 globalAssets:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

