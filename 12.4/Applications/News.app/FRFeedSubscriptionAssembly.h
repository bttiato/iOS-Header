//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAssembly-Protocol.h"

@class NSString, UIWindow;

@interface FRFeedSubscriptionAssembly : NSObject <NFAssembly>
{
    UIWindow *_window;
}

@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

