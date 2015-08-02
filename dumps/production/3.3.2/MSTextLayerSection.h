//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerSection.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "NSComboBoxDataSource.h"
#import "NSMenuDelegate.h"

@class BCPopover, MSColorPreviewButton, MSLineHeightTextFieldCell, NSButton, NSPopUpButton, NSSegmentedControl, NSString, NSTextField, NSView;

@interface MSTextLayerSection : MSLayerSection <NSMenuDelegate, BCPopoverDelegate, MSColorInspectorDelegate, NSComboBoxDataSource>
{
    NSView *_basicView;
    NSView *_symbolExclusionView;
    NSButton *_fontFamilyButton;
    NSPopUpButton *_fontWeightPopUpButton;
    NSTextField *_fontSizeField;
    MSColorPreviewButton *_colorPickerButton;
    NSTextField *_kerningField;
    NSTextField *_lineHeightField;
    MSLineHeightTextFieldCell *_lineHeightCell;
    NSTextField *_paragraphHeightField;
    NSSegmentedControl *_alignmentButton;
    BCPopover *_popover;
}

+ (void)initialize;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSSegmentedControl *alignmentButton; // @synthesize alignmentButton=_alignmentButton;
@property(retain, nonatomic) NSTextField *paragraphHeightField; // @synthesize paragraphHeightField=_paragraphHeightField;
@property(retain, nonatomic) MSLineHeightTextFieldCell *lineHeightCell; // @synthesize lineHeightCell=_lineHeightCell;
@property(retain, nonatomic) NSTextField *lineHeightField; // @synthesize lineHeightField=_lineHeightField;
@property(retain, nonatomic) NSTextField *kerningField; // @synthesize kerningField=_kerningField;
@property(retain, nonatomic) MSColorPreviewButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(retain, nonatomic) NSTextField *fontSizeField; // @synthesize fontSizeField=_fontSizeField;
@property(retain, nonatomic) NSPopUpButton *fontWeightPopUpButton; // @synthesize fontWeightPopUpButton=_fontWeightPopUpButton;
@property(retain, nonatomic) NSButton *fontFamilyButton; // @synthesize fontFamilyButton=_fontFamilyButton;
@property(retain, nonatomic) NSView *symbolExclusionView; // @synthesize symbolExclusionView=_symbolExclusionView;
@property(retain, nonatomic) NSView *basicView; // @synthesize basicView=_basicView;
- (void).cxx_destruct;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (id)views;
- (id)textStorages;
- (BOOL)textLayerContainedInSymbol;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)updateKerningForFontChangeTo:(id)arg1 string:(id)arg2 range:(struct _NSRange)arg3 effectiveRange:(struct _NSRange)arg4 oldPointSize:(double)arg5;
- (void)changeFontPropertiesInBlock:(CDUnknownBlockType)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)reloadFontWeightPopUp;
- (id)colorSpaceForFirstColor;
- (id)firstColor;
- (id)currentFontFamilyName;
- (void)changeFontFamilyTo:(id)arg1;
- (void)changeParagraphStyleInBlock:(CDUnknownBlockType)arg1;
- (id)textView;
- (void)alignmentButtonAction:(id)arg1;
- (id)currentView;
- (void)paragraphHeightAction:(id)arg1;
- (void)lineHeightAction:(id)arg1;
- (void)kerningAction:(id)arg1;
- (void)putFocusOnTextView;
- (void)colorInspectorWillClose:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)changeTextLayerFont:(id)arg1;
- (void)showColorPickerAction:(id)arg1;
- (void)showParagraphStylingAction:(id)arg1;
- (void)fontSizeAction:(id)arg1;
- (void)fontWeightAction:(id)arg1;
- (void)fontFamilyAction:(id)arg1;
- (void)closeExistingPopoverOrShowNewOneWithContentClass:(Class)arg1 sender:(id)arg2 viewCreatorBlock:(CDUnknownBlockType)arg3;
- (void)viewControllerWillDisappear;
- (void)dealloc;
- (double)defaultLineHeight;
- (double)lineHeight;
- (void)reloadLineHeightField;
- (void)reloadData;
- (void)textViewDidChange:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
