//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPTablePartSection.h"

#import "RAPPhotoCarouselViewModelDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, RAPCommentQuestion, RAPPhotoCarouselViewModel, RAPPhotoPickerController;

__attribute__((visibility("hidden")))
@interface RAPReportComposerPhotosSection : RAPTablePartSection <UIImagePickerControllerDelegate, UINavigationControllerDelegate, RAPPhotoCarouselViewModelDelegate>
{
    RAPCommentQuestion *_question;
    RAPPhotoPickerController *_picker;
    RAPPhotoCarouselViewModel *_carouselViewModel;
    CDUnknownBlockType _carouselCompletionHandler;
}

- (void).cxx_destruct;
- (void)photoCarouselViewModelRequestsNewImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAlertController;
- (void)_startPickingPhotoFromView:(id)arg1;
- (id)cellForRowAtIndex:(long long)arg1;
- (long long)_appearance;
- (long long)rowsCount;
- (id)headerTitle;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

