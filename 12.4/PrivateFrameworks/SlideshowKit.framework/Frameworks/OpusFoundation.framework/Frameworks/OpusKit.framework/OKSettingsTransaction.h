//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface OKSettingsTransaction : NSObject
{
    NSMutableArray *_items;
    NSMutableDictionary *_itemsByKey;
}

@property(readonly, retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)mergeWithTransaction:(id)arg1;
- (void)registerTransactionItem:(id)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

