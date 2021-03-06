//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@interface CADUpcomingEventsPredicate : CADPredicate <NSSecureCoding>
{
    int _limit;
}

+ (id)predicateWithLimit:(int)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int limit; // @synthesize limit=_limit;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLimit:(int)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end

