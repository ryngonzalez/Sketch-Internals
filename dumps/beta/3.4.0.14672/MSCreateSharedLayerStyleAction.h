//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseAction.h"

__attribute__((visibility("hidden")))
@interface MSCreateSharedLayerStyleAction : MSBaseAction
{
}

- (id)firstLayer;
- (id)toolbarLabel;
- (id)imageName;
- (id)label;
- (id)sharedObjectContainer;
- (struct MSModelObject *)sharedObjectInstance;
- (id)displayNameForNewSharedObject;
- (BOOL)validate;
- (void)createSharedObjectFromSelectedLayer;
- (void)doPerformAction:(id)arg1;
- (void)createSharedLayerStyle:(id)arg1;

@end

