//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2MetricOperationGroupOptions, NSString;

@interface C2MetricOperationOptions : NSObject
{
    C2MetricOperationGroupOptions *_operationGroup;
    NSString *_operationId;
    NSString *_operationType;
}

@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
@property(retain, nonatomic) C2MetricOperationGroupOptions *operationGroup; // @synthesize operationGroup=_operationGroup;
- (void).cxx_destruct;

@end

