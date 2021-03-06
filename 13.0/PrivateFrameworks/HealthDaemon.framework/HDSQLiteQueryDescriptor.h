//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying>
{
    _Bool _returnsDistinctEntities;
    Class _entityClass;
    long long _limitCount;
    NSArray *_orderingTerms;
    HDSQLitePredicate *_predicate;
    NSString *_groupBy;
    NSArray *_preferredEntityJoinOrder;
}

@property(copy, nonatomic) NSArray *preferredEntityJoinOrder; // @synthesize preferredEntityJoinOrder=_preferredEntityJoinOrder;
@property(copy, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
@property(copy, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) NSArray *orderingTerms; // @synthesize orderingTerms=_orderingTerms;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (id)_SQLForDeleteWithError:(id *)arg1;
- (id)_joinClauseForProperties:(id)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2;
- (CDUnknownBlockType)_joinClauseComparatorWithPreferredEntityOrder:(id)arg1;
- (id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3;
- (id)_SQLForSelectWithProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

