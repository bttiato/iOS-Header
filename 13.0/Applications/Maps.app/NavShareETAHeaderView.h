//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface NavShareETAHeaderView : MapsThemeView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)_effectiveTraitCollection;
- (id)_maximumContentSizeCategory;
- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

