//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNObservableContractTerminationContext : NSObject
{
    NSArray *_callStack;
    unsigned long long _threadId;
}

+ (unsigned long long)currentThreadId;
+ (id)currentContext;
- (void).cxx_destruct;
@property(readonly) unsigned long long threadId; // @synthesize threadId=_threadId;
@property(readonly, copy) NSArray *callStack; // @synthesize callStack=_callStack;
- (id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2;

@end

