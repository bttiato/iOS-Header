//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AppMetricsApplicationDescriptor : NSObject
{
    _Bool _beta;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSNumber *_storeItemID;
    NSNumber *_storeExternalVersionID;
}

+ (id)newDescriptorWithJobEntity:(id)arg1;
+ (id)newDescriptorWithDownloadEntity:(id)arg1;
+ (id)newDescriptorWithApplication:(id)arg1;
@property(copy, nonatomic) NSNumber *storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
- (void).cxx_destruct;

@end

