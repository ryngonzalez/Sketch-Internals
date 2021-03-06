//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

#import "NSWindowDelegate.h"

@class MSSimpleGrid, NSButton, NSString;

@interface MSGridSheet : CHSheetController <NSWindowDelegate>
{
    NSButton *_centerGridButton;
    MSSimpleGrid *_originalGrid;
    MSSimpleGrid *_grid;
}

@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(copy, nonatomic) MSSimpleGrid *originalGrid; // @synthesize originalGrid=_originalGrid;
@property(retain, nonatomic) NSButton *centerGridButton; // @synthesize centerGridButton=_centerGridButton;
- (void).cxx_destruct;
- (void)gridChanged:(id)arg1;
- (void)setAsDefault:(id)arg1;
- (void)confirm:(id)arg1;
- (void)refreshView;
- (void)refreshCanvas:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

