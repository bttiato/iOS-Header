//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARScreenViewArea : NSObject
{
    struct CGRect _visibleFrame;
    struct CGRect _safeFrame;
}

@property(readonly, nonatomic) struct CGRect safeFrame; // @synthesize safeFrame=_safeFrame;
@property(readonly, nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end

