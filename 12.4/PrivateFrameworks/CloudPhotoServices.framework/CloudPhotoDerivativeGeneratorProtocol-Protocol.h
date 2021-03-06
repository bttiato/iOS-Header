//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSProgress, NSURL;

@protocol CloudPhotoDerivativeGeneratorProtocol
- (NSProgress *)remoteGenerateGIFForVideoAtURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 reply:(void (^)(NSURL *, NSError *))arg3;
- (NSProgress *)remoteSinglePassTranscodeVideoAtURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3 reply:(void (^)(NSURL *, NSError *))arg4;
- (NSProgress *)remoteTranscodeVideoAtURL:(NSURL *)arg1 withAdjustmentsPropertyList:(NSDictionary *)arg2 destinationURL:(NSURL *)arg3 options:(NSDictionary *)arg4 reply:(void (^)(NSURL *, NSError *))arg5;
- (void)remoteGeneratePosterFrameForVideoAtURL:(NSURL *)arg1 maximumPixelCount:(long long)arg2 destinationURL:(NSURL *)arg3 reply:(void (^)(NSURL *, NSError *))arg4;
- (void)remoteResizeImageAtURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3 reply:(void (^)(NSURL *, NSError *))arg4;
- (void)remoteTerminateWithReply:(void (^)(long long))arg1;
- (void)remoteStatusWithReply:(void (^)(long long))arg1;
@end

