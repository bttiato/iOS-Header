//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSMissingMessageMetric : NSObject
{
    long long _reason;
    NSString *_guid;
    NSString *_service;
    NSDictionary *_additionalInfo;
}

@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (_Bool)_shouldReportMetricForExternal;
- (_Bool)_shouldReportReason;
- (_Bool)shouldReportMetric;
@property(readonly, nonatomic) NSNumber *command;
@property(readonly, nonatomic) NSDictionary *payload;
- (id)initWithReason:(long long)arg1 guid:(id)arg2 service:(id)arg3 additionalInformation:(id)arg4;

@end

