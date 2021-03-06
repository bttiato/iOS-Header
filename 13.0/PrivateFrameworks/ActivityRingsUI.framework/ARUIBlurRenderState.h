//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUIBlurRenderState : NSObject
{
    NSArray *_supportedRadii;
    NSMutableDictionary *_renderStates;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
}

- (void).cxx_destruct;
- (id)renderPipelineStateForBlurRadius:(long long)arg1 error:(long long *)arg2;
- (id)_renderPipelineStateForKey:(id)arg1;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1 forRadius:(long long)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

