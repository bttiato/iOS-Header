//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSString;

@interface DUDefinitionDictionary : NSObject
{
    struct __DCSDictionary *_dictionary;
    MAAsset *_assetToUpgrade;
    _Bool _activated;
    _Bool _isAppleDictionary;
    _Bool _isTTYDictionary;
    float _progress;
    MAAsset *_rawAsset;
    NSString *_definitionLanguage;
}

+ (id)displayNameForLanguageIdentifier:(id)arg1 forSorting:(_Bool)arg2;
- (void).cxx_destruct;
@property _Bool isTTYDictionary; // @synthesize isTTYDictionary=_isTTYDictionary;
@property _Bool isAppleDictionary; // @synthesize isAppleDictionary=_isAppleDictionary;
@property float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(readonly) NSString *definitionLanguage; // @synthesize definitionLanguage=_definitionLanguage;
@property(readonly) MAAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
- (id)description;
@property(readonly) struct __DCSDictionary *dictionaryRef;
@property(readonly) _Bool needsDownloadNewerVersion;
- (id)_definitionValueForTerm:(id)arg1;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
@property(readonly) NSString *localizedDictionaryName;
@property(readonly) NSString *localizedSortName;
@property(readonly) NSString *localizedLanguageName;
- (id)localizedLanguageName:(_Bool)arg1;
- (void)setAssetToUpgrade:(id)arg1;
- (void)dealloc;
- (_Bool)assetIsDeletable;
- (_Bool)assetIsLocal;
- (id)initWithAsset:(id)arg1;

@end

