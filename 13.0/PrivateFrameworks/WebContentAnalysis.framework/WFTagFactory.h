//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFTagFactory : NSObject
{
    NSMutableDictionary *sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)arg1;
- (void)dealloc;
- (id)tagWithClass:(Class)arg1 webpage:(id)arg2;
- (id)init;

@end

