//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _int64Value;
    NSData *_bytesValue;
    NSString *_stringValue;
    _Bool _boolValue;
    CDStruct_f7459c01 _has;
}

@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBytesValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasDoubleValue;

@end

