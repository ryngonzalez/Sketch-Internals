//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDocumentData, MSPage;

@protocol MSDocumentDataDelegate <NSObject>
- (void)layerTreeLayoutDidChange;
- (void)didAddPage:(MSPage *)arg1;
- (void)willRemovePage:(MSPage *)arg1;
- (void)documentData:(MSDocumentData *)arg1 syncSharedObject:(id <MSSharedObjectInstance>)arg2;
- (void)documentData:(MSDocumentData *)arg1 didChangeToPage:(MSPage *)arg2;
@end
