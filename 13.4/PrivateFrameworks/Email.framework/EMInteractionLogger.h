//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EMInteractionLogger : NSObject <EFLoggable>
{
    _Bool _appLaunched;
    EMRemoteConnection *_connection;
    NSObject<OS_dispatch_queue> *_stateTrackingQueue;
    NSMutableDictionary *_viewedMessages;
    NSMutableDictionary *_messageListMessages;
    struct _NSRange _messageListVisibleRows;
}

+ (id)remoteInterface;
+ (id)log;
- (void).cxx_destruct;
@property _Bool appLaunched; // @synthesize appLaunched=_appLaunched;
@property(nonatomic) struct _NSRange messageListVisibleRows; // @synthesize messageListVisibleRows=_messageListVisibleRows;
@property(retain, nonatomic) NSMutableDictionary *messageListMessages; // @synthesize messageListMessages=_messageListMessages;
@property(retain, nonatomic) NSMutableDictionary *viewedMessages; // @synthesize viewedMessages=_viewedMessages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateTrackingQueue; // @synthesize stateTrackingQueue=_stateTrackingQueue;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)_appDidEnterBackground;
- (void)_appWillEnterForeground;
- (void)applicationLaunched;
- (id)messageListTypeForMailboxes:(id)arg1;
- (void)messageListDisplayEndedForAllListItems;
- (void)messageListDisplayEndedForListItem:(id)arg1 cellStyle:(id)arg2;
- (void)messageListDisplayStartedForListItem:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_logMessageListDisplayStartedMessageID:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (void)viewingEndedForMessage:(id)arg1;
- (void)viewingStartedForMessage:(id)arg1 messageListScope:(id)arg2;
- (id)_rescopedMessageObjectID:(id)arg1;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)_viewingEndedForAllMessages;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (id)_stateForObjectID:(id)arg1 container:(id)arg2;
- (id)initWithRemoteConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

