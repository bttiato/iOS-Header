//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PKPaymentHeroImageModel : NSObject
{
    NSURL *_url;
    NSString *_imageSha;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *imageSha; // @synthesize imageSha=_imageSha;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithDictionary:(id)arg1;

@end

