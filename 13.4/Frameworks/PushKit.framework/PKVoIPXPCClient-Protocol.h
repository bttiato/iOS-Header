//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary;

@protocol PKVoIPXPCClient
- (void)voipPayloadReceived:(NSDictionary *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)voipPayloadReceived:(NSDictionary *)arg1 mustPostCall:(_Bool)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)voipRegistrationFailed;
@end

