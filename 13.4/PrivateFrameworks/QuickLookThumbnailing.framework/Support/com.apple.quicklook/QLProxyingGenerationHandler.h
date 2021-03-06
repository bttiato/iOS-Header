//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLIncrementalThumbnailGenerationHandler-Protocol.h"

@class QLTGeneratorThumbnailRequest;

@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler>
{
    QLTGeneratorThumbnailRequest *_generatorRequest;
}

- (void).cxx_destruct;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8;
- (id)initWithGeneratorRequest:(id)arg1;

@end

