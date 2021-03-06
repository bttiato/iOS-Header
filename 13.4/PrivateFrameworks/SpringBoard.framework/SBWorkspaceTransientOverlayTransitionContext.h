//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext
{
    _Bool _animated;
    _Bool _shouldDismissSiriUponPresentation;
    _Bool _shouldDismissSwitcherUponPresentation;
    SBTransientOverlayPresentationManager *_presentationManager;
    SBWorkspaceTransientOverlay *_transientOverlay;
    long long _transitionType;
}

- (void).cxx_destruct;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay; // @synthesize transientOverlay=_transientOverlay;
@property(retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(nonatomic) _Bool shouldDismissSwitcherUponPresentation; // @synthesize shouldDismissSwitcherUponPresentation=_shouldDismissSwitcherUponPresentation;
@property(nonatomic) _Bool shouldDismissSiriUponPresentation; // @synthesize shouldDismissSiriUponPresentation=_shouldDismissSiriUponPresentation;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;

@end

