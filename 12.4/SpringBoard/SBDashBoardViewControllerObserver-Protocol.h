//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDashBoardBehavior, SBDashBoardViewController;

@protocol SBDashBoardViewControllerObserver <NSObject>

@optional
- (void)dashBoardControllerDidDismissPasscodeLockView:(SBDashBoardViewController *)arg1;
- (void)dashBoardControllerDidPresentModalView:(SBDashBoardViewController *)arg1;
- (void)dashBoardControllerExternalLockProviderStateDidChange:(SBDashBoardViewController *)arg1;
- (void)dashBoardController:(SBDashBoardViewController *)arg1 didChangeActiveBehavior:(SBDashBoardBehavior *)arg2;
@end

