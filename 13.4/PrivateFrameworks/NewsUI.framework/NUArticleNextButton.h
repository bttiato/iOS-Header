//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface NUArticleNextButton : UIButton
{
    UILabel *_nextTitleLabel;
    UIImageView *_nextArrowImageView;
}

+ (id)nextArrowImage;
+ (id)titleLabelFont;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *nextArrowImageView; // @synthesize nextArrowImageView=_nextArrowImageView;
@property(readonly, nonatomic) UILabel *nextTitleLabel; // @synthesize nextTitleLabel=_nextTitleLabel;
- (void)setNextLabelTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

