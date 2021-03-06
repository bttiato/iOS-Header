//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRSupportedProtocolMessages, NSString, _MRDeviceInfoMessageProtobuf, _MROriginProtobuf;

__attribute__((visibility("hidden")))
@interface MRExternalDevice : NSObject
{
    _Bool _valid;
    _Bool _usingSystemPairing;
    unsigned int _connectionState;
}

@property(nonatomic, getter=isUsingSystemPairing) _Bool usingSystemPairing; // @synthesize usingSystemPairing=_usingSystemPairing;
@property(readonly, nonatomic) unsigned int connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void)sendClientUpdatesConfigMessage;
- (id)currentClientUpdatesConfigMessage;
- (id)errorForCurrentState;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(nonatomic) _Bool wantsOutputDeviceNotifications;
@property(nonatomic) _Bool wantsVolumeNotifications;
@property(nonatomic) _Bool wantsNowPlayingArtworkNotifications;
@property(nonatomic) _Bool wantsNowPlayingNotifications;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property(readonly, nonatomic) _MROriginProtobuf *customOrigin;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostName;
@property(readonly, nonatomic) NSString *name;
- (id)_init;

@end

