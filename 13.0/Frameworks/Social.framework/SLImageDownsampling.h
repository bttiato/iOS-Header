//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLImageDownsampling : NSObject
{
}

+ (void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
+ (void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
+ (id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2;
+ (CDStruct_912cb5d2)imageSizeWithData:(id)arg1;
+ (id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2;

@end

