//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary;

@interface SXBackgroundControl : UIControl
{
    NSMutableDictionary *_backgroundColors;
}

@property(retain, nonatomic) NSMutableDictionary *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
- (void).cxx_destruct;
- (id)seperatedControlStatesForControlState:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateBackgroundColor;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

