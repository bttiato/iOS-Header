//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MainViewControllerContainer.h"

@class CompactDayViewController, LargeDayViewController;

@interface DayViewContainerViewController : MainViewControllerContainer
{
    CompactDayViewController *_compactController;
    LargeDayViewController *_regularController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LargeDayViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactDayViewController *compactController; // @synthesize compactController=_compactController;
- (Class)childViewControllerClassForTraits:(id)arg1;
- (id)childViewControllerForRegularWidthRegularHeight;
- (id)childViewControllerForRegularWidthCompactHeight;
- (id)childViewControllerForCompactWidthRegularHeight;
- (id)childViewControllerForUnknownTraits;
- (id)currentChildViewController;

@end

