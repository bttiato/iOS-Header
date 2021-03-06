//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation
{
    NSNumber *_accountID;
    unsigned long long _matchStatus;
    NSString *_userAgent;
}

- (id)_newMatchStatusOperationWithURLBag:(id)arg1;
- (void)run;
@property(copy) NSString *userAgent;
@property(readonly) unsigned long long matchStatus;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end

