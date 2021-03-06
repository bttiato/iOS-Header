//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, SGIPPerson;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isSent;
    _Bool _isGroupConversation;
    _Bool _isSenderSignificant;
    NSString *_messageId;
    SGIPPerson *_sender;
    NSArray *_recipients;
    NSString *_subject;
    NSDate *_dateSent;
    NSArray *_messageUnits;
}

+ (_Bool)supportsSecureCoding;
+ (id)messageWithIPMessage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *messageUnits; // @synthesize messageUnits=_messageUnits;
@property(nonatomic) _Bool isSenderSignificant; // @synthesize isSenderSignificant=_isSenderSignificant;
@property(nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(retain, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) SGIPPerson *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMessage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)toIPMessage;

@end

