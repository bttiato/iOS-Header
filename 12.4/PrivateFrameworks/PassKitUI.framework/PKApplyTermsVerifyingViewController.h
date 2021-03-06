//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

@class CLInUseAssertion, NSString, PKApplyController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController
{
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    _Bool _isProcessingTerms;
    unsigned long long _featureIdentifier;
    CLInUseAssertion *_inUseAssertion;
}

- (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (void)_showActivationSpinner:(_Bool)arg1;
- (void)_processTerms;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;

@end

