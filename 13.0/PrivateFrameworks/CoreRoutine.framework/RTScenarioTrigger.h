//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTScenarioTrigger : NSObject <NSSecureCoding>
{
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)scenarioTriggerSettledStateToString:(unsigned long long)arg1;
+ (id)scenarioTriggerTypeToString:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

