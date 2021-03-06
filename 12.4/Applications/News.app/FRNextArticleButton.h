//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class FRNextArticleButtonSection, NUAnimationQueue, UIImageView, UILabel;

@interface FRNextArticleButton : UIButton
{
    _Bool _isUpdating;
    FRNextArticleButtonSection *_section;
    UILabel *_sectionLabel;
    UIImageView *_arrowImageView;
    NUAnimationQueue *_animateQueue;
}

+ (id)_sectionLabelFont;
+ (void)initialize;
@property(readonly, nonatomic) NUAnimationQueue *animateQueue; // @synthesize animateQueue=_animateQueue;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *sectionLabel; // @synthesize sectionLabel=_sectionLabel;
@property(retain, nonatomic) FRNextArticleButtonSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)traitCollectionDidChange:(id)arg1;
- (id)sectionLabelFont;
- (double)arrowToTextMargin;
- (void)tintColorDidChange;
- (void)updateLabelsAnimated:(_Bool)arg1;
- (void)setSection:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setHidden:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

