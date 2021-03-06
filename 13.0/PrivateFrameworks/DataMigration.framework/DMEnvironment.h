//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMEnvironment : NSObject
{
    _Bool _testMigrationInfrastructureOnly;
}

+ (id)sharedInstance;
+ (_Bool)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2;
@property(nonatomic) _Bool testMigrationInfrastructureOnly; // @synthesize testMigrationInfrastructureOnly=_testMigrationInfrastructureOnly;
- (void)blockUntilPreferencesFlush;
- (_Bool)isDeviceUsingEphemeralStorage;
- (void)setMigrationPluginResultsPref:(id)arg1;
- (id)migrationPluginResultsPref;
- (_Bool)implementMigrationPluginResults;
- (_Bool)suppressMigrationPluginWrapperExitMarkerPref;
- (_Bool)waitForExecutePluginsSignalMarkerPref;
- (id)continuousIntegrationMarkerPref;
- (void)setUserDataDispositionPref:(id)arg1;
- (id)userDataDispositionPref;
- (void)setLastMigrationResultsPref:(id)arg1;
- (id)lastMigrationResultsPref;
- (void)setLastBuildVersionPref:(id)arg1;
- (id)lastBuildVersionPref;
- (void)clearContext;
- (void)setContext:(id)arg1;
- (id)context;
- (id)contextPath;
- (id)buildVersion;

@end

