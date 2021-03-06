//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelDeclarationBase : RMModelPayloadBase
{
    NSString *_declarationType;
    NSString *_declarationIdentifier;
    NSString *_declarationDescription;
    NSString *_declarationServerToken;
    RMModelAnyPayload *_declarationPayload;
}

+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
+ (id)declarationClassType;
@property(copy, nonatomic) RMModelAnyPayload *declarationPayload; // @synthesize declarationPayload=_declarationPayload;
@property(copy, nonatomic) NSString *declarationServerToken; // @synthesize declarationServerToken=_declarationServerToken;
@property(copy, nonatomic) NSString *declarationDescription; // @synthesize declarationDescription=_declarationDescription;
@property(copy, nonatomic) NSString *declarationIdentifier; // @synthesize declarationIdentifier=_declarationIdentifier;
@property(copy, nonatomic) NSString *declarationType; // @synthesize declarationType=_declarationType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateServerToken;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadDeclarationFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

