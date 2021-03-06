//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

#import <DataDetectorsUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>
{
}

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)viewController;
- (_Bool)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (int)interactionType;
- (_Bool)prefersOpenToCreate;
- (id)icon;
- (id)localizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

