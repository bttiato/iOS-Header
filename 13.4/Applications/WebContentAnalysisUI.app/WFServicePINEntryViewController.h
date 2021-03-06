//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/DevicePINController.h>

@class NSObject;

@interface WFServicePINEntryViewController : DevicePINController
{
    NSObject *_delegate;
}

+ (_Bool)settingEnabled;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject *delegate; // @synthesize delegate=_delegate;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)defaultsID;
- (_Bool)simplePIN;
- (_Bool)isNumericPIN;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)requiresKeyboard;
- (void)setPIN:(id)arg1;
- (_Bool)validatePIN:(id)arg1;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (void)performActionAfterPINEntry;
- (id)stringsTable;
- (void)setPane:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

