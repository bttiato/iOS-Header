//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFHardwareAddress.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>
{
}

- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;
- (id)initWithMACAddressString:(id)arg1;

@end

