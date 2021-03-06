//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase
{
    _Bool _bouncing;
    UIView *_navigationView;
    UIView *_todayView;
}

@property(nonatomic, getter=isBouncing) _Bool bouncing; // @synthesize bouncing=_bouncing;
@property(nonatomic) __weak UIView *todayView; // @synthesize todayView=_todayView;
@property(nonatomic) __weak UIView *navigationView; // @synthesize navigationView=_navigationView;
- (void).cxx_destruct;
- (void)_resetContentAfterEdgeBounce;
- (void)_adjustContentForEdgeBounce;
- (void)layoutSubviews;

@end

