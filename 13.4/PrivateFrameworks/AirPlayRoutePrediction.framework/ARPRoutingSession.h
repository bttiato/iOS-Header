//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AirPlayRoutePrediction/NSCopying-Protocol.h>
#import <AirPlayRoutePrediction/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSDictionary, NSString;

@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_outputDeviceID;
    NSDictionary *_microLocationProbabilityVector;
    NSDateInterval *_interval;
}

+ (void)writeSessions:(id)arg1 routingSessionTimeout:(double)arg2 file:(id)arg3 error:(id *)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)routingSessionsFromNowPlayingEvents:(id)arg1 microLocationEvents:(id)arg2 routingSessionTimeout:(double)arg3;
+ (double)microLocationCorrelationGracePeriod;
+ (double)minimumRoutingEventDuration;
+ (double)routingSessionTimeout;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) NSDictionary *microLocationProbabilityVector; // @synthesize microLocationProbabilityVector=_microLocationProbabilityVector;
@property(readonly, copy, nonatomic) NSString *outputDeviceID; // @synthesize outputDeviceID=_outputDeviceID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOutputDeviceID:(id)arg1 interval:(id)arg2 microLocationProbabilityVector:(id)arg3;

@end

