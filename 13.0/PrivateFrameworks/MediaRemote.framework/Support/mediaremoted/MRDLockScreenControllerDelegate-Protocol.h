//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDLockScreenController, _MRNowPlayingPlayerPathProtobuf;

@protocol MRDLockScreenControllerDelegate <NSObject>
- (void)lockScreenController:(MRDLockScreenController *)arg1 playerPathDidChange:(_MRNowPlayingPlayerPathProtobuf *)arg2;
- (void)lockScreenController:(MRDLockScreenController *)arg1 lockScreenWidgetVisibleDidChange:(_Bool)arg2;
- (void)lockScreenController:(MRDLockScreenController *)arg1 lockScreenWidgetActiveDidChange:(_Bool)arg2;
@end

