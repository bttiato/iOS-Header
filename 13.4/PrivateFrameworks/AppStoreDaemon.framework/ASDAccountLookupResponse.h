//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSError, NSNumber;

@interface ASDAccountLookupResponse : ASDRequestResponse
{
    _Bool _askToBuyEnabled;
    NSNumber *_accountID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(copy) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSError *error; // @dynamic error;

@end

