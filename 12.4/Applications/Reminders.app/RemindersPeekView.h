//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RemindersCheckboxViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class EKReminder, NSString, RemindersCheckboxView, UIButton, UIColor, UILabel;
@protocol RemindersPeekViewDelegate;

@interface RemindersPeekView : UIView <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_deadlineLabel;
    UILabel *_locationLabel;
    UILabel *_notesLabel;
    UILabel *_calendarLabel;
    UIView *_contentView;
    RemindersCheckboxView *_checkboxView;
    UIButton *_actionButton;
    UIColor *_calendarColor;
    EKReminder *_reminder;
    double _width;
    id <RemindersPeekViewDelegate> _delegate;
}

@property id <RemindersPeekViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapRecognized:(id)arg1;
- (void)_actionTapped;
- (void)checkboxTapped;
- (void)updateTitle;
- (id)priorityImage;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setupConstraints;
- (void)setupMaxLayoutWidth;
- (id)actionButtonWithImage:(id)arg1;
- (id)imageForActionURL:(id)arg1 userActivity:(id)arg2;
- (void)setupAction;
- (void)setCalendar:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setDeadline:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)replaceFontInString:(id)arg1 withFont:(id)arg2;
- (id)detailsFont;
- (id)titleFont;
- (void)setUseLetterpressStyle:(_Bool)arg1;
- (id)initWithReminder:(id)arg1 titleString:(id)arg2 deadlineString:(id)arg3 locationString:(id)arg4 notesString:(id)arg5 calendarString:(id)arg6 calendarColor:(id)arg7 width:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

