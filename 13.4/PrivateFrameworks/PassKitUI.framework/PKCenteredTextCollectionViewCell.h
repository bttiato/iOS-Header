//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UILabel;

@interface PKCenteredTextCollectionViewCell : PKDashboardCollectionViewCell
{
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)resetFonts;
- (id)initWithFrame:(struct CGRect)arg1;

@end

