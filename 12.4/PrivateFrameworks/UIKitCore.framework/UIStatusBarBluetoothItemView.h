//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView
{
    _Bool _connected;
    _Bool _shouldAnimateConnection;
}

- (id)accessibilityHUDRepresentation;
- (double)alphaForConnected:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1;
- (id)contentsImage;
- (void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)performPendedActions;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

