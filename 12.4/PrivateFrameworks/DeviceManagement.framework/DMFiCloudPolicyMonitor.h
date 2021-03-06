//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject
{
    long long _iCloudLogoutPolicy;
    NSUUID *_policyMonitorIdentifier;
}

+ (_Bool)automaticallyNotifiesObserversOfICloudLogoutPolicy;
@property(readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;
@property(nonatomic) long long iCloudLogoutPolicy; // @synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy;
- (void).cxx_destruct;
- (void)_updateiCloudLogoutFromPolicies:(id)arg1;
- (void)_updateiCloudLogout;
- (void)dealloc;
- (id)init;

@end

