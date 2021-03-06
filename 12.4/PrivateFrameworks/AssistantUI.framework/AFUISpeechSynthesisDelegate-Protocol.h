//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class NSString;

@protocol AFUISpeechSynthesisDelegate <NSObject>
- (void)speechSynthesisDidStopSpeakingWithIdentifier:(NSString *)arg1 queueIsEmpty:(_Bool)arg2;
- (void)speechSynthesisDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)speechSynthesisExecuteAnimationForIdentifier:(NSString *)arg1;
- (void)speechSynthesisGetPreparedTextForIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
@end

