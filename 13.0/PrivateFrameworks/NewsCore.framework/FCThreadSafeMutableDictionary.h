//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSDictionary, NSMutableDictionary;

@interface FCThreadSafeMutableDictionary : NSObject
{
    NFUnfairLock *_lock;
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *readOnlyDictionary;
@property(readonly, copy, nonatomic) NSArray *allValues;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) _Bool isEmpty;
@property(readonly) unsigned long long count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

