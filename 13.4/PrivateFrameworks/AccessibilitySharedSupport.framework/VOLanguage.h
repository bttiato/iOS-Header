//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VOSubstitution;

@interface VOLanguage : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSString *languageID; // @dynamic languageID;
@property(retain, nonatomic) VOSubstitution *substitution; // @dynamic substitution;

@end

