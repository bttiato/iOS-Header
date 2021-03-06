//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalAnimationSettings, SBFAnimationSettings, SBFWakeAnimationSettings;

@interface SBSystemAnimationSettings : PTSettings
{
    float _assistantAnimationDuration;
    float _assistantDismissAnimationDurationOverApp;
    float _spotlightNoninteractiveAnimationDuration;
    SBFAnimationSettings *_slideoverDosidoAnimationSettings;
    SBEntityRemovalAnimationSettings *_entityRemovalAnimationSettings;
    SBFWakeAnimationSettings *_wakeAnimationSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFWakeAnimationSettings *wakeAnimationSettings; // @synthesize wakeAnimationSettings=_wakeAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalAnimationSettings *entityRemovalAnimationSettings; // @synthesize entityRemovalAnimationSettings=_entityRemovalAnimationSettings;
@property(retain, nonatomic) SBFAnimationSettings *slideoverDosidoAnimationSettings; // @synthesize slideoverDosidoAnimationSettings=_slideoverDosidoAnimationSettings;
@property(nonatomic) float spotlightNoninteractiveAnimationDuration; // @synthesize spotlightNoninteractiveAnimationDuration=_spotlightNoninteractiveAnimationDuration;
@property(nonatomic) float assistantDismissAnimationDurationOverApp; // @synthesize assistantDismissAnimationDurationOverApp=_assistantDismissAnimationDurationOverApp;
@property(nonatomic) float assistantAnimationDuration; // @synthesize assistantAnimationDuration=_assistantAnimationDuration;
- (void)setDefaultValues;

@end

