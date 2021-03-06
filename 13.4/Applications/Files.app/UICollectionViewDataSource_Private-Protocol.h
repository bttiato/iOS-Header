//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, UICollectionView;

@protocol UICollectionViewDataSource_Private <UICollectionViewDataSource>

@optional
- (void)_collectionView:(UICollectionView *)arg1 willPerformUpdates:(NSArray *)arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)_collectionView:(UICollectionView *)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (NSArray *)_sectionIndexTitlesForCollectionView:(UICollectionView *)arg1;
- (_Bool)_collectionView:(UICollectionView *)arg1 canEditItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
@end

