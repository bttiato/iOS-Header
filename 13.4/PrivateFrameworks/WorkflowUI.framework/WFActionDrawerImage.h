//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface WFActionDrawerImage : NSObject
{
    unsigned long long _imageType;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
- (id)initWithImageType:(unsigned long long)arg1 image:(id)arg2;

@end

