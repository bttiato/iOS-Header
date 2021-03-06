//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderMonitor : NSObject
{
    id _providerMonitoringContext;
    NSMutableDictionary *_providerNames;
    NSOrderedSet *_monitoredIdentifiers;
    CDUnknownBlockType _monitorCallback;
}

- (void).cxx_destruct;
- (void)notifyIfNecessary;
- (void)monitorProviderNamesForIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

