//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface PopUpPresentationController : UIPresentationController
{
    _Bool _blurBackground;
    UIView *_dimmingView;
}

@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool blurBackground; // @synthesize blurBackground=_blurBackground;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;

@end

