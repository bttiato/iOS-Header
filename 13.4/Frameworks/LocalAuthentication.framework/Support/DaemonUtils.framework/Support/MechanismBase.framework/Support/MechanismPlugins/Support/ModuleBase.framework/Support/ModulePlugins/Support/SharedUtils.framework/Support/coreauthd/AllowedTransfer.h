//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Caller, NSData;

@interface AllowedTransfer : NSObject
{
    Caller *_sender;
    NSData *_serverToken;
    NSData *_receiverAuditTokenData;
}

- (void).cxx_destruct;
- (_Bool)isReceiver:(id)arg1 allowedToConnectWithServerToken:(id)arg2 senderAuditTokenData:(id)arg3;
- (id)description;
- (id)initWithSender:(id)arg1;
- (id)initWithServerToken:(id)arg1 sender:(id)arg2;
- (id)initWithReceiverAuditTokenData:(id)arg1 sender:(id)arg2;

@end

