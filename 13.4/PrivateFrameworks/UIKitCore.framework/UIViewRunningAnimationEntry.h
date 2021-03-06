//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewAnimationState;
@protocol OS_dispatch_queue, UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIViewRunningAnimationEntry : NSObject
{
    id <UIIntervalAnimating> _animation;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    CDUnknownBlockType _completionCallback;
    _Bool _invalidated;
    _Bool _running;
    UIViewAnimationState *_animationState;
    id <UIViewAnimationComposing> _composer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(nonatomic) __weak UIViewAnimationState *animationState; // @synthesize animationState=_animationState;
@property(nonatomic) _Bool running; // @synthesize running=_running;
- (void)performWithoutLock:(CDUnknownBlockType)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)setCompletionCallback:(CDUnknownBlockType)arg1;
- (void)performCompletionCallbackFinished:(_Bool)arg1;
@property(nonatomic) _Bool invalidated;
- (id)initWithAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2 composer:(id)arg3;

@end

