//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/CNAutocompleteSearchConsumer-Protocol.h>

@class CNAutocompleteSearchManager, NSMutableArray, NSNumber, NSString;
@protocol MFMailComposeContactsSearchControllerDelegate;

@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer>
{
    CNAutocompleteSearchManager *_manager;
    NSMutableArray *_autocompleteSearchResults;
    NSMutableArray *_corecipientSearchResults;
    NSNumber *_corecipientSearchTaskID;
    _Bool _foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
    id <MFMailComposeContactsSearchControllerDelegate> _delegate;
    NSNumber *_taskID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) __weak id <MFMailComposeContactsSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)_finishSearch;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForCorecipients;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)removeRecipient:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)_cancelSearchAndNotify:(_Bool)arg1;
- (void)cancelSearch;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3;
- (void)searchWithString:(id)arg1;
- (void)_reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

