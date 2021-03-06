//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHTTPURLResponse, NSNumber, NSString;

@interface SSAuthenticationResponse : NSObject
{
    NSDictionary *_responseDictionary;
    long long _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

- (void).cxx_destruct;
@property long long URLBagType; // @synthesize URLBagType=_urlBagType;
@property(readonly) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (long long)_responseTypeForStatusValue:(long long)arg1;
- (long long)_responseTypeForFailureType:(long long)arg1;
- (long long)_responseTypeForErrorNumber:(long long)arg1;
@property(readonly) NSString *userMessage;
@property(readonly) NSHTTPURLResponse *URLResponse;
@property(readonly) NSString *token;
@property(readonly) NSString *storeFrontIdentifier;
@property(readonly) long long responseType;
- (id)newAccount;
@property(readonly, getter=isNewCustomer) _Bool newCustomer;
@property(readonly, getter=isManagedStudent) _Bool managedStudent;
@property(readonly) NSNumber *failureType;
@property(readonly) long long enabledServiceTypes;
@property(readonly) NSString *creditsString;
@property(readonly) long long availableServiceTypes;
- (id)altDSID;
@property(readonly) NSNumber *accountUniqueIdentifier;
@property(readonly) NSString *accountName;
@property(readonly) long long accountKind;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;

@end

