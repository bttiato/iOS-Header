//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class ARTrackedRaycastPostProcessor, ARWorldTrackingErrorData, ARWorldTrackingOptions, ARWorldTrackingPoseData, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    _Bool _useFixedIntrinsics;
    long long _vioHandleState;
    NSObject<OS_dispatch_semaphore> *_vioHandleStateSemaphore;
    NSObject<OS_dispatch_semaphore> *_vioObjectDetectionSemaphore;
    ARWorldTrackingErrorData *_errorData;
    ARWorldTrackingPoseData *_cachedPoseData;
    double _lastPoseMetaDataTimestamp;
    long long _reinitializationAttempts;
    long long _reinitializationAttemptsAtInitialization;
    double _lastRelocalizationTimestamp;
    double _lastQualityKeyframeTimestamp;
    int _previousKeyframeCount;
    double _lastPoseTrackingMapTimestamp;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
    _Bool _relocalizingAfterSensorDataDrop;
    _Bool _didClearMap;
    _Bool _hasQualityKeyframe;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    double _minVergenceAngleCosine;
    double _resultLatency;
    _Bool _allowPoseGraphUpdates;
    NSMutableSet *_anchorsReceived;
    NSMutableSet *_participantAnchors;
    _Bool _participantAnchorsEnabled;
    ARWorldTrackingOptions *_mutableOptions;
    unsigned long long _vioSessionIdentifier;
    ARTrackedRaycastPostProcessor *_trackedRaycastPostProcessor;
    CDStruct_14d5dc5e _referenceOriginTransform;
}

+ (_Bool)supportsVideoResolution:(struct CGSize)arg1 forDeviceType:(id)arg2;
+ (_Bool)isSupported;
@property(retain) ARTrackedRaycastPostProcessor *trackedRaycastPostProcessor; // @synthesize trackedRaycastPostProcessor=_trackedRaycastPostProcessor;
@property(readonly) unsigned long long vioSessionIdentifier; // @synthesize vioSessionIdentifier=_vioSessionIdentifier;
@property CDStruct_14d5dc5e referenceOriginTransform; // @synthesize referenceOriginTransform=_referenceOriginTransform;
@property(retain) ARWorldTrackingOptions *mutableOptions; // @synthesize mutableOptions=_mutableOptions;
- (void).cxx_destruct;
- (void)stopAllRaycasts;
- (void)invalidateAllRaycasts;
- (void)stopRaycast:(id)arg1;
- (id)trackedRaycast:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (id)raycast:(id)arg1;
- (void)pushCollaborationData:(id)arg1;
- (id)getObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeReferenceAnchors:(id)arg1;
- (void)addReferenceAnchors:(id)arg1;
- (void)loadSurfaceData:(id)arg1;
- (id)serializeSurfaceData;
- (void)clearMap;
- (id)serializeMapData:(_Bool)arg1;
- (CDStruct_14d5dc5e)cameraTransformAtTimestamp:(double)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)vioHandleState;
@property(readonly, copy, nonatomic) ARWorldTrackingOptions *options;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

