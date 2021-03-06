//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

#import <Photos/PHAssetResourceRequestDelegate-Protocol.h>

@class NSMutableData, NSString, PHAssetResource, PHAssetResourceRequest, PHMediaResourceResult;
@protocol PHMediaRequestDelegate;

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate>
{
    _Bool _networkAccessAllowed;
    _Bool _synchronous;
    PHAssetResourceRequest *_internalRequest;
    NSMutableData *_compositeData;
    PHMediaResourceResult *_dataResult;
    _Bool _wantsURLOnly;
    id <PHMediaRequestDelegate> _delegate;
    CDUnknownBlockType _progressHandler;
    PHAssetResource *_resource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsURLOnly; // @synthesize wantsURLOnly=_wantsURLOnly;
@property(readonly, nonatomic) PHAssetResource *resource; // @synthesize resource=_resource;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) __weak id <PHMediaRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)assetResourceRequestDidFinish:(id)arg1;
- (void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (void)_receiveAssetResourceDataPart:(id)arg1;
- (void)_reportProgress:(double)arg1;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)startRequest;
- (_Bool)isSynchronous;
@property(readonly, nonatomic) long long resourceType;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 assetResource:(id)arg6 networkAccessAllowed:(_Bool)arg7 wantsURLOnly:(_Bool)arg8 synchronous:(_Bool)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

