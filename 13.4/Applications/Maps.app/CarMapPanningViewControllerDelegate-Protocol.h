//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PassThroughViewControllerDelegate-Protocol.h"

@class CarMapPanningViewController;

@protocol CarMapPanningViewControllerDelegate <PassThroughViewControllerDelegate>
- (void)carMapPanningViewControllerDidTapDone:(CarMapPanningViewController *)arg1;
- (void)carMapPanningViewControllerDidPan:(CarMapPanningViewController *)arg1 inDirection:(long long)arg2;
@end

