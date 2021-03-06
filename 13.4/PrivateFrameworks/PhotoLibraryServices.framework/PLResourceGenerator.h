//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLResourceGenerator : NSObject
{
}

+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3;
+ (id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2;
+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(_Bool)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(_Bool)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1;
+ (void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 remainingRecipes:(id)arg5 storedRecipes:(id)arg6 attemptedRecipes:(id)arg7 errorsEncountered:(id)arg8 progress:(id)arg9 completion:(CDUnknownBlockType)arg10;

@end

