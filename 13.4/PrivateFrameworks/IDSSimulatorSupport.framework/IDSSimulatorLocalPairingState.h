//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_dispatch_queue;

@interface IDSSimulatorLocalPairingState : NSObject
{
    NSUUID *_activePairedDeviceSimulatorID;
    NSObject<OS_dispatch_queue> *_didSwitchActivePairedDeviceCallbackQueue;
    CDUnknownBlockType _didSwitchActivePairedDeviceCallback;
    NSUUID *_pendingQuickSwitchAcknowledgementID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSUUID *pendingQuickSwitchAcknowledgementID; // @synthesize pendingQuickSwitchAcknowledgementID=_pendingQuickSwitchAcknowledgementID;
@property(copy, nonatomic) CDUnknownBlockType didSwitchActivePairedDeviceCallback; // @synthesize didSwitchActivePairedDeviceCallback=_didSwitchActivePairedDeviceCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *didSwitchActivePairedDeviceCallbackQueue; // @synthesize didSwitchActivePairedDeviceCallbackQueue=_didSwitchActivePairedDeviceCallbackQueue;
@property(retain) NSUUID *activePairedDeviceSimulatorID; // @synthesize activePairedDeviceSimulatorID=_activePairedDeviceSimulatorID;

@end

