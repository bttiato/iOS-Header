//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMService, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMService *_service;
}

+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;
+ (Class)itemClassForService:(id)arg1;
+ (id)_serviceTypeToServiceItemClassMap;
+ (id)supportedServiceTypes;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)_allRepresentedServices;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;
- (id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2;
- (id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2;
- (id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2;
- (id)servicesToReadForCharacteristicType:(id)arg1;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
- (id)services;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActionableCharacteristics;
- (id)_actionableCharacteristics;
- (id)controlItemValueSourceForServices:(id)arg1;
- (id)controlItemValueSourceForPrimaryService;
- (id)createControlItems;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)_descriptionBuilder;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

