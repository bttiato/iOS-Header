//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject
{
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)enqueuePluginViewForReuse:(id)arg1;
- (void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2;
- (_Bool)_objectSupportsPluginViewReuse:(id)arg1;
- (id)_pointerKeyForPluginView:(id)arg1;
- (id)dequeuePluginViewForBalloonController:(id)arg1;
- (void)resetState;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

