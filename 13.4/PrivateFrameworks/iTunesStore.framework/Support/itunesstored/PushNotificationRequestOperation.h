//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSURLConnectionResponse, SSVPushNotificationParameters;

@interface PushNotificationRequestOperation : ISOperation
{
    SSVPushNotificationParameters *_parameters;
    SSURLConnectionResponse *_response;
    NSString *_userAgent;
}

- (_Bool)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id *)arg3;
- (void)run;
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
- (void)dealloc;
- (id)initWithPushNotificationParameters:(id)arg1;

@end

