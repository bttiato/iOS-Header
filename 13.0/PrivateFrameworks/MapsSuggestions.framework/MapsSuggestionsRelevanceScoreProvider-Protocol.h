//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSArray;

@protocol MapsSuggestionsRelevanceScoreProvider <MapsSuggestionsObject>
- (void)preLoad;
- (_Bool)relevanceScoreForNames:(NSArray *)arg1 addresses:(NSArray *)arg2 mapItems:(NSArray *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
@end

