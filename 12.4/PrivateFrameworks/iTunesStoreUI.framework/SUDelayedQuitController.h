//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SUDelayedQuitController : NSObject
{
    long long _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (void)endDelayingTerminate;
+ (void)beginDelayingTerminate;
+ (_Bool)isDelayingTerminate;
+ (id)checkedInViewControllerOfClass:(Class)arg1;
+ (_Bool)viewControllerIsLongLived:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (id)sharedInstance;
- (_Bool)_viewControllerIsLongLived:(id)arg1;
- (_Bool)_isDelayingTerminate;
- (void)_endDelayingTerminate;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)_beginDelayingTerminate;
- (void)dealloc;

@end

