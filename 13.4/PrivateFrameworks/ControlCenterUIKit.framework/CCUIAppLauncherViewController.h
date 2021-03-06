//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class CCUIAppLauncherModule, SBFApplication, SCUIAssetProvider;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController
{
    SBFApplication *_application;
    SCUIAssetProvider *_assetProvider;
    CCUIAppLauncherModule *_module;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CCUIAppLauncherModule *module; // @synthesize module=_module;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (id)_menuItemForShortcutItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)leadingImageForMenuItem:(id)arg1;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;

@end

