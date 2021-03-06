//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSMousePointerPreferencesObserver-Protocol.h"
#import "PUIDPointerEventStreamProviderObserving-Protocol.h"
#import "PUIDXPCClientControllerDelegate-Protocol.h"

@class BKSHIDEventHitTestClientContext, BKSMousePointerDevicePreferences, NSArray, NSMapTable, NSString, NSTimer, PSPointerHoverRegion, PUIDPointerClient, PUIDPointerRecenteringContext, PUIDPointerRenderingRootViewController, PUIDPointerSettings, PUIDPointerState, PUIDTouchHistory, PUIDXPCClientController, UIScreen;
@protocol BSInvalidatable, OS_dispatch_queue, OS_os_transaction, PUIDPointerEventStreamProviding, PUIDSystemPointerPortalRendering;

@interface PUIDPointerController : NSObject <BKSMousePointerPreferencesObserver, PUIDPointerEventStreamProviderObserving, PUIDXPCClientControllerDelegate>
{
    NSObject<OS_os_transaction> *_transaction;
    NSMapTable *_pointerClientToClientStateMap;
    NSMapTable *_pointerClientToWantsServiceKeepAliveMap;
    struct __IOHIDEvent *_lastPointerEvent;
    NSArray *_lastPointerHitTestContexts;
    id <PUIDPointerEventStreamProviding> _pointerEventStreamProvider;
    PUIDPointerRenderingRootViewController *_pointerRenderingController;
    UIScreen *_screen;
    id <PUIDSystemPointerPortalRendering> _systemPointerPortalRenderer;
    PUIDPointerClient *_systemPointerClient;
    NSObject<OS_dispatch_queue> *_transformUpdateQueue;
    PUIDXPCClientController *_xpcClientContextController;
    PUIDPointerState *_previousPointerState;
    PUIDPointerClient *_previousPointerClient;
    BKSHIDEventHitTestClientContext *_systemCursorInteractionContext;
    unsigned long long _decelerationLookupGenerationID;
    _Bool _hasPointerVelocityCrossedHighThreshold;
    PUIDPointerClient *_highVelocityAllowedPointerClient;
    PSPointerHoverRegion *_highVelocityAllowedHoverRegion;
    struct CGPoint _pointerVelocity;
    PUIDTouchHistory *_touchHistory;
    id <BSInvalidatable> _buttonDownRepositionAssertion;
    PUIDPointerRecenteringContext *_buttonDownRepositionAssertionContext;
    BKSMousePointerDevicePreferences *_globalDevicePreferences;
    id <BSInvalidatable> _globalDevicePreferencesObservationAssertion;
    NSTimer *_autohidePointerTimer;
    NSTimer *_delayedPointerUnhideTimer;
    NSTimer *_delayedMouseRecenteringTimer;
    NSTimer *_periodicClientTransformRefreshTimer;
    _Bool _isFingerDown;
    _Bool _pointerIsAutohidden;
    _Bool _isProvisionallyVisible;
    _Bool _pointerHiddenByEntitledClient;
    _Bool _focusedOnItem;
    _Bool _hasSetupPointerState;
    _Bool _deferMaterialChanges;
    _Bool _isPerformingPeriodicClientTransformRefresh;
    _Bool _shouldPeriodicallyRefreshClientTransform;
    PUIDPointerSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUIDPointerSettings *settings; // @synthesize settings=_settings;
- (void)_updateServiceKeepAlive;
- (void)_updatePointerWithOptions:(unsigned long long)arg1 updateHandlerCollection:(id)arg2;
- (struct CGPoint)_transformVelocity:(struct CGPoint)arg1 intoCoordinateSpaceForPointerClient:(id)arg2;
- (void)_setShouldPeriodicallyRefreshClientTransform:(_Bool)arg1;
- (id)_recenteringContextRelativePointerPositionForPointerClient:(id)arg1;
- (void)_invalidateHoverRegionsForAllPointerClientsExcludingPointerClient:(id)arg1 hoverRegion:(id)arg2;
- (void)_handlePeriodicRefreshTimerAction;
- (void)_handleAccessibilityPointerSizePreferencesDidChange;
- (void)_updatePointerHiddenByEntitledClients;
- (double)_decelerationRate;
- (void)_getTransformForHoverRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginPeriodicClientTransformRefreshTimer;
- (void)xpcClientContextController:(id)arg1 setPointerPersistentlyHiddenForReasons:(id)arg2 forClient:(id)arg3;
- (void)xpcClientContextController:(id)arg1 autohidePointerForReason:(unsigned long long)arg2 forClient:(id)arg3;
- (void)xpcClientContextController:(id)arg1 didSetSystemCursorInteractionContextID:(unsigned int)arg2 forPid:(int)arg3;
- (void)xpcClientContextController:(id)arg1 setWantsServiceKeepAlive:(_Bool)arg2 forClient:(id)arg3;
- (void)xpcClientContextController:(id)arg1 invalidateContentMatchMoveSource:(id)arg2 forClient:(id)arg3;
- (id)xpcClientContextController:(id)arg1 createContentMatchMoveSourceForClient:(id)arg2;
- (void)xpcClientContextController:(id)arg1 invalidatePointerPortalSourceCollection:(id)arg2 forClient:(id)arg3;
- (id)xpcClientContextController:(id)arg1 createPointerPortalSourceCollectionForClient:(id)arg2;
- (void)xpcClientContextController:(id)arg1 didUpdateHoverRegion:(id)arg2 forClient:(id)arg3 transitionCompletion:(CDUnknownBlockType)arg4;
- (void)xpcClientContextController:(id)arg1 didRemovePointerClient:(id)arg2;
- (void)xpcClientContextController:(id)arg1 didAddPointerClient:(id)arg2;
- (void)_unhidePointerForReason:(id)arg1;
- (void)_hidePointerForReason:(id)arg1;
- (void)_cancelAutohideTimer;
- (void)_restartAutohideTimer;
- (void)_cancelDelayedUnhideTimer;
- (void)_startDelayedUnhideTimer;
- (void)_updatePointerHiddenStateForTouchUp:(_Bool)arg1 fingerDown:(_Bool)arg2 withEvent:(struct __IOHIDEvent *)arg3 previousEvent:(struct __IOHIDEvent *)arg4;
- (unsigned int)_pointerWindowContextID;
- (void)_resetPointerVelocity;
- (void)_updatePointerVelocityWithPointerParentEvent:(struct __IOHIDEvent *)arg1 previousEvent:(struct __IOHIDEvent *)arg2;
- (void)_adjustDecelerationTargetForProjectedPosition:(struct CGPoint)arg1 liftOffPointerPosition:(struct CGPoint)arg2 pointerVelocity:(struct CGPoint)arg3 hitTestContext:(id)arg4 locationInsideHitTestedContext:(struct CGPoint)arg5 withLookupGenerationID:(unsigned long long)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)_adjustDecelerationTargetForProjectedPosition:(struct CGPoint)arg1 liftOffPointerPosition:(struct CGPoint)arg2 pointerVelocity:(struct CGPoint)arg3 hitTestContexts:(id)arg4 locationsInsideHitTestContexts:(id)arg5 withLookupGenerationID:(unsigned long long)arg6;
- (_Bool)_performDecelerationAnimationWithPointerParentEvent:(struct __IOHIDEvent *)arg1 previousEvent:(struct __IOHIDEvent *)arg2;
- (void)_performRecenteringForActiveFocusRegion;
- (void)_cancelDelayedMouseRecenteringTimer;
- (void)_restartDelayedMouseRecenteringTimer;
- (void)pointerEventStreamProvider:(id)arg1 didReceiveNonPointerEvent:(struct __IOHIDEvent *)arg2;
- (void)pointerEventStreamProvider:(id)arg1 didReceivePointerEvent:(struct __IOHIDEvent *)arg2;
- (void)mousePointerGlobalDevicePreferencesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 pointerEventStreamProvider:(id)arg2 pointerRenderingController:(id)arg3 systemPointerPortalRenderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

