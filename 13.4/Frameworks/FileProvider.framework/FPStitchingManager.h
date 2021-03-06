//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface FPStitchingManager : NSObject
{
    NSHashTable *_stitchingSessions;
    NSMapTable *_bouncedItems;
}

+ (id)parentIdNameKeyForItem:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property(readonly, nonatomic) NSArray *allPlaceholderReplacementsIDs;
@property(readonly, nonatomic) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
- (void)removeBouncedItemsWithIDs:(id)arg1;
- (void)addBouncedItem:(id)arg1;
- (void)registerStitchingSession:(id)arg1;
- (id)init;

@end

