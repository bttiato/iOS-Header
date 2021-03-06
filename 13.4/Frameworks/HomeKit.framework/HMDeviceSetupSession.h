//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFUnfairLock, NSDictionary, NSString, NSUUID, _HMContext;
@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    _Bool _open;
    NSDictionary *_userInfo;
    id <HMDeviceSetupSessionDelegate> _delegate;
    NSUUID *_identifier;
    long long _role;
    _HMContext *_context;
}

+ (id)logCategory;
+ (id)homeManagerDestination;
- (void).cxx_destruct;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) long long role; // @synthesize role=_role;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <HMDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)_reallySendExchangeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__handleReceivedExchangeData:(id)arg1;
- (void)sendExchangeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleDisconnection:(id)arg1;
- (void)__handleClose:(id)arg1;
- (void)__closeWithError:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)_handleOpenedSession;
- (void)open;
- (id)messageDestination;
- (void)__registerForMessages;
- (void)setUserInfo:(id)arg1;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)initWithRole:(long long)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

