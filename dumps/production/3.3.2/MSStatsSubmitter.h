//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSStatsSubmitter : NSObject
{
}

+ (void)saveSubmission:(id)arg1;
+ (BOOL)shouldSubmit:(id)arg1;
+ (void)submitOS:(id)arg1 version:(id)arg2;
+ (void)getOS:(id *)arg1 version:(id *)arg2;
+ (void)submit;

@end

