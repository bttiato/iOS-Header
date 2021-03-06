//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding>
{
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setPersonalizedItems:(id)arg1;
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (id)priceDisplayForItemType:(id)arg1;
@property(readonly, nonatomic) NSArray *personalizedItems;
- (id)actionDisplayNameForItemType:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

