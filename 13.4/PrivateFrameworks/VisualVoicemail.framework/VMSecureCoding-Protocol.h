//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSData, NSSet;

@protocol VMSecureCoding <NSSecureCoding>
+ (id)unarchivedObjectFromData:(NSData *)arg1 error:(id *)arg2;
+ (NSSet *)unarchivedObjectClasses;
- (NSData *)archivedDataWithError:(id *)arg1;
@end

