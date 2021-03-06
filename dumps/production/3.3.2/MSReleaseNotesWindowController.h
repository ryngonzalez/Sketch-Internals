//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSView, WebView;

@interface MSReleaseNotesWindowController : NSWindowController
{
    WebView *_releaseNotesField;
    NSView *_prereleaseWarning;
}

@property(retain, nonatomic) NSView *prereleaseWarning; // @synthesize prereleaseWarning=_prereleaseWarning;
@property(retain, nonatomic) WebView *releaseNotesField; // @synthesize releaseNotesField=_releaseNotesField;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)updatePrereleaseWarning;
- (void)updateReleaseNotesField;
- (void)updateTitleToVersionNumber;
- (void)awakeFromNib;
- (id)init;

@end

