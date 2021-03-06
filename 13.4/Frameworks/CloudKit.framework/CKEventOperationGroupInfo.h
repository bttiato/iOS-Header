//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>
{
    NSString *_operationGroupID;
    NSString *_operationGroupName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(readonly, nonatomic) NSString *operationGroupID; // @synthesize operationGroupID=_operationGroupID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperationGroup:(id)arg1;

@end

