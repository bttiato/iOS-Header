//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface Queue : NSObject
{
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
}

+ (id)queueWithObjects:(id)arg1;
+ (id)queueWithArray:(id)arg1;
+ (id)queue;
- (void).cxx_destruct;
- (id)dequeue;
- (void)reverseInputsIntoOutputs;
- (void)enqueueObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

