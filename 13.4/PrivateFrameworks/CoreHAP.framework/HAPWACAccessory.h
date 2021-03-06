//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CUWiFiDevice, HMFUnfairLock, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface HAPWACAccessory : HMFObject
{
    _Bool _supportsLegacyWAC;
    _Bool _supportsWAC2;
    _Bool _supportsTokenAuth;
    _Bool _supportsCertAuth;
    _Bool _isHomeKitAccessory;
    _Bool _isAirPlayAccessory;
    _Bool _supportsAirPlay;
    _Bool _requiresOwnershipToken;
    _Bool _homeKitPaired;
    _Bool _pairSetupWAC;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSNumber *_wacCategory;
    NSNumber *_rssi;
    NSData *_bssid;
    NSString *_ssid;
    NSUUID *_identifier;
    NSString *_deviceId;
    NSData *_setupHash;
    NSDictionary *_rawScanResult;
    unsigned long long _supportedWiFiBands;
    unsigned long long _authFeatures;
    unsigned long long _version;
    double _discoveryTime;
    CUWiFiDevice *_cuWiFiDevice;
    HMFUnfairLock *_lock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) CUWiFiDevice *cuWiFiDevice; // @synthesize cuWiFiDevice=_cuWiFiDevice;
@property(nonatomic) double discoveryTime; // @synthesize discoveryTime=_discoveryTime;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long authFeatures; // @synthesize authFeatures=_authFeatures;
@property(readonly, nonatomic) _Bool pairSetupWAC; // @synthesize pairSetupWAC=_pairSetupWAC;
@property(readonly, nonatomic) _Bool homeKitPaired; // @synthesize homeKitPaired=_homeKitPaired;
@property(readonly, nonatomic) unsigned long long supportedWiFiBands; // @synthesize supportedWiFiBands=_supportedWiFiBands;
@property(readonly, nonatomic) _Bool requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property(readonly, nonatomic) _Bool supportsAirPlay; // @synthesize supportsAirPlay=_supportsAirPlay;
@property(readonly, nonatomic) NSDictionary *rawScanResult; // @synthesize rawScanResult=_rawScanResult;
@property(readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, nonatomic) NSData *bssid; // @synthesize bssid=_bssid;
@property(readonly, nonatomic) NSNumber *rssi; // @synthesize rssi=_rssi;
@property(readonly, nonatomic) NSNumber *wacCategory; // @synthesize wacCategory=_wacCategory;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isAirPlayAccessory; // @synthesize isAirPlayAccessory=_isAirPlayAccessory;
@property(readonly, nonatomic) _Bool isHomeKitAccessory; // @synthesize isHomeKitAccessory=_isHomeKitAccessory;
@property(readonly, nonatomic) _Bool supportsCertAuth; // @synthesize supportsCertAuth=_supportsCertAuth;
@property(readonly, nonatomic) _Bool supportsTokenAuth; // @synthesize supportsTokenAuth=_supportsTokenAuth;
@property(readonly, nonatomic) _Bool supportsWAC2; // @synthesize supportsWAC2=_supportsWAC2;
@property(readonly, nonatomic) _Bool supportsLegacyWAC; // @synthesize supportsLegacyWAC=_supportsLegacyWAC;
- (void)updateWithHAPWACAccessory:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 identifier:(id)arg2 category:(id)arg3 ssid:(id)arg4 deviceId:(id)arg5 flags:(unsigned int)arg6;
- (void)__setupSupportedFlags:(unsigned int)arg1;
- (id)initWithWiFiDevice:(id)arg1;

@end

