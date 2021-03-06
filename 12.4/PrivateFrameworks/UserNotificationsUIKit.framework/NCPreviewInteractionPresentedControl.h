//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class MTMaterialView, NCPreviewInteractionPresentedContentView, NSString;

@interface NCPreviewInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_title;
    NCPreviewInteractionPresentedContentView *_contentView;
    long long _materialRecipe;
    unsigned long long _backgroundMaterialOptions;
    unsigned long long _overlayMaterialOptions;
    MTMaterialView *_backgroundMaterialView;
    MTMaterialView *_overlayMaterialView;
}

@property(readonly, nonatomic, getter=_overlayMaterialView) MTMaterialView *overlayMaterialView; // @synthesize overlayMaterialView=_overlayMaterialView;
@property(readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(readonly, nonatomic, getter=_overlayMaterialOptions) unsigned long long overlayMaterialOptions; // @synthesize overlayMaterialOptions=_overlayMaterialOptions;
@property(readonly, nonatomic, getter=_backgroundMaterialOptions) unsigned long long backgroundMaterialOptions; // @synthesize backgroundMaterialOptions=_backgroundMaterialOptions;
@property(readonly, nonatomic, getter=_materialRecipe) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(readonly, nonatomic, getter=_contentView) NCPreviewInteractionPresentedContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy, nonatomic, getter=_title) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (void)_configureContentViewIfNecessaryWithTitle:(id)arg1;
- (void)_configureMaterialViewsIfNecessary;
- (id)_newMaterialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (_Bool)adjustForContentSizeCategoryChange;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2 backgroundMaterialOptions:(unsigned long long)arg3 overlayMaterialOptions:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

