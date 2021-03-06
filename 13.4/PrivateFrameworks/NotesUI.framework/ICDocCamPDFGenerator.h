//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDocCamPDFGenerator : NSObject
{
}

+ (void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3;
+ (id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id *)arg4;
+ (id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id *)arg3;
+ (void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(id)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)pdfURLForAttachment:(id)arg1;
+ (void)deleteAllDocCamPasswordProtectedPDFs;
+ (void)deleteAllDocCamPDFs;
+ (void)deletePDFForAttachmentIfExists:(id)arg1;
+ (void)deletePDFFolderIfExistsForAttachment:(id)arg1;
+ (void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1;
+ (id)versionPDFPathForAttachment:(id)arg1;
+ (id)versionFolderPathForAttachment:(id)arg1;
+ (id)folderPathForAttachment:(id)arg1;
+ (id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(_Bool)arg2;
+ (id)rootPDFFolderPathForPWAttachments;
+ (id)rootPDFFolderPath;
+ (id)fileManager;
+ (id)fileQueue;
+ (id)syncGeneratorQueue;

@end

