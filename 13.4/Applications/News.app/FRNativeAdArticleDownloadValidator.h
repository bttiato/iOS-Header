//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRValidatorRuleProviding-Protocol.h"

@class FCArticle, NSString;
@protocol FRFeldsparContext;

@interface FRNativeAdArticleDownloadValidator : NSObject <FRValidatorRuleProviding>
{
    id <FRFeldsparContext> _feldsparContext;
    FCArticle *_article;
}

+ (id)validatorWithFeldsparContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(retain) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void)_convertToNativeAdWithHeadline:(id)arg1 bannerView:(id)arg2 adMetadata:(id)arg3;
- (void)testObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)relatedObjectGeneratedDuringTestingOfObject:(id)arg1;
- (_Bool)supportsValidationOfObjectClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

