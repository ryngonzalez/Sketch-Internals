//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSArray.h"

__attribute__((visibility("hidden")))
@interface MSStylePartCollection : MSArray
{
}

- (id)stylePartForInserting;
- (id)addNewStylePart;
- (void)moveStylePartFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeStylePartAtIndex:(unsigned long long)arg1;
- (void)removeStylePart:(id)arg1;
- (id)parentStyle;

@end

