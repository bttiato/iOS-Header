//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet
{
}

+ (id)itemGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)itemGroup;
@property(copy, nonatomic) NSArray *templateItems;
@property(copy, nonatomic) NSArray *fallbackCommands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

