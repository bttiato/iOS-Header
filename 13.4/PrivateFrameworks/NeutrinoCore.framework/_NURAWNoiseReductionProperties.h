//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURAWNoiseReductionProperties-Protocol.h>

@class NSString;

@interface _NURAWNoiseReductionProperties : NSObject <NURAWNoiseReductionProperties>
{
    double _luminance;
    double _color;
    double _sharpness;
    double _contrast;
    double _detail;
}

@property double detail; // @synthesize detail=_detail;
@property double contrast; // @synthesize contrast=_contrast;
@property double sharpness; // @synthesize sharpness=_sharpness;
@property double color; // @synthesize color=_color;
@property double luminance; // @synthesize luminance=_luminance;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

