//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/MXMDisplayProbePlatform-Protocol.h>

@class MXMDisplayDescriptor, NSString;
@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject <MXMDisplayProbePlatform>
{
    id <MXMDisplayProbePlatformDelegate> _delegate;
    MXMDisplayDescriptor *_displayDescriptor;
    CDStruct_db19de03 _lastSample;
    NSObject<OS_dispatch_queue> *_queue;
    double _pollRate;
}

+ (id)_allDescriptors;
+ (unsigned long long)_displayIndexWithDescriptor:(id)arg1;
@property(nonatomic) __weak id <MXMDisplayProbePlatformDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_db19de03)_pollDisplayForSample;
- (void)_pollMain;
- (void)_loop;
- (void)_stop;
- (void)_start;
- (id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

