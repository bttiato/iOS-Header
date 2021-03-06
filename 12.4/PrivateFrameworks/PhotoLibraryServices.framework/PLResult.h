//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface PLResult : NSObject
{
    id _result;
    NSError *_error;
}

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) id result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)resultWithError:(id *)arg1;
@property(readonly) _Bool isFailure;
@property(readonly) _Bool isSuccess;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end

