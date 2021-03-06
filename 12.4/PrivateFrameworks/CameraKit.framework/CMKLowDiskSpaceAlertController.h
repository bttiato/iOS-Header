//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol CMKLowDiskSpaceAlertControllerDelegate;

@interface CMKLowDiskSpaceAlertController : UIAlertController
{
    _Bool _showsSettingsButton;
    id <CMKLowDiskSpaceAlertControllerDelegate> _delegate;
}

+ (void)showUsageSettings;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 showSettingsButton:(_Bool)arg3;
@property(nonatomic) __weak id <CMKLowDiskSpaceAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showsSettingsButton; // @synthesize showsSettingsButton=_showsSettingsButton;
- (void).cxx_destruct;
- (void)show;

@end

