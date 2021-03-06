//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class MSAsset, NSArray, NSData, NSDate, NSString;

@interface MSAssetCollection : NSObject <NSSecureCoding>
{
    NSString *_assetCollectionID;
    NSString *_ctag;
    MSAsset *_masterAsset;
    NSArray *_derivedAssets;
    NSString *_fileName;
    _Bool _wasDeleted;
    NSDate *_serverUploadedDate;
    long long _initialFailureDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;
@property(nonatomic) long long initialFailureDate; // @synthesize initialFailureDate=_initialFailureDate;
@property(retain, nonatomic) NSDate *serverUploadedDate; // @synthesize serverUploadedDate=_serverUploadedDate;
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) MSAsset *masterAsset; // @synthesize masterAsset=_masterAsset;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *assetCollectionID; // @synthesize assetCollectionID=_assetCollectionID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(retain, nonatomic) NSArray *derivedAssets;
@property(readonly, nonatomic) __weak NSData *masterAssetHash;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;

@end

