//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDefaultArchive.h"

__attribute__((visibility("hidden")))
@interface MSDefaultStyle : MSDefaultArchive
{
}

+ (void)saveStyleAndPatterns;
+ (void)loadStyleAndPatterns;
+ (void)setDefaultStyle:(id)arg1;
+ (id)defaultStyle;
+ (void)resetCachedStyleForTesting;
- (id)newObject;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;

@end

