//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCPopover;

@protocol BCPopoverDelegate <NSObject>
- (void)popoverWillClose:(BCPopover *)arg1;

@optional
- (BOOL)popoverShouldCauseExistingPopoversToClose:(BCPopover *)arg1;
- (BOOL)popoverShouldCloseWhenNewPopoverOpens:(BCPopover *)arg1 newPopover:(BCPopover *)arg2;
- (void)popoverWindowSizeDidChange:(BCPopover *)arg1;
@end

