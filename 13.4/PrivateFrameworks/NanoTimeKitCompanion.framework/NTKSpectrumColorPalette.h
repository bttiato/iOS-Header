//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKSpectrumColorPalette : NSObject
{
    float _overlayOpacity;
    UIColor *_bandColor;
    UIColor *_fromColor;
    UIColor *_toColor;
}

+ (id)swatchImageForColor:(unsigned long long)arg1 device:(id)arg2;
+ (id)paletteForColor:(unsigned long long)arg1 device:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) float overlayOpacity; // @synthesize overlayOpacity=_overlayOpacity;
@property(readonly, nonatomic) UIColor *toColor; // @synthesize toColor=_toColor;
@property(readonly, nonatomic) UIColor *fromColor; // @synthesize fromColor=_fromColor;
@property(readonly, nonatomic) UIColor *bandColor; // @synthesize bandColor=_bandColor;
- (id)initWithColor:(unsigned long long)arg1 device:(id)arg2;

@end

