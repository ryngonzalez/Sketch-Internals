//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, NSTextField;

@interface MSFillInspectorViewController : MSStylePartInspectorViewController
{
    MSColorPreviewButton *colorButton;
    NSTextField *opacityFieldColor;
    NSTextField *opacityFieldGradientOrPattern;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)opacityFieldAction:(id)arg1;
- (id)correctOpacityField;
- (void)showCorrectOpacityField;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)prepare;

@end

