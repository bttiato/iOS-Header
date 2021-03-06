//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIViewController;
@protocol TVMediaController;

@protocol TVMediaControllerDelegate <NSObject>

@optional
- (void)mediaController:(UIViewController<TVMediaController> *)arg1 shouldShowStill:(inout _Bool *)arg2 afterStoppingForReason:(long long)arg3;
- (void)stateDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)didFinishPlaybackForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)coverImageDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
@end

