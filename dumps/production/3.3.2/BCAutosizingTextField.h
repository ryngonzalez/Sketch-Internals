//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface BCAutosizingTextField : NSTextField
{
    double _maximumWidth;
    double _maximumHeight;
}

@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
- (void)sizeToFitWithMaximumWidth;

@end

