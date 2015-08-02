//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BCBonjourConnection : NSObject <NSStreamDelegate>
{
    BOOL _closing;
    int _socket;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_io> *_channel;
    NSObject<OS_dispatch_queue> *_networkQueue;
    NSObject<OS_dispatch_queue> *_archiveQueue;
    NSObject<OS_dispatch_source> *_pingTimer;
}

@property(nonatomic) BOOL closing; // @synthesize closing=_closing;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pingTimer; // @synthesize pingTimer=_pingTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // @synthesize archiveQueue=_archiveQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *channel; // @synthesize channel=_channel;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1 channel:(id)arg2;
- (void)openedWithChannel:(id)arg1;
- (void)closed;
- (void)reportIOError:(int)arg1 code:(unsigned long long)arg2 channel:(id)arg3;
- (void)sendDictionary:(id)arg1 channel:(id)arg2 terminateWhenDone:(BOOL)arg3;
- (void)disablePingTimer;
- (void)enablePingTimer;
- (void)sendDictionary:(id)arg1;
- (void)receivedDictionary:(id)arg1 channel:(id)arg2;
- (void)unarchiveDictionary:(id)arg1 channel:(id)arg2;
- (void)readDictionaryDataOfSize:(unsigned long long)arg1 channel:(id)arg2;
- (void)readDictionaryWithChannel:(id)arg1;
- (void)dealloc;
- (void)shutdownChannel:(id)arg1;
- (void)configureSocket:(int)arg1;
- (void)close;
- (id)initWithSocket:(int)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
