//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TKTokenConfigurationConnection;

@interface TKTokenDriverConfiguration : NSObject
{
    TKTokenConfigurationConnection *_configurationConnection;
    NSString *_classID;
}

+ (id)driverConfigurations;
+ (id)driverConfigurationsWithClient:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (void)removeTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(_Bool)arg2;
- (id)addTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)beginTransaction;
@property(readonly, copy, nonatomic) NSDictionary *tokenConfigurations;
- (id)initWithClassID:(id)arg1 configurationConnection:(id)arg2;

@end

