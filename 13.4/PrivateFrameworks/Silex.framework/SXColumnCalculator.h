//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXColumnCalculator-Protocol.h>

@class NSString;

@interface SXColumnCalculator : NSObject <SXColumnCalculator>
{
}

- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 scaledConstrainedViewportSize:(struct CGSize)arg2 viewportSize:(struct CGSize)arg3 documentLayout:(id)arg4 contentScaleFactor:(double)arg5;
- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 documentLayout:(id)arg3;
- (id)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 contentScaleFactor:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

