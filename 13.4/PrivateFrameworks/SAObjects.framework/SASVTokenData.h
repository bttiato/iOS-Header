//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASVTokenData : AceObject <SAAceSerializable>
{
}

+ (id)tokenDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tokenData;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSNumber *startTimeMillis;
@property(nonatomic) float score;
@property(copy, nonatomic) NSNumber *endTimeMillis;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

