//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent
{
    NSString *_description;
    NSString *_reason;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *reason; // @synthesize reason=_reason;
- (id)description;
- (id)initWithReason:(id)arg1;

@end

