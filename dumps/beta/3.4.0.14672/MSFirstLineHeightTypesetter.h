//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSATSTypesetter.h"

__attribute__((visibility("hidden")))
@interface MSFirstLineHeightTypesetter : NSATSTypesetter
{
    double _forcedBaselineOffset;
    id <MSFirstLineTypesetterDelegate> _delegate;
}

@property(nonatomic) __weak id <MSFirstLineTypesetterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double forcedBaselineOffset; // @synthesize forcedBaselineOffset=_forcedBaselineOffset;
- (void).cxx_destruct;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;

@end
