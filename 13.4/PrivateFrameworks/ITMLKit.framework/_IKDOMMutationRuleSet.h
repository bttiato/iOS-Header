//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMMutationRuleSet : NSObject
{
    NSArray *_mutationRules;
    NSSet *_dependentPathStrings;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *dependentPathStrings; // @synthesize dependentPathStrings=_dependentPathStrings;
@property(readonly, copy, nonatomic) NSArray *mutationRules; // @synthesize mutationRules=_mutationRules;
- (id)initWithMutationRules:(id)arg1;

@end

