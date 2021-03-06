//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding>
{
    long long _status;
    double _duration;
    FUFlightStep *_departure;
    FUFlightStep *_arrival;
    NSString *_baggageClaim;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *baggageClaim; // @synthesize baggageClaim=_baggageClaim;
@property(retain) FUFlightStep *arrival; // @synthesize arrival=_arrival;
@property(retain) FUFlightStep *departure; // @synthesize departure=_departure;
@property double duration; // @synthesize duration=_duration;
@property long long status; // @synthesize status=_status;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly) double currentProgress;
- (_Bool)isEqual:(id)arg1;

@end

