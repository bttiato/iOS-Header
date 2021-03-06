//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccount, ACAccountStore;

__attribute__((visibility("hidden")))
@interface CKDBackingiOSAccount : CKDBackingAccount
{
    ACAccountStore *_accountStore;
    ACAccount *_parentAppleAccount;
}

+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)primaryAccountInStore:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
@property(retain, nonatomic) ACAccount *parentAppleAccount; // @synthesize parentAppleAccount=_parentAppleAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)accountPropertiesForDataclass:(id)arg1;
- (_Bool)iCloudDriveAllowsCellularAccess;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canRenew;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)_accountCredentialForAccount:(id)arg1 withError:(id *)arg2;
- (_Bool)isDataclassEnabled:(id)arg1;
- (_Bool)canAuthWithCloudKit;
- (id)displayedHostname;
- (id)fullName;
- (id)identifier;
- (id)dsid;
- (id)username;
- (id)primaryEmail;
@property(readonly, nonatomic) ACAccount *ckAccount;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;

@end

