//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PBBridgeSupport/NSObject-Protocol.h>

@class IDSProtobuf;

@protocol PBBridgeCompanionProtocol <NSObject>
- (void)handleWarrantySentinelResponse:(IDSProtobuf *)arg1;
- (void)sendProxyActivationRequest:(IDSProtobuf *)arg1;
- (void)enableSiriForGizmo:(IDSProtobuf *)arg1;
- (void)getSiriState:(IDSProtobuf *)arg1;
- (void)getCompanionRegion:(IDSProtobuf *)arg1;
- (void)getCompanionLanguage:(IDSProtobuf *)arg1;
- (void)gizmoDidEndPasscodeCreation:(IDSProtobuf *)arg1;
- (void)gizmoDidFinishActivating:(IDSProtobuf *)arg1;
- (void)gizmoDidBeginActivating:(IDSProtobuf *)arg1;

@optional
- (void)gizmoBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;
@end

