//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSString;
@protocol MPAVLightweightRoutingControllerDelegate;

@interface MPAVLightweightRoutingController : NSObject
{
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    long long _discoveryMode;
    NSString *_name;
    id <MPAVLightweightRoutingControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MPAVLightweightRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *pickedRoutes;
@property(readonly, nonatomic, getter=isDevicePresenceDetected) _Bool devicePresenceDetected;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

