//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    PHPerson *_person;
    NSString *_contactIdentifier;
}

+ (id)questionForPerson:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (unsigned short)state;
- (double)localFactoryScore;
- (id)entityIdentifier;
- (id)additionalInfo;
- (id)_personForContactSuggestion;
- (void)legacyRemove;
- (void)legacyPersist;
- (void)remove;
- (void)persistWithCreationDate:(id)arg1;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (unsigned short)type;
- (id)_additionalInfoFromContactIdentifier:(id)arg1;
- (id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;

@end

