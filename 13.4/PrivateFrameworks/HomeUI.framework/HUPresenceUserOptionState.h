//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUPresenceUserOptionState : NSObject
{
    _Bool _selected;
    _Bool _locationAvailable;
    unsigned long long _activationGranularity;
}

@property(readonly, nonatomic, getter=isLocationAvailable) _Bool locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) unsigned long long activationGranularity; // @synthesize activationGranularity=_activationGranularity;
- (id)initWithActivationGranularity:(unsigned long long)arg1 selected:(_Bool)arg2 locationAvailable:(_Bool)arg3;
- (id)init;

@end

