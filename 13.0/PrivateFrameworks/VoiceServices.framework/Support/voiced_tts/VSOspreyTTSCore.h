//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, VSAudioData, VSInstrumentMetrics, VSServerTTSClient, VSServerTTSConfig, VSSpeechInternalSettings, VSSpeechRequest, VSTimeoutCondition, VSVoiceAsset, VSVoiceResourceAsset;
@protocol VSOspreyTTSCoreDelegate;

@interface VSOspreyTTSCore : NSOperation
{
    VSSpeechRequest *_request;
    id <VSOspreyTTSCoreDelegate> _delegate;
    VSInstrumentMetrics *_instrumentMetrics;
    NSError *_error;
    VSAudioData *_audio;
    VSVoiceAsset *_voice;
    VSVoiceResourceAsset *_voiceResource;
    VSServerTTSClient *_serverTTSClient;
    VSServerTTSConfig *_serverConfig;
    VSSpeechInternalSettings *_internalSettings;
    double _bufferDurationLimit;
    VSTimeoutCondition *_timeoutCondition;
}

@property(retain, nonatomic) VSTimeoutCondition *timeoutCondition; // @synthesize timeoutCondition=_timeoutCondition;
@property(nonatomic) double bufferDurationLimit; // @synthesize bufferDurationLimit=_bufferDurationLimit;
@property(retain, nonatomic) VSSpeechInternalSettings *internalSettings; // @synthesize internalSettings=_internalSettings;
@property(retain, nonatomic) VSServerTTSConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(retain, nonatomic) VSServerTTSClient *serverTTSClient; // @synthesize serverTTSClient=_serverTTSClient;
@property(retain, nonatomic) VSVoiceResourceAsset *voiceResource; // @synthesize voiceResource=_voiceResource;
@property(retain, nonatomic) VSVoiceAsset *voice; // @synthesize voice=_voice;
@property(readonly, nonatomic) VSAudioData *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak VSInstrumentMetrics *instrumentMetrics; // @synthesize instrumentMetrics=_instrumentMetrics;
@property(nonatomic) __weak id <VSOspreyTTSCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)waitFor:(double)arg1;
- (void)cancel;
- (void)main;
- (void)performStreamingOspreyTTS;
- (void)performRoundTripOspreyTTS;
- (double)timeout;
- (id)initWithRequest:(id)arg1;

@end

