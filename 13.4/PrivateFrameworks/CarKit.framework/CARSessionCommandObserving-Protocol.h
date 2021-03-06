//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarKit/NSObject-Protocol.h>

@class CARScreenInfo, CARScreenViewArea, CARSession, NSDictionary, NSString, NSURL;

@protocol CARSessionCommandObserving <NSObject>

@optional
- (void)session:(CARSession *)arg1 receivedUnhandledRemoteEvent:(NSString *)arg2 withPayload:(NSDictionary *)arg3;
- (void)session:(CARSession *)arg1 stopUIForScreenInfo:(CARScreenInfo *)arg2;
- (void)session:(CARSession *)arg1 showUIForScreenInfo:(CARScreenInfo *)arg2 withURL:(NSURL *)arg3;
- (void)session:(CARSession *)arg1 didSetViewArea:(CARScreenViewArea *)arg2 forScreenID:(NSString *)arg3 withDuration:(double)arg4 transitionControlType:(unsigned long long)arg5;
- (void)session:(CARSession *)arg1 handleSiriRequestEvent:(long long)arg2 withPayload:(NSDictionary *)arg3;
- (void)session:(CARSession *)arg1 handleSiriRequestEvent:(long long)arg2;
- (void)session:(CARSession *)arg1 openURL:(NSURL *)arg2;
@end

