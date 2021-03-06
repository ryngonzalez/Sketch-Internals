//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCNetworkService.h"

#import "NSNetServiceDelegate.h"

@class NSNetService, NSString;

__attribute__((visibility("hidden")))
@interface BCNetService : BCNetworkService <NSNetServiceDelegate>
{
    NSNetService *_netService;
}

@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)updateInfo:(id)arg1;
- (id)addresses;
- (void)startService;
- (void)stopService;
- (id)name;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

