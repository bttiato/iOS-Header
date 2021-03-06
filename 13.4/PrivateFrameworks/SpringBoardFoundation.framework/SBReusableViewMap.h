//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSMapTable, NSString;
@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding>
{
    NSMapTable *_recycledViewsByClass;
    _Bool _invalidated;
    id <SBReusableViewMapDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBReusableViewMapDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long viewRecyclingCount;
@property(readonly, nonatomic) unsigned long long recycledViewCount;
- (void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2;
- (void)invalidate;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)arg1;
- (_Bool)isViewRecycled:(id)arg1;
- (void)recycleView:(id)arg1;
- (id)dequeueReusableViewOfClass:(Class)arg1;
- (id)newViewOfClass:(Class)arg1;
- (id)viewOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

