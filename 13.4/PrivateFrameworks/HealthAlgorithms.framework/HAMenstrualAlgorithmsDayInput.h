//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HAMenstrualAlgorithmsDayInput : NSObject
{
    unsigned char _flow;
    _Bool _spotting;
    unsigned char _ovulationTestResult;
    unsigned int _julianDay;
    NSNumber *_flowUpdatedJulianDay;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char ovulationTestResult; // @synthesize ovulationTestResult=_ovulationTestResult;
@property(retain, nonatomic) NSNumber *flowUpdatedJulianDay; // @synthesize flowUpdatedJulianDay=_flowUpdatedJulianDay;
@property(nonatomic) _Bool spotting; // @synthesize spotting=_spotting;
@property(nonatomic) unsigned char flow; // @synthesize flow=_flow;
@property(nonatomic) unsigned int julianDay; // @synthesize julianDay=_julianDay;

@end

