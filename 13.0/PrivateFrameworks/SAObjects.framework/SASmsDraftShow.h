//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SASmsDraftShow : SADomainCommand
{
}

+ (id)draftShowWithDictionary:(id)arg1 context:(id)arg2;
+ (id)draftShow;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSURL *smsIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

