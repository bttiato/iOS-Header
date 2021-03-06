//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/SBKResponse.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKPushValueResponse : SBKResponse
{
    NSString *_domainVersion;
    NSData *_conflictItemValuePayload;
    NSString *_conflictItemKey;
    NSString *_conflictItemVersionAnchor;
}

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *conflictItemVersionAnchor; // @synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor;
@property(readonly) NSString *conflictItemKey; // @synthesize conflictItemKey=_conflictItemKey;
@property(readonly) NSData *conflictItemValuePayload; // @synthesize conflictItemValuePayload=_conflictItemValuePayload;
@property(readonly) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;

@end

