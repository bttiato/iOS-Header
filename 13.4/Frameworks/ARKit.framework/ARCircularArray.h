//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet;

@interface ARCircularArray : NSObject
{
    NSMutableArray *_objectsArray;
    NSMutableSet *_objectsSet;
    long long _latestIndex;
    long long _capacity;
}

- (void).cxx_destruct;
- (_Bool)contains:(id)arg1;
- (long long)count;
- (id)peekLatest;
- (id)add:(id)arg1;
@property(readonly) NSArray *contents;
- (id)initWithCapacity:(long long)arg1;

@end

