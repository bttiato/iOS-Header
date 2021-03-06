//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARSearchResponse_Correction-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_Correction : PBCodable <_PARSearchResponse_Correction, NSSecureCoding>
{
    float _score;
    NSString *_prefix;
    NSString *_completion;
}

- (void).cxx_destruct;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

