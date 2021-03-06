//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSOwnedDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXPromisedTransferToPathSeed;

@interface IXSPromisedTransferToPath : IXSOwnedDataPromise <NSSecureCoding>
{
}

- (oneway void)_remote_setTryDeltaCopy:(_Bool)arg1;
- (oneway void)_remote_setShouldCopy:(_Bool)arg1;
- (oneway void)_remote_setTransferPath:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedTransferToPathSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedTransferToPathSeed *seed; // @dynamic seed;

@end

