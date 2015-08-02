//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCStructuredFile, NSDictionary;

@interface MSDocumentFile : NSObject
{
    NSDictionary *_metadata;
    BCStructuredFile *_file;
}

@property(retain, nonatomic) BCStructuredFile *file; // @synthesize file=_file;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)repair;
- (BOOL)writeDocumentData:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (long long)version;
- (id)data;
- (id)readDataWithError:(id *)arg1;
- (id)validate;
- (id)missingFonts;
- (id)initForWriting;
- (id)initWithURL:(id)arg1;

@end

