//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class BSProcessHandle, NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    BSProcessHandle *_origin;
    NSURL *_url;
    NSArray *_applications;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)deactivateForButton;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithURL:(id)arg1 applications:(id)arg2 origin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

