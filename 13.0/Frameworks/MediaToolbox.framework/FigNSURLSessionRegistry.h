//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSessionRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (void)dealloc;
- (id)init;
- (void)releaseSession:(id)arg1;
- (void)_checkForDoom:(id)arg1;
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id *)arg3 outAssertion:(struct FigOpaqueAssertion **)arg4;

@end

