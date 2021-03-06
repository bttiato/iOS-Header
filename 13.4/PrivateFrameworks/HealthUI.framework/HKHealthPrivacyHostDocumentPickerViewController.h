//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate, HKHealthPrivacyServiceRemoteDocumentPickerViewController;

@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
@property(readonly, nonatomic) id <HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy;
- (void)didFinishWithError:(id)arg1;
- (void)setPromptSession:(id)arg1;

@end

