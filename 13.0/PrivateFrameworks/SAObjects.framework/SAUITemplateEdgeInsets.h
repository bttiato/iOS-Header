//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>
{
}

+ (id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)edgeInsets;
@property(nonatomic) float top;
@property(nonatomic) float right;
@property(nonatomic) float left;
@property(nonatomic) float bottom;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

