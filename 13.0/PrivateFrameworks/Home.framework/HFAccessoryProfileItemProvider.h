//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

#import <Home/HFAccessoryProfileFiltering-Protocol.h>

@class HFAccessoryProfileFilterOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>
{
    HFAccessoryProfileFilterOptions *_filterOptions;
    HMHome *_home;
    NSMutableSet *_profileItems;
}

@property(retain, nonatomic) NSMutableSet *profileItems; // @synthesize profileItems=_profileItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // @synthesize filterOptions=_filterOptions;
- (void).cxx_destruct;
- (id)_profileItemForProfile:(id)arg1;
- (id)_supportedProfileClasses;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

