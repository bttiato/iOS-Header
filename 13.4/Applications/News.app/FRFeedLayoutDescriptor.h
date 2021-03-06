//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FCFeedDescriptor, NFLFeedSettings;
@protocol FRFeedCollectionViewLayoutSectionDescriptorProviding;

@interface FRFeedLayoutDescriptor : NSObject <NSCopying>
{
    FCFeedDescriptor *_feedDescriptor;
    id <FRFeedCollectionViewLayoutSectionDescriptorProviding> _layoutSectionDescriptorProvider;
    NFLFeedSettings *_feedSettings;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(readonly, nonatomic) id <FRFeedCollectionViewLayoutSectionDescriptorProviding> layoutSectionDescriptorProvider; // @synthesize layoutSectionDescriptorProvider=_layoutSectionDescriptorProvider;
@property(readonly, copy, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedDescriptor:(id)arg1 layoutSectionDescriptorProvider:(id)arg2 feedSettings:(id)arg3;
- (id)init;

@end

