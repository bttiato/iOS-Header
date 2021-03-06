//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZoomingGestureConfiguration-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CarPlayZoomingGestureConfiguration : NSObject <ZoomingGestureConfiguration>
{
    _Bool _isEnabled;
    _Bool _isBeginningLocationLimited;
    _Bool _shouldRevertZoomDirection;
    _Bool _shouldUseTapLocationAsFocusPoint;
    double _timeoutInterval;
    double _draggingResistanceScale;
    double _decelerationAnimationVelocityThreshold;
    double _maximumVelocityForZoomInDecelerationAnimation;
    double _maximumVelocityForZoomOutDecelerationAnimation;
    double _zoomOutDecelerationAnimationFrictionScale;
    NSString *_notificationKey;
}

@property(readonly, copy, nonatomic) NSString *notificationKey; // @synthesize notificationKey=_notificationKey;
@property(readonly, nonatomic) _Bool shouldUseTapLocationAsFocusPoint; // @synthesize shouldUseTapLocationAsFocusPoint=_shouldUseTapLocationAsFocusPoint;
@property(readonly, nonatomic) double zoomOutDecelerationAnimationFrictionScale; // @synthesize zoomOutDecelerationAnimationFrictionScale=_zoomOutDecelerationAnimationFrictionScale;
@property(readonly, nonatomic) double maximumVelocityForZoomOutDecelerationAnimation; // @synthesize maximumVelocityForZoomOutDecelerationAnimation=_maximumVelocityForZoomOutDecelerationAnimation;
@property(readonly, nonatomic) double maximumVelocityForZoomInDecelerationAnimation; // @synthesize maximumVelocityForZoomInDecelerationAnimation=_maximumVelocityForZoomInDecelerationAnimation;
@property(readonly, nonatomic) double decelerationAnimationVelocityThreshold; // @synthesize decelerationAnimationVelocityThreshold=_decelerationAnimationVelocityThreshold;
@property(readonly, nonatomic) double draggingResistanceScale; // @synthesize draggingResistanceScale=_draggingResistanceScale;
@property(readonly, nonatomic) _Bool shouldRevertZoomDirection; // @synthesize shouldRevertZoomDirection=_shouldRevertZoomDirection;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) _Bool isBeginningLocationLimited; // @synthesize isBeginningLocationLimited=_isBeginningLocationLimited;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (double)valueWithKey:(id)arg1 defaultValue:(double)arg2;
- (_Bool)boolValueWithKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)refreshSetting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

