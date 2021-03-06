//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutActivityType, NSArray;

@interface FIUIWorkoutDefaultMetricsProvider : NSObject
{
    FIUIWorkoutActivityType *_activityType;
    _Bool _supportsElevationMetrics;
    long long _metricsVersion;
    NSArray *_defaultEnabledMetrics;
    NSArray *_supportedMetrics;
}

@property(readonly, copy, nonatomic) NSArray *supportedMetrics; // @synthesize supportedMetrics=_supportedMetrics;
@property(readonly, copy, nonatomic) NSArray *defaultEnabledMetrics; // @synthesize defaultEnabledMetrics=_defaultEnabledMetrics;
@property(readonly, nonatomic) long long metricsVersion; // @synthesize metricsVersion=_metricsVersion;
- (void).cxx_destruct;
- (id)supportedMetricsWithIsMachineWorkout:(_Bool)arg1 activityType:(id)arg2;
- (_Bool)isMetricTypeSupported:(unsigned long long)arg1 isMachineWorkout:(_Bool)arg2 activityType:(id)arg3;
- (id)appendMachineMetricsToMetrics:(id)arg1 maxNumMetrics:(long long)arg2 activityType:(id)arg3;
- (id)_machineProvidedMetricsForActivityType:(id)arg1;
- (id)_supportedMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 supportsElevationMetrics:(_Bool)arg2;
- (id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned long long)arg1;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1 metricsVersion:(long long)arg2;
- (id)_defaultEnabledMetricsForSwimmingWithLocationType:(long long)arg1 metricsVersion:(long long)arg2;
- (id)_defaultEnabledMetricsForActivityType:(id)arg1 metricsVersion:(long long)arg2 supportsElevationMetrics:(_Bool)arg3;
- (id)initWithMetricsVersion:(long long)arg1 activityType:(id)arg2 deviceSupportsElevationMetrics:(_Bool)arg3;

@end

