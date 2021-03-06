//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface AudioSettingsTableViewHeaderFooterConfiguration : NSObject
{
    unsigned long long _configurationType;
    double _topToTitleBaselineDistance;
    double _titleBaselineToBottomDistance;
    UIFont *_titleFont;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic) double titleBaselineToBottomDistance; // @synthesize titleBaselineToBottomDistance=_titleBaselineToBottomDistance;
@property(readonly, nonatomic) double topToTitleBaselineDistance; // @synthesize topToTitleBaselineDistance=_topToTitleBaselineDistance;
- (void)_reloadConfiguration;
- (void)_configurationNeedsReload:(id)arg1;
- (id)initWithConfigurationType:(unsigned long long)arg1;

@end

