//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKFidgetResolver : NSObject
{
    double _fidgetThreshold;
    id *_values;
    double *_times;
    unsigned long long _head;
}

@property(nonatomic) double fidgetThreshold; // @synthesize fidgetThreshold=_fidgetThreshold;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;
- (void)p_advanceHead;
- (void)pushValue:(id)arg1 withTime:(double)arg2;
- (void)pushValue:(id)arg1;
@property(readonly, nonatomic) id nonFidgetValue;
- (void)dealloc;
- (id)init;

@end

