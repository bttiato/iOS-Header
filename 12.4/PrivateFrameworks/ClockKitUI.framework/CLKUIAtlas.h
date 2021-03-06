//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIAtlas : NSObject
{
    _Atomic int _instanceCount;
    NSString *_uuid;
    unsigned long long _status;
    unsigned long long _width;
    unsigned long long _height;
}

@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)decrementInstanceCount;
- (void)incrementInstanceCount;
- (id)backing;
@property(readonly, nonatomic) long long instanceCount;
- (id)initWithUuid:(id)arg1;

@end

