//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKIterator-Protocol.h>

@class NSData;

@protocol HDRestorableIterator <HKIterator>
- (NSData *)iteratorStateData;
- (_Bool)restoreIteratorStateFromData:(NSData *)arg1 error:(id *)arg2;
@end

