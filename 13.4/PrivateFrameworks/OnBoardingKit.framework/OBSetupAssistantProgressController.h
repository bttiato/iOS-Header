//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class UILabel, UIProgressView;

@interface OBSetupAssistantProgressController : OBWelcomeController
{
    UIProgressView *_progressBar;
    UILabel *_progressLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
- (id)_progressFont;
- (void)setProgress:(double)arg1;
- (void)setProgressText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

