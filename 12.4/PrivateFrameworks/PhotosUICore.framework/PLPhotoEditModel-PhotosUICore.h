//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoEditModel.h>

@interface PLPhotoEditModel (PhotosUICore)
- (id)px_clearedDepthCopyIncludingGeometry:(_Bool)arg1;
- (id)px_clearedDepthCopy;
- (_Bool)px_hasDepthEdits;
- (_Bool)px_isAdjustedBeyondDepthAndStatistics;
- (id)px_photoEditModelByApplyingAssetVariation:(unsigned int)arg1 withRecipe:(id)arg2;
@property(readonly, nonatomic) unsigned int px_assetVariation;
@end

