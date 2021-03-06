//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/DevicePINControllerDelegate-Protocol.h>
#import <PassKitUI/PKNewDevicePasscodeViewControllerDelegate-Protocol.h>

@class NSString, PKPaymentProvisioningController, UINavigationController;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate>
{
    long long _context;
    PKPaymentProvisioningController *_provisioningController;
    UINavigationController *_navigationController;
    CDUnknownBlockType _completionHandler;
    long long _presentedViewControllerCount;
    _Bool _upgradeRequiredToAddNewPass;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool upgradeRequiredToAddNewPass; // @synthesize upgradeRequiredToAddNewPass=_upgradeRequiredToAddNewPass;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
- (_Bool)_isWatchTarget;
- (void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)arg1;
- (void)_showCurrentDevicePasscodeViewController;
- (void)_showChangePasscodeFlow;
- (void)_showPasscodeUpgradeExplanation;
- (void)_completeWithShouldContinue:(_Bool)arg1 error:(id)arg2;
- (void)newDevicePasscodeViewController:(id)arg1 didFinishSettingPasscode:(_Bool)arg2 withError:(id)arg3;
- (void)didAcceptEnteredPIN:(id)arg1;
@property(readonly, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
- (void)endedShowingViewController;
- (void)beginShowingViewController;
- (void)dismissPasscodeUpgradeFlow;
- (void)showPasscodeUpgradeFlow;
- (void)dealloc;
- (id)initWithPaymentProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 navigationController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

