//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagementModel/RMModelConfigurationBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface RMModelAccountCardDAVDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>
{
    NSString *_payloadDescription;
    NSString *_payloadHostName;
    NSNumber *_payloadPort;
    NSString *_payloadPrincipalURL;
    NSString *_payloadAuthenticationCredentialsAssetReference;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 hostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 description:(id)arg2 hostName:(id)arg3 port:(id)arg4 principalURL:(id)arg5 authenticationCredentialsAssetReference:(id)arg6;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // @synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference;
@property(copy, nonatomic) NSString *payloadPrincipalURL; // @synthesize payloadPrincipalURL=_payloadPrincipalURL;
@property(copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property(copy, nonatomic) NSString *payloadHostName; // @synthesize payloadHostName=_payloadHostName;
@property(copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)assetReferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

