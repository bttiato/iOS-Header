//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCellWithSubtitleStyle.h>

@class UILongPressGestureRecognizer;

@interface PKSubtitleWithCopyableValueTableViewCell : PKTableViewCellWithSubtitleStyle
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _subtitleIsCopyable;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool subtitleIsCopyable; // @synthesize subtitleIsCopyable=_subtitleIsCopyable;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)_copyableText;
- (void)_handleLongPressGesture:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_updateLongPressGestureRecognizer;

@end

