//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppStoreUtility : NSObject
{
}

+ (void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2;
+ (id)_newRequestWithManifest:(id)arg1;
+ (id)_newManifestWithManifestType:(long long)arg1;
+ (void)_checkClaimsForAccountID:(id)arg1 claimStyle:(long long)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(_Bool)arg4 ignoresPreviousClaimAttempts:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3;
+ (void)sendAppStoreSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
+ (void)sendNewsSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(long long)arg4;
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3;
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(long long)arg3;
+ (void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2;
+ (void)sendClusterMappings:(id)arg1;
+ (void)restoreDemotedAppsWithBundleIDs:(id)arg1;
+ (void)repairAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)reloadUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)postBulletinWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3 actionButtonTitle:(id)arg4 actionButtonURL:(id)arg5 launchURL:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (void)installManagedAppWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)hidePendingUpdatesBadge;
+ (void)claimAppsWithPurchase:(id)arg1;
+ (void)checkFirstPartyClaimsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)checkDownloadQueue;
+ (void)checkClaimsEstablishingActiveAccounts:(_Bool)arg1 ignoringPreviousClaimAttempts:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

