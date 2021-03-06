//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UICollectionViewDragDelegate-Protocol.h"

@class NSIndexPath, UICollectionView;
@protocol UIDragSession;

@protocol UICollectionViewDragDelegate_Private <UICollectionViewDragDelegate>

@optional
- (_Bool)_collectionView:(UICollectionView *)arg1 dragSessionSupportsSystemDrag:(id <UIDragSession>)arg2;
- (long long)_collectionView:(UICollectionView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 prefersFullSizePreviewsForDragSession:(id <UIDragSession>)arg2;
@end

