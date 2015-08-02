//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSColorInspectorSection.h"

@class MSColor;

@interface MSColorInspectorSectionColor : MSColorInspectorSection
{
    MSColor *_pickedColor;
}

@property(retain, nonatomic) MSColor *pickedColor; // @synthesize pickedColor=_pickedColor;
- (void).cxx_destruct;
- (unsigned long long)assetType;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (BOOL)pickerView:(id)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (id)pickerView:(id)arg1 tooltipForPresetButtonAtIndex:(unsigned long long)arg2;
- (void)colorPickerChangedTo:(id)arg1;
- (BOOL)hasAdvancedSettingsNib;
- (long long)fillType;
- (void)validate;
- (void)setStyleParts:(id)arg1;
- (void)highlightCurrentColor:(id)arg1 forPicker:(id)arg2;
- (void)highlightCurrentColor;
- (void)reloadPresetPicker;
- (id)assetPickerViewKeys;
- (id)viewsWithColorPickerView:(id)arg1 blendingView:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
