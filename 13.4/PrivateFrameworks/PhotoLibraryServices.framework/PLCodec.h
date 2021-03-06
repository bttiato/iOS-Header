//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCodecIdentity-Protocol.h>

@class NSString;

@interface PLCodec : PLManagedObject <PLCodecIdentity>
{
}

+ (id)commonCodec_HEVC_inContext:(id)arg1;
+ (id)commonCodec_H264_inContext:(id)arg1;
+ (id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(_Bool)arg2 context:(id)arg3;
+ (id)entityName;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable; // @dynamic playable;
- (_Bool)supportsCloudUpload;
- (unsigned int)_typeCodeFromString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *fourCharCodeName; // @dynamic fourCharCodeName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

