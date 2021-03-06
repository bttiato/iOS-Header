//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UICalloutBar, UIMenuController;

@interface AXQSMenuHelper : NSObject
{
    _Bool _showingLanguageChoices;
    NSArray *_thirdPartyMenuItems;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *thirdPartyMenuItems; // @synthesize thirdPartyMenuItems=_thirdPartyMenuItems;
@property(nonatomic, getter=isShowingLanguageChoices) _Bool showingLanguageChoices; // @synthesize showingLanguageChoices=_showingLanguageChoices;
- (id)menuItemForCalloutBarButton:(id)arg1;
- (void)saveThirdPartyMenuItemsIfNeeded:(id)arg1;
- (void)restoreMenu;
@property(readonly, nonatomic) UICalloutBar *calloutBar;
@property(readonly, nonatomic) UIMenuController *menuController;

@end

