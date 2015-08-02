//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPopoverAction.h"

#import "MSPublisherViewControllerDelegate.h"

@class MSPublisherViewController, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface MSPublishAction : MSPopoverAction <MSPublisherViewControllerDelegate>
{
    MSPublisherViewController *_viewController;
    NSImage *_smallImage;
    NSImage *_normalImage;
}

@property(retain, nonatomic) NSImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) NSImage *smallImage; // @synthesize smallImage=_smallImage;
@property(retain, nonatomic) MSPublisherViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)image;
- (id)progressImagesWithSuffix:(id)arg1;
- (void)ensureProgressImagesLoaded;
- (void)publishViewController:(id)arg1 didProgressUpdateTo:(double)arg2;
- (id)popoverViewController;
- (BOOL)validate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
