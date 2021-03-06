//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class NSDate, NSNumber;

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering>
{
    NSNumber *_instantaneousSpeed;
    NSNumber *_averageSpeed;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *averageSpeed; // @synthesize averageSpeed=_averageSpeed;
@property(retain, nonatomic) NSNumber *instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
- (id)description;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

