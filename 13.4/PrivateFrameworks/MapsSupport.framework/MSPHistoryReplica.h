//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPReplica.h>

#import <MapsSupport/MSPCloudReplica-Protocol.h>
#import <MapsSupport/MSPContainerStateSnapshot-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaDataSerialization-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaSerialization-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>
{
}

+ (id)allowedEditClasses;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditModificationDate:(CDUnknownBlockType)arg4 caseIsDeleteTombstone:(CDUnknownBlockType)arg5;
+ (_Bool)supportsSecureCoding;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id *)arg2;
@property(readonly, copy, nonatomic) NSArray *contents;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;
@property(readonly, nonatomic) NSData *propertyListDataRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id propertyListRepresentation;
- (Class)replicaRecordClass;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

