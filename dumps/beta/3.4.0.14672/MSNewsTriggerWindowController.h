//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSString, NSURL, WebView;

__attribute__((visibility("hidden")))
@interface MSNewsTriggerWindowController : NSWindowController
{
    NSURL *_url;
    NSString *_newsID;
    WebView *_webView;
    NSButton *_dontShowAgainButton;
}

@property(nonatomic) NSButton *dontShowAgainButton; // @synthesize dontShowAgainButton=_dontShowAgainButton;
@property(nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *newsID; // @synthesize newsID=_newsID;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)dontShowNewsWithIDAnymore:(id)arg1;
- (void)close:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1 newsID:(id)arg2;

@end

