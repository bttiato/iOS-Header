//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKFetchRequestToken-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKReminderStore;

__attribute__((visibility("hidden")))
@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>
{
    EKReminderStore *_reminderStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak EKReminderStore *reminderStore; // @synthesize reminderStore=_reminderStore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)initWithReminderStore:(id)arg1;

@end

