//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ECASLClient : NSObject
{
    struct __asl_object_s *_client;
    struct __asl_object_s *_msg;
}

+ (id)sharedInstance;
@property(nonatomic) struct __asl_object_s *msg; // @synthesize msg=_msg;
@property(nonatomic) struct __asl_object_s *client; // @synthesize client=_client;
- (void)error:(id)arg1;
- (void)log:(id)arg1;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end
