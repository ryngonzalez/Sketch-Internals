//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseAction.h"

__attribute__((visibility("hidden")))
@interface MSFlattenAction : MSBaseAction
{
}

- (id)tooltip;
- (BOOL)shouldWarnAboutFlattening;
- (void)flattenIgnoringWarning;
- (void)doFlatten;
- (void)doPerformAction:(id)arg1;
- (void)flatten:(id)arg1;
- (BOOL)validate;

@end

