//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _BRCDownloadInfo : _BRCTransferInfo
{
    long long previousCompletedUnitCount;
    long long previousTotalUnitCount;
    NSMutableDictionary *_resumeUnitCounts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *resumeUnitCounts; // @synthesize resumeUnitCounts=_resumeUnitCounts;
@property(nonatomic) long long previousTotalUnitCount; // @synthesize previousTotalUnitCount;
@property(nonatomic) long long previousCompletedUnitCount; // @synthesize previousCompletedUnitCount;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;
- (id)init;

@end

