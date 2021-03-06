//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, WFRecord, WFRecordDescriptor;

@protocol WFRecordStorage <NSObject>
- (WFRecordDescriptor *)descriptor;

@optional
- (void)coordinatePropertyUpdatesForRecord:(WFRecord *)arg1 duringBlock:(void (^)(void))arg2;
- (NSDictionary *)recordPropertyMap;
@end

