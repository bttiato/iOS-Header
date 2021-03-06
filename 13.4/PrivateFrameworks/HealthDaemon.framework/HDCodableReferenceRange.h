//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableInspectableValueCollection, NSString;

@interface HDCodableReferenceRange : PBCodable <NSCopying>
{
    NSString *_identifier;
    HDCodableInspectableValueCollection *_valueRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableInspectableValueCollection *valueRange; // @synthesize valueRange=_valueRange;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasValueRange;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

