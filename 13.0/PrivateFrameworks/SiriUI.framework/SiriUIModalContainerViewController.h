//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController
{
    UIViewController *_contentViewController;
    id <SiriUIModalContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIModalContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (_Bool)_canShowWhileLocked;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithContentViewController:(id)arg1;

@end

