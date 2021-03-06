//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTSweetgumDataPlanMetricsItem, NSDate, NSNumber;

@interface CTSweetgumDataPlanMetrics : NSObject <NSSecureCoding>
{
    NSDate *_billingCycleEndDate;
    CTSweetgumDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *domesticCapacity; // @synthesize domesticCapacity=_domesticCapacity;
@property(nonatomic) long long regStatus; // @synthesize regStatus=_regStatus;
@property(retain, nonatomic) CTSweetgumDataPlanMetricsItem *domestic; // @synthesize domestic=_domestic;
@property(retain, nonatomic) NSDate *billingCycleEndDate; // @synthesize billingCycleEndDate=_billingCycleEndDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

