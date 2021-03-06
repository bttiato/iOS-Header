//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AutocompleteMatchInfoObserver-Protocol.h"

@class AutocompleteQueryString, NSMapTable, NSString;
@protocol AutocompleteContextDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AutocompleteContext : NSObject <AutocompleteMatchInfoObserver>
{
    NSMapTable *_matchInfos;
    NSObject<OS_dispatch_queue> *_lock;
    _Bool _isCJK;
    NSString *_queryString;
    AutocompleteQueryString *_query;
    id <AutocompleteContextDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AutocompleteContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isCJK; // @synthesize isCJK=_isCJK;
@property(readonly, nonatomic) AutocompleteQueryString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)autocompleteMatchInfoDidUpdate:(id)arg1;
- (void)setMatchInfo:(id)arg1 forObject:(id)arg2;
- (id)matchInfoForObject:(id)arg1;
- (id)initWithQueryString:(id)arg1;
- (id)init;

@end

