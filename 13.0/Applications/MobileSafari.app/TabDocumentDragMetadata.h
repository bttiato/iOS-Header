//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TabDocument, UIView;
@protocol TabCollectionView;

@interface TabDocumentDragMetadata : NSObject
{
    UIView<TabCollectionView> *_sourceTabView;
    TabDocument *_tabDocument;
}

@property(readonly, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
@property(readonly, nonatomic) __weak UIView<TabCollectionView> *sourceTabView; // @synthesize sourceTabView=_sourceTabView;
- (void).cxx_destruct;
- (id)initWithTabDocument:(id)arg1 sourceTabView:(id)arg2;

@end

