//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>
#import <FuseUI/NSCopying-Protocol.h>
#import <FuseUI/NSSecureCoding-Protocol.h>

@class MPSparseArray, NSArray, NSString;

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying, NSSecureCoding>
{
    long long _entityType;
    MPSparseArray *_storeEntityValueProviders;
    _Bool _shouldReloadEntityValueProvidersForInvalidation;
    _Bool _shouldIncludeUnplayableContent;
    _Bool _shouldRespectSystemContentRestrictions;
    NSArray *_storeItemMetadataContexts;
    NSArray *_filteredPlayableItemMetadataContexts;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *filteredPlayableItemMetadataContexts; // @synthesize filteredPlayableItemMetadataContexts=_filteredPlayableItemMetadataContexts;
@property(readonly, copy, nonatomic) NSArray *storeItemMetadataContexts; // @synthesize storeItemMetadataContexts=_storeItemMetadataContexts;
@property(nonatomic) _Bool shouldRespectSystemContentRestrictions; // @synthesize shouldRespectSystemContentRestrictions=_shouldRespectSystemContentRestrictions;
@property(nonatomic) _Bool shouldIncludeUnplayableContent; // @synthesize shouldIncludeUnplayableContent=_shouldIncludeUnplayableContent;
@property(nonatomic) _Bool shouldReloadEntityValueProvidersForInvalidation; // @synthesize shouldReloadEntityValueProvidersForInvalidation=_shouldReloadEntityValueProvidersForInvalidation;
@property(readonly, nonatomic) long long entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (id)_storeEntityValueProviderAtIndex:(unsigned long long)arg1;
- (void)_setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2 allowingInvalidationNotification:(_Bool)arg3;
- (void)_reloadFilteredPlayableItemMetadataContextsAllowingInvalidationNotification:(_Bool)arg1;
- (void)_postInvalidationNotification;
- (id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1;
- (long long)_entityType;
- (unsigned long long)_entityCount;
- (void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)storeItemMetadataContextAtIndexPath:(id)arg1;
- (id)indexPathForStoreItemMetadataContext:(id)arg1;
- (void)setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasMultipleEntitiesIncludingStoreContent;
- (_Bool)hasExplicitContent;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

