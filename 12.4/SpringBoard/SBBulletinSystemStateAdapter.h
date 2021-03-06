//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject
{
    BBSystemStateProvider *_stateProvider;
    _Bool _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_lostModeStateChanged;
- (void)_lockStateChanged:(id)arg1;
- (void)_sendCurrentUILockedStatus;
- (void)dealloc;
- (id)init;

@end

