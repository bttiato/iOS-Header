//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NTKZeusColorPalette;

@protocol NTKZeusComplicationDisplay <NSObject>
@property(readonly, nonatomic) NTKZeusColorPalette *palette;
@property(nonatomic) unsigned long long style;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(NTKZeusColorPalette *)arg2 toPalette:(NTKZeusColorPalette *)arg3;
- (void)applyPalette:(NTKZeusColorPalette *)arg1;
@end

