//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDosidoAnimator.h"

@class SBStarkScreenController, UIView;

@interface SBCarDosidoAnimator : SBDosidoAnimator
{
    SBStarkScreenController *_screenController;
    UIView *_toContainerView;
    UIView *_fromDimmingView;
}

- (void).cxx_destruct;
- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareDosido;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2 starkScreenController:(id)arg3;

@end

