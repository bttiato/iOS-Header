//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTBedtimeDNDStateMachineState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineOnState : MTBedtimeDNDStateMachineState
{
    NSDate *_bedtimeDNDEndDate;
}

@property(readonly, nonatomic) NSDate *bedtimeDNDEndDate; // @synthesize bedtimeDNDEndDate=_bedtimeDNDEndDate;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithBedtimeDNDEndDate:(id)arg1 stateMachine:(id)arg2;

@end

