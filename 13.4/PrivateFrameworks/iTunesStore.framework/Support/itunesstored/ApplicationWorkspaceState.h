//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
{
}

+ (_Bool)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3;
+ (_Bool)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (_Bool)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2;
+ (_Bool)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2;
+ (_Bool)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2;
+ (_Bool)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2;
+ (_Bool)completeNotificationForInstallingBundleIdentifier:(id)arg1;
+ (_Bool)completeNotificationForFailedBundleIdentifier:(id)arg1;
+ (_Bool)completeNotificationForCanceledBundleIdentifier:(id)arg1;
+ (id)databaseTable;

@end

