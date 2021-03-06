//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMMotionAlarmManagerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    NSMutableDictionary *fAlarms;
    _Bool fListening;
}

+ (id)instance;
- (void)_handleAlarmFire:(id)arg1;
- (_Bool)_launchRemoteAppWithError:(id *)arg1 delegate:(id)arg2;
- (_Bool)_acknowledgeAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)_unregisterAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)_registerAlarm:(id)arg1 error:(id *)arg2;
- (void)_stopListeners;
- (void)_startListeners;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

