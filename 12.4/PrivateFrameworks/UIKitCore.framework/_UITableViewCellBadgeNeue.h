//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadgeNeue : UIView
{
    _Bool _selected;
    UILabel *_badgeTextLabel;
}

@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)_sizeToFit;
- (double)minHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

