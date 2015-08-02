//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface MSPublishOnlineSheet : CHSheetController
{
    NSProgressIndicator *_progressIndicator;
    NSButton *_exportButton;
    NSTextField *_statusLabel;
    NSTextField *_projectNameField;
    NSTextField *_accessCodeField;
}

@property(retain, nonatomic) NSTextField *accessCodeField; // @synthesize accessCodeField=_accessCodeField;
@property(retain, nonatomic) NSTextField *projectNameField; // @synthesize projectNameField=_projectNameField;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)exportStopped;
- (void)exportStarted;
- (void)startExport:(id)arg1;

@end
