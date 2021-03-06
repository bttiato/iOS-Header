//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>
{
    unsigned char _index;
    _Bool _isSelected;
    int _ear;
    int syncAttempts;
    NSString *_name;
    long long _category;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int syncAttempts; // @synthesize syncAttempts;
@property(nonatomic) int ear; // @synthesize ear=_ear;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isMixingStream;
- (_Bool)isStream;
- (_Bool)isStreamOrMixingStream;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)transportRepresentation;
- (id)initWithRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

