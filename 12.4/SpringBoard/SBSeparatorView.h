//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SBSeparatorView : UIView
{
    UIView *_nubView;
    _Bool _nubHighlighted;
}

@property(nonatomic, getter=isNubHighlighted) _Bool nubHighlighted; // @synthesize nubHighlighted=_nubHighlighted;
- (void).cxx_destruct;
- (void)_updateNubViewFrame;
@property(readonly, nonatomic) struct CGRect nubRect;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

