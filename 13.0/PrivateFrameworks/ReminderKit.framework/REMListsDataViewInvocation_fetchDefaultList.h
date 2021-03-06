//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding>
{
    _Bool _keepDefaultOnly;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool keepDefaultOnly; // @synthesize keepDefaultOnly=_keepDefaultOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeepDefaultOnly:(_Bool)arg1;

@end

