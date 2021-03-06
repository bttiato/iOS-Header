//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

+ (id)sharedSavingWorkerQueue;
- (void)_completeSavingForAssets:(id)arg1 count:(long long)arg2;
- (void)performUserInteractionTask;
- (_Bool)isCancellable;
- (id)createActionProgress;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end

