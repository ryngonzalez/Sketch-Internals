//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface MSFolderMonitor : NSObject
{
    struct __FSEventStream *_eventStream;
    NSURL *_folderURL;
    CDUnknownBlockType _contentsChangedBlock;
}

+ (id)folderMonitorWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType contentsChangedBlock; // @synthesize contentsChangedBlock=_contentsChangedBlock;
@property(copy, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1 contentsChangedBlock:(CDUnknownBlockType)arg2;

@end

