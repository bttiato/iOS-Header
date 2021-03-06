//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl
{
    id <RBSProcessIdentifier> _identifier;
}

+ (_Bool)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <RBSProcessIdentifier> identifier; // @synthesize identifier=_identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (_Bool)matchesProcess:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

