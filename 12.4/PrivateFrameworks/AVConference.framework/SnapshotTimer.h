//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject
{
    _Bool taskIsComplete;
}

+ (void)takeSnapshotForTask:(id)arg1;
@property(nonatomic) _Bool taskIsComplete; // @synthesize taskIsComplete;
- (void)checkout;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (id)init;

@end

