//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWebSelectionView.h>

@class UIView, UIWebSelectionHandle;
@protocol UIWKInteractionViewProtocol;

__attribute__((visibility("hidden")))
@interface UIWKSelectionView : UIWebSelectionView
{
    UIView<UIWKInteractionViewProtocol> *_interactionView;
    UIWebSelectionHandle *_handle;
    _Bool _thresholdIsValid;
    _Bool _usingGesture;
    struct CGPoint _lastTouchPoint;
}

- (void)onAfterScrollOrZoomShowingSelection:(_Bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(_Bool)arg1;
- (void)clearSelection;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationEndedWithPoint:(struct CGPoint)arg1;
- (void)showRangeSelection;
- (void)showControls;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint)arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint)arg1;
- (void)resetSelection;
- (void)updateFrameAndHandlesWithAnimation:(_Bool)arg1;
- (struct CGRect)visibleRect;
- (id)scroller;
- (void)updateRangedSelectionData;
- (_Bool)isHorizontalWritingMode;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChanged;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (id)selectionRects;
- (struct CGRect)fetchSelectionBoundingRect;
- (struct CGRect)selectionBoundingRect;
- (struct CGRect)unobscuredRect;
- (void)showCopyCalloutWithAnimation:(_Bool)arg1;
- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (id)tintView;
- (id)initWithView:(id)arg1;

@end

