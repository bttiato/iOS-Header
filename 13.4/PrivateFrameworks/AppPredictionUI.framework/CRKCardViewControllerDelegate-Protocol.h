//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppPredictionUI/CRCommandHandling-Protocol.h>
#import <AppPredictionUI/CRFeedbackListener-Protocol.h>

@class CRBeganEditingCommand, CRKCardSectionViewController, CRNextCardCommand, CRPunchoutCommand, CRRequestUserConfirmationCommand, INIntent, UIViewController;
@protocol CRCard, CRKCardSectionViewProviderManaging, CRKCardViewControlling, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener, CRCommandHandling>

@optional
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestCardSectionViewSourceForCard:(id <CRCard>)arg2 reply:(void (^)(id <CRKCardSectionViewSourcing>, NSError *))arg3;
- (_Bool)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id <CRKCardSectionViewProviderManaging>)arg2;
- (_Bool)performBeganEditingCommand:(CRBeganEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performRequestUserConfirmationCommand:(CRRequestUserConfirmationCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (unsigned long long)navigationIndexOfCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (_Bool)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (id <CRCard>)baseCardForCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (struct CGSize)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(UIViewController<CRKCardViewControlling> *)arg1;
- (void)cardViewControllerDidLoad:(UIViewController<CRKCardViewControlling> *)arg1;
@end

