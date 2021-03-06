//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol UIDebuggingInformationHierarchyLayoutDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout
{
    NSMutableArray *_indexPathsToDelete;
    id <UIDebuggingInformationHierarchyLayoutDelegate> _delegate;
    NSDictionary *_allAttributes;
    NSMutableDictionary *_allLineAttributes;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSMutableDictionary *allLineAttributes; // @synthesize allLineAttributes=_allLineAttributes;
@property(retain, nonatomic) NSDictionary *allAttributes; // @synthesize allAttributes=_allAttributes;
@property(nonatomic) __weak id <UIDebuggingInformationHierarchyLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)_recomputeAttributes;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;

@end

