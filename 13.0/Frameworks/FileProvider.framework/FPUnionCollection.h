//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection
{
    NSArray *_collections;
}

@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
- (void).cxx_destruct;
- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)initWithCollections:(id)arg1;

@end

