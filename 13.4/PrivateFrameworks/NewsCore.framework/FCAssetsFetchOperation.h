//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation
{
    CDUnknownBlockType _progressHandler;
    NSArray *_assetHandles;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *assetHandles; // @synthesize assetHandles=_assetHandles;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)_finish;
- (void)performOperation;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;

@end

