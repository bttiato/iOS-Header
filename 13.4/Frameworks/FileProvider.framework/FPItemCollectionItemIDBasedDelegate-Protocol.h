//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPItemCollectionMinimalDelegate-Protocol.h>

@class FPItemCollection, NSArray, NSDictionary;

@protocol FPItemCollectionItemIDBasedDelegate <FPItemCollectionMinimalDelegate>
- (void)collection:(FPItemCollection *)arg1 didUpdateItems:(NSArray *)arg2 replaceItemsByFormerID:(NSDictionary *)arg3 deleteItemsWithIDs:(NSArray *)arg4;
@end

