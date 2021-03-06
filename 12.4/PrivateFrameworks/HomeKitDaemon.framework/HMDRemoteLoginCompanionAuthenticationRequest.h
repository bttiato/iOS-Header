//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class ACAccount, AKDevice, NSDictionary, NSString;

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol>
{
    ACAccount *_account;
    AKDevice *_companionDevice;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(retain, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

