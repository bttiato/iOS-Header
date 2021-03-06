//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSPlayer-Protocol.h>

@class IKAppPlayerBridge, IKDOMDocument, IKJSMediaItem, IKJSPlaylist, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>
{
    IKJSPlaylist *_playlist;
    long long _playerState;
    _Bool _holdingSelfReference;
    NSMutableDictionary *_timedMetadataListeners;
    NSMutableDictionary *_timeListeners;
    NSMutableDictionary *_boundaryListeners;
    IKAppPlayerBridge *_bridge;
}

@property(readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (_Bool)_timedMetadataDidChangeWithExtraInfo:(id)arg1;
- (void)_removeManagedReference;
- (void)_addManagedReference;
- (void)removeEventListener:(id)arg1:(id)arg2;
- (void)addEventListener:(id)arg1:(id)arg2:(id)arg3;
@property(readonly, nonatomic) NSString *playbackState;
@property(nonatomic) double playbackRate;
- (void)changeToMediaAtIndex:(unsigned long long)arg1;
- (void)previous;
- (void)next;
- (void)stop;
- (void)pause;
- (void)play;
- (void)present;
- (long long)state;
@property(copy, nonatomic) NSDictionary *contextMenuData;
@property(nonatomic) _Bool muted;
@property(nonatomic) _Bool showsResumeMenu;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property(readonly, nonatomic) IKJSMediaItem *previousMediaItem;
@property(readonly, nonatomic) IKJSMediaItem *nextMediaItem;
@property(readonly, nonatomic) IKJSMediaItem *currentMediaItem;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
- (void)seekToTime:(double)arg1;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain, nonatomic) IKJSPlaylist *playlist;
@property(retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property(nonatomic) _Bool interactiveOverlayDismissable;
@property(retain, nonatomic) IKDOMDocument *overlayDocument;
- (_Bool)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 bridge:(id)arg2;
- (id)init;

@end

