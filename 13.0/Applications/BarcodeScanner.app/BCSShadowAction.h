//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCSActionPrivate-Protocol.h"

@class LSAppLink, LSApplicationProxy, NSArray, NSDictionary, NSString, NSURL;
@protocol BCSAction, BCSActionDelegate;

@interface BCSShadowAction : NSObject <BCSActionPrivate>
{
    LSApplicationProxy *_applicationProxy;
    _Bool isInvalidDataAction;
    _Bool isWiFiAction;
    id <BCSActionDelegate> delegate;
    NSString *extraPreviewText;
    NSString *localizedActionDescription;
    NSArray *appLinks;
    NSURL *_url;
    LSAppLink *_appLink;
    id <BCSAction> _originalAction;
}

@property(readonly, nonatomic) id <BCSAction> originalAction; // @synthesize originalAction=_originalAction;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSArray *appLinks; // @synthesize appLinks;
@property(readonly, nonatomic) _Bool isWiFiAction; // @synthesize isWiFiAction;
@property(readonly, nonatomic) _Bool isInvalidDataAction; // @synthesize isInvalidDataAction;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription; // @synthesize localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText;
@property(nonatomic) __weak id <BCSActionDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
- (void)showActionPicker;
- (void)performDefaultAction;
- (void)performAction;
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened;
- (id)initWithURL:(id)arg1 appLink:(id)arg2 originalAction:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

