//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <PassKitUI/PKAppearanceObject-Protocol.h>

@class NSString;

@interface UITextView (PKAppearanceAdditions) <PKAppearanceObject>
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

