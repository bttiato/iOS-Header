//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString;
@protocol ICSAppendable;

@protocol ICSWriting
- (_Bool)shouldObscureValue;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
@end

