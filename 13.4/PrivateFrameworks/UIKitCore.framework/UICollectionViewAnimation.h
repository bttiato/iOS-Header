//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface UICollectionViewAnimation : NSObject
{
    UICollectionReusableView *_view;
    UICollectionViewLayoutAttributes *_finalLayoutAttributes;
    double _startFraction;
    double _endFraction;
    long long _viewType;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    CDUnknownBlockType _animationBlock;
    struct {
        unsigned int animateFromCurrentPosition:1;
        unsigned int deleteAfterAnimation:1;
        unsigned int rasterizeAfterAnimation:1;
        unsigned int resetRasterizationAfterAnimation:1;
        unsigned int updateZIndexAfterAnimation:1;
    } _collectionViewAnimationFlags;
    _Bool _updateZIndexAfterAnimation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool updateZIndexAfterAnimation; // @synthesize updateZIndexAfterAnimation=_updateZIndexAfterAnimation;
@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property(readonly, nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) UICollectionReusableView *view; // @synthesize view=_view;
- (void)addStartupHandler:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithAnimator:(id)arg1;
- (void)start;
@property(nonatomic) _Bool resetRasterizationAfterAnimation;
@property(nonatomic) _Bool rasterizeAfterAnimation;
@property(readonly, nonatomic) _Bool deleteAfterAnimation;
@property(readonly, nonatomic) _Bool animateFromCurrentPosition;
- (id)description;
- (id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(_Bool)arg6 deleteAfterAnimation:(_Bool)arg7 customAnimations:(CDUnknownBlockType)arg8;

@end

