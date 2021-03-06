//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDSpringBoardIconLaunch : PBCodable <NSCopying>
{
    unsigned long long _iconPageInFolder;
    unsigned long long _timestamp;
    unsigned long long _totalIconPagesInFolder;
    _Bool _iconIsFolder;
    _Bool _iconIsFromDock;
    _Bool _iconIsFromFolder;
    struct {
        unsigned int iconPageInFolder:1;
        unsigned int timestamp:1;
        unsigned int totalIconPagesInFolder:1;
        unsigned int iconIsFolder:1;
        unsigned int iconIsFromDock:1;
        unsigned int iconIsFromFolder:1;
    } _has;
}

@property(nonatomic) unsigned long long totalIconPagesInFolder; // @synthesize totalIconPagesInFolder=_totalIconPagesInFolder;
@property(nonatomic) unsigned long long iconPageInFolder; // @synthesize iconPageInFolder=_iconPageInFolder;
@property(nonatomic) _Bool iconIsFromDock; // @synthesize iconIsFromDock=_iconIsFromDock;
@property(nonatomic) _Bool iconIsFromFolder; // @synthesize iconIsFromFolder=_iconIsFromFolder;
@property(nonatomic) _Bool iconIsFolder; // @synthesize iconIsFolder=_iconIsFolder;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalIconPagesInFolder;
@property(nonatomic) _Bool hasIconPageInFolder;
@property(nonatomic) _Bool hasIconIsFromDock;
@property(nonatomic) _Bool hasIconIsFromFolder;
@property(nonatomic) _Bool hasIconIsFolder;
@property(nonatomic) _Bool hasTimestamp;

@end

