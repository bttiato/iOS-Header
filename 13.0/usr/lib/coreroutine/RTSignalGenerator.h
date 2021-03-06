//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, RTLocationManager, RTSignalGeneratorOptions;

@interface RTSignalGenerator : NSObject
{
    RTSignalGeneratorOptions *_signalGeneratorOptions;
    RTLocationManager *_locationManager;
    unsigned long long _totalVisitLocationsGeneratedCount;
    unsigned long long _totalTransitionLocationsGeneratedCount;
    NSMutableArray *_generatedLocations;
}

+ (void)injectSignalForSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)necessaryCenterOfArcBetweenStartLocation:(id)arg1 endLocation:(id)arg2 minimumSpeed:(double)arg3;
+ (id)centerProducingArcBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 FromStartLocation:(id)arg3 endLocation:(id)arg4;
+ (id)centerProducingArcBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 fromStartLocation:(id)arg3 endLocation:(id)arg4 examiningLatLongDisplacement:(double)arg5 fromIntersectingLocation:(id)arg6 atAngle:(double)arg7;
+ (id)locationBetweenLowerDistanceBound:(double)arg1 upperDistanceBound:(double)arg2 fromStartLocation:(id)arg3 endLocation:(id)arg4 betweenTargetLowLocation:(id)arg5 targetHighLocation:(id)arg6;
+ (struct CLLocationCoordinate2D)coordinateAtDisplacement:(double)arg1 fromCenterCoordinate:(struct CLLocationCoordinate2D)arg2 atAngle:(double)arg3;
+ (struct CLLocationCoordinate2D)averageCoordinateOfCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
+ (double)latLongDisplacementBetweenCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
+ (double)arcDistanceForStartLocation:(id)arg1 endLocation:(id)arg2 centerLocation:(id)arg3;
+ (double)angleSweptFromStartAngle:(double)arg1 ToEndAngle:(double)arg2;
+ (double)angleOfLineBetweenCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
+ (double)anglePerpendicularToLineBetweenLocation1:(id)arg1 location2:(id)arg2;
+ (double)perpendicularAngleForAngle:(double)arg1;
+ (double)minSpeedToFilterHyperParameter;
@property(retain) NSMutableArray *generatedLocations; // @synthesize generatedLocations=_generatedLocations;
- (void).cxx_destruct;
- (id)generateLocations;
- (id)locationsForVisit:(id)arg1;
- (id)transitionLocationsBetweenStartLocation:(id)arg1 endLocation:(id)arg2 coordinateCalculationBlock:(CDUnknownBlockType)arg3;
- (id)transitionLocationsAlongArcBetweenStartLocation:(id)arg1 endLocation:(id)arg2 forCenterLocation:(id)arg3;
- (id)transitionLocationsBetweenStartLocation:(id)arg1 endLocation:(id)arg2;
- (id)addGeneratedLocation:(id)arg1 forceInject:(_Bool)arg2;
- (unsigned long long)locationCountInStoreWithError:(id *)arg1;
- (id)initWithSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2 generatedLocations:(id)arg3;
- (id)initWithSignalGeneratorOptions:(id)arg1 locationManager:(id)arg2;
- (id)init;

@end

