//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPluginBundle, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface MSPreferencesPluginInfo : NSObject
{
    BOOL _enabled;
    NSString *_name;
    MSPluginBundle *_pluginBundle;
}

+ (id)pluginInfoWithName:(id)arg1;
+ (id)pluginInfoWithPluginBundle:(id)arg1;
@property(retain, nonatomic) MSPluginBundle *pluginBundle; // @synthesize pluginBundle=_pluginBundle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy, nonatomic) NSString *pluginDescription;
@property(readonly, copy, nonatomic) NSString *version;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy, nonatomic) NSString *enableCheckboxTitle;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle;
- (void)dealloc;

@end

